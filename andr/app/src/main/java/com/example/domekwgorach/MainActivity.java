package com.example.domekwgorach;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
    }
    int count=0;

    public void incrementation(View v) {
        TextView counter = findViewById(R.id.counter);
        count++;
        counter.setText(count + " polubień");
    }
   public void decrementation(View v){
       TextView counter = findViewById(R.id.counter);
        count--;

        if(count<0){
            count = 0;
        }

        counter.setText(count + " polubień");
    }

}