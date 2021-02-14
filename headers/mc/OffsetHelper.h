#include <loader/Loader.h>
#include <string>
#include <api/types/helper.h>
class Player;
class Level;
class Certificate;
typedef unsigned long long xuid_t;
namespace offPlayer {
	inline Certificate* getCert(Player* pl) {
		return dAccess<Certificate*, 2840>(pl);
	}
	inline string getXUID(Player* pl) {
		Level* level = (Level*)*((uintptr_t*)((uintptr_t)pl + 856));
		void* mce_uuid = (void*)((uintptr_t)pl + 2824); //witherboss::_hurt
		return SymCall("?getPlayerXUID@Level@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVUUID@mce@@@Z",
			string&, Level*, void*)(level, mce_uuid);
	}
	inline xuid_t getXUIDbyCert(Player* pl) {
		return atoll(SymCall("?getXuid@ExtendedCertificate@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCertificate@@@Z", string, void*)(offPlayer::getCert((Player*)pl)).c_str());
	}
	inline string getRealName(Player* pl) {
		return SymCall("?getIdentityName@ExtendedCertificate@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCertificate@@@Z", string, void*)(offPlayer::getCert((Player*)pl));
	}
};
