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

// region ### Version ###

inline std::array<std::string, 2> LABEL_NAMES = {"alpha", "beta"};

Version::Version(ushort major, ushort minor, ushort patch, Label label, ushort labelId)
: mMajor(major),
  mMinor(minor),
  mPatch(patch),
  mLabel(label),
  mLabelId(labelId) {}

bool Version::operator<(Version const& other) const {
    return mMajor < other.mMajor || (mMajor == other.mMajor && mMinor < other.mMinor)
        || (mMajor == other.mMajor && mMinor == other.mMinor && mPatch < other.mPatch)
        || (mMajor == other.mMajor && mMinor == other.mMinor && mPatch == other.mPatch && mLabel < other.mLabel)
        || (mMajor == other.mMajor && mMinor == other.mMinor && mPatch == other.mPatch && mLabel == other.mLabel
            && mLabelId < other.mLabelId);
}

bool Version::operator==(Version const& other) const {
    return mMajor == other.mMajor && mMinor == other.mMinor && mPatch == other.mPatch && mLabel == other.mLabel
        && mLabelId == other.mLabelId;
}

std::string Version::toString() const { return fmt::format("{}.{}.{}", mMajor, mMinor, mPatch); }

std::string Version::toFullString() const {
    if (mLabel == Label::None) return toString();
    if (mLabelId != 0) return fmt::format("{}-{}.{}", toString(), LABEL_NAMES[(ushort)mLabel], mLabelId);
    return fmt::format("{}-{}", toString(), LABEL_NAMES[(ushort)mLabel]);
}

Version Version::toCoreVersion() const { return {mMajor, mMinor, mPatch}; }

Version Version::parse(std::string const& str) {
    Version     result;
    std::string core = str;
    std::string label;
    size_t      pos = 0;
    if (core.starts_with("v")) {
        core = core.substr(1);
    }

    if ((pos = core.find_last_of('-')) != std::string::npos) {
        core   = core.substr(0, pos);
        label  = core.substr(pos + 1);
        std::transform(label.begin(), label.end(), label.begin(), ::tolower);
    }

    if ((pos = label.find_first_of('.')) != std::string::npos) { // 1.0.0-alpha.1
        label = label.substr(0, pos);
        auto suffix = label.substr(pos + 1);
        if ((pos = label.find_first_of('+')) != std::string::npos) { // 1.0.0-alpha.1+build.1
            suffix = label.substr(0, pos);
        }
        try {
            result.mLabelId = (ushort)std::stoi(suffix);
        } catch (...) {
            result.mLabelId = 0;
        }
    } else if ((pos = label.find_first_of('+')) != std::string::npos) { // 1.0.0-alpha+build.1
        label = label.substr(0, pos);
    }

    for (ushort i = 0; i < (ushort)LABEL_NAMES.size(); ++i) {
        if (label == LABEL_NAMES[i]) {
            result.mLabel = static_cast<Label>((ushort)i);
            break;
        }
    }

    auto res = StringUtils::splitByPattern(&core, ".");

    if (!res.empty()) result.mMajor = stoi(res[0]);
    if (res.size() >= 2) result.mMinor = stoi(res[1]);
    if (res.size() >= 3) result.mPatch = stoi(res[2]);

    return result;
}
// endregion

// region ### Plugin ###
std::string Plugin::getDefaultDataPath() {
    std::string dataPath = "plugins\\LeviLamina\\" + mName;
    if (!std::filesystem::exists(StringUtils::str2wstr(dataPath))) {
        std::error_code ec;
        std::filesystem::create_directories(StringUtils::str2wstr(dataPath), ec);
    }
    return dataPath;
}
// endregion

bool registerPlugin(
    std::string const&                        name,
    std::string const&                        description,
    ll::Version const&                        version,
    std::map<std::string, std::string> const& extraInfo,
    HMODULE                                   handle
) {
    return PluginManager::registerPlugin(handle, name, description, version, extraInfo);
}

bool isDebugMode() { return globalConfig.debugMode; }

std::optional<Plugin> findPlugin(HMODULE handle) { return PluginManager::findPlugin(handle); }

std::optional<Plugin> findPlugin(std::string const& name) { return PluginManager::findPlugin(name); }

std::unordered_map<std::string, Plugin> getAllPlugins() { return PluginManager::getAllPlugins(); }

HMODULE getLoaderHandle() { return GetCurrentModule(); }

Version getLoaderVersion() {
    return {LL_VERSION_MAJOR, LL_VERSION_MINOR, LL_VERSION_PATCH, (Version::Label)LL_VERSION_LABEL, LL_VERSION_LABEL_ID};
}

} // namespace ll
