#include <charconv>
#include <magic_enum.hpp>

#pragma comment(lib, "version")

#include <filesystem>
#include <string>
#include <utility>

#include "ll/api/LLAPI.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/api/utils/WinHelper.h"

#include "ll/core/Config.h"
#include "ll/core/PluginManager.h"
#include "ll/core/Version.h"


namespace ll {

namespace {
inline ushort stoi(std::string_view str) {
    ushort ret = UINT16_MAX;
    std::from_chars(str.data(), str.data() + str.size(), ret);
    return ret;
}
} // namespace

bool registerPlugin(
    std::string const& name,
    std::string const& desc,
    ll::Version const& version,
    std::string const& git     ,
    std::string const& license ,
    std::string const& website ,
    HMODULE            handle  
) {
    std::map<std::string, std::string> others;
    if (!git.empty()) others.emplace("Git", git);
    if (!license.empty()) others.emplace("License", license);
    if (!website.empty()) others.emplace("Website", website);
    return PluginManager::registerPlugin(handle, name, desc, version, others);
}

bool registerPlugin(
    std::string const&                        name,
    std::string const&                        desc,
    ll::Version const&                        version,
    std::map<std::string, std::string> const& others,
    HMODULE                                   handle
) {
    return PluginManager::registerPlugin(handle, name, desc, version, others);
}

std::string getDataPath(std::string const& pluginName) {
    std::string dataPath = "plugins\\LeviLamina\\" + pluginName;
    if (!std::filesystem::exists(StringUtils::str2wstr(dataPath))) {
        std::error_code ec;
        std::filesystem::create_directories(StringUtils::str2wstr(dataPath), ec);
    }
    return dataPath;
}

std::string getLoaderVersionString() { return getLoaderVersion().toString(); }

bool isDebugMode() { return globalConfig.debugMode; }

Plugin* getPlugin(std::string const& name) { return PluginManager::getPlugin(name); }

Plugin* getPlugin(HMODULE handle) { return PluginManager::getPlugin(handle); }

bool hasPlugin(std::string const& name) { return PluginManager::hasPlugin(name); }

std::unordered_map<std::string, Plugin*> getAllPlugins() { return PluginManager::getAllPlugins(); }

HMODULE getLoaderHandle() { return GetCurrentModule(); }

// region ### Version ###

inline std::array<std::string, 2> LABEL_NAMES = {"alpha", "beta"};

Version::Version(ushort major, ushort minor, ushort patch, Label label)
: mMajor(major),
  mMinor(minor),
  mPatch(patch),
  mLabel(label) {}

bool Version::operator<(Version const& other) const {
    return mMajor < other.mMajor || (mMajor == other.mMajor && mMinor < other.mMinor)
        || (mMajor == other.mMajor && mMinor == other.mMinor && mPatch < other.mPatch)
        || (mMajor == other.mMajor && mMinor == other.mMinor && mPatch == other.mPatch
            && mLabel < other.mLabel);
}

bool Version::operator==(Version const& other) const {
    return mMajor == other.mMajor && mMinor == other.mMinor && mPatch == other.mPatch
        && mLabel == other.mLabel;
}

std::string Version::toString() const { return fmt::format("{}.{}.{}", mMajor, mMinor, mPatch); }

std::string Version::toFullString() const {
    if (mLabel == Label::None) return toString();
    return fmt::format("{}-{}", toString(), LABEL_NAMES[(ushort)mLabel]);
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

    for (ushort i = 0; i < (ushort)LABEL_NAMES.size(); ++i) {
        if (suffix == LABEL_NAMES[i]) {
            result.mLabel = static_cast<Label>((ushort)i);
            break;
        }
    }

    auto res = StringUtils::splitByPattern(&basic, ".");

    if (!res.empty()) result.mMajor = stoi(res[0]);
    if (res.size() >= 2) result.mMinor = stoi(res[1]);
    if (res.size() >= 3) result.mPatch = stoi(res[2]);

    return result;
}
// endregion

Version getLoaderVersion() {
    return {LL_VERSION_MAJOR, LL_VERSION_MINOR, LL_VERSION_PATCH, (Version::Label)LL_VERSION_LABEL};
}

} // namespace ll
