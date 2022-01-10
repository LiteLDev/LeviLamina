#include <Main/Config.h>
#include <LLAPI.h>
#include <Main/PluginManager.h>
#include <Utils/StringHelper.h>
#include <Main/Version.h>
#include <filesystem>
#include <string>

using namespace std;

std::string LL::getDataPath(const std::string &pluginName) {
    filesystem::create_directory("plugins\\LiteLoader");
    return "plugins\\LiteLoader\\" + pluginName;
}

std::string LL::getLoaderVersionString() {
    return getLoaderVersion().toString();
}

LL::Version LL::getLoaderVersion() {
    return LITELOADER_VERSION;
}

bool LL::isDebugMode() {
    return LL::globalConfig.debugMode;
}

LL::Plugin *LL::getPlugin(std::string name) {
    return ::GetPlugin(name);
}

LL::Plugin *LL::getPlugin(HMODULE handler) {
    return ::GetPlugin(handler);
}

bool LL::hasPlugin(std::string name) {
    return ::HasPlugin(name);
}

std::unordered_map<std::string, LL::Plugin> LL::getAllPlugins() {
    return ::GetAllPlugins();
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
            res += "-Beta";
        else if (status == Status::Dev)
            res += "-Dev";
    }
    return res;
}

LL::Version LL::Version::parse(const std::string &str) {
    auto res = SplitStrWithPattern(str, ".");

    Version ver;
    if (res.size() >= 1)
        ver.major = stoi(res[0]);
    if (res.size() >= 2)
        ver.minor = stoi(res[1]);
    if (res.size() >= 3)
        ver.revision = stoi(res[2]);

    ver.status = Status::Release;
    return ver;
}