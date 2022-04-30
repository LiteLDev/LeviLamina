#pragma comment(lib, "version")
#include <Main/Config.h>
#include <LLAPI.h>
#include <Main/PluginManager.h>
#include <Utils/WinHelper.h>
#include <Utils/StringHelper.h>
#include <Main/Version.h>
#include <filesystem>
#include <string>

using namespace std;

std::string LL::getDataPath(const std::string &pluginName)
{
    string dataPath = "plugins\\LiteLoader\\" + pluginName;
    if (!filesystem::exists(str2wstr(dataPath)))
    {
        std::error_code ec;
        filesystem::create_directories(str2wstr(dataPath), ec);
    }
    return dataPath;
}

std::string LL::getLoaderVersionString() {
    return getLoaderVersion().toString();
}

LL::Version LL::getLoaderVersion()
{
    return Version(LITELOADER_VERSION_MAJOR, LITELOADER_VERSION_MINOR, LITELOADER_VERSION_REVISION, (LL::Version::Status)LITELOADER_VERSION_STATUS);
}

bool LL::isDebugMode() {
    return LL::globalConfig.debugMode;
}

LL::Plugin *LL::getPlugin(std::string name) {
    return PluginManager::getPlugin(name);
}

LL::Plugin *LL::getPlugin(HMODULE handler) {
    return PluginManager::getPlugin(handler);
}

bool LL::hasPlugin(std::string name) {
    return PluginManager::hasPlugin(name);
}

std::unordered_map<std::string, LL::Plugin*> LL::getAllPlugins() {
    return PluginManager::getAllPlugins();
}

//Version
LL::Version::Version(int major, int minor, int revision, Status status)
        : major(major), minor(minor), revision(revision), status(status) {}

bool LL::Version::operator<(LL::Version b) {
    return major < b.major || (major == b.major && minor < b.minor) ||
           (major == b.major && minor == b.minor && revision < b.revision);
}

bool LL::Version::operator==(LL::Version b) {
    return major == b.major && minor == b.minor && revision == b.revision;
}

std::string LL::Version::toString(bool needStatus) {
    string res = to_string(major) + "." + to_string(minor) + "." + to_string(revision);
    if (needStatus) {
        if (status == Status::Beta)
            res += " - Beta";
        else if (status == Status::Dev)
            res += " - Dev";
    }
    return res;
}


LL::Version LL::Version::parse(const std::string &str) {
    Version ver;
    std::string a = str;
    std::string status;
    size_t pos = 0;
    if ((pos = str.find_last_of('-')) != std::string::npos) {
        a = str.substr(0, pos);
        status = str.substr(pos + 1);
        std::transform(status.begin(), status.end(), status.begin(), ::tolower);
    }
    if (status == "beta")
        ver.status = Status::Beta;
    else if (status == "dev" || status == "alpha")
        ver.status = Status::Dev;
    else
        ver.status = Status::Release;
    
    auto res = SplitStrWithPattern(a, ".");

    if (res.size() >= 1)
        ver.major = stoi(res[0]);
    if (res.size() >= 2)
        ver.minor = stoi(res[1]);
    if (res.size() >= 3)
        ver.revision = stoi(res[2]);
    
    return ver;
}

LL::ServerStatus LL::getServerStatus()
{
    return (LL::ServerStatus)(LL::globalConfig.serverStatus);
}

bool LL::isServerStarting()
{
    return getServerStatus() == LL::ServerStatus::Starting;
}

bool LL::isServerStopping()
{
    return getServerStatus() == LL::ServerStatus::Stopping;
}