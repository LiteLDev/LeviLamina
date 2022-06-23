#pragma once
#pragma warning(disable : 26812)
#include <string>
#include <unordered_map>

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif // ! WIN32_LEAN_AND_MEAN
#include <Windows.h>

#include "Global.h"
#include "Utils/WinHelper.h"
#include "Utils/PluginOwnData.h"
#include "LoggerAPI.h"

// LL types
namespace LL
{

struct Version
{
    enum Status
    {
        Dev,
        Beta,
        Release
    };

    int major;
    int minor;
    int revision;
    Status status;

    LIAPI explicit Version(int major = 0, int minor = 0, int revision = 0, Status status = Status::Release);

    LIAPI bool operator<(Version b);
    LIAPI bool operator==(Version b);

    LIAPI std::string toString(bool needStatus = false);
    LIAPI static Version parse(const std::string& str);
};

struct Plugin
{
    std::string name;
    std::string desc;  // `introduction` before
    Version version;
    std::map<std::string, std::string> others;  // `otherInformation` before

    std::string filePath;
    HMODULE handle;

    enum class PluginType
    {
        DllPlugin,
        ScriptPlugin
    };

    PluginType type;

    // Call a Function by Symbol String
    template <typename ReturnType = void, typename... Args>
    inline ReturnType callFunction(const char* functionName, Args... args)
    {
        void* address = GetProcAddress(handle, functionName);
        if (!address)
            return ReturnType();
        return reinterpret_cast<ReturnType (*)(Args...)>(address)(std::forward<Args>(args)...);
    }

};

} // namespace LL
inline bool operator<=(LL::Version a, LL::Version b)
{
    return a < b || a == b;
}
inline bool operator>(LL::Version a, LL::Version b)
{
    return b < a;
}
inline bool operator>=(LL::Version a, LL::Version b)
{
    return b < a || b == a;
}

// helper
LIAPI bool RegisterPlugin(HMODULE hPlugin, std::string name, std::string desc, LL::Version version,
                          std::map<std::string, std::string> others);

// Loader APIs
namespace LL
{

/**
 * @brief Get the loader version as a string
 *
 * @return std::string  The loader version
 */
LIAPI std::string getLoaderVersionString();
/**
 * @brief Get the loader version as a Version object
 * 
 * @return LL::Version  The loader version
 */
LIAPI Version getLoaderVersion();
/**
 * @brief Get whether LiteLoader is in debug mode
 * 
 * @return bool  True if it is in debug mode
 */
LIAPI bool isDebugMode();

/**
 * @brief Get the data path of the plugin
 * 
 * @param  pluginName   The name of the plugin
 * @return std::string  The data path of the plugin
 */
LIAPI std::string getDataPath(const std::string& pluginName);

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
inline bool registerPlugin(std::string name, std::string desc, LL::Version version,
                           std::string git = "", std::string license = "", std::string website = "")
{
    std::map<std::string, std::string> others;
    if (!git.empty()) others.emplace("Git", git);
    if (!license.empty()) others.emplace("License", license);
    if (!website.empty()) others.emplace("Website", website);
    return ::RegisterPlugin(GetCurrentModule(), name, desc, version, others);
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
inline bool registerPlugin(std::string name, std::string desc, LL::Version version,
                           std::map<std::string, std::string> others)
{
    return ::RegisterPlugin(GetCurrentModule(), name, desc, version, others);
}

/**
 * @brief Get a loaded plugin by name
 * 
 * @param  name         The name of the plugin
 * @return LL::Plugin*  The plugin(nullptr if not found)
 */
LIAPI LL::Plugin* getPlugin(std::string name);
/**
 * @brief Get a loaded plugin by HMODULE handle
 * 
 * @param  name         The name of the plugin
 * @return LL::Plugin*  The plugin(nullptr if not found)
 */
LIAPI LL::Plugin* getPlugin(HMODULE handle);

/**
 * @brief Get whether the plugin is loaded
 * 
 * @param  name  The name of the plugin
 * @return bool  True if the plugin is loaded
 */
LIAPI bool hasPlugin(std::string name);

/**
 * @brief Get the All the loaded plugins
 * 
 * @return std::unordered_map<std::string, LL::Plugin*>  The loaded plugins(name-plugin)
 */
LIAPI std::unordered_map<std::string, LL::Plugin*> getAllPlugins();

/// Server Status
enum class ServerStatus
{
    Starting,
    Running,
    Stopping
};
LIAPI ServerStatus getServerStatus();
LIAPI bool isServerStarting();
LIAPI bool isServerStopping();

}; // namespace LL
