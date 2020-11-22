#pragma once

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) {

    Hazel::Log::Init();
    HZ_CORE_WARN("init log");
    HZ_CLIENT_WARN("init log");


    Hazel::Application* app = Hazel::CreateApplication();
    app->run();
    delete app;
    return 0;
}
