#pragma once
#include <LLAPI.h>
#include <Utils/Hash.h>
#include "../Main/.NETGlobal.hpp"
#include "../Tools/PropertryHelper.h"
#include "../Tools/clix.hpp"
namespace LLNET::LL
{
using namespace clix;

public
ref struct Version
{
public:
    enum class Status
    {
        Dev,
        Beta,
        Release
    };

public:
    Version(::LL::Version& v);
    Version();
    Version(int major);
    Version(int major, int minor);
    Version(int major, int minor, int revision);
    Version(int major, int minor, int revision, Status status);
    !Version();
    ~Version();

    static bool operator<(Version ^ a, Version ^ b);
    static bool operator==(Version ^ a, Version ^ b);
    static bool operator<=(Version ^ a, Version ^ b);
    static bool operator>(Version ^ a, Version ^ b);
    static bool operator>=(Version ^ a, Version ^ b);

    Property(int, major);
    Property(int, minor);
    Property(int, revision);
    Property_Enum(Status, ::LL::Version::Status, status);

    operator ::LL::Version();

    ::LL::Version* ToPointer();
    System::IntPtr ToIntPtr();

    System::String ^ ToString() override;
    static Version ^ parse(System::String ^ str);

private:
    ::LL::Version* _this;
};

public
ref struct Plugin
{
public:
    enum class PluginType
    {
        DllPlugin,
        ScriptPlugin
    };

public:
    bool IsManagedPlugin();

public:
    Plugin(::LL::Plugin& p);
    Plugin(::LL::Plugin* p);
    ~Plugin();

    Property_String(name);
    Property_String(introduction);
    Property_String(filePath);
    property System::IntPtr handler
    {
        System::IntPtr get()
        {
            return System::IntPtr(_this->handler);
        }
    }
    property Version ^ version {
        Version ^ get() { return gcnew Version(_this->version); }
    } property Dictionary<String ^, String ^> ^
        otherInformation {
            Dictionary<String ^, String ^> ^ get() {
                auto len = (int)_this->otherInformation.size();
                auto ret = gcnew Dictionary<String ^, String ^>(len);
                for (auto& kv : _this->otherInformation)
                    ret->Add(marshalString<Encoding::E_UTF8>(kv.first), marshalString<Encoding::E_UTF8>(kv.second));
                return ret;
            }
        } Property_Enum(PluginType, ::LL::Plugin::PluginType, type);

    // Get a Function by Symbol String
    generic<typename TDelegate>
        where TDelegate : System::Delegate inline TDelegate GetFunction(System::String ^ functionName)
    {
        if (_this->handler == NULL)
            return TDelegate();
        void* address = GetProcAddress(_this->handler, marshalString<Encoding::E_UTF8>(functionName).c_str());
        if (!address)
            return TDelegate();
        return Marshal::GetDelegateForFunctionPointer<TDelegate>(System::IntPtr(address));
    }

private:
    bool ownsNativeInstance;
    ::LL::Plugin* _this;
};

public
ref class LLAPI abstract
{
public:
    static System::String ^ getLoaderVersionString();
    static Version ^ getLoaderVersion();
    static bool isDebugMode();

    static System::String ^ getDataPath(System::String ^ pluginName);

    inline static bool registerPlugin(System::String ^ name, System::String ^ introduction, Version ^ version);
    inline static bool registerPlugin(System::String ^ name, System::String ^ introduction, Version ^ version,
                                      System::String ^ git, System::String ^ license, System::String ^ website);
    inline static bool registerPlugin(System::String ^ name, System::String ^ introduction, Version ^ version,
                                      Dictionary<String ^, String ^> ^ others);

    inline static Plugin ^ getPlugin(System::String ^ name);
    inline static Plugin ^ getPlugin(System::String ^ name, bool includeNativePlugin);
    inline static Plugin ^ getPlugin(System::String ^ name, bool includeNativePlugin, bool includeScriptPlugin);
    inline static Plugin ^ getPlugin(System::IntPtr % handler);
    inline static Assembly ^ getPluginAssembly(System::String ^ name);
    inline static Assembly ^ getPluginAssembly(Plugin ^ plugin);

    inline static Dictionary<String ^, Plugin ^> ^ getAllPlugins(bool includeNativePlugin, bool includeScriptPlugin);
    inline static Dictionary<String ^, Plugin ^> ^ getAllPlugins(bool includeNativePlugin);
    inline static Dictionary<String ^, Plugin ^> ^ getAllPlugins();

    inline static bool hasPlugin(System::String ^ name, bool includeNativePlugin, bool includeScriptPlugin);
    inline static bool hasPlugin(System::String ^ name, bool includeNativePlugin);
    inline static bool hasPlugin(System::String ^ name);
};
} // namespace LLNET::LL