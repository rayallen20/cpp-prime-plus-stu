# class1 

对应原书第1章

```c++
#include <iostream>

int main() {
    using namespace std;

    int carrots;

    cout << "how many carrots do you have?" << endl;
    cin >> carrots;
    cout << "here are two more." << endl;
    carrots = carrots + 2;
    cout << "now you have " << carrots << " carrots." << endl;

    return 0;
}
```

- `<<`: 插入符
- `>>`: 也是插入符,C++中的插入符表示流向
- `cout`: 标准输出流对象(注意它是个对象)
- `endl`: 换行符
- `cin`: 标准输入流对象
- `iostream`: 输入输出流头文件
  - `std`: `iostream`这个头文件中的命名空间
- `#include`:
  - `#`: 预处理,主编译开始之前包含到当前文件中
  - `include`: 包含头文件
- `using`: 是个声明
- `return 0`: 程序结束时显示的代码

也可以改写为:

```c++
#include <iostream>

int main() {
    // using namespace std;
    using std::cout;
    using std::endl;
    using std::cin;

    int carrots;

    cout << "how many carrots do you have?" << endl;
    cin >> carrots;
    cout << "here are two more." << endl;
    carrots = carrots + 2;
    cout << "now you have " << carrots << " carrots." << endl;

    return 0;
}
```

也可以改写为:

```c++
#include <iostream>

int main() {
    // using namespace std;
    // using std::cout;
    // using std::endl;
    // using std::cin;

    int carrots;

    std::cout << "how many carrots do you have?" << std::endl;
    std::cin >> carrots;
    std::cout << "here are two more." << std::endl;
    carrots = carrots + 2;
    std::cout << "now you have " << carrots << " carrots." << std::endl;

    return 0;
}
```
