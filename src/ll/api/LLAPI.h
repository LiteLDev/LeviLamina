#pragma once

#include "ll/api/base/Global.h"
#include "ll/api/utils/WinHelper.h"

namespace ll {

/**
 * @brief Version struct
 * @see  https://semver.org/
 */
struct Version {
    enum class Label : ushort { None = 0xFFFF, Alpha = 0, Beta = 1 };

    ushort mMajor   = 0;
    ushort mMinor   = 0;
    ushort mPatch   = 0;
    Label  mLabel   = Label::None;
    ushort mLabelId = 0;

    explicit Version() = default;
    LLAPI Version(ushort major, ushort minor, ushort patch, Label label = Label::None, ushort labelId = 0);

    LLNDAPI bool operator<(Version const& other) const;
    LLNDAPI bool operator==(Version const& other) const;

    /**
     * @brief Convert the version core to a string
     * @return std::string The version core string like `1.0.0`
     */
    LLNDAPI std::string toString() const;
    /**
     * @brief Convert the version to string with pre-release information(if not `None`)
     * @return std::string The version string like `1.0.0-alpha`
     */
    LLNDAPI std::string toFullString() const;
    /**
     * @brief Convert the version to another version without pre-release information
     * @return Version The version without pre-release information
     */
    LLNDAPI Version toCoreVersion() const;

    /**
     * @brief Parse a string to a version
     * @param str The string to parse
     * @return Version The version instance
     */
    LLNDAPI static Version parse(std::string const& str);
};

struct Plugin {
    std::string                               mName{};
    std::string                               mDescription{};
    Version                                   mVersion{};
    std::map<std::string, std::string>        mExtraInfo{};
    std::unordered_map<std::string, std::any> mSharedData{};

    HMODULE mHandle = nullptr;

    LLNDAPI std::string getDefaultDataPath();

    void addSharedData(std::string const& key, std::any const& value) { mSharedData[key] = value; }

    template <typename T>
    std::optional<T> getSharedData(std::string const& key) {
        if (mSharedData.contains(key)) {
            if (mSharedData[key].type() == typeid(T)) { return std::any_cast<T>(mSharedData[key]); }
        }
        return std::nullopt;
    }

    template <typename T>
    T getSharedData(std::string const& key, T const& defaultValue) {
        if (mSharedData.contains(key)) {
            if (mSharedData[key].type() == typeid(T)) { return std::any_cast<T>(mSharedData[key]); }
        }
        return defaultValue;
    }
};

} // namespace ll

inline bool operator<=(ll::Version const& a, ll::Version const& b) { return a < b || a == b; }
inline bool operator>(ll::Version const& a, ll::Version const& b) { return b < a; }
inline bool operator>=(ll::Version const& a, ll::Version const& b) { return b < a || b == a; }

// Loader APIs
namespace ll {

/**
 * @brief Get the loader version as a Version object
 *
 * @return ll::Version  The loader version
 */
LLNDAPI Version getLoaderVersion();

/**
 * @brief Get whether LeviLamina is in debug mode
 *
 * @return bool  True if it is in debug mode
 */
LLNDAPI bool isDebugMode();

/**
 * @brief Register a plugin
 *
 * @param  name     The name of the plugin
 * @param  desc     The descirption(introduction) of the plugin
 * @param  version  The version of the plugin(ll::Version)
 * @param  others   The other information of the plugin(key-value)
 * @return bool     True if the plugin is registered successfully
 * @note   The implementation of this function must be in header file(because of `GetCurrentModule`)
 *
 * @par Example
 * @code
 * ll::registerPlugin("Test", "A test plugin", Version(0, 0, 1, Version::Alpha), {{"Note","This is Note"}});
 * @endcode
 */
LLAPI bool registerPlugin(
    std::string const&                        name,
    std::string const&                        description,
    ll::Version const&                        version,
    std::map<std::string, std::string> const& extraInfo = {},
    HMODULE                                   handle    = GetCurrentModule()
);

/**
 * @brief Find a loaded plugin by name
 *
 * @param  name         The name of the plugin
 */
LLNDAPI std::optional<Plugin> findPlugin(std::string const& name);

/**
 * @brief Find a loaded plugin by HMODULE handle
 *
 * @param  handle       The HMODULE handle of the plugin
 * @return std::optional<Plugin>  The plugin(nullopt if not found)
 */
LLNDAPI std::optional<Plugin> findPlugin(HMODULE handle);

/**
 * @brief Get the All the loaded plugins
 *
 * @return std::unordered_map<std::string, ll::Plugin>  The loaded plugins(name-plugin)
 */
LLNDAPI std::unordered_map<std::string, ll::Plugin> getAllPlugins();

/**
 * @brief Get the handle of LeviLamina.dll.
 *
 * @return HMODULE  The handle
 */
LLNDAPI HMODULE getLoaderHandle();

} // namespace ll
