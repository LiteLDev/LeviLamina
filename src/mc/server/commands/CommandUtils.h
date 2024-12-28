#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActor;
class BlockPos;
class BlockSource;
class CommandFilePath;
class CommandOrigin;
class CommandOutput;
class CompoundTag;
class FunctionEntry;
class ItemInstance;
class ItemStack;
class LevelChunk;
class LevelData;
class Player;
class Vec3;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct Tick;
namespace Json { class Value; }
class BlockPos;
class Vec3;
class Player;
class Actor;
// clang-format on

namespace CommandUtils {
// functions
// NOLINTBEGIN
MCAPI bool
addItemInstanceComponents(::ItemInstance& itemInstance, ::Json::Value const& components, ::std::string& errorMsg);

MCAPI void addtoCSVList(::std::string& list, ::std::string const& newItem);

MCAPI void alterSpawnableEntities(
    ::LevelData&                       levelData,
    ::ActorDefinitionIdentifier const& type,
    ::ActorDefinitionIdentifier&       definition
);

MCAPI void broadcastPlayerSpawnedMobEvent(::Actor const& entity, ::Actor& summoner);

MCAPI bool canBeSummoned(::ActorDefinitionIdentifier const& actorId, ::CommandOrigin const& origin);

MCAPI void clearBlockEntityContents(::BlockSource& region, ::BlockPos const& pos);

MCAPI void clearBlockEntityLootTable(::BlockSource& region, ::BlockPos const& pos);

MCAPI void convertBlockEntityTag(::CompoundTag& tag, ::BlockActor const& entity, ::BlockPos const& offset);

MCAPI ::ItemStack createItemStack(::std::string const& itemName, int amount, int data);

MCAPI ::std::vector<::ItemStack> createItemStacks(::ItemInstance const& item, int amount, int& given);

MCAPI bool createMapData(::Actor& entity, ::ItemInstance& itemInstance, ::CommandOutput& output);

MCAPI void displayLocalizableMessage(
    bool                                feedbackRuleDisables,
    ::Player&                           player,
    ::std::string const&                message,
    ::std::vector<::std::string> const& params
);

MCAPI ::std::string getActorName(::Actor const& actor);

MCAPI ::BlockPos getFeetBlockPos(::Actor const* entity);

MCAPI ::Vec3 getFeetPos(::Actor const* entity);

MCAPI ::std::vector<::ActorType> getInvalidCommandEntities();

MCAPI ::std::string getTelemetryErrorList(::CommandOutput const& output);

MCAPI bool isActiveTickingChunk(::LevelChunk const& chunk);

MCAPI bool isActiveTickingChunk(::Tick currentLevelTick, ::Tick chunkLastTick);

MCAPI bool isFunctionValid(::CommandOutput& output, ::FunctionEntry& functionEntry, ::std::string const& resolvedPath);

MCAPI void nameEntity(::Actor& actor, bool nameSet, ::std::string const& actorName);

MCAPI void setInitEvent(::ActorDefinitionIdentifier& actorId, ::std::string const& eventName);

MCAPI ::Actor* spawnEntityAt(
    ::BlockSource&                     region,
    ::Vec3 const&                      pos,
    ::ActorDefinitionIdentifier const& type,
    ::ActorUniqueID&                   id,
    ::Actor*                           summoner
);

MCAPI ::std::string toJsonResult(::std::string const& commandName, ::Json::Value const& rawData);

MCAPI ::std::string const validatePath(::CommandOutput& output, ::CommandFilePath const& filePath);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::vector<::std::pair<::std::string, char>> const& CMD_INPUT_UNICODE_TRANSLATE_MAP();
// NOLINTEND

} // namespace CommandUtils
