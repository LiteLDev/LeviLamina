#pragma once
#include <PlayerInfoAPI.h>
#include "../Main/.NETGlobal.hpp"
namespace LLNET::PlayerInfo {
	public ref class PlayerInfoAPI abstract {
	public:
		inline static bool Insert(System::String^ name, System::String^ xuid, System::String^ uuid);
		inline static System::String^ GetXuid(System::String^ name);
		inline static System::String^ GetUUID(System::String^ name);
		inline static System::String^ FromXuid(System::String^ name);
		inline static System::String^ FromUUID(System::String^ name);
		delegate bool forEachInfoDelegate(System::String^ name, System::String^ xuid, System::String^ uuid);
		inline static void ForEachInfo(forEachInfoDelegate^ callback);
	private:
		static forEachInfoDelegate^ _callback = nullptr;
		delegate bool NativeforEachInfoDelegate(std::string_view, std::string_view, std::string_view);
		static bool forEachInfoCallback(std::string_view name, std::string_view xuid, std::string_view uuid);
	};
}
