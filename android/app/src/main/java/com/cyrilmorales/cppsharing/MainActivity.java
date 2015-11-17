package com.cyrilmorales.cppsharing;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.widget.TextView;


public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        String str = helloworld();
        Log.v("cppsharing", "str = " + str);

        TextView hello = (TextView) findViewById(R.id.hello);

        hello.setText(str != null ? str : "/!\\ str is NULL !");
    }

    public native String  helloworld();

    static {
        System.loadLibrary("shared");
    }
}
