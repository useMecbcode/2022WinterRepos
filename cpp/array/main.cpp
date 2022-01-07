#include <iostream>

/**
 * Array 数组是 增删改查 offset [0...length] 表示地址的偏移
 */
template<typename DataType>
class Array {
    /**
     *
     */
    using size_t = std::size_t;
private:
    DataType data;
    size_t capacity; // capacity
    size_t length;  // current length
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
