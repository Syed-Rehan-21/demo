```java
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
```

```xml
<?xml version="1.0" encoding="utf-8"?>
<androidx.constraintlayout.widget.ConstraintLayout xmlns:android="http://schemas.android.com/apk/res/android"
    xmlns:app="http://schemas.android.com/apk/res-auto"
    xmlns:tools="http://schemas.android.com/tools"
    android:layout_width="match_parent"
    android:layout_height="match_parent"
    tools:context=".MainActivity">

    <Button
        android:id="@+id/selectImages"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        android:text="Select Images"
        app:layout_constraintBottom_toBottomOf="parent"
        app:layout_constraintEnd_toEndOf="parent"
        app:layout_constraintStart_toStartOf="parent"
        app:layout_constraintTop_toTopOf="parent"
        app:layout_constraintVertical_bias="0.361" />

    <ImageView
        android:id="@+id/imageView"
        android:layout_width="wrap_content"
        android:layout_height="wrap_content"
        app:layout_constraintStart_toStartOf="@+id/selectImages"
        app:layout_constraintTop_toBottomOf="@+id/selectImages"
        app:layout_constraintEnd_toEndOf="@+id/selectImages"
        android:layout_marginTop="50dp"
        tools:srcCompat="@tools:sample/avatars" />

</androidx.constraintlayout.widget.ConstraintLayout>
```