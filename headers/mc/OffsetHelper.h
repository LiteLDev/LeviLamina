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
LIAPI inline NetworkIdentifier* getNetworkIdentifier(Player* pl);
LIAPI inline Level*       getLevel(Actor* pl);
LIAPI inline Certificate* getCert(Player* pl);
LIAPI inline BlockSource* getBlockSource(Actor* ac);
LIAPI inline std::string getXUIDStringByCert(Certificate* cert);
LIAPI inline xuid_t getXUID(Player* pl);
LIAPI inline std::string getXUIDString(Player* pl);
LIAPI inline xuid_t getXUIDByCert(Certificate* cert);
LIAPI inline string getRealName(Player* pl);
}  // namespace offPlayer

namespace offBaseCommandBlock {
LIAPI inline string   getCMD(BaseCommandBlock* bcmdblock);
LIAPI inline BlockPos getPos(BaseCommandBlock* bcmdblock);
}  // namespace offBaseCommandBlock

namespace offBlockLegacy {
LIAPI inline short  getBlockItemId(BlockLegacy* a1);
LIAPI inline string getFullName(BlockLegacy* Bl);
}  // namespace offBlockLegacy

namespace offBlock {
LIAPI inline BlockLegacy* getLegacyBlock(Block* block);
LIAPI inline string getFullName(Block* Bl);
}  // namespace offBlock

namespace offGameMode {
LIAPI inline Player* getPlayer(void* Gamemode);
}  // namespace offGameMode

namespace offItemStack {
LIAPI inline int getCount(ItemStack* a1);
}  // namespace offItemStack