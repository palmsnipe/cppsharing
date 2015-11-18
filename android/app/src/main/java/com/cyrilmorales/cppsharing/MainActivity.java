package com.cyrilmorales.cppsharing;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.widget.TextView;

import java.util.List;


public class MainActivity extends AppCompatActivity {

    private static final String TAG = "cppsharing";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        TextView hello = (TextView) findViewById(R.id.hello);

        // Test string
        String str = helloworld();
        hello.setText(str != null ? str : "/!\\ str is NULL !");

        // Test arraylist of string
        List<String> days = getDays();
        for (String day : days) {
            Log.v(TAG, String.format("Day: [%s]", day));
        }
    }

    public native String  helloworld();
    public native List<String> getDays();

    static {
        System.loadLibrary("shared");
    }
}
