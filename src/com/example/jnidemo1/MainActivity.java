package com.example.jnidemo1;

import android.support.v7.app.ActionBarActivity;
import android.accounts.OnAccountsUpdateListener;
import android.os.Bundle;
import android.view.Menu;
import android.view.MenuItem;
import android.view.View;
import android.view.View.OnClickListener;
import android.widget.Button;
import android.widget.Toast;

public class MainActivity extends ActionBarActivity {

	private Button button;
	static{
		System.loadLibrary("hello");
	}


	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_main);
		button = (Button) findViewById(R.id.button);
		
		button.setOnClickListener(new OnClickListener() {
			
			@Override
			public void onClick(View v) {
				// TODO Auto-generated method stub
				String str = fromC();
				Toast.makeText(MainActivity.this, str, 1).show();
			}
		});
	}
	/**
	 * µÚÒ»²½
	 * @return
	 */
	public native String fromC();
     
	
}
