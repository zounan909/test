#include <iostream>
#include <iomanip>

int main() {
    // 各项的数据
    int processSpecification = 105;
    int managementCoordination = 11;
    int others = 1;
    int deviceQuality = 39;
    int designDefect = 101;

    // 计算总和
    int total = processSpecification + managementCoordination + others + deviceQuality + designDefect;

    // 设置输出精度为小数点后两位
    std::cout << std::fixed << std::setprecision(2);

    // 计算并输出各项百分比
    std::cout << "工艺规范的百分比: " << (double)processSpecification / total * 100 << "%" << std::endl;
    std::cout << "管理协调的百分比: " << (double)managementCoordination / total * 100 << "%" << std::endl;
    std::cout << "其它的百分比: " << (double)others / total * 100 << "%" << std::endl;
    std::cout << "器件质量的百分比: " << (double)deviceQuality / total * 100 << "%" << std::endl;
    std::cout << "设计缺陷的百分比: " << (double)designDefect / total * 100 << "%" << std::endl;

    return 0;
}