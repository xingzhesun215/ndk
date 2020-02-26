package com.sun.ndk1;

import android.app.Activity;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.util.Log;
import android.widget.TextView;

public class MainActivity extends Activity {

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
    }

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // Example of a call to a native method
        TextView tv = (TextView) findViewById(R.id.sample_text);
        Log.e("Me", "age=" + age);
        tv.setText(stringFromJNI());
        getNDK();
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();

    public native String getNDK();

    public static int age;

    public static void setAge() {
        age = 20;
        Log.e("Me", "无参设置年龄 age=" + age);
    }

    public static void setAge(int age1) {
        age = age1;
        Log.e("Me", "有参设置年龄age=" + age);
    }
}
