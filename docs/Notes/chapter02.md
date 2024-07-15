# 第二章 开始学习 C++

本章内容相对比较简单，需要掌握的内容为：

- 创建C++程序。
- C++程序的一般格式。
- `#include` 编译指令。
- `main()`函数。
- 使用`cout`对象进行输出。 
- 在C++程序中加入注释。
- 何时以及如何使用 `endl`。
- 声明和使用变量。
- 使用 `cin`对象进行输入。
- 定义和使用简单函数。

## 2.1 进入C++
首先介绍一个显示信息的简单C++程序，它使用`cout`工具进行输出。源代码中有一些帮助理解的注释，编译器编译程序时将自动去除它们。
>换句话说，注释是给人看的。

```Cpp
// 向控制台打印一些信息

#include <iostream> // 一条预处理命令       

int main() //函数头
//函数体开始
{                                
    using namespace std; // 使用命名空间std                      
        
    cout << "Comme up and C++ me some time."<< endl;// 使用cout对象打印信息
    cout << "You won't regret it! " << endl;
    // endl对象的作用是新起一行，如果不加两句话就会粘在一起
    
    // 当然，这样也是可以的，与上述语句同义：
    // cout << "Comme up and C++ me some time.";
    // cout << endl;
    // cout << "You won't regret it! ";
    // cout << endl;

    // 如果输出窗口在被看到之前就关掉了，可以添加下面的代码：
    cout << "Press any key to continue." << endl;
    cin.get();
    
    return 0; // 终止main()函数
}
// 函数体结束
```

运行编译后的程序得到的输出：
```
Comme up and C++ me some time.
You won't regret it! 
```
