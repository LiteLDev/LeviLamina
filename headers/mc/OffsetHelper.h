#include <api/LiteloaderApi.h>
#include <loader/Loader.h>
#include <string>
#ifdef EZMC
#include <ezmc/Actor/Actor.h>
#include <ezmc/Actor/Player.h>
#include <ezmc/Block/Block.h>
#include <ezmc/Block/BlockSource.h>
#else
#include <mc/Actor.h>
#include <mc/Block.h>
#include <mc/BlockSource.h>
#include <mc/Player.h>
#endif

class Player;
class Level;
class Certificate;
class BaseCommandBlock;
typedef unsigned long long xuid_t;
namespace offPlayer {
inline NetworkIdentifier *getNetworkIdentifier(Player *pl) {
    return SymCall("?getClientId@Player@@QEBAAEBVNetworkIdentifier@@XZ", NetworkIdentifier*,
     Player*)(pl);
    //return (NetworkIdentifier *)((uintptr_t)pl + 2712);  // ServerPlayer::isHostingPlayer
}
inline Level *getLevel(Actor *pl) {
    return SymCall("?getLevel@Actor@@QEBAAEBVLevel@@XZ", Level*, Actor*)(pl);
    //return (Level *)*((uintptr_t *)((uintptr_t)pl + 888));
}
inline Certificate *getCert(Player *pl) {
    //return (Certificate *)*((uintptr_t *)pl + 377);
    return SymCall("?getCertificate@Player@@QEBAPEBVCertificate@@XZ", Certificate*, Player*)(pl);
}

inline BlockSource *getBlockSource(Actor *ac) {
    return dAccess<BlockSource*, 864>(ac);
}

inline std::string getXUIDStringByCert(Certificate *cert) {
    return SymCall(
        "?getXuid@ExtendedCertificate@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@"
        "@std@@AEBVCertificate@@@Z",
        string, void *)(cert);
}

inline xuid_t getXUID(Player *pl) {
    std::string xuidstr = getXUIDStringByCert(offPlayer::getCert((Player*)pl)).c_str();
    if (xuidstr != "") {
        return std::stoull(xuidstr);
    } else {
        return 0;
    }
}

inline std::string getXUIDString(Player *pl) {
    return getXUIDStringByCert(offPlayer::getCert((Player *)pl)).c_str();
}

inline xuid_t getXUIDByCert(Certificate *cert) {
    std::string xuidstr = getXUIDStringByCert(cert);
    if (xuidstr != "") {
        return std::stoull(xuidstr);
    } else {
        return 0;
    }
}

inline string getRealName(Player *pl) {
    return SymCall(
        "?getIdentityName@ExtendedCertificate@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$"
        "allocator@D@2@@std@@AEBVCertificate@@@Z",
        string, void *)(offPlayer::getCert((Player *)pl));
}
}  // namespace offPlayer

namespace offBaseCommandBlock {
inline string getCMD(BaseCommandBlock *bcmdblock) {
    return dAccess<string, 56>(bcmdblock);
}
inline BlockPos getPos(BaseCommandBlock *bcmdblock) {
    return dAccess<BlockPos, -164>(bcmdblock);
}
}  // namespace offBaseCommandBlock

namespace offBlockLegacy {
inline short getBlockItemId(BlockLegacy *a1) {
    short v3 = *(short *)((__int64)a1 + 164);
    if (v3 < 0x100) {
        return v3;
    }
    return (short)(255 - v3);
}
inline string getFullName(BlockLegacy *Bl) {
    return dAccess<string, 128>(Bl);
}
}  // namespace offBlockLegacy

namespace offBlock {
inline BlockLegacy *getLegacyBlock(Block *block) {  // Block::getDebugText
    return dAccess<BlockLegacy *, 16>(block);
}
inline string getFullName(Block *Bl) {
    BlockLegacy *bl = offBlock::getLegacyBlock(Bl);
    return dAccess<string, 128>(bl);
}
}  // namespace offBlock

namespace offGameMode {
inline Player *getPlayer(void *Gamemode) {
    return dAccess<Player *, 8>(Gamemode);
}
}  // namespace offGameMode

namespace offItemStack {
inline int getCount(ItemStack *a1) {
    return *((char *)a1 + 34);  // LevelContainerModel::_getContainer
}
}  // namespace offItemStack