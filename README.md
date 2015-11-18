CPP SHARING
===========

This is a test project to share c++ code between different targets, and how to implement the functions, with the wrappers if necessary (JNI for android).

  - in **C++** with the *term* command line project
  - in **Java** with the *android* project

The different functions use the [STL](http://www.cplusplus.com/reference/stl/) library.

#### TODO

  - Write a tutorial
  - Add iOS, WP
  - Add more functions
    - complex objects (get and send)
    - numbers

Functions
---------

### Get a string

Shared file :

```cpp
std::string		helloworld();
```

Android :

```java
String			helloworld();
```

### Get a list of string

Shared file :

```cpp
std::vector<std::string>	getDays();
```

Android :

```java
ArrayList<String>			getDays();
```

Tutorials
---------

### Android

Android studio 1.4 with gradle experimental 0.4.0

// TODO

Resources
---------

  - [http://tools.android.com/tech-docs/new-build-system/gradle-experimental](http://tools.android.com/tech-docs/new-build-system/gradle-experimental)
  - [https://github.com/googlesamples/android-ndk](https://github.com/googlesamples/android-ndk)