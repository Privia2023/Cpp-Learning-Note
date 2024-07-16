## myfirst.cpp
```cpp
// mtfirst.cpp -- 向控制台打印一些信息

#include <iostream> // 一条预处理命令       

int main() //函数头
//函数体开始
{                                
    using namespace std; // 使用命名空间std                      
        
    cout << "Come up and C++ me some time."<< endl;// 使用cout对象打印信息
    cout << "You won't regret it! " << endl;
    // endl对象的作用是新起一行，如果不加两句话就会粘在一起
    
    // 当然，这样也是可以的，与上述语句同义：
    // cout << "Come up and C++ me some time.";
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
