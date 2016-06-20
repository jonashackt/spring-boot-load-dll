# spring-boot-load-dll
Example project for loading native Windows libraries (.dll-Files) via JNA and exporting as REST-Service

### Tools used

* [jnaerator](https://github.com/nativelibs4java/JNAerator) Maven plugin - generate Java-Classes from C++ Header file
see the configuration options [here](https://github.com/nativelibs4java/JNAerator/wiki/Command-Lin-eOptions-And-Environment-Variables) (or not on github, butter [better readability](https://code.google.com/archive/p/jnaerator/wikis/CommandLineOptionsAndEnvironmentVariables.wiki)

### Which Dll is used for the project?

The project is based on a simple C++ dll, which is developed with the help of [Walkthrough: Creating and Using a Dynamic Link Library (C++)](https://msdn.microsoft.com/en-us/library/ms235636(v=vs.120).aspx)
The complete example project is placed inside the resource-folder: __C:\dev\temp\spring-boot-load-dll\src\main\resources\dll_visualstudio_devproject\Win32Demo__

Feel free to change the code inside :)


The intention of the project is just to show how to call a Dll from Java/Spring Boot. This project is platform-dependent! You have to have a Windows 7/8/10 installed to run this.