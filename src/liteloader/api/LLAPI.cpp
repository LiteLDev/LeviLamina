#pragma comment(lib, "version")

#include <filesystem>
#include <string>

#include "liteloader/api/LLAPI.h"
#include "liteloader/api/utils/StringHelper.h"
#include "liteloader/api/utils/WinHelper.h"

#include "liteloader/core/Config.h"
#include "liteloader/core/PluginManager.h"
#include "liteloader/core/Version.h"

using namespace std;

std::string ll::getDataPath(const std::string& pluginName) {
    std::string dataPath = "plugins\\LiteLoader\\" + pluginName;
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
    std::string res = to_string(major) + "." + to_string(minor) + "." + to_string(revision);
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
