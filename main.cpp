#include <iostream>
#include <appimage/update.h>

int main() {
    std::cout << "Hello, World!" << std::endl;

    auto update = appimage::update::Updater("");
    return 0;
}
