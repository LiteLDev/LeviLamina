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
		//return SymCall("?getClientId@Player@@QEBAAEBVNetworkIdentifier@@XZ", NetworkIdentifier*, Player*)(pl);
		return (NetworkIdentifier*)((uintptr_t)pl + 2544); //ServerPlayer::isHostingPlayer
	}
	inline Level* getLevel(Actor* pl) {
		//return SymCall("?getLevel@Actor@@QEBAAEBVLevel@@XZ", Level*, Actor*)(pl);
		return (Level*)*((uintptr_t*)((uintptr_t)pl + 107));
	}
	inline Certificate* getCert(Player* pl) {
		return SymCall("?getCertificate@Player@@QEBAPEBVCertificate@@XZ", Certificate*, Player*)(pl);
	}

	inline std::string getXUIDStringByCert(Certificate* cert) {
		return SymCall("?getXuid@ExtendedCertificate@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCertificate@@@Z", string, void*)(cert);
	}

	inline xuid_t getXUID(Player* pl) {
		return std::stoull(getXUIDStringByCert(offPlayer::getCert((Player*)pl)).c_str());
	}

	inline std::string getXUIDString(Player* pl) {
		return getXUIDStringByCert(offPlayer::getCert((Player*)pl)).c_str();
	}

	inline xuid_t getXUIDByCert(Certificate* cert) {
		return std::stoull(getXUIDStringByCert(cert));
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