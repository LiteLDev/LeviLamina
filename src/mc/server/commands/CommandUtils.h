#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace CommandUtils {
// NOLINTBEGIN
MCAPI extern std::vector<std::pair<std::string, char>> const CMD_INPUT_UNICODE_TRANSLATE_MAP;

MCAPI bool
addItemInstanceComponents(class ItemInstance& itemInstance, class Json::Value const& components, std::string& errorMsg);

MCAPI void addtoCSVList(std::string& list, std::string const& newItem);

MCAPI void alterSpawnableEntities(
    class LevelData&                        levelData,
    struct ActorDefinitionIdentifier const& type,
    struct ActorDefinitionIdentifier&       definition
);

MCAPI void broadcastPlayerSpawnedMobEvent(class Actor const& entity, class Actor& summoner);

MCAPI bool canBeSummoned(struct ActorDefinitionIdentifier const& actorId, class CommandOrigin const& origin);

MCAPI void clearBlockEntityContents(class BlockSource& region, class BlockPos const& pos);

MCAPI void clearBlockEntityLootTable(class BlockSource& region, class BlockPos const& pos);

MCAPI void convertBlockEntityTag(class CompoundTag& tag, class BlockActor const& entity, class BlockPos const& offset);

MCAPI class ItemStack createItemStack(std::string const& itemName, int amount, int data);

MCAPI std::vector<class ItemStack> createItemStacks(class ItemInstance const& item, int amount, int& given);

MCAPI bool createMapData(class Actor& entity, class ItemInstance& itemInstance, class CommandOutput& output);

MCAPI void displayLocalizableMessage(
    bool                            feedbackRuleDisables,
    class Player&                   player,
    std::string const&              message,
    std::vector<std::string> const& params
);

MCAPI std::string getActorName(class Actor const&);

MCAPI class BlockPos getFeetBlockPos(class Actor const* entity);

MCAPI class Vec3 getFeetPos(class Actor const* entity);

MCAPI std::vector<::ActorType> getInvalidCommandEntities();

MCAPI std::vector<::ActorType> getInvalidCommandEntities(bool, bool);

MCAPI std::string getTelemetryErrorList(class CommandOutput const&);

MCAPI bool isActiveTickingChunk(class LevelChunk const& chunk);

MCAPI bool isActiveTickingChunk(struct Tick currentLevelTick, struct Tick);

MCAPI bool
isFunctionValid(class CommandOutput& output, class FunctionEntry& functionEntry, std::string const& resolvedPath);

MCAPI bool isPlayerSpawnedMob(class Actor const& entity, class Actor const& summoner);

MCAPI void nameEntity(class Actor& actor, bool nameSet, std::string const& actorName);

MCAPI void setInitEvent(struct ActorDefinitionIdentifier& actorId, std::string const& eventName);

MCAPI class Actor* spawnEntityAt(
    class BlockSource&                      region,
    class Vec3 const&                       pos,
    struct ActorDefinitionIdentifier const& type,
    struct ActorUniqueID&                   id,
    class Actor*                            summoner
);

MCAPI std::string toJsonResult(std::string const& commandName, class Json::Value const& rawData);

MCAPI std::string const validatePath(class CommandOutput&, class CommandFilePath const&);
// NOLINTEND

}; // namespace CommandUtils
