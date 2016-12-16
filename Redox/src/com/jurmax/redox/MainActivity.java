package com.jurmax.redox;

import org.libsdl.app.SDLActivity;
import android.annotation.SuppressLint;
import android.os.Build;
import android.view.View;

public class MainActivity extends SDLActivity {

	@SuppressLint({ "NewApi", "InlinedApi" })
	@Override
	public void onResume() {
	    if (Build.VERSION.SDK_INT < 19){ 
	        View v = this.getWindow().getDecorView();
	        v.setSystemUiVisibility(View.GONE);
	    } 
	    else {
	        //for lower api versions.    
	        View decorView = getWindow().getDecorView(); 
	        int uiOptions = View.SYSTEM_UI_FLAG_HIDE_NAVIGATION | View.SYSTEM_UI_FLAG_IMMERSIVE_STICKY;
	        decorView.setSystemUiVisibility(uiOptions);
	    }
		super.onResume();
	}
}
