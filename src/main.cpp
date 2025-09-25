/**************************************************
* 一分钟Git实战入门 | GitOneMinute
* 出品：周旋机器视觉 https://space.bilibili.com/387188622
* 课程主页：https://www.roundvision.cc/category/git/
* github仓库路径：https://github.com/zhouxuan2023/GitOneMinute
* 
* 时间戳在线网站：https://www.timetoolhub.com/zh
* 通过 "名字 hello git! 此时的时间戳" 的格式，在本项目留下你的名字吧！
* 
***************************************************/

#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <thread>
#include <ctime>

int main() {
    // 初始化字符串列表
    std::vector<std::string> messages = {
                "zhouxuan hello git! 2025年09月09日 22:06:46",
                "周旋机器视觉 hello git! 2025年09月25日 08:31:47",
                "周旋机器视觉 hello git! 2025年09月25日 08:47:36",//需求1
                "张三 hello git! 2025年09月25日 08:48:41",//需求2
                "李四 hello git! 2025年09月25日 08:49:28",//需求3
    }; 

    // 获取最后100行
    std::vector<std::string> last100;
    if (messages.size() > 100) {
        last100.assign(messages.end() - 100, messages.end());
    }
    else {
        last100 = messages;
    }

    // 逐行打印，每行之间有延迟
    for (const auto& line : last100) {
        std::cout << line << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // 100毫秒延迟
    }

    // 等待用户按键退出
    std::cout << "\n按任意键退出..." << std::endl;
    std::cin.get();

    return 0;
}