package com.sun.ndk1;

import android.app.Activity;
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
        tv.setText(getJNI());
        show(true, (byte) 20, (short) 30, 40, 50l, 60f, 70d, 'A');

        StringBuffer sb = new StringBuffer();
        sb.append(getBoolean() + "\n");
        sb.append(getByte() + "\n");
        sb.append(getShort() + "\n");
        sb.append(getInt() + "\n");
        sb.append(getLong() + "\n");
        sb.append(getFloat() + "\n");
        sb.append(getDouble() + "\n");
        sb.append(getChar() + "\n");
        Log.e("ME", sb.toString());
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();


    public native String getJNI();

    public native void show(boolean a1, byte a2, short a3, int a4, long a5, float a6, double a7, char a8);


    public native boolean getBoolean();

    public native byte getByte();

    public native short getShort();

    public native int getInt();

    public native long getLong();

    public native float getFloat();

    public native double getDouble();

    public native char getChar();
}
