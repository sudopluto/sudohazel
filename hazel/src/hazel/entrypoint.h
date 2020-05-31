#pragma once

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv) {
    Hazel::Application* app = Hazel::CreateApplication();
    app->run();
    delete app;
    return 0;
}
