package com.example.rehanq.as3;

import android.os.Bundle;
import androidx.appcompat.app.AppCompatActivity;
import android.widget.AnalogClock;
import android.widget.DigitalClock;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        AnalogClock analogClock = findViewById(R.id.analogClock);
        DigitalClock digitalClock = findViewById(R.id.digitalClock);
    }
}
