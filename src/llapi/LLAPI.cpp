#pragma comment(lib, "version")

#include <filesystem>
#include <string>

#include "llapi/LLAPI.h"
#include "llapi/utils/StringHelper.h"
#include "llapi/utils/WinHelper.h"

#include "liteloader/Config.h"
#include "liteloader/PluginManager.h"
#include "liteloader/Version.h"

using namespace std;

std::string ll::getDataPath(const std::string& pluginName) {
    string dataPath = "plugins\\LiteLoader\\" + pluginName;
    if (!filesystem::exists(str2wstr(dataPath))) {
        std::error_code ec;
        filesystem::create_directories(str2wstr(dataPath), ec);
    }
    return dataPath;
}

std::string ll::getLoaderVersionString() { return getLoaderVersion().toString(); }

ll::Version ll::getLoaderVersion() {
    return Version(
        LITELOADER_VERSION_MAJOR,
        LITELOADER_VERSION_MINOR,
        LITELOADER_VERSION_REVISION,
        (ll::Version::Status)LITELOADER_VERSION_STATUS
    );
}

bool ll::isDebugMode() { return ll::globalConfig.debugMode; }

ll::Plugin* ll::getPlugin(std::string name) { return PluginManager::getPlugin(name); }

ll::Plugin* ll::getPlugin(HMODULE handle) { return PluginManager::getPlugin(handle); }

bool ll::hasPlugin(std::string name) { return PluginManager::hasPlugin(name); }

std::unordered_map<std::string, ll::Plugin*> ll::getAllPlugins() { return PluginManager::getAllPlugins(); }

HMODULE ll::getLoaderHandle() { return GetCurrentModule(); }

// Version
ll::Version::Version(int major, int minor, int revision, Status status)
: major(major), minor(minor), revision(revision), status(status) {}

bool ll::Version::operator<(ll::Version b) {
    return major < b.major || (major == b.major && minor < b.minor) ||
           (major == b.major && minor == b.minor && revision < b.revision);
}

bool ll::Version::operator==(ll::Version b) { return major == b.major && minor == b.minor && revision == b.revision; }

std::string ll::Version::toString(bool needStatus) {
    string res = to_string(major) + "." + to_string(minor) + "." + to_string(revision);
    if (needStatus) {
        if (status == Status::Beta)
            res += " - Beta";
        else if (status == Status::Dev)
            res += " - Dev";
        else
            res += " - Release";
    }
    return res;
}


ll::Version ll::Version::parse(const std::string& str) {
    Version     ver;
    std::string a = str;
    std::string status;
    size_t      pos = 0;
    if ((pos = str.find_last_of('-')) != std::string::npos) {
        a      = str.substr(0, pos);
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

ll::ServerStatus ll::getServerStatus() { return (ll::ServerStatus)(ll::globalRuntimeConfig.serverStatus); }

bool ll::isServerStarting() { return getServerStatus() == ll::ServerStatus::Starting; }

bool ll::isServerStopping() { return getServerStatus() == ll::ServerStatus::Stopping; }

std::string ll::getLanguage() { return ll::globalConfig.language; }

// for abi compatibility
std::string LL::getDataPath(const std::string& pluginName) { return ll::getDataPath(pluginName); }

std::string LL::getLoaderVersionString() { return ll::getLoaderVersionString(); }

LL::Version LL::getLoaderVersion() {
    return Version(
        LITELOADER_VERSION_MAJOR,
        LITELOADER_VERSION_MINOR,
        LITELOADER_VERSION_REVISION,
        (LL::Version::Status)LITELOADER_VERSION_STATUS
    );
}

bool LL::isDebugMode() { return ll::isDebugMode(); }

LL::Plugin* LL::getPlugin(std::string name) { return reinterpret_cast<LL::Plugin*>(ll::getPlugin(name)); }

LL::Plugin* LL::getPlugin(HMODULE handle) { return reinterpret_cast<LL::Plugin*>(ll::getPlugin(handle)); }

bool LL::hasPlugin(std::string name) { return ll::hasPlugin(name); }

std::unordered_map<std::string, LL::Plugin*> LL::getAllPlugins() {
    auto                                         plugins = ll::getAllPlugins();
    std::unordered_map<std::string, LL::Plugin*> res;
    for (auto& [name, plugin] : plugins) {
        res[name] = reinterpret_cast<LL::Plugin*>(plugin);
    }
    return res;
}

HMODULE LL::getLoaderHandle() { return ll::getLoaderHandle(); }

// Version
LL::Version::Version(int major, int minor, int revision, Status status)
: major(major), minor(minor), revision(revision), status(status) {}

bool LL::Version::operator<(LL::Version b) {
    return major < b.major || (major == b.major && minor < b.minor) ||
           (major == b.major && minor == b.minor && revision < b.revision);
}

bool LL::Version::operator==(LL::Version b) { return major == b.major && minor == b.minor && revision == b.revision; }

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


LL::Version LL::Version::parse(const std::string& str) {
    Version     ver;
    std::string a = str;
    std::string status;
    size_t      pos = 0;
    if ((pos = str.find_last_of('-')) != std::string::npos) {
        a      = str.substr(0, pos);
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

LL::ServerStatus LL::getServerStatus() { return static_cast<LL::ServerStatus>(ll::getServerStatus()); }

bool LL::isServerStarting() { return ll::isServerStarting(); }

bool LL::isServerStopping() { return ll::isServerStopping(); }

std::string LL::getLanguage() { return ll::getLanguage(); }
