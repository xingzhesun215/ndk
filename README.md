快乐的ndk开发之旅


eg1
实现了最简单的一个jni程序,同时完成了从c中获取各种类型数据,向c中传入各种类型数据并打印
建议使用ExternalTools工具将生成头文件的命令集成化
问题点留痕:初次新建jni项目无法运行,将外部build.gradle中改为3.2.0
  classpath 'com.android.tools.build:gradle:3.2.0'