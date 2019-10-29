#include <jni.h>
#include <string.h>

JNIEXPORT jstring JNICALL
Java_com_openglesbook_hellotriangle_GLUtils_SetSurface(JNIEnv *env, jclass clazz, jobject jsurface) {

}

JNIEXPORT jstring JNICALL
Java_com_openglesbook_hellotriangle_GLUtils_SurfaceChanged(JNIEnv *env, jclass clazz) {

}

JNIEXPORT jstring JNICALL
Java_com_openglesbook_hellotriangle_GLUtils_SurfaceCreatedd(JNIEnv *env, jclass clazz) {

}

jint JNI_OnLoad(JavaVM *vm, void *reserved){
    return JNI_VERSION_1_4;
}