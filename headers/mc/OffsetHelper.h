#include <loader/Loader.h>
#include <string>
#include <api/types/helper.h>
#include <mc\Actor.h>
#include <mc\Player.h>
#include <mc/Block.h>
#include <mc/BlockSource.h>

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
		return (Level*)*((uintptr_t*)((uintptr_t)pl + 856));
	}
	inline Certificate* getCert(Player* pl) {
		return (Certificate*)*((uintptr_t*)pl + 356);
		//return SymCall("?getCertificate@Player@@QEBAPEBVCertificate@@XZ", Certificate*, Player*)(pl);
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
}

namespace offBaseCommandBlock {
	inline string getCMD(BaseCommandBlock* bcmdblock) {
		return dAccess<string, 56>(bcmdblock);
	}
	inline BlockPos getPos(BaseCommandBlock* bcmdblock) {
		return dAccess<BlockPos, -164>(bcmdblock);
	}
}

namespace offBlockLegacy {
	inline short getBlockItemId(BlockLegacy* a1) {
		short v3 = *(short*)((__int64)a1 + 164);
		if (v3 < 0x100) {
			return v3;
		}
		return (short)(255 - v3);
	}
	inline string getFullName(BlockLegacy* Bl) {
		return   dAccess<string, 128>(Bl);
	}
}

namespace offBlock {
	inline BlockLegacy* getLegacyBlock(Block* block) {//Block::getDebugText
		return dAccess<BlockLegacy*, 16>(block);
	}
	inline string getFullName(Block* Bl) {
		BlockLegacy* bl = offBlock::getLegacyBlock(Bl);
		return dAccess<string, 128>(bl);
	}
}

namespace offGameMode {
	inline Player* getPlayer(void* Gamemode) {
		return dAccess<Player*, 8>(Gamemode);
	}
}

namespace offItemStack {
	inline int getCount(ItemStack* a1) {
		return *((char*)a1 + 34);//LevelContainerModel::_getContainer
	}
}