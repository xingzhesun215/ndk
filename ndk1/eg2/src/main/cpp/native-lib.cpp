#include <jni.h>
#include <string>

#include<android/log.h>

#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,"native-lib" ,__VA_ARGS__)

extern "C"


JNIEXPORT jstring JNICALL
Java_com_sun_ndk1_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject thiz) {

//声明一个jni int
jint si;
//声明一个jni 属性id
jfieldID fid;

//获得要操作的类
jclass cls=env->GetObjectClass(thiz);
//得到类的静态函数id,函数名为setAge,没有参数,没有返回
jmethodID mid=env->GetStaticMethodID(cls,"setAge","()V");

//判断此静态函数是否存在
if(mid == NULL){
	return env->NewStringUTF("mid == null");
}

LOGE("StringFromJNIIn c");

//调用静态无返回系统函数
env->CallStaticVoidMethod(cls,mid);

//获得类中的静态属性,名字为age,类型为int
fid=env->GetStaticFieldID(cls,"age","I");

if(fid==NULL){
	return env->NewStringUTF("fid == null");
}

//获得类中静态属性的属性值
si=env->GetStaticIntField(cls,fid);

LOGE("si=%d",si);

    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_sun_ndk1_MainActivity_getNDK(
        JNIEnv *env,
        jobject thiz) {

        //声明一个jni int
        jint si;
        //声明一个jni 属性id
        jfieldID fid;

        //获得要操作的类
        jclass cls=env->GetObjectClass(thiz);
        //得到类的静态函数id,函数名为setAge,有一个int参数,没有返回
        jmethodID mid=env->GetStaticMethodID(cls,"setAge","(I)V");

        //判断此静态函数是否存在
        if(mid == NULL){
        	return env->NewStringUTF("mid == null");
        }

        LOGE("StringFromJNIIn c");

        //调用静态无返回系统函数,带入参数为填入值
        env->CallStaticVoidMethod(cls,mid,2222);

        //获得类中的静态属性,名字为age,类型为int
        fid=env->GetStaticFieldID(cls,"age","I");

        if(fid==NULL){
        	return env->NewStringUTF("fid == null");
        }

        //获得类中静态属性的属性值
        si=env->GetStaticIntField(cls,fid);

        LOGE("si=%d",si);

    std::string hello = "Hello from C++ ndkadsdf";
    return env->NewStringUTF(hello.c_str());
}