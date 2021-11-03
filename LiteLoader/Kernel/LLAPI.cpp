#include <LLAPI.h>
#include <filesystem>
#include <Version.h>
#include <HookAPI.h>
#include <Config.h>
#include <PluginManager.h>
using namespace std;

std::string GetDataPath(const std::string& myname) {
    filesystem::create_directory("plugins\\LiteLoader");
    return "plugins\\LiteLoader\\" + myname;
}

std::string LL::getLoaderVersion() {
    return LITELOADER_VERSION;
}

unsigned short LL::getLoaderVersionNum() {
    return LITELOADER_VERSION_NUMBER;
}

bool LL::isDebugMode() {
    return LoaderDebugMode;
}

LL::Plugin* LL::getPlugin(std::string name) {
    return ::GetPlugin(name);
}

bool LL::hasPlugin(std::string name) {
    return ::HasPlugin(name);
}

std::unordered_map<std::string, LL::Plugin> LL::getAllPlugins() {
    return ::GetAllPlugins();
}