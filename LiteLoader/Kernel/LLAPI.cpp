#include <LLAPI.h>
#include <filesystem>
#include <Version.h>
#include <HookAPI.h>
#include <Config.h>
#include <PluginManager.h>
#include <Utils/StringHelper.h>
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
    return LL::globalConfig.debugMode;
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

//Version
LL::Version::Version(int major, int minor, int revision, Status status)
    :major(major), minor(minor), revision(revision), status(status)
{ }

bool LL::Version::operator<(LL::Version b)
{
    return major < b.major
        || (major == b.major && minor < b.minor)
        || (major == b.major && minor == b.minor && revision < b.revision);
}

bool LL::Version::operator==(LL::Version b)
{
    return major == b.major && minor == b.minor && revision == b.revision;
}

bool LL::Version::operator<=(LL::Version b)
{
    return *this < b || *this == b;
}

bool LL::Version::operator>(LL::Version b)
{
    return b < *this;
}

bool LL::Version::operator>=(LL::Version b)
{
    return *this > b || *this == b;
}

std::string LL::Version::toString(bool needStatus)
{
    string res = to_string(major) + "." + to_string(minor) + "." + to_string(revision);
    if (needStatus)
    {
        res += " ";
        if (status == Status::Beta)
            res += "Beta";
        else if (status == Status::Dev)
            res += "Dev";
    }
    return res;
}

LL::Version LL::Version::parse(const std::string& str)
{
    auto res = SplitStrWithPattern(str, ".");

    Version ver;
    if (res.size() <= 1)
        ver.major = stoi(res[0]);
    if (res.size() <= 2)
        ver.minor = stoi(res[1]);
    if (res.size() <= 3)
        ver.revision = stoi(res[2]);

    ver.status = Status::Release;
    return ver;
}