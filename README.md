快乐的ndk开发之旅


eg1

1,实现了最简单的一个jni程序,同时完成了从c中获取各种类型数据,向c中传入各种类型数据并打印

2,建议使用ExternalTools工具将生成头文件的命令集成化

3,问题点留痕:初次新建jni项目无法运行,将外部build.gradle中改为3.2.0
classpath 'com.android.tools.build:gradle:3.2.0'

4,生成全部的so需要在gradle.properties中添加
android.deprecatedNdkCompileLease=1526577754228  
  
  
  
eg2

1,c中调用java类中的静态函数(不带参和带参),调用静态属性  
  