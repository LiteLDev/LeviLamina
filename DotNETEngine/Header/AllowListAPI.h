#pragma once
#include <AllowListAPI.h>
#include "../Main/.NETGlobal.hpp"

namespace LLNET::AllowList
{
	/**
	 For managing AllowList
	[Usage]
	AllowListManager().has("steve"[, "114514"]);
	AllowListManager().add("alex"[, "11451419", true]).reload();
	AllowListManager().remove("mojang"[, "233333"]).reload();
	AllowListManager().add(...).remove(...).reload();
	[Note]
	If you don't call reload after add/remove, the changes will only write to file
	but it will not take effect in the game.
	This means the player you added won't be able to join the game until reloading
	*/
	public ref class AllowListManager
	{
	private:
		::AllowListManager* _this;

	public:
		AllowListManager()
		{
			_this = new ::AllowListManager();
		}
		!AllowListManager()
		{
			delete _this;
		}
		~AllowListManager()
		{
			this->!AllowListManager();
			GC::SuppressFinalize(this);
		}

		property System::String^ AllowList {
			System::String^ get() {
				return marshalString<Encoding::E_UTF8>(_this->allowList.dump());
			} void
				set(System::String^ str)
			{
				_this->allowList = nlohmann::json::parse(marshalString<Encoding::E_UTF8>(str));
			}
		};
		property size_t Size
		{
			size_t get()
			{
				return _this->size();
			}
		}
		bool Has(System::String^ name)
		{
			return Has(name, "");
		}
		bool Has(System::String^ name, System::String^ xuid)
		{
			return _this->has(marshalString<Encoding::E_UTF8>(name), marshalString<Encoding::E_UTF8>(xuid));
		}
		bool Has(System::String^ name, System::String^ xuid, size_t index)
		{
			return _this->has(marshalString<Encoding::E_UTF8>(name), marshalString<Encoding::E_UTF8>(xuid), index);
		}
		AllowListManager^ Add(System::String^ name) {
			return Add(name, "");
		};
		AllowListManager^ Add(System::String^ name, System::String^ xuid) {
			return Add(name, xuid, false);
		};
		AllowListManager^ Add(System::String^ name, System::String^ xuid, bool ignore) {
			_this->add(marshalString<Encoding::E_UTF8>(name), marshalString<Encoding::E_UTF8>(xuid), ignore);
			return this;
		};
		AllowListManager^ Remove(System::String^ name) {
			return Remove(name, "");
		};
		AllowListManager^ Remove(System::String^ name, System::String^ xuid) {
			_this->remove(marshalString<Encoding::E_UTF8>(name), marshalString<Encoding::E_UTF8>(xuid));
			return this;
		};
		void Reload()
		{
			_this->reload();
		}
	};
} // namespace LLNET::AllowList
