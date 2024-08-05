#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/TagRegistry.h"
#include "mc/common/wrapper/IDType.h"
#include "mc/common/wrapper/OwnerPtr.h"
#include "mc/common/wrapper/WeakRef.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/entity/systems/common/CommandOriginSystem.h"
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/enums/CurrentCmdVersion.h"
#include "mc/enums/SubClientId.h"
#include "mc/world/level/Level.h"

// auto generated forward declare list
// clang-format off
namespace PositionTrackingDB { class PositionTrackingDBServer; }
// clang-format on

class ServerLevel : public ::Level {
public:
    // prevent constructor by default
    ServerLevel& operator=(ServerLevel const&);
    ServerLevel(ServerLevel const&);
    ServerLevel();

public:
    // NOLINTBEGIN
    MCVAPI class MapDataManager& _getMapDataManager();

    MCVAPI class PlayerDeathManager* _getPlayerDeathManager();

    MCVAPI void _initializeMapDataManager();

    MCVAPI void _subTick();

    MCVAPI void
    decrementTagCache(std::string const& tag, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>>&);

    MCVAPI class ResourcePackManager* getClientResourcePackManager() const;

    MCVAPI class LevelChunkMetaDataManager* getLevelChunkMetaDataManager();

    MCVAPI class PlayerSleepManager const& getPlayerSleepManager() const;

    MCVAPI class PlayerSleepManager& getPlayerSleepManager();

    MCVAPI class PositionTrackingDB::PositionTrackingDBServer* getPositionTrackerDBServer() const;

    MCVAPI class ResourcePackManager* getServerResourcePackManager() const;

    MCVAPI class Random& getThreadRandom() const;

    MCVAPI class TradeTables* getTradeTables();

    MCVAPI void incrementTagCache(
        std::string const&                                                                                tag,
        class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>>& tagRegistry
    );

    MCVAPI bool initialize(
        std::string const&         levelName,
        class LevelSettings const& levelSettings,
        class LevelData*           levelData,
        class Experiments const&   experiments,
        std::string const*         levelId
    );

    MCVAPI void loadFunctionManager();

    MCVAPI void runCommand(class Command& command, class CommandOrigin& origin, ::CommandOriginSystem originSystem);

    MCVAPI void runCommand(
        class HashedString const& commandStr,
        class CommandOrigin&      origin,
        ::CommandOriginSystem     originSystem,
        ::CurrentCmdVersion       commandVersion
    );

    MCVAPI void setCommandsEnabled(bool commandsEnabled);

    MCVAPI void setWorldTemplateOptionsUnlocked();

    MCVAPI ~ServerLevel();

    MCAPI ServerLevel(Bedrock::NotNullNonOwnerPtr<class SoundPlayerInterface> const&, class OwnerPtr<class LevelStorage>, class IMinecraftEventing&, class ResourcePackManager&, class ResourcePackManager&, Bedrock::NotNullNonOwnerPtr<class StructureManager>, class MinecraftCommands&, class Scheduler&, Bedrock::NotNullNonOwnerPtr<class IEntityRegistryOwner> const&, class WeakRef<class EntityContext>, std::unique_ptr<class BlockComponentFactory>, std::unique_ptr<class BlockDefinitionGroup>, class ItemRegistryRef, bool, bool, struct NetworkPermissions const&, std::weak_ptr<class BlockTypeRegistry>);

    MCAPI void clearAllGenerationRequests(class NetworkIdentifier const& player, ::SubClientId clientId);

    MCAPI class CommandManager& getCommandManager();

    MCAPI class DynamicPropertiesDefinition& getDynamicPropertiesDefinition();

    MCAPI class DynamicPropertiesManager& getDynamicPropertiesManager() const;

    MCAPI class MobEvents& getMobEvents();

    MCAPI class MobEvents const& getMobEvents() const;

    MCAPI class DynamicProperties& getOrAddDynamicProperties();

    MCAPI void setShouldSendSleepMessage(bool shouldSend);

    MCAPI bool shouldSendSleepMessage() const;

    MCAPI class Bedrock::NonOwnerPointer<class VolumeEntityManagerServer> tryGetVolumeEntityManager() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _initializeActorManager();

    MCAPI void _initializeGameplayUserManager();

    MCAPI void _initializePlayerSleepManager();

    MCAPI void _initializeScoreboard();

    MCAPI void _onActorEntityAdded(class Actor& actor);

    MCAPI void _onGameplayUserAdded(class EntityContext& entity);

    MCAPI void _onGameplayUserRemoved(class EntityContext& entity);

    MCAPI void _onNewDimensionCreated(class Dimension& dimension);

    MCAPI void _onPlayerWakeUp(class Player& player);

    MCAPI void _onSleepingPlayerListUpdated(struct PlayerSleepStatus const&);

    MCAPI void _onWakeUpAllPlayers();

    MCAPI void _postReloadActorAdded(class Actor&, ::ActorInitializationMethod);

    // NOLINTEND
};
