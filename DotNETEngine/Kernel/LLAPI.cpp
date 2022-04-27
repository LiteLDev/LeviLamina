#include "../Header/LLAPI.h"
#include "../Main/PluginManager.h"

LLNET::LL::Version::Version(::LL::Version& v)
{
	_this = new ::LL::Version(std::move(v));
}

LLNET::LL::Version::Version()
{
	_this = new ::LL::Version;
}

LLNET::LL::Version::Version(int major)
{
	_this = new ::LL::Version(major);
}

LLNET::LL::Version::Version(int major, int minor)
{
	_this = new ::LL::Version(major, minor);
}

LLNET::LL::Version::Version(int major, int minor, int revision)
{
	_this = new ::LL::Version(major, minor, revision);
}

LLNET::LL::Version::Version(int major, int minor, int revision, Status status)
{
	_this = new ::LL::Version(major, minor, revision, ::LL::Version::Status(status));
}

LLNET::LL::Version::!Version()
{
	delete _this;
}

LLNET::LL::Version::~Version()
{
    this->!Version();
    GC::SuppressFinalize(this);
}

bool LLNET::LL::Version::operator<(Version^ a, Version^ b)
{
	return *a->_this < *b->_this;
}

bool LLNET::LL::Version::operator==(Version^ a, Version^ b)
{
	return *a->_this == *b->_this;
}

bool LLNET::LL::Version::operator<=(Version^ a, Version^ b)
{
	return a < b || a == b;
}

bool LLNET::LL::Version::operator>(Version^ a, Version^ b)
{
	return b < a;
}

bool LLNET::LL::Version::operator>=(Version^ a, Version^ b)
{
	return b < a || b == a;
}

LLNET::LL::Version::operator::LL::Version ()
{
	return *_this;
}

::LL::Version* LLNET::LL::Version::ToPointer()
{
	return _this;
}

System::IntPtr LLNET::LL::Version::ToIntPtr()
{
	return System::IntPtr((void*)_this);
}

System::String^ LLNET::LL::Version::ToString()
{
	return marshalString<Encoding::E_UTF8>(_this->toString());
}

LLNET::LL::Version^ LLNET::LL::Version::parse(System::String^ str)
{
	return gcnew Version(::LL::Version::parse(marshalString<Encoding::E_UTF8>(str)));
}

System::String^ LLNET::LL::LLAPI::getLoaderVersionString()
{
	return marshalString<Encoding::E_UTF8>(::LL::getLoaderVersionString());
}

LLNET::LL::Version^ LLNET::LL::LLAPI::getLoaderVersion()
{
	return gcnew Version(::LL::getLoaderVersion());
}

bool LLNET::LL::LLAPI::isDebugMode()
{
	return ::LL::isDebugMode();
}

System::String^ LLNET::LL::LLAPI::getDataPath(System::String^ pluginName)
{
	return marshalString<Encoding::E_UTF8>(::LL::getDataPath(marshalString<Encoding::E_UTF8>(pluginName)));
}

inline bool LLNET::LL::LLAPI::registerPlugin(System::String^ name, System::String^ introduction, Version^ version)
{
	return PluginManager::registerPlugin(name, introduction, version, nullptr, Assembly::GetCallingAssembly());
}

inline bool LLNET::LL::LLAPI::registerPlugin(System::String^ name, System::String^ introduction, Version^ version, System::String^ git, System::String^ license, System::String^ website)
{
	auto others = gcnew Dictionary<String^, String^>;
	if (!String::IsNullOrEmpty(git)) others->Add("Git", git);
	if (!String::IsNullOrEmpty(license)) others->Add("License", license);
	if (!String::IsNullOrEmpty(website)) others->Add("Website", website);
	return PluginManager::registerPlugin(name, introduction, version, others, Assembly::GetCallingAssembly());
}

inline bool LLNET::LL::LLAPI::registerPlugin(System::String^ name, System::String^ introduction, Version^ version, Dictionary<String^, String^>^ others)
{
	return PluginManager::registerPlugin(name, introduction, version, others, Assembly::GetCallingAssembly());
}

inline LLNET::LL::Plugin^ LLNET::LL::LLAPI::getPlugin(System::String^ name)
{
	return PluginManager::getPlugin(name, true, true);
}

inline LLNET::LL::Plugin^ LLNET::LL::LLAPI::getPlugin(System::String^ name, bool includeNativePlugin)
{
	return PluginManager::getPlugin(name, includeNativePlugin, true);
}

inline LLNET::LL::Plugin^ LLNET::LL::LLAPI::getPlugin(System::String^ name, bool includeNativePlugin, bool includeScriptPlugin)
{
	return PluginManager::getPlugin(name, includeNativePlugin, includeScriptPlugin);
}

inline LLNET::LL::Plugin^ LLNET::LL::LLAPI::getPlugin(System::IntPtr% handler)
{
	return PluginManager::getPlugin(handler);
}

inline Assembly^ LLNET::LL::LLAPI::getPluginAssembly(System::String^ name)
{
	return PluginManager::getPluginAssembly(name);
}

inline Assembly^ LLNET::LL::LLAPI::getPluginAssembly(Plugin^ plugin)
{
	return PluginManager::getPluginAssembly(plugin);
}

inline Dictionary<String^, LLNET::LL::Plugin^>^ LLNET::LL::LLAPI::getAllPlugins(bool includeNativePlugin, bool includeScriptPlugin)
{
	return PluginManager::getAllPlugins(includeNativePlugin, includeScriptPlugin);
}

inline Dictionary<String^, LLNET::LL::Plugin^>^ LLNET::LL::LLAPI::getAllPlugins(bool includeNativePlugin)
{
	return getAllPlugins(includeNativePlugin, true);
}

inline Dictionary<String^, LLNET::LL::Plugin^>^ LLNET::LL::LLAPI::getAllPlugins()
{
	return getAllPlugins(true, true);
}

inline bool LLNET::LL::LLAPI::hasPlugin(System::String^ name, bool includeNativePlugin, bool includeScriptPlugin)
{
	return PluginManager::hasPlugin(name, includeNativePlugin, includeScriptPlugin);
}

inline bool LLNET::LL::LLAPI::hasPlugin(System::String^ name, bool includeNativePlugin)
{
	return hasPlugin(name, includeNativePlugin, true);
}

inline bool LLNET::LL::LLAPI::hasPlugin(System::String^ name)
{
	return hasPlugin(name, true, true);
}

bool LLNET::LL::Plugin::IsManagedPlugin()
{
	return PluginManager::ManagedPluginData->ContainsKey(this->name);
}

LLNET::LL::Plugin::Plugin(::LL::Plugin& p)
	:_this(new ::LL::Plugin(std::move(p))),
	ownsNativeInstance(true)
{
}

LLNET::LL::Plugin::Plugin(::LL::Plugin* p)
	: _this(p),
	ownsNativeInstance(false)
{
}

LLNET::LL::Plugin::~Plugin()
{
	if (ownsNativeInstance)
		delete _this;
}
