## include guard

保证.h文件只被include一次

## c++ 17 in cmakelist :

```
add_executable(appname src/vis_app.cpp ) 
target_compile_features(appname PUBLIC cxx_std_17)
```