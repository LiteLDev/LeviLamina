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

#include "llapi/Global.h"
#include "llapi/utils/WinHelper.h"
#include "llapi/utils/PluginOwnData.h"

// LL types
namespace ll {
struct Version {
    enum Status {
        Dev,
        Beta,
        Release
    };

    int major;
    int minor;
    int revision;
    Status status;

    LLAPI explicit Version(int major = 0, int minor = 0, int revision = 0, Status status = Status::Release);

    LLAPI bool operator<(Version b);
    LLAPI bool operator==(Version b);

    LLAPI std::string toString(bool needStatus = false);
    LLAPI static Version parse(const std::string& str);
};

struct Plugin {
    std::string name;
    std::string desc; // `introduction` before
    Version version;
    std::map<std::string, std::string> others; // `otherInformation` before

    std::string filePath;
    HMODULE handle;

    enum class PluginType {
        DllPlugin,
        ScriptPlugin
    };

    PluginType type;

    // Call a Function by Symbol String
    template <typename ReturnType = void, typename... Args>
    inline ReturnType callFunction(const char* functionName, Args... args) {
        void* address = reinterpret_cast<void*>(GetProcAddress(handle, functionName));
        if (!address)
            return ReturnType();
        return reinterpret_cast<ReturnType (*)(Args...)>(address)(std::forward<Args>(args)...);
    }
};
} // namespace ll

inline bool operator<=(ll::Version a, ll::Version b) {
    return a < b || a == b;
}
inline bool operator>(ll::Version a, ll::Version b) {
    return b < a;
}
inline bool operator>=(ll::Version a, ll::Version b) {
    return b < a || b == a;
}

LLAPI bool RegisterPlugin(HMODULE hPlugin, std::string name, std::string desc, ll::Version version,
                          std::map<std::string, std::string> others);

// for abi compatibility
namespace LL {

struct Version {
    enum Status {
        Dev,
        Beta,
        Release
    };

    int major;
    int minor;
    int revision;
    Status status;

    LLAPI explicit Version(int major = 0, int minor = 0, int revision = 0, Status status = Status::Release);

    LLAPI bool operator<(Version b);
    LLAPI bool operator==(Version b);

    LLAPI std::string toString(bool needStatus = false);
    LLAPI static Version parse(const std::string& str);

    inline ll::Version toNewVersion() {
        return ll::Version(major, minor, revision, static_cast<ll::Version::Status>(status));
    }
};

struct Plugin {
    std::string name;
    std::string desc; // `introduction` before
    Version version;
    std::map<std::string, std::string> others; // `otherInformation` before

    std::string filePath;
    HMODULE handle;

    enum class PluginType {
        DllPlugin,
        ScriptPlugin
    };

    PluginType type;

    // Call a Function by Symbol String
    template <typename ReturnType = void, typename... Args>
    inline ReturnType callFunction(const char* functionName, Args... args) {
        void* address = reinterpret_cast<void*>(GetProcAddress(handle, functionName));
        if (!address)
            return ReturnType();
        return reinterpret_cast<ReturnType (*)(Args...)>(address)(std::forward<Args>(args)...);
    }
};

} // namespace LL

// for abi compatibility
[[deprecated("Moved to RegisterPlugin")]] LLAPI bool RegisterPlugin(HMODULE hPlugin, std::string name, std::string desc, LL::Version version,
                                                                    std::map<std::string, std::string> others);

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
 * @brief Get whether LiteLoader is in debug mode
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
LLAPI std::string getDataPath(const std::string& pluginName);

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
inline bool registerPlugin(std::string name, std::string desc, ll::Version version,
                           std::string git = "", std::string license = "", std::string website = "") {
    std::map<std::string, std::string> others;
    if (!git.empty())
        others.emplace("Git", git);
    if (!license.empty())
        others.emplace("License", license);
    if (!website.empty())
        others.emplace("Website", website);
    return ::RegisterPlugin(GetCurrentModule(), name, desc, version, others);
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
 * ll::registerPlugin("Test", "A test plugin", Version(0, 0, 1, Version::Dev), {{"Note","This is Note"}});
 * @endcode
 */
inline bool registerPlugin(std::string name, std::string desc, ll::Version version,
                           std::map<std::string, std::string> others) {
    return ::RegisterPlugin(GetCurrentModule(), name, desc, version, others);
}

/**
 * @brief Get a loaded plugin by name
 *
 * @param  name         The name of the plugin
 * @return ll::Plugin*  The plugin(nullptr if not found)
 */
LLAPI ll::Plugin* getPlugin(std::string name);
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
LLAPI bool hasPlugin(std::string name);

/**
 * @brief Get the All the loaded plugins
 *
 * @return std::unordered_map<std::string, ll::Plugin*>  The loaded plugins(name-plugin)
 */
LLAPI std::unordered_map<std::string, ll::Plugin*> getAllPlugins();

/**
 * @brief Get the handle of LiteLoader.dll.
 *
 * @return HMODULE  The handle
 */
LLAPI HMODULE getLoaderHandle();

/// Server Status
enum class ServerStatus {
    Starting,
    Running,
    Stopping
};
LLAPI ServerStatus getServerStatus();
LLAPI bool isServerStarting();
LLAPI bool isServerStopping();

/**
 * @breif Get LiteLoaderBDS's current language
 *
 * @return std::string  Language(such as: en, zh_CN, ja, ru)
 */
std::string getLanguage();
}; // namespace ll

// for abi compatibility
namespace LL {

/**
 * @brief Get the loader version as a string
 *
 * @return std::string  The loader version
 */
[[deprecated("Moved to ll::getLoaderVersionString")]] LLAPI std::string getLoaderVersionString();
/**
 * @brief Get the loader version as a Version object
 *
 * @return LL::Version  The loader version
 */
[[deprecated("Moved to ll::getLoaderVersion")]] LLAPI Version getLoaderVersion();
/**
 * @brief Get whether LiteLoader is in debug mode
 *
 * @return bool  True if it is in debug mode
 */
[[deprecated("Moved to ll::isDebugMode")]] LLAPI bool isDebugMode();

/**
 * @brief Get the data path of the plugin
 *
 * @param  pluginName   The name of the plugin
 * @return std::string  The data path of the plugin
 */
[[deprecated("Moved to ll::getDataPath")]] LLAPI std::string getDataPath(const std::string& pluginName);

/**
 * @brief Register a plugin
 *
 * @param  name     The name of the plugin
 * @param  desc     The description(introduction) of the plugin
 * @param  version  The version of the plugin(LL::Version)
 * @param  git      The git information of the plugin
 * @param  license  The license of the plugin
 * @param  website  The website
 * @return bool     True if the plugin is registered successfully
 * @note   The implementation of this function must be in header file(because of `GetCurrentModule`)
 */
[[deprecated("Moved to ll::registerPlugin")]] inline bool registerPlugin(std::string name, std::string desc, LL::Version version,
                                                                         std::string git = "", std::string license = "", std::string website = "") {
    return ll::registerPlugin(std::forward<std::string>(name), std::forward<std::string>(desc), version.toNewVersion(),
                              std::forward<std::string>(git), std::forward<std::string>(license), std::forward<std::string>(website));
    // std::map<std::string, std::string> others;
    // if (!git.empty())
    //     others.emplace("Git", git);
    // if (!license.empty())
    //     others.emplace("License", license);
    // if (!website.empty())
    //     others.emplace("Website", website);
    // return ::RegisterPlugin(GetCurrentModule(), name, desc, version, others);
}

/**
 * @brief Register a plugin
 *
 * @param  name     The name of the plugin
 * @param  desc     The descirption(introduction) of the plugin
 * @param  version  The version of the plugin(LL::Version)
 * @param  others   The other information of the plugin(key-value)
 * @return bool     True if the plugin is registered successfully
 * @note   The implementation of this function must be in header file(because of `GetCurrentModule`)
 *
 * @par Example
 * @code
 * LL::registerPlugin("Test", "A test plugin", Version(0, 0, 1, Version::Dev), {{"Note","This is Note"}});
 * @endcode
 */
[[deprecated("Moved to ll::registerPlugin")]] inline bool registerPlugin(std::string name, std::string desc, LL::Version version,
                                                                         std::map<std::string, std::string> others) {
    return ::RegisterPlugin(GetCurrentModule(), name, desc, version.toNewVersion(), others);
}

/**
 * @brief Get a loaded plugin by name
 *
 * @param  name         The name of the plugin
 * @return LL::Plugin*  The plugin(nullptr if not found)
 */
[[deprecated("Moved to ll::getPlugin")]] LLAPI LL::Plugin* getPlugin(std::string name);
/**
 * @brief Get a loaded plugin by HMODULE handle
 *
 * @param  handle       The HMODULE handle of the plugin
 * @return LL::Plugin*  The plugin(nullptr if not found)
 */
[[deprecated("Moved to ll::getPlugin")]] LLAPI LL::Plugin* getPlugin(HMODULE handle);

/**
 * @brief Get whether the plugin is loaded
 *
 * @param  name  The name of the plugin
 * @return bool  True if the plugin is loaded
 */
[[deprecated("Moved to ll::hasPlugin")]] LLAPI bool hasPlugin(std::string name);

/**
 * @brief Get the All the loaded plugins
 *
 * @return std::unordered_map<std::string, LL::Plugin*>  The loaded plugins(name-plugin)
 */
[[deprecated("Moved to ll::getAllPlugins")]] LLAPI std::unordered_map<std::string, LL::Plugin*> getAllPlugins();

/**
 * @brief Get the handle of LiteLoader.dll.
 *
 * @return HMODULE  The handle
 */
[[deprecated("Moved to ll::getLoaderHandle")]] LLAPI HMODULE getLoaderHandle();

/// Server Status
enum class ServerStatus {
    Starting,
    Running,
    Stopping
};
[[deprecated("Moved to ll::getServerStatus")]] LLAPI ServerStatus getServerStatus();
[[deprecated("Moved to ll::isServerStarting")]] LLAPI bool isServerStarting();
[[deprecated("Moved to ll::isServerStopping")]] LLAPI bool isServerStopping();

/**
 * @breif Get LiteLoaderBDS's current language
 *
 * @return std::string  Language(such as: en, zh_CN, ja, ru)
 */
[[deprecated("Moved to ll::getLanguage")]] std::string getLanguage();
}; // namespace LL
