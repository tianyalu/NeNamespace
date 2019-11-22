## NeNamespace 命名空间、指针与引用
### 一、命名空间：避免同名函数的冲突
```c++
#include <iostream>
using namespace std; //命名空间：避免同名函数冲突

//第一个命名空间
namespace first_space {
    void func() {
        cout << "Inside first name space" << endl;
    }
}

//第二个命名空间
namespace secode_space {
    void func() {
        cout << "Inside second name space" << endl;
    }
}

int main(int argc, const char * argv[]) {
    //调用第一个命名空间的函数
    first_space::func();
    //调用第二个命名空间的函数
    secode_space::func();
    
    return 0;
}

```
### 指针与引用的区别
![image](https://github.com/tianyalu/NeNamespace/blob/master/show/reference.png)  
```c++
#include <iostream>
using namespace std; 

int main(int argc, const char * argv[]) {
    int i = 17;
    double d = 19.0;
    int* p = &i; //指针
    int& r = i; //引用
    double& s = d; //引用
    
    cout << "Value of i reference: " << r << endl; //17
    cout << "Value of i pointer:" << *p << endl; //17
    
    return 0;
}
```
