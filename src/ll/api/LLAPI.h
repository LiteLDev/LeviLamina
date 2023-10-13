#pragma once
#include <memory>
#pragma warning(disable : 26812)
#include <string>
#include <unordered_map>

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#ifndef NOMINMAX
#define NOMINMAX
#endif

#include "ll/api/base/Global.h"
#include "ll/api/utils/WinHelper.h"
#include "ll/core/PluginManager.h"

namespace ll {

/**
 * @brief Version struct
 * @see  https://semver.org/
 */
struct Version {
    enum class PreRelease : ushort { None = 0xFFFF, Alpha = 0, Beta = 1 };

    ushort     mMajor      = 0;
    ushort     mMinor      = 0;
    ushort     mPatch      = 0;
    PreRelease mPreRelease = PreRelease::None;

    explicit Version() = default;
    LLAPI Version(ushort major, ushort minor, ushort patch, PreRelease preRelease = PreRelease::None);

    LLAPI bool operator<(Version const& other) const;
    LLAPI bool operator==(Version const& other) const;

    /**
     * @brief Convert the version to a string
     * @return std::string The version string like `1.0.0`
     */
    LLNDAPI std::string toString() const;
    /**
     * @brief Convert the version to string with pre-release information(if not `None`)
     * @return std::string The version string like `1.0.0-alpha`
     */
    LLNDAPI std::string toFullString() const;

    /**
     * @brief Parse a string to a version
     * @param str The string to parse
     * @return Version The version instance
     */
    LLAPI static Version parse(std::string const& str);

private:
    static constexpr std::array<std::string_view, 2> PRE_RELEASE_STRINGS = {"alpha", "beta"};
};

struct Plugin {
    std::string                        name;
    std::string                        desc;
    Version                            version;
    std::map<std::string, std::string> others;

    std::string filePath;
    HMODULE     handle;

    enum class PluginType { DllPlugin, ScriptPlugin };

    PluginType type;

    /*
     * @brief Call a function exported by the plugin using a symbol string
     *
     * @tparam ReturnType  The return type of the function
     * @tparam Args        The arguments type of the function
     * @param  sym         The symbol string
     * @param  args        The arguments
     * @return ReturnType  The return value of the function
     * @exception          std::runtime_error if the symbol is not found
     */
    template <typename ReturnType = void, typename... Args>
    inline ReturnType callFunction(const char* sym, Args... args) {
        void* address = reinterpret_cast<void*>(GetProcAddress(handle, sym));
        if (!address) throw std::runtime_error("ll::Plugin::callFunction: The symbol is not found!");
        return reinterpret_cast<ReturnType (*)(Args...)>(address)(std::forward<Args>(args)...);
    }
};
} // namespace ll

inline bool operator<=(ll::Version const& a, ll::Version const& b) { return a < b || a == b; }
inline bool operator>(ll::Version const& a, ll::Version const& b) { return b < a; }
inline bool operator>=(ll::Version const& a, ll::Version const& b) { return b < a || b == a; }

// Loader APIs
namespace ll {

/**
 * @brief Get the loader version as a string
 *
 * @return std::string  The loader version
 */
LLAPI std::string getLoaderVersionString();
/**
 * @brief Get the loader version as a Version object
 *
 * @return ll::Version  The loader version
 */
LLAPI Version getLoaderVersion();
/**
 * @brief Get whether LeviLamina is in debug mode
 *
 * @return bool  True if it is in debug mode
 */
LLAPI bool isDebugMode();

/**
 * @brief Get the data path of the plugin
 *
 * @param  pluginName   The name of the plugin
 * @return std::string  The data path of the plugin
 */
LLAPI std::string getDataPath(std::string const& pluginName);

/**
 * @brief Register a plugin
 *
 * @param  name     The name of the plugin
 * @param  desc     The description(introduction) of the plugin
 * @param  version  The version of the plugin(ll::Version)
 * @param  git      The git information of the plugin
 * @param  license  The license of the plugin
 * @param  website  The website
 * @return bool     True if the plugin is registered successfully
 * @note   The implementation of this function must be in header file(because of `GetCurrentModule`)
 */
inline bool registerPlugin(
    std::string const& name,
    std::string const& desc,
    ll::Version const& version,
    std::string const& git     = "",
    std::string const& license = "",
    std::string const& website = ""
) {
    std::map<std::string, std::string> others;
    if (!git.empty()) others.emplace("Git", git);
    if (!license.empty()) others.emplace("License", license);
    if (!website.empty()) others.emplace("Website", website);
    return PluginManager::registerPlugin(GetCurrentModule(), name, desc, version, others);
}

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
inline bool registerPlugin(
    std::string const&                        name,
    std::string const&                        desc,
    ll::Version const&                        version,
    std::map<std::string, std::string> const& others
) {
    return PluginManager::registerPlugin(GetCurrentModule(), name, desc, version, others);
}

/**
 * @brief Get a loaded plugin by name
 *
 * @param  name         The name of the plugin
 * @return ll::Plugin*  The plugin(nullptr if not found)
 */
LLAPI ll::Plugin* getPlugin(std::string const& name);
/**
 * @brief Get a loaded plugin by HMODULE handle
 *
 * @param  handle       The HMODULE handle of the plugin
 * @return ll::Plugin*  The plugin(nullptr if not found)
 */
LLAPI ll::Plugin* getPlugin(HMODULE handle);

/**
 * @brief Get whether the plugin is loaded
 *
 * @param  name  The name of the plugin
 * @return bool  True if the plugin is loaded
 */
LLAPI bool hasPlugin(std::string const& name);

/**
 * @brief Get the All the loaded plugins
 *
 * @return std::unordered_map<std::string, ll::Plugin*>  The loaded plugins(name-plugin)
 */
LLAPI std::unordered_map<std::string, ll::Plugin*> getAllPlugins();

/**
 * @brief Get the handle of LeviLamina.dll.
 *
 * @return HMODULE  The handle
 */
LLAPI HMODULE getLoaderHandle();

/// Server Status
enum class ServerStatus { Starting, Running, Stopping };
LLAPI ServerStatus getServerStatus();
LLAPI bool         isServerStarting();
LLAPI bool         isServerStopping();

/**
 * @breif Get LeviLamina's current language
 *
 * @return std::string  Language(such as: en, zh_CN, ja, ru)
 */
std::string getLanguage();
}; // namespace ll
