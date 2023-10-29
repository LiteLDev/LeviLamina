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

    ushort mMajor = 0;
    ushort mMinor = 0;
    ushort mPatch = 0;
    Label  mLabel = Label::None;
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
    inline ReturnType callFunction(char const* sym, Args... args) {
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
    std::string const&                        desc,
    ll::Version const&                        version,
    std::map<std::string, std::string> const& others,
    HMODULE                                   handle = GetCurrentModule()
);

/**
 * @brief Get a loaded plugin by name
 *
 * @param  name         The name of the plugin
 * @return ll::Plugin*  The plugin(nullptr if not found)
 */
LLNDAPI ll::Plugin* getPlugin(std::string const& name);
/**
 * @brief Get a loaded plugin by HMODULE handle
 *
 * @param  handle       The HMODULE handle of the plugin
 * @return ll::Plugin*  The plugin(nullptr if not found)
 */
LLNDAPI ll::Plugin* getPlugin(HMODULE handle);

/**
 * @brief Get whether the plugin is loaded
 *
 * @param  name  The name of the plugin
 * @return bool  True if the plugin is loaded
 */
LLNDAPI bool hasPlugin(std::string const& name);

/**
 * @brief Get the All the loaded plugins
 *
 * @return std::unordered_map<std::string, ll::Plugin*>  The loaded plugins(name-plugin)
 */
LLNDAPI std::unordered_map<std::string, ll::Plugin*> getAllPlugins();

/**
 * @brief Get the handle of LeviLamina.dll.
 *
 * @return HMODULE  The handle
 */
LLNDAPI HMODULE getLoaderHandle();

} // namespace ll
