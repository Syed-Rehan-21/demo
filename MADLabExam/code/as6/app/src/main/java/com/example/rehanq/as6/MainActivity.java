package com.example.rehanq.as6;
import androidx.activity.result.contract.ActivityResultContracts;
import androidx.appcompat.app.AppCompatActivity;
import android.os.Bundle;
import androidx.activity.result.ActivityResultLauncher;
import android.widget.Button;
import android.widget.ImageView;
public class MainActivity extends AppCompatActivity {
    Button selectImages;
    ActivityResultLauncher<String> chooseImage;
    ImageView imageView;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        selectImages = findViewById(R.id.selectImages);
        imageView = findViewById(R.id.imageView);
        chooseImage = registerForActivityResult(new ActivityResultContracts.GetContent(), result -> imageView.setImageURI(result));
        selectImages.setOnClickListener(v -> {
            chooseImage.launch("image/*");
        });
    }

}