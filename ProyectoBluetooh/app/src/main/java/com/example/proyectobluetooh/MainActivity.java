package com.example.proyectobluetooh;

import androidx.appcompat.app.AppCompatActivity;

import android.annotation.SuppressLint;
import android.bluetooth.BluetoothAdapter;
import android.bluetooth.BluetoothDevice;
import android.bluetooth.BluetoothSocket;
import android.content.Intent;
import android.content.pm.ActivityInfo;
import android.os.Bundle;
import android.os.Handler;
import android.renderscript.ScriptGroup;
import android.view.View;
import android.view.Window;
import android.view.WindowManager;
import android.widget.Button;
import android.widget.ImageButton;
import android.widget.Toast;

import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.util.UUID;

public class MainActivity extends AppCompatActivity {

    private ImageButton Do, Re, Mi, Fa, Sol, La, Si, DO, DoM, ReM, FaM, SolM, LaM, DOM;

    Handler bluetoothIn;
    final int handlerState = 0;
    private BluetoothAdapter btAdapter = null;
    private BluetoothSocket btSocket = null;
    private StringBuilder DataStringIN = new StringBuilder();
    private ConnectedThread MyConexionBT;
    //Identificador único de servicio- SPP UUID
    private static final UUID BITMODULEUUID = UUID.fromString("00001101-0000-1000-8000-00805F9B34FB");
    //String para la dirección MAC
    private static String address = null;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setRequestedOrientation(ActivityInfo.SCREEN_ORIENTATION_LANDSCAPE);

        setContentView(R.layout.activity_main);

        bluetoothIn = new Handler(){
            @SuppressLint("HandlerLeak")
            public void handleMessage(android.os.Message msg){
                if (msg.what == handlerState){

                }
            }
        };

        Do = findViewById(R.id.Do);
        Re = findViewById(R.id.Re);
        Mi = findViewById(R.id.Mi);
        Fa = findViewById(R.id.Fa);
        Sol = findViewById(R.id.Sol);
        La = findViewById(R.id.La);
        Si = findViewById(R.id.Si);
        DO = findViewById(R.id.DO);

        btAdapter =BluetoothAdapter.getDefaultAdapter();
        VerificarEstadoBT();

        DoM = findViewById(R.id.DoM);
        ReM = findViewById(R.id.ReM);
        FaM = findViewById(R.id.FaM);
        SolM =findViewById(R.id.SolM);
        LaM = findViewById(R.id.LaM);
        DOM = findViewById(R.id.DOM);

        Do.setOnClickListener(v -> {
            MyConexionBT.write("1");
        });

        Re.setOnClickListener(v -> {
            MyConexionBT.write("2");
        });

        Mi.setOnClickListener(v -> {
            MyConexionBT.write("3");
        });

        Fa.setOnClickListener(v -> {
            MyConexionBT.write("4");
        });

        Sol.setOnClickListener(v -> {
            MyConexionBT.write("5");
        });

        La.setOnClickListener(v -> {
            MyConexionBT.write("6");
        });

        Si.setOnClickListener(v -> {
            MyConexionBT.write("7");
        });

        Do.setOnClickListener(v -> {
            MyConexionBT.write("8");
        });

        DoM.setOnClickListener(v -> {
            MyConexionBT.write("r");
        });

        ReM.setOnClickListener(v -> {
            MyConexionBT.write("s");
        });

        FaM.setOnClickListener(v -> {
            MyConexionBT.write("t");
        });

        SolM.setOnClickListener(v -> {
            MyConexionBT.write("u");
        });

        LaM.setOnClickListener(v -> {
            MyConexionBT.write("v");
        });

        DOM.setOnClickListener(v -> {
            MyConexionBT.write("1");
        });

    }
    @Override
    public void onWindowFocusChanged(boolean hasFocus) {
        super.onWindowFocusChanged(hasFocus);
        if (hasFocus) {
            hideSystemUI();
        }
    }

    private void hideSystemUI() {
        View decorView = getWindow().getDecorView();
        decorView.setSystemUiVisibility(
                View.SYSTEM_UI_FLAG_IMMERSIVE_STICKY
                        | View.SYSTEM_UI_FLAG_LAYOUT_STABLE
                        | View.SYSTEM_UI_FLAG_LAYOUT_HIDE_NAVIGATION
                        | View.SYSTEM_UI_FLAG_LAYOUT_FULLSCREEN
                        | View.SYSTEM_UI_FLAG_HIDE_NAVIGATION
                        | View.SYSTEM_UI_FLAG_FULLSCREEN);
    }

    private BluetoothSocket createBluetoothSocket(BluetoothDevice device)throws IOException{
        //Crea una conexión de salida segura para el dispositivo usando el servicio UUID
        return device.createRfcommSocketToServiceRecord(BITMODULEUUID);
    }

    @Override
    protected void onResume() {
        super.onResume();

        Intent intent = getIntent();
        address = intent.getStringExtra(DispositivosVinculados.EXTRA_DEVICE_ADDRESS);
        //Setea la dirección MAC
        BluetoothDevice device = btAdapter.getRemoteDevice(address);

        try {
            btSocket = createBluetoothSocket(device);
        }catch (IOException e){
            Toast.makeText(getBaseContext(), "La creación del Socket falló.", Toast.LENGTH_SHORT).show();
        }
        //Establece la conexión con el socket bluetooth.
        try {
            btSocket.connect();
        }catch (IOException e){
            try {
              btSocket.close();
            }catch (IOException e2){

            }
        }
        MyConexionBT = new ConnectedThread(btSocket);
    }

    @Override
    protected void onPause() {
        super.onPause();

        try {
            //Cuando se sale de la aplicación esta parte permite que no se deje abierto el socket
            btSocket.close();
        }catch (IOException e){

        }
    }
    //Comprueba que el dispositivo Bluetooth
    //Está disponible y solicita que se active si está desactivado
    private void VerificarEstadoBT(){
        if (btAdapter == null){
            Toast.makeText(getBaseContext(), "El dispositivo no soporta Bluetooth.", Toast.LENGTH_LONG).show();
        }else {
            if (btAdapter.isEnabled()){

            }else {
                Intent intent = new Intent(BluetoothAdapter.ACTION_REQUEST_ENABLE);
                startActivityForResult(intent, 1);
            }
        }
    }
    //Crea la clase que permite el evento conexión
    private class ConnectedThread extends Thread{
        private final InputStream inputStream;
        private final OutputStream outputStream;

        public ConnectedThread(BluetoothSocket socket){
            InputStream tmpIn = null;
            OutputStream tmpOut = null;

            try {
                tmpIn = socket.getInputStream();
                tmpOut = socket.getOutputStream();
            }catch (IOException e){}
            inputStream = tmpIn;
            outputStream = tmpOut;
        }
        public  void run()
        {
            byte[] byte_in = new byte[1];
            //Se mantiene en modo escucha para determinar el ingreso de datos
            while (true){
                try {
                    inputStream.read(byte_in);
                    char ch = (char)byte_in[0];
                    bluetoothIn.obtainMessage(handlerState,ch).sendToTarget();
                }catch (IOException e){
                    break;
                }
            }
        }
        public void write(String input)
        {
            try {
                outputStream.write(input.getBytes());
            }catch (IOException e)
            {
                //Si no es posible enviar datos se cierra la conexión
                Toast.makeText(getBaseContext(), "La Conexión Falló.", Toast.LENGTH_LONG).show();
                finish();
            }
        }
    }
}