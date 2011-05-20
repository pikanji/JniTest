
package net.pikanji.jnitest;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;

public class JniTest extends Activity {
    static {
        // Load library.
        System.loadLibrary("JniTestNative");
    }

    // Define native method.
    public native String getStringFromNative();

    @Override
    public void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.main);

        // Invoke native function
        String text = getStringFromNative();

        // 取得文字列をTextViewに設定
        TextView textView = (TextView) findViewById(R.id.text);
        textView.setText(text);
    }

    // Method called from native
    public int getIntFromJni() {
        return 123;
    }
}
