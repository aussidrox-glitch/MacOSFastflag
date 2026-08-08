#include <iostream>
#include <string>
#include <filesystem>


using namespace std;
int main() {
    string fastflag01;

    string opengl;
    opengl = "OpenGL";

    string Vulkan;
    Vulkan = "Vulkan";

    cout << "Welcome to the Fast Flag Exchange!" << endl;
    cout << "Please choose, OpenGl, Or Vulkan by typing out the names" << endl;

    cin >> fastflag01;

    if (fastflag01 == "OpenGL" || fastflag01 == "opengl") {
        cout << "You chose OpenGL!";

        //clientappsettings creation
        filesystem::create_directory("/Applications/Roblox.app/Contents/MacOS/ClientSettings");
        FILE *pf  = fopen("/Applications/Roblox.app/Contents/MacOS/ClientSettings/ClientAppSettings.json", "w");

        fprintf(pf,
    "{\n"
    "    \"DFIntMinimalNetworkPrediction\": \"0.1\",\n"
    "    \"DFIntNetworkLatencyTolerance\": \"1\",\n"
    "    \"DFIntNetworkPrediction\": \"120\",\n"
    "    \"DFIntPlayerNetworkUpdateQueueSize\": \"20\",\n"
    "    \"DFIntPlayerNetworkUpdateRate\": \"180\",\n"
    "    \"DFIntS2PhysicsSenderRate\": \"1\",\n"
    "    \"DFIntServerPhysicsUpdateRate\": \"5\",\n"
    "    \"DFIntTaskSchedulerTargetFps\": \"29383\",\n"
    "\n"
    "    \"FFlagDebugDisableTelemetryEphemeralCounter\": true,\n"
    "    \"FFlagDebugDisableTelemetryEphemeralStat\": true,\n"
    "    \"FFlagDebugDisableTelemetryEventIngest\": true,\n"
    "    \"FFlagDebugDisableTelemetryPoint\": true,\n"
    "    \"FFlagDebugDisableTelemetryV2Counter\": true,\n"
    "    \"FFlagDebugDisableTelemetryV2Event\": true,\n"
    "    \"FFlagDebugDisableTelemetryV2Stat\": true,\n"
    "\n"
    "    \"FFlagExample\": true,\n"
    "    \"FFlagFastGPULightCulling3\": \"True\",\n"
    "    \"FFlagGameBasicSettingsFramerateCap5\": \"False\",\n"
    "    \"FFlagNewLightAttenuation\": \"True\",\n"
    "    \"FFlagTaskSchedulerLimitTargetFpsTo2402\": \"False\",\n"
    "    \"FIntRenderShadowIntensity\": \"0\",\n"
    "    \"FFlagDebugSkyGray\": true,\n"
    "\n"
    "    \"FFlagDebugGraphicsPreferOpenGL\": true\n"
    "}");

        fclose(pf);
        fclose(pf);


    } else {
        if (fastflag01 == "Vulkan" || fastflag01 == "vulkan") {
            cout << "You chose Vulkan!";
            //clientappsettings creation
            FILE *pf  = fopen("/Applications/Roblox.app/Contents/MacOS/ClientAppSettings.json", "w");

            fprintf(pf, "hey there wip vulkan");

            fclose(pf);


        } else {
            cout << "Program failed to write FFlags.\n"
      << "This may be due to incorrect spelling or capitalization.\n"
      << "Please restart the software and try again." << endl;
        }


    }








    return 0;
}
