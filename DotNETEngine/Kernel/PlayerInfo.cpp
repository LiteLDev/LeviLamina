#include "../Header/PlayerInfo.h"

namespace LLNET::PlayerInfo {
	inline bool PlayerInfoAPI::Insert(System::String^ name, System::String^ xuid, System::String^ uuid)
	{
		return ::PlayerInfo::insert(marshalString<Encoding::E_UTF8>(name), marshalString<Encoding::E_UTF8>(xuid), marshalString<Encoding::E_UTF8>(uuid));
	}
	inline System::String^ PlayerInfoAPI::GetXuid(System::String^ name)
	{
		return marshalString<Encoding::E_UTF8>(::PlayerInfo::getXuid(marshalString<Encoding::E_UTF8>(name)));
	}
	inline System::String^ PlayerInfoAPI::GetUUID(System::String^ name)
	{
		return marshalString<Encoding::E_UTF8>(::PlayerInfo::getUUID(marshalString<Encoding::E_UTF8>(name)));
	}
	inline System::String^ PlayerInfoAPI::FromXuid(System::String^ name)
	{
		return marshalString<Encoding::E_UTF8>(::PlayerInfo::fromXuid(marshalString<Encoding::E_UTF8>(name)));
	}
	inline System::String^ PlayerInfoAPI::FromUUID(System::String^ name)
	{
		return marshalString<Encoding::E_UTF8>(::PlayerInfo::fromUUID(marshalString<Encoding::E_UTF8>(name)));
	}
	inline void PlayerInfoAPI::ForEachInfo(forEachInfoDelegate^ callback)
	{
		_callback = callback;
		if (_callback == nullptr)
			return;
		NativeforEachInfoDelegate^ decallback = gcnew NativeforEachInfoDelegate(&PlayerInfoAPI::forEachInfoCallback);
		GCHandle gch = GCHandle::Alloc(decallback);
		auto pcallback = Marshal::GetFunctionPointerForDelegate(decallback).ToPointer();
		::PlayerInfo::forEachInfo(static_cast<bool(*)(std::string_view, std::string_view, std::string_view)>(pcallback));
		gch.Free();
	}
	bool PlayerInfoAPI::forEachInfoCallback(std::string_view name, std::string_view xuid, std::string_view uuid)
	{
		return _callback(marshalString<Encoding::E_UTF8>((std::string)name), marshalString<Encoding::E_UTF8>((std::string)xuid), marshalString<Encoding::E_UTF8>((std::string)uuid));
	}
}