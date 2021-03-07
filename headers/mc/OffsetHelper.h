#include <loader/Loader.h>
#include <string>
#include <api/types/helper.h>
#include <mc\Actor.h>
#include <mc\Player.h>
class Player;
class Level;
class Certificate;
class BaseCommandBlock;
typedef unsigned long long xuid_t;
namespace offPlayer {
	inline NetworkIdentifier* getNetworkIdentifier(Player* pl) {
		return (NetworkIdentifier*)((uintptr_t)pl + 2536); //ServerPlayer::isHostingPlayer
	}
	inline Level* getLevel(void* pl) {
		return (Level*)*((uintptr_t*)((uintptr_t)pl + 856));
	}
	inline Certificate* getCert(Player* pl) {
		return dAccess<Certificate*, 2840>(pl);
	}
	inline string getXUID(Player* pl) {
		Level* level = (Level*)*((uintptr_t*)((uintptr_t)pl + 856));
		void* mce_uuid = (void*)((uintptr_t)pl + 2824); //witherboss::_hurt
		return SymCall("?getPlayerXUID@Level@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVUUID@mce@@@Z",
			string&, Level*, void*)(level, mce_uuid);
	}
	inline xuid_t getXUIDbyCert(Certificate* cert) {
		return stoull(SymCall("?getXuid@ExtendedCertificate@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCertificate@@@Z", string, void*)(cert));
	}
	inline string getRealName(Player* pl) {
		return SymCall("?getIdentityName@ExtendedCertificate@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCertificate@@@Z", string, void*)(offPlayer::getCert((Player*)pl));
	}
	inline permlvl_t getPermLvl(Player* pl) {
		return pl->getCommandPermissionLevel()&0xff;
		}
};
namespace offBaseCommandBlock {
	inline string getCMD(BaseCommandBlock* bcmdblock) {
		return dAccess<string, 56>(bcmdblock);
	}
	inline BlockPos getPos(BaseCommandBlock* bcmdblock) {
		return dAccess<BlockPos, -164>(bcmdblock);
	}
};