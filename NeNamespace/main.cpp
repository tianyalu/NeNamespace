//
//  main.cpp
//  NeNamespace
//
//  Created by 天涯路 on 2019/11/22.
//  Copyright © 2019年 天涯路. All rights reserved.
//

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
    
    int i = 17;
    double d = 19.0;
    int* p = &i; //指针
    int& r = i; //引用
    double& s = d; //引用
    
    cout << "Value of i reference: " << r << endl; //17
    cout << "Value of i pointer:" << *p << endl; //17
    
    return 0;
}
