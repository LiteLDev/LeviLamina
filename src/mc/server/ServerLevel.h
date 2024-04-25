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
    // symbol: ?_getMapDataManager@ServerLevel@@MEAAAEAVMapDataManager@@XZ
    MCVAPI class MapDataManager& _getMapDataManager();

    // symbol: ?_getPlayerDeathManager@ServerLevel@@MEAAPEAVPlayerDeathManager@@XZ
    MCVAPI class PlayerDeathManager* _getPlayerDeathManager();

    // symbol: ?_initializeMapDataManager@ServerLevel@@MEAAXXZ
    MCVAPI void _initializeMapDataManager();

    // symbol: ?_subTick@ServerLevel@@MEAAXXZ
    MCVAPI void _subTick();

    // symbol:
    // ?decrementTagCache@ServerLevel@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$TagRegistry@U?$IDType@ULevelTagIDType@@@@U?$IDType@ULevelTagSetIDType@@@@@@@Z
    MCVAPI void
    decrementTagCache(std::string const& tag, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>>&);

    // symbol: ?getClientResourcePackManager@ServerLevel@@UEBAPEAVResourcePackManager@@XZ
    MCVAPI class ResourcePackManager* getClientResourcePackManager() const;

    // symbol: ?getLevelChunkMetaDataManager@ServerLevel@@UEAAPEAVLevelChunkMetaDataManager@@XZ
    MCVAPI class LevelChunkMetaDataManager* getLevelChunkMetaDataManager();

    // symbol: ?getPlayerSleepManager@ServerLevel@@UEAAAEAVPlayerSleepManager@@XZ
    MCVAPI class PlayerSleepManager& getPlayerSleepManager();

    // symbol: ?getPlayerSleepManager@ServerLevel@@UEBAAEBVPlayerSleepManager@@XZ
    MCVAPI class PlayerSleepManager const& getPlayerSleepManager() const;

    // symbol: ?getPositionTrackerDBServer@ServerLevel@@UEBAPEAVPositionTrackingDBServer@PositionTrackingDB@@XZ
    MCVAPI class PositionTrackingDB::PositionTrackingDBServer* getPositionTrackerDBServer() const;

    // symbol: ?getServerResourcePackManager@ServerLevel@@UEBAPEAVResourcePackManager@@XZ
    MCVAPI class ResourcePackManager* getServerResourcePackManager() const;

    // symbol: ?getThreadRandom@ServerLevel@@UEBAAEAVRandom@@XZ
    MCVAPI class Random& getThreadRandom() const;

    // symbol: ?getTradeTables@ServerLevel@@UEAAPEAVTradeTables@@XZ
    MCVAPI class TradeTables* getTradeTables();

    // symbol:
    // ?incrementTagCache@ServerLevel@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$TagRegistry@U?$IDType@ULevelTagIDType@@@@U?$IDType@ULevelTagSetIDType@@@@@@@Z
    MCVAPI void incrementTagCache(
        std::string const&                                                                                tag,
        class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>>& tagRegistry
    );

    // symbol:
    // ?initialize@ServerLevel@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVLevelSettings@@PEAVLevelData@@AEBVExperiments@@PEBV23@@Z
    MCVAPI bool initialize(
        std::string const&         levelName,
        class LevelSettings const& levelSettings,
        class LevelData*           levelData,
        class Experiments const&   experiments,
        std::string const*         levelId
    );

    // symbol: ?loadFunctionManager@ServerLevel@@UEAAXXZ
    MCVAPI void loadFunctionManager();

    // symbol: ?runCommand@ServerLevel@@UEAAXAEAVCommand@@AEAVCommandOrigin@@W4CommandOriginSystem@@@Z
    MCVAPI void runCommand(class Command& command, class CommandOrigin& origin, ::CommandOriginSystem originSystem);

    // symbol:
    // ?runCommand@ServerLevel@@UEAAXAEBVHashedString@@AEAVCommandOrigin@@W4CommandOriginSystem@@W4CurrentCmdVersion@@@Z
    MCVAPI void runCommand(
        class HashedString const& commandStr,
        class CommandOrigin&      origin,
        ::CommandOriginSystem     originSystem,
        ::CurrentCmdVersion       commandVersion
    );

    // symbol: ?setCommandsEnabled@ServerLevel@@UEAAX_N@Z
    MCVAPI void setCommandsEnabled(bool commandsEnabled);

    // symbol: ?setServerTickOffset@ServerLevel@@UEAAX_J@Z
    MCVAPI void setServerTickOffset(int64);

    // symbol: ?setWorldTemplateOptionsUnlocked@ServerLevel@@UEAAXXZ
    MCVAPI void setWorldTemplateOptionsUnlocked();

    // symbol: ??1ServerLevel@@UEAA@XZ
    MCVAPI ~ServerLevel();

    // symbol:
    // ??0ServerLevel@@QEAA@AEBV?$not_null@V?$NonOwnerPointer@VSoundPlayerInterface@@@Bedrock@@@gsl@@V?$OwnerPtr@VLevelStorage@@@@AEAVIMinecraftEventing@@AEAVResourcePackManager@@3V?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@2@AEAVMinecraftCommands@@AEAVScheduler@@AEBV?$not_null@V?$NonOwnerPointer@VIEntityRegistryOwner@@@Bedrock@@@2@V?$WeakRef@VEntityContext@@@@V?$unique_ptr@VBlockComponentFactory@@U?$default_delete@VBlockComponentFactory@@@std@@@std@@V?$unique_ptr@VBlockDefinitionGroup@@U?$default_delete@VBlockDefinitionGroup@@@std@@@std@@VItemRegistryRef@@_N_NAEBUNetworkPermissions@@V?$weak_ptr@VBlockTypeRegistry@@@std@@@Z
    MCAPI ServerLevel(Bedrock::NotNullNonOwnerPtr<class SoundPlayerInterface> const&, class OwnerPtr<class LevelStorage>, class IMinecraftEventing&, class ResourcePackManager&, class ResourcePackManager&, Bedrock::NotNullNonOwnerPtr<class StructureManager>, class MinecraftCommands&, class Scheduler&, Bedrock::NotNullNonOwnerPtr<class IEntityRegistryOwner> const&, class WeakRef<class EntityContext>, std::unique_ptr<class BlockComponentFactory>, std::unique_ptr<class BlockDefinitionGroup>, class ItemRegistryRef, bool, bool, struct NetworkPermissions const&, std::weak_ptr<class BlockTypeRegistry>);

    // symbol: ?clearAllGenerationRequests@ServerLevel@@QEAAXAEBVNetworkIdentifier@@W4SubClientId@@@Z
    MCAPI void clearAllGenerationRequests(class NetworkIdentifier const& player, ::SubClientId clientId);

    // symbol: ?getCommandManager@ServerLevel@@QEAAAEAVCommandManager@@XZ
    MCAPI class CommandManager& getCommandManager();

    // symbol: ?getDynamicPropertiesDefinition@ServerLevel@@QEAAAEAVDynamicPropertiesDefinition@@XZ
    MCAPI class DynamicPropertiesDefinition& getDynamicPropertiesDefinition();

    // symbol: ?getDynamicPropertiesManager@ServerLevel@@QEBAAEAVDynamicPropertiesManager@@XZ
    MCAPI class DynamicPropertiesManager& getDynamicPropertiesManager() const;

    // symbol: ?getMobEvents@ServerLevel@@QEAAAEAVMobEvents@@XZ
    MCAPI class MobEvents& getMobEvents();

    // symbol: ?getMobEvents@ServerLevel@@QEBAAEBVMobEvents@@XZ
    MCAPI class MobEvents const& getMobEvents() const;

    // symbol: ?getOrAddDynamicProperties@ServerLevel@@QEAAAEAVDynamicProperties@@XZ
    MCAPI class DynamicProperties& getOrAddDynamicProperties();

    // symbol: ?setShouldSendSleepMessage@ServerLevel@@QEAAX_N@Z
    MCAPI void setShouldSendSleepMessage(bool shouldSend);

    // symbol: ?shouldSendSleepMessage@ServerLevel@@QEBA_NXZ
    MCAPI bool shouldSendSleepMessage() const;

    // symbol: ?tryGetVolumeEntityManager@ServerLevel@@QEBA?AV?$NonOwnerPointer@VVolumeEntityManagerServer@@@Bedrock@@XZ
    MCAPI class Bedrock::NonOwnerPointer<class VolumeEntityManagerServer> tryGetVolumeEntityManager() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_initializeActorManager@ServerLevel@@AEAAXXZ
    MCAPI void _initializeActorManager();

    // symbol: ?_initializeGameplayUserManager@ServerLevel@@AEAAXXZ
    MCAPI void _initializeGameplayUserManager();

    // symbol: ?_initializePlayerSleepManager@ServerLevel@@AEAAXXZ
    MCAPI void _initializePlayerSleepManager();

    // symbol: ?_initializeScoreboard@ServerLevel@@AEAAXXZ
    MCAPI void _initializeScoreboard();

    // symbol: ?_onActorEntityAdded@ServerLevel@@AEAAXAEAVActor@@@Z
    MCAPI void _onActorEntityAdded(class Actor& actor);

    // symbol: ?_onGameplayUserAdded@ServerLevel@@AEAAXAEAVEntityContext@@@Z
    MCAPI void _onGameplayUserAdded(class EntityContext& entity);

    // symbol: ?_onGameplayUserRemoved@ServerLevel@@AEAAXAEAVEntityContext@@@Z
    MCAPI void _onGameplayUserRemoved(class EntityContext& entity);

    // symbol: ?_onNewDimensionCreated@ServerLevel@@AEAAXAEAVDimension@@@Z
    MCAPI void _onNewDimensionCreated(class Dimension& dimension);

    // symbol: ?_onPlayerWakeUp@ServerLevel@@AEAAXAEAVPlayer@@@Z
    MCAPI void _onPlayerWakeUp(class Player& player);

    // symbol: ?_onRemoveActorEntityReferences@ServerLevel@@AEAAXAEAVActor@@@Z
    MCAPI void _onRemoveActorEntityReferences(class Actor& actor);

    // symbol: ?_onSleepingPlayerListUpdated@ServerLevel@@AEAAXAEBUPlayerSleepStatus@@@Z
    MCAPI void _onSleepingPlayerListUpdated(struct PlayerSleepStatus const&);

    // symbol: ?_onWakeUpAllPlayers@ServerLevel@@AEAAXXZ
    MCAPI void _onWakeUpAllPlayers();

    // symbol: ?_postReloadActorAdded@ServerLevel@@AEAAXAEAVActor@@W4ActorInitializationMethod@@@Z
    MCAPI void _postReloadActorAdded(class Actor&, ::ActorInitializationMethod);

    // NOLINTEND
};
