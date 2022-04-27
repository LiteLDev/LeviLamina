#include "PluginManager.h"
#include "../Header/Core/Exceptions.h"
#include "../Extra/PluginManager.h"

namespace LLNET
{
	bool PluginManager::registerPlugin(System::String^ name, System::String^ introduction, Version^ version, Dictionary<System::String^, System::String^>^ others, Assembly^ asm_)
	{
		std::map<std::string, std::string> stdmap;
		if (others == nullptr)
			goto null;
		for each (auto % var in others)
			stdmap.emplace(marshalString<Encoding::E_UTF8>(var.Key), marshalString<Encoding::E_UTF8>(var.Value));
	null:
		auto _name = marshalString<Encoding::E_UTF8>(name);
		auto ret = ::RegisterPlugin(MODULE, _name, marshalString<Encoding::E_UTF8>(introduction), (::LL::Version)version, stdmap);
		if (ret)
			PluginManager::ManagedPluginData->Add(name, gcnew PluginTuple(gcnew Plugin(::LL::getPlugin(_name)), asm_));
		// remove LL auto registed plugin.
		unRegisterPlugin(asm_->GetName()->Name + ".dll");
		return ret;
	}
	Plugin^ PluginManager::getPlugin(System::IntPtr handler)
	{
		auto pPlugin = ::LL::getPlugin((HMODULE)(void*)handler);
		if (pPlugin == nullptr)
			return nullptr;
		return gcnew Plugin(pPlugin);
	}
	Plugin^ PluginManager::getPlugin(System::String^ name, bool includeNativePlugin, bool includeScriptPlugin)
	{
		auto ret = ManagedPluginData[name];
		if (ret != nullptr)
			return ret->Item1;
		auto pPlugin = ::LL::getPlugin(marshalString<Encoding::E_UTF8>(name));
		if (pPlugin == nullptr)
			return nullptr;
		if (!includeScriptPlugin && pPlugin->type == ::LL::Plugin::PluginType::ScriptPlugin)
			return nullptr;
		if (!includeNativePlugin && pPlugin->type == ::LL::Plugin::PluginType::DllPlugin)
			return nullptr;
		return gcnew Plugin(pPlugin);
	}
	Assembly^ PluginManager::getPluginAssembly(System::String^ name)
	{
		auto tuple = PluginManager::ManagedPluginData[name];
		return tuple == nullptr ? nullptr : tuple->Item2;
	}
	Assembly^ PluginManager::getPluginAssembly(Plugin^ plugin)
	{
		if (!plugin->IsManagedPlugin())
			throw gcnew Core::NativePluginException;
		for each (auto % var in PluginManager::ManagedPluginData)
		{
			if (var.Value->Item1->Equals(plugin))
				return var.Value->Item2;
		}
		return nullptr;
	}
	bool PluginManager::hasPlugin(System::String^ name, bool includeNativePlugin, bool includeScriptPlugin)
	{
		auto ret = false;
		ret = PluginManager::ManagedPluginData->ContainsKey(name);
		if (ret)
			return ret;
		auto pPlugin = ::LL::getPlugin(marshalString<Encoding::E_UTF8>(name));
		if (pPlugin == nullptr)
			return false;
		if (!includeScriptPlugin && pPlugin->type == ::LL::Plugin::PluginType::ScriptPlugin)
			return false;
		if (!includeNativePlugin && pPlugin->type == ::LL::Plugin::PluginType::DllPlugin)
			return false;
		return true;
	}
	Dictionary<System::String^, Plugin^>^ PluginManager::getAllPlugins(bool includeNativePlugin, bool includeScriptPlugin)
	{
		auto ret = gcnew Dictionary<System::String^, Plugin^>;
		auto& PluginMap = ::LL::getAllPlugins();
		for (auto& kv : PluginMap)
		{
			switch (kv.second->type)
			{
			case ::LL::Plugin::PluginType::DllPlugin:
				if (includeNativePlugin)
					ret->Add(marshalString<Encoding::E_UTF8>(kv.first), gcnew Plugin(kv.second));
				break;
			case ::LL::Plugin::PluginType::ScriptPlugin:
				if (includeScriptPlugin)
					ret->Add(marshalString<Encoding::E_UTF8>(kv.first), gcnew Plugin(kv.second));
				break;
			}
		}
		return ret;
	}
	bool PluginManager::unRegisterPlugin(System::String^ name)
	{
		PluginManager::ManagedPluginData->Remove(name);
		return ::LL::PluginManager::unRegisterPlugin(marshalString<Encoding::E_UTF8>(name));
	}
} // namespace LLNET
