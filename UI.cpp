#include "hello_imgui/hello_imgui.h"

int main(int , char *[])
{
    auto guiFunction = []() 
    {
        ImGui::Text("Inicio");                    
        ImGui::Text("Cargar");                    
        ImGui::Text("Salir");          
        HelloImGui::ImageFromAsset("world.jpg");   
        if (ImGui::Button("Bye!"))                 
            HelloImGui::GetRunnerParams()->appShallExit = true;
    };
    HelloImGui::Run(guiFunction, "Hello, globe", true);
    return 0;
}
