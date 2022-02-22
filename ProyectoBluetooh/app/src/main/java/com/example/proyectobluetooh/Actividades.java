package com.example.proyectobluetooh;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.ImageView;
import android.widget.Toast;

public class Actividades extends AppCompatActivity {

    ImageView p, onff;
    //String que se enviará a actividad principal, mainactivity
    public static String EXTRA_DEVICE_ADDRESS = "device_address";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_actividades);

        p = findViewById(R.id.pianoaimg);
        onff = findViewById(R.id.onoffimg);

        Bundle extras = getIntent().getExtras();
        String address = extras.getString(EXTRA_DEVICE_ADDRESS);

//        Toast.makeText(getBaseContext(), "Dirección" + address, Toast.LENGTH_SHORT).show();

        p.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(Actividades.this, MainActivity.class);
                intent.putExtra(EXTRA_DEVICE_ADDRESS, address);
                startActivity(intent);
            }
        });

        onff.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(Actividades.this, ApagadoEncendido.class);
                intent.putExtra(EXTRA_DEVICE_ADDRESS, address);
                startActivity(intent);
            }
        });

    }
}