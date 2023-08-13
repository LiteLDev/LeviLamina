#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/TagRegistry.h"
#include "mc/common/wrapper/IDType.h"
#include "mc/common/wrapper/OwnerPtrT.h"
#include "mc/common/wrapper/SharePtrRefTraits.h"
#include "mc/common/wrapper/WeakRefT.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/Level.h"

// auto generated forward declare list
// clang-format off
namespace PositionTrackingDB { class PositionTrackingDBServer; }
// clang-format on

class ServerLevel : public ::Level {

public:
    // prevent constructor by default
    ServerLevel& operator=(ServerLevel const&) = delete;
    ServerLevel(ServerLevel const&)            = delete;
    ServerLevel()                              = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERLEVEL
    /**
     * @symbol ?_getPlayerDeathManager\@ServerLevel\@\@MEAAPEAVPlayerDeathManager\@\@XZ
     */
    MCVAPI class PlayerDeathManager* _getPlayerDeathManager();
    /**
     * @symbol ?_subTick\@ServerLevel\@\@MEAAXXZ
     */
    MCVAPI void _subTick();
    /**
     * @symbol
     * ?decrementTagCache\@ServerLevel\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$TagRegistry\@U?$IDType\@ULevelTagIDType\@\@\@\@U?$IDType\@ULevelTagSetIDType\@\@\@\@\@\@\@Z
     */
    MCVAPI void
    decrementTagCache(std::string const&, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>>&);
    /**
     * @symbol ?getClientResourcePackManager\@ServerLevel\@\@UEBAPEAVResourcePackManager\@\@XZ
     */
    MCVAPI class ResourcePackManager* getClientResourcePackManager() const;
    /**
     * @symbol ?getLevelChunkMetaDataManager\@ServerLevel\@\@UEAAPEAVLevelChunkMetaDataManager\@\@XZ
     */
    MCVAPI class LevelChunkMetaDataManager* getLevelChunkMetaDataManager();
    /**
     * @symbol ?getLevelEventCoordinator\@ServerLevel\@\@UEAAAEAVLevelEventCoordinator\@\@XZ
     */
    MCVAPI class LevelEventCoordinator& getLevelEventCoordinator();
    /**
     * @symbol ?getPlayerSleepManager\@ServerLevel\@\@UEAAAEAVPlayerSleepManager\@\@XZ
     */
    MCVAPI class PlayerSleepManager& getPlayerSleepManager();
    /**
     * @symbol ?getPlayerSleepManager\@ServerLevel\@\@UEBAAEBVPlayerSleepManager\@\@XZ
     */
    MCVAPI class PlayerSleepManager const& getPlayerSleepManager() const;
    /**
     * @symbol ?getPositionTrackerDBServer\@ServerLevel\@\@UEBAPEAVPositionTrackingDBServer\@PositionTrackingDB\@\@XZ
     */
    MCVAPI class PositionTrackingDB::PositionTrackingDBServer* getPositionTrackerDBServer() const;
    /**
     * @symbol ?getServerResourcePackManager\@ServerLevel\@\@UEBAPEAVResourcePackManager\@\@XZ
     */
    MCVAPI class ResourcePackManager* getServerResourcePackManager() const;
    /**
     * @symbol ?getThreadRandom\@ServerLevel\@\@UEBAAEAVRandom\@\@XZ
     */
    MCVAPI class Random& getThreadRandom() const;
    /**
     * @symbol ?getTradeTables\@ServerLevel\@\@UEAAPEAVTradeTables\@\@XZ
     */
    MCVAPI class TradeTables* getTradeTables();
    /**
     * @symbol
     * ?incrementTagCache\@ServerLevel\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$TagRegistry\@U?$IDType\@ULevelTagIDType\@\@\@\@U?$IDType\@ULevelTagSetIDType\@\@\@\@\@\@\@Z
     */
    MCVAPI void
    incrementTagCache(std::string const&, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>>&);
    /**
     * @symbol
     * ?initialize\@ServerLevel\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVLevelSettings\@\@PEAVLevelData\@\@AEBVExperiments\@\@PEBV23\@\@Z
     */
    MCVAPI bool
    initialize(std::string const&, class LevelSettings const&, class LevelData*, class Experiments const&, std::string const*);
    /**
     * @symbol ?loadFunctionManager\@ServerLevel\@\@UEAAXXZ
     */
    MCVAPI void loadFunctionManager();
    /**
     * @symbol ?onChunkLoaded\@ServerLevel\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@\@Z
     */
    MCVAPI void onChunkLoaded(class ChunkSource&, class LevelChunk&);
    /**
     * @symbol ?registerEventCoordinators\@ServerLevel\@\@UEAAXXZ
     */
    MCVAPI void registerEventCoordinators();
    /**
     * @symbol
     * ?runCommand\@ServerLevel\@\@UEAAXAEBVHashedString\@\@AEAVCommandOrigin\@\@W4CommandOriginSystem\@\@W4CurrentCmdVersion\@\@\@Z
     */
    MCVAPI void runCommand(
        class HashedString const&,
        class CommandOrigin&,
        enum class CommandOriginSystem,
        enum class CurrentCmdVersion
    );
    /**
     * @symbol ?runCommand\@ServerLevel\@\@UEAAXAEAVCommand\@\@AEAVCommandOrigin\@\@W4CommandOriginSystem\@\@\@Z
     */
    MCVAPI void runCommand(class Command&, class CommandOrigin&, enum class CommandOriginSystem);
    /**
     * @symbol ?setCommandsEnabled\@ServerLevel\@\@UEAAX_N\@Z
     */
    MCVAPI void setCommandsEnabled(bool);
    /**
     * @symbol ?setServerTickOffset\@ServerLevel\@\@UEAAX_J\@Z
     */
    MCVAPI void setServerTickOffset(int64_t);
    /**
     * @symbol ?setWorldTemplateOptionsUnlocked\@ServerLevel\@\@UEAAXXZ
     */
    MCVAPI void setWorldTemplateOptionsUnlocked();
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ServerLevel();
#endif
    /**
     * @symbol
     * ??0ServerLevel\@\@QEAA\@AEBV?$not_null\@V?$NonOwnerPointer\@VSoundPlayerInterface\@\@\@Bedrock\@\@\@gsl\@\@V?$OwnerPtrT\@U?$SharePtrRefTraits\@VLevelStorage\@\@\@\@\@\@AEAVIMinecraftEventing\@\@AEAVResourcePackManager\@\@3V?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@2\@AEAVMinecraftCommands\@\@AEAVScheduler\@\@AEBV?$not_null\@V?$NonOwnerPointer\@VIEntityRegistryOwner\@\@\@Bedrock\@\@\@2\@V?$WeakRefT\@UEntityRefTraits\@\@\@\@V?$unique_ptr\@VBlockComponentFactory\@\@U?$default_delete\@VBlockComponentFactory\@\@\@std\@\@\@std\@\@V?$unique_ptr\@VBlockDefinitionGroup\@\@U?$default_delete\@VBlockDefinitionGroup\@\@\@std\@\@\@std\@\@VItemRegistryRef\@\@_N_NAEBUNetworkPermissions\@\@V?$weak_ptr\@VBlockTypeRegistry\@\@\@std\@\@\@Z
     */
    MCAPI
    ServerLevel(class gsl::not_null<class Bedrock::NonOwnerPointer<class SoundPlayerInterface>> const&, class OwnerPtrT<struct SharePtrRefTraits<class LevelStorage>>, class IMinecraftEventing&, class ResourcePackManager&, class ResourcePackManager&, class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class MinecraftCommands&, class Scheduler&, class gsl::not_null<class Bedrock::NonOwnerPointer<class IEntityRegistryOwner>> const&, class WeakRefT<struct EntityRefTraits>, std::unique_ptr<class BlockComponentFactory>, std::unique_ptr<class BlockDefinitionGroup>, class ItemRegistryRef, bool, bool, struct NetworkPermissions const&, std::weak_ptr<class BlockTypeRegistry>);
    /**
     * @symbol
     * ?addServerChunksToPacket\@ServerLevel\@\@QEAAXAEBVNetworkIdentifier\@\@W4SubClientId\@\@AEAVNetworkChunkPublisherUpdatePacket\@\@\@Z
     */
    MCAPI void
    addServerChunksToPacket(class NetworkIdentifier const&, enum class SubClientId, class NetworkChunkPublisherUpdatePacket&);
    /**
     * @symbol ?clearAllGenerationRequests\@ServerLevel\@\@QEAAXAEBVNetworkIdentifier\@\@W4SubClientId\@\@\@Z
     */
    MCAPI void clearAllGenerationRequests(class NetworkIdentifier const&, enum class SubClientId);
    /**
     * @symbol ?getCommandManager\@ServerLevel\@\@QEAAAEAVCommandManager\@\@XZ
     */
    MCAPI class CommandManager& getCommandManager();
    /**
     * @symbol ?getDynamicPropertiesDefinition\@ServerLevel\@\@QEAAAEAVDynamicPropertiesDefinition\@\@XZ
     */
    MCAPI class DynamicPropertiesDefinition& getDynamicPropertiesDefinition();
    /**
     * @symbol ?getMobEvents\@ServerLevel\@\@QEAAAEAVMobEvents\@\@XZ
     */
    MCAPI class MobEvents& getMobEvents();
    /**
     * @symbol ?getMobEvents\@ServerLevel\@\@QEBAAEBVMobEvents\@\@XZ
     */
    MCAPI class MobEvents const& getMobEvents() const;
    /**
     * @symbol ?getOrAddDynamicProperties\@ServerLevel\@\@QEAAAEAVDynamicProperties\@\@XZ
     */
    MCAPI class DynamicProperties& getOrAddDynamicProperties();
    /**
     * @symbol ?hasPendingGenerationRequests\@ServerLevel\@\@QEAA_NAEBVNetworkIdentifier\@\@W4SubClientId\@\@\@Z
     */
    MCAPI bool hasPendingGenerationRequests(class NetworkIdentifier const&, enum class SubClientId);
    /**
     * @symbol
     * ?queueChunkGenerationRequest\@ServerLevel\@\@QEAAXAEBVNetworkIdentifier\@\@W4SubClientId\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI void
    queueChunkGenerationRequest(class NetworkIdentifier const&, enum class SubClientId, class ChunkPos const&);
    /**
     * @symbol ?setShouldSendSleepMessage\@ServerLevel\@\@QEAAX_N\@Z
     */
    MCAPI void setShouldSendSleepMessage(bool);
    /**
     * @symbol ?shouldSendSleepMessage\@ServerLevel\@\@QEBA_NXZ
     */
    MCAPI bool shouldSendSleepMessage() const;
    /**
     * @symbol
     * ?tryGetVolumeEntityManager\@ServerLevel\@\@QEBA?AV?$NonOwnerPointer\@VVolumeEntityManagerServer\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::NonOwnerPointer<class VolumeEntityManagerServer> tryGetVolumeEntityManager() const;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_checkBlockPermutationCap\@ServerLevel\@\@AEAAXXZ
     */
    MCAPI void _checkBlockPermutationCap();
    /**
     * @symbol ?_initializeActorManager\@ServerLevel\@\@AEAAXXZ
     */
    MCAPI void _initializeActorManager();
    /**
     * @symbol ?_initializeGameplayUserManager\@ServerLevel\@\@AEAAXXZ
     */
    MCAPI void _initializeGameplayUserManager();
    /**
     * @symbol ?_initializePlayerSleepManager\@ServerLevel\@\@AEAAXXZ
     */
    MCAPI void _initializePlayerSleepManager();
    /**
     * @symbol ?_initializeScoreboard\@ServerLevel\@\@AEAAXXZ
     */
    MCAPI void _initializeScoreboard();
    /**
     * @symbol ?_onActorEntityAdded\@ServerLevel\@\@AEAAXAEAVActor\@\@\@Z
     */
    MCAPI void _onActorEntityAdded(class Actor&);
    /**
     * @symbol ?_onGameplayUserAdded\@ServerLevel\@\@AEAAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void _onGameplayUserAdded(class EntityContext&);
    /**
     * @symbol ?_onGameplayUserRemoved\@ServerLevel\@\@AEAAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void _onGameplayUserRemoved(class EntityContext&);
    /**
     * @symbol ?_onNewDimensionCreated\@ServerLevel\@\@AEAAXAEAVDimension\@\@\@Z
     */
    MCAPI void _onNewDimensionCreated(class Dimension&);
    /**
     * @symbol ?_onPlayerWakeUp\@ServerLevel\@\@AEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void _onPlayerWakeUp(class Player&);
    /**
     * @symbol ?_onRemoveActorEntityReferences\@ServerLevel\@\@AEAAXAEAVActor\@\@\@Z
     */
    MCAPI void _onRemoveActorEntityReferences(class Actor&);
    /**
     * @symbol ?_onSleepingPlayerListUpdated\@ServerLevel\@\@AEAAXAEBUPlayerSleepStatus\@\@\@Z
     */
    MCAPI void _onSleepingPlayerListUpdated(struct PlayerSleepStatus const&);
    /**
     * @symbol ?_onWakeUpAllPlayers\@ServerLevel\@\@AEAAXXZ
     */
    MCAPI void _onWakeUpAllPlayers();
    /**
     * @symbol ?_postReloadActorAdded\@ServerLevel\@\@AEAAXAEAVActor\@\@\@Z
     */
    MCAPI void _postReloadActorAdded(class Actor&);
    // NOLINTEND
};
