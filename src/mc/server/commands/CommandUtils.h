#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActor;
class BlockPos;
class BlockSource;
class CommandFilePath;
class CommandOutput;
class CompoundTag;
class EntityContext;
class FunctionEntry;
class ItemInstance;
class ItemStack;
class LevelData;
class Player;
class Vec3;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
namespace Bedrock::Safety { class RedactableString; }
namespace Json { class Value; }
// clang-format on

namespace CommandUtils {
// functions
// NOLINTBEGIN
MCNAPI ::Actor* addToLevel(::OwnerPtr<::EntityContext> entity, ::BlockSource& region);

MCNAPI void addtoCSVList(::std::string& list, ::std::string const& newItem);

MCNAPI void alterSpawnableEntities(
    ::LevelData&                       levelData,
    ::ActorDefinitionIdentifier const& type,
    ::ActorDefinitionIdentifier&       definition
);

MCNAPI void broadcastPlayerSpawnedMobEvent(::Actor const& entity, ::Actor& summoner);

MCNAPI void clearBlockEntityContents(::BlockSource& region, ::BlockPos const& pos);

MCNAPI void clearBlockEntityLootTable(::BlockSource& region, ::BlockPos const& pos);

MCNAPI void convertBlockEntityTag(::CompoundTag& tag, ::BlockActor const& entity, ::BlockPos const& offset);

MCNAPI ::ItemStack createItemStack(::std::string const& itemName, int amount, int data);

MCNAPI ::std::vector<::ItemStack> createItemStacks(::ItemInstance const& item, int amount, int& given);

MCNAPI bool createMapData(::Actor& entity, ::ItemInstance& itemInstance, ::CommandOutput& output);

MCNAPI void displayLocalizableMessage(
    bool                                feedbackRuleDisables,
    ::Player&                           player,
    ::std::string const&                message,
    ::std::vector<::std::string> const& params
);

MCAPI ::std::string getActorName(::Actor const& actor);

MCNAPI ::std::vector<::ActorType> getInvalidCommandEntities(bool isChemistryEnabled, bool isCodeBuilderEnabled);

MCNAPI bool isFunctionValid(::CommandOutput& output, ::FunctionEntry& functionEntry, ::std::string const& resolvedPath);

MCNAPI void nameEntity(::Actor& actor, bool nameSet, ::Bedrock::Safety::RedactableString const& actorName);

MCAPI ::Actor* spawnEntityAt(
    ::BlockSource&                     region,
    ::Vec3 const&                      pos,
    ::ActorDefinitionIdentifier const& type,
    ::ActorUniqueID&                   id,
    ::Actor*                           summoner
);

MCNAPI ::std::string toJsonResult(::std::string const& commandName, ::Json::Value const& rawData);

MCNAPI ::std::string const validatePath(::CommandOutput& output, ::CommandFilePath const& filePath);
// NOLINTEND

// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::std::vector<::std::pair<::std::string, char>> const& CMD_INPUT_UNICODE_TRANSLATE_MAP();
#endif
// NOLINTEND

} // namespace CommandUtils
