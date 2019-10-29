package com.openglesbook.hellotriangle;

import android.view.SurfaceView;

public class GLUtils {

    static {
        System.loadLibrary("native-lib");
    }
    public static native void SetSurface(SurfaceView view);
    public static native void SurfaceChanged();
    public static native void SurfaceCreated();
}
