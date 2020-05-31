#include <iostream>

#include "Application.h"

namespace Hazel {

    Application::Application() {}
    Application::~Application() {}
    
    void Application::run() {
        std::cout << "Application running ...\n";
        while (true);
    }
}
