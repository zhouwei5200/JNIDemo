#include <stdio.h> //引入标准输入输出的头文件
#include "jni.h" //如果头文件在编译环境里 直接指定<> 如果文件在当前目录下""

//实现java里面未实现的方法

/**
 *JNIEnv* env java虚拟机的环境，指针
 *jobject 调用这个c代码的java对象，如果在MainActivity里面调用的方法。obj代表就是MainActivity对象
 */
jstring Java_com_example_jnidemo1_MainActivity_fromC(JNIEnv* env,jobject obj){
	//第三步  c代码；
	char* str = "hello from c !!";
	//在jni规范里面 在jni环境的结构体里面
	//jstring     (*NewStringUTF)(JNIEnv*, const char*);
	//转化成了java的字符串
	return (*(*env)).NewStringUTF(env,str);
}


