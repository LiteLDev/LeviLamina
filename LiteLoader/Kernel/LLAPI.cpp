#include <LLAPI.h>
#include <filesystem>
#include <Version.h>
#include <HookAPI.h>
#include <Config.h>
#include <PluginManager.h>
#include <string>
using namespace std;

std::string GetDataPath(const std::string& myname)
{
    filesystem::create_directory("plugins\\LiteLoader");
    return "plugins\\LiteLoader\\" + myname;
}

std::string LL::getLoaderVersionString()
{
    return to_string(LITELOADER_VERSION_MAJOR) + "." + to_string(LITELOADER_VERSION_MINOR) + "." + to_string(LITELOADER_VERSION_REVISION);
}

LL::Version LL::getLoaderVersion()
{
    return LL::Version{ LITELOADER_VERSION_MAJOR, LITELOADER_VERSION_MINOR, LITELOADER_VERSION_REVISION, LL::Version::LITELOADER_VERSION_STATUS };
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