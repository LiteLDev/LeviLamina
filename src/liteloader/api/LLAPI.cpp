#include <charconv>
#pragma comment(lib, "version")

#include <filesystem>
#include <string>
#include <utility>

#include "liteloader/api/LLAPI.h"
#include "liteloader/api/utils/StringUtils.h"
#include "liteloader/api/utils/WinHelper.h"

#include "liteloader/core/Config.h"
#include "liteloader/core/PluginManager.h"
#include "liteloader/core/Version.h"


using ll::StringUtils::str2wstr;

namespace {
inline int stoi(std::string_view str) {
    int ret = -1;
    std::from_chars(str.data(), str.data() + str.size(), ret);
    return ret;
}
} // namespace

std::string ll::getDataPath(std::string const& pluginName) {
    std::string dataPath = "plugins\\LiteLoader\\" + pluginName;
    if (!std::filesystem::exists(str2wstr(dataPath))) {
        std::error_code ec;
        std::filesystem::create_directories(str2wstr(dataPath), ec);
    }
    return dataPath;
}

std::string ll::getLoaderVersionString() { return getLoaderVersion().toString(); }

bool ll::isDebugMode() { return ll::globalConfig.debugMode; }

ll::Plugin* ll::getPlugin(std::string name) { return PluginManager::getPlugin(std::move(name)); }

ll::Plugin* ll::getPlugin(HMODULE handle) { return PluginManager::getPlugin(handle); }

bool ll::hasPlugin(std::string name) { return PluginManager::hasPlugin(std::move(name)); }

std::unordered_map<std::string, ll::Plugin*> ll::getAllPlugins() { return PluginManager::getAllPlugins(); }

HMODULE ll::getLoaderHandle() { return GetCurrentModule(); }

namespace ll {

// region ### Version ###
Version::Version(int major, int minor, int patch, PreRelease preRelease)
: mMajor(major),
  mMinor(minor),
  mPatch(patch),
  mPreRelease(preRelease) {}

bool Version::operator<(Version const& other) const {
    return mMajor < other.mMajor || (mMajor == other.mMajor && mMinor < other.mMinor)
        || (mMajor == other.mMajor && mMinor == other.mMinor && mPatch < other.mPatch)
        || (mMajor == other.mMajor && mMinor == other.mMinor && mPatch == other.mPatch
            && mPreRelease < other.mPreRelease);
}

bool Version::operator==(Version const& other) const {
    return mMajor == other.mMajor && mMinor == other.mMinor && mPatch == other.mPatch
        && mPreRelease == other.mPreRelease;
}

std::string Version::toString() const { return fmt::format("{}.{}.{}", mMajor, mMinor, mPatch); }

std::string Version::toFullString() const {
    if (mPreRelease == PreRelease::None) return toString();
    return fmt::format("{}-{}", toString(), PRE_RELEASE_STRINGS[(uchar)mPreRelease]);
}

Version Version::parse(std::string const& str) {
    Version     result;
    std::string basic = str;
    std::string suffix;
    size_t      pos = 0;
    if ((pos = str.find_last_of('-')) != std::string::npos) {
        basic  = str.substr(0, pos);
        suffix = str.substr(pos + 1);
        std::transform(suffix.begin(), suffix.end(), suffix.begin(), ::tolower);
    }

    for (int i = 0; i < PRE_RELEASE_STRINGS.size(); ++i) {
        if (suffix == PRE_RELEASE_STRINGS[i]) {
            result.mPreRelease = static_cast<PreRelease>((uchar)i);
            break;
        }
    }

    auto res = ll::StringUtils::splitByPattern(&basic, ".");

    if (!res.empty()) result.mMajor = stoi(res[0]);
    if (res.size() >= 2) result.mMinor = stoi(res[1]);
    if (res.size() >= 3) result.mPatch = stoi(res[2]);

    return result;
}
// endregion

Version getLoaderVersion() {
    return {
        LITELOADER_VERSION_MAJOR,
        LITELOADER_VERSION_MINOR,
        LITELOADER_VERSION_PATCH,
        (Version::PreRelease)LITELOADER_VERSION_PRE_RELEASE};
}

} // namespace ll

ll::ServerStatus ll::getServerStatus() { return (ll::ServerStatus)(ll::globalRuntimeConfig.serverStatus); }

bool ll::isServerStarting() { return getServerStatus() == ll::ServerStatus::Starting; }

bool ll::isServerStopping() { return getServerStatus() == ll::ServerStatus::Stopping; }

std::string ll::getLanguage() { return ll::globalConfig.language; }
