#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
class BlockPos;
class Vec3;
class Player;
class Actor;
// clang-format on

namespace CommandUtils {
// NOLINTBEGIN
// symbol:
// ?CMD_INPUT_UNICODE_TRANSLATE_MAP@CommandUtils@@3V?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@D@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@D@std@@@2@@std@@B
MCAPI extern std::vector<std::pair<std::string, char>> const CMD_INPUT_UNICODE_TRANSLATE_MAP;

// symbol:
// ?addItemInstanceComponents@CommandUtils@@YA_NAEAVItemInstance@@AEBVValue@Json@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI bool addItemInstanceComponents(class ItemInstance&, class Json::Value const&, std::string&);

// symbol: ?addtoCSVList@CommandUtils@@YAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@@Z
MCAPI void addtoCSVList(std::string&, std::string const&);

// symbol: ?alterSpawnableEntities@CommandUtils@@YAXAEAVLevelData@@AEBUActorDefinitionIdentifier@@AEAU3@@Z
MCAPI void
alterSpawnableEntities(class LevelData&, struct ActorDefinitionIdentifier const&, struct ActorDefinitionIdentifier&);

// symbol: ?broadcastPlayerSpawnedMobEvent@CommandUtils@@YAXAEBVActor@@AEAV2@@Z
MCAPI void broadcastPlayerSpawnedMobEvent(class Actor const&, class Actor&);

// symbol: ?canBeSummoned@CommandUtils@@YA_NAEBUActorDefinitionIdentifier@@AEBVCommandOrigin@@@Z
MCAPI bool canBeSummoned(struct ActorDefinitionIdentifier const&, class CommandOrigin const&);

// symbol: ?clearBlockEntityContents@CommandUtils@@YAXAEAVBlockSource@@AEBVBlockPos@@@Z
MCAPI void clearBlockEntityContents(class BlockSource&, class BlockPos const&);

// symbol: ?clearBlockEntityLootTable@CommandUtils@@YAXAEAVBlockSource@@AEBVBlockPos@@@Z
MCAPI void clearBlockEntityLootTable(class BlockSource&, class BlockPos const&);

// symbol: ?convertBlockEntityTag@CommandUtils@@YAXAEAVCompoundTag@@AEBVBlockActor@@AEBVBlockPos@@@Z
MCAPI void convertBlockEntityTag(class CompoundTag&, class BlockActor const&, class BlockPos const&);

// symbol:
// ?createItemStack@CommandUtils@@YA?AVItemStack@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HH@Z
MCAPI class ItemStack createItemStack(std::string const&, int, int);

// symbol:
// ?createItemStacks@CommandUtils@@YA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEBVItemInstance@@HAEAH@Z
MCAPI std::vector<class ItemStack> createItemStacks(class ItemInstance const&, int, int&);

// symbol: ?createMapData@CommandUtils@@YA_NAEAVActor@@AEAVItemInstance@@AEAVCommandOutput@@@Z
MCAPI bool createMapData(class Actor&, class ItemInstance&, class CommandOutput&);

// symbol:
// ?displayLocalizableMessage@CommandUtils@@YAX_NAEAVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z
MCAPI void displayLocalizableMessage(bool, class Player&, std::string const&, std::vector<std::string> const&);

// symbol: ?getActorName@CommandUtils@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVActor@@@Z
MCAPI std::string getActorName(class Actor const&);

// symbol: ?getFeetBlockPos@CommandUtils@@YA?AVBlockPos@@PEBVActor@@@Z
MCAPI class BlockPos getFeetBlockPos(class Actor const*);

// symbol: ?getFeetPos@CommandUtils@@YA?AVVec3@@PEBVActor@@@Z
MCAPI class Vec3 getFeetPos(class Actor const*);

// symbol: ?getInvalidCommandEntities@CommandUtils@@YA?AV?$vector@W4ActorType@@V?$allocator@W4ActorType@@@std@@@std@@XZ
MCAPI std::vector<::ActorType> getInvalidCommandEntities();

// symbol:
// ?getInvalidCommandEntities@CommandUtils@@YA?AV?$vector@W4ActorType@@V?$allocator@W4ActorType@@@std@@@std@@_N0@Z
MCAPI std::vector<::ActorType> getInvalidCommandEntities(bool, bool);

// symbol:
// ?getTelemetryErrorList@CommandUtils@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCommandOutput@@@Z
MCAPI std::string getTelemetryErrorList(class CommandOutput const&);

// symbol: ?isActiveTickingChunk@CommandUtils@@YA_NAEBVLevelChunk@@@Z
MCAPI bool isActiveTickingChunk(class LevelChunk const&);

// symbol: ?isActiveTickingChunk@CommandUtils@@YA_NUTick@@0@Z
MCAPI bool isActiveTickingChunk(struct Tick, struct Tick);

// symbol:
// ?isFunctionValid@CommandUtils@@YA_NAEAVCommandOutput@@AEAVFunctionEntry@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI bool isFunctionValid(class CommandOutput&, class FunctionEntry&, std::string const&);

// symbol: ?isPlayerSpawnedMob@CommandUtils@@YA_NAEBVActor@@0@Z
MCAPI bool isPlayerSpawnedMob(class Actor const&, class Actor const&);

// symbol: ?nameEntity@CommandUtils@@YAXAEAVActor@@_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI void nameEntity(class Actor&, bool, std::string const&);

// symbol:
// ?setInitEvent@CommandUtils@@YAXAEAUActorDefinitionIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI void setInitEvent(struct ActorDefinitionIdentifier&, std::string const&);

// symbol:
// ?spawnEntityAt@CommandUtils@@YAPEAVActor@@AEAVBlockSource@@AEBVVec3@@AEBUActorDefinitionIdentifier@@AEAUActorUniqueID@@PEAV2@@Z
MCAPI class Actor*
spawnEntityAt(class BlockSource&, class Vec3 const&, struct ActorDefinitionIdentifier const&, struct ActorUniqueID&, class Actor*);

// symbol:
// ?toJsonResult@CommandUtils@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@AEBVValue@Json@@@Z
MCAPI std::string toJsonResult(std::string const&, class Json::Value const&);

// symbol:
// ?validatePath@CommandUtils@@YA?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVCommandOutput@@AEBVCommandFilePath@@@Z
MCAPI std::string const validatePath(class CommandOutput&, class CommandFilePath const&);
// NOLINTEND

}; // namespace CommandUtils
