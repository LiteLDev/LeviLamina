/**
 * @file  ServerLevel.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerLevel.
 *
 */
class ServerLevel {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERLEVEL
public:
    class ServerLevel& operator=(class ServerLevel const &) = delete;
    ServerLevel(class ServerLevel const &) = delete;
    ServerLevel() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERLEVEL
    /**
     * @symbol  ?consolidateLevelChunkMetaData\@ServerLevel\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void consolidateLevelChunkMetaData(class LevelChunk &);
    /**
     * @symbol  ?decrementTagCache\@ServerLevel\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$TagRegistry\@U?$IDType\@ULevelTagIDType\@\@\@\@U?$IDType\@ULevelTagSetIDType\@\@\@\@\@\@\@Z
     */
    MCVAPI void decrementTagCache(std::string const &, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>> &);
    /**
     * @symbol  ?getClientResourcePackManager\@ServerLevel\@\@UEBAPEAVResourcePackManager\@\@XZ
     */
    MCVAPI class ResourcePackManager * getClientResourcePackManager() const;
    /**
     * @symbol  ?getLevelChunkMetaDataDictionary\@ServerLevel\@\@UEBA?AV?$shared_ptr\@VLevelChunkMetaDataDictionary\@\@\@std\@\@XZ
     */
    MCVAPI class std::shared_ptr<class LevelChunkMetaDataDictionary> getLevelChunkMetaDataDictionary() const;
    /**
     * @symbol  ?getLevelEventCoordinator\@ServerLevel\@\@UEAAAEAVLevelEventCoordinator\@\@XZ
     */
    MCVAPI class LevelEventCoordinator & getLevelEventCoordinator();
    /**
     * @symbol  ?getOrCreateDimension\@ServerLevel\@\@UEAA?AV?$WeakRefT\@U?$SharePtrRefTraits\@VDimension\@\@\@\@\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCVAPI class WeakRefT<struct SharePtrRefTraits<class Dimension>> getOrCreateDimension(class AutomaticID<class Dimension, int>);
    /**
     * @symbol  ?getPositionTrackerDBServer\@ServerLevel\@\@UEBAPEAVPositionTrackingDBServer\@PositionTrackingDB\@\@XZ
     */
    MCVAPI class PositionTrackingDB::PositionTrackingDBServer * getPositionTrackerDBServer() const;
    /**
     * @symbol  ?getServerResourcePackManager\@ServerLevel\@\@UEBAPEAVResourcePackManager\@\@XZ
     */
    MCVAPI class ResourcePackManager * getServerResourcePackManager() const;
    /**
     * @symbol  ?getThreadRandom\@ServerLevel\@\@UEBAAEAVRandom\@\@XZ
     */
    MCVAPI class Random & getThreadRandom() const;
    /**
     * @symbol  ?getTradeTables\@ServerLevel\@\@UEAAPEAVTradeTables\@\@XZ
     */
    MCVAPI class TradeTables * getTradeTables();
    /**
     * @symbol  ?incrementTagCache\@ServerLevel\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$TagRegistry\@U?$IDType\@ULevelTagIDType\@\@\@\@U?$IDType\@ULevelTagSetIDType\@\@\@\@\@\@\@Z
     */
    MCVAPI void incrementTagCache(std::string const &, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>> &);
    /**
     * @symbol  ?initialize\@ServerLevel\@\@UEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVLevelSettings\@\@PEAVLevelData\@\@AEBVExperiments\@\@PEBV23\@\@Z
     */
    MCVAPI bool initialize(std::string const &, class LevelSettings const &, class LevelData *, class Experiments const &, std::string const *);
    /**
     * @symbol  ?initializeLevelChunkMetaData\@ServerLevel\@\@UEAAXAEAVLevelChunk\@\@\@Z
     */
    MCVAPI void initializeLevelChunkMetaData(class LevelChunk &);
    /**
     * @symbol  ?loadFunctionManager\@ServerLevel\@\@UEAAXXZ
     */
    MCVAPI void loadFunctionManager();
    /**
     * @symbol  ?onChunkLoaded\@ServerLevel\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@\@Z
     */
    MCVAPI void onChunkLoaded(class ChunkSource &, class LevelChunk &);
    /**
     * @symbol  ?registerEventCoordinators\@ServerLevel\@\@UEAAXXZ
     */
    MCVAPI void registerEventCoordinators();
    /**
     * @symbol  ?runCommand\@ServerLevel\@\@UEAAXAEAVCommand\@\@AEAVCommandOrigin\@\@W4CommandOriginSystem\@\@\@Z
     */
    MCVAPI void runCommand(class Command &, class CommandOrigin &, enum class CommandOriginSystem);
    /**
     * @symbol  ?runCommand\@ServerLevel\@\@UEAAXAEBVHashedString\@\@AEAVCommandOrigin\@\@W4CommandOriginSystem\@\@W4CurrentCmdVersion\@\@\@Z
     */
    MCVAPI void runCommand(class HashedString const &, class CommandOrigin &, enum class CommandOriginSystem, enum class CurrentCmdVersion);
    /**
     * @symbol  ?saveAdditionalData\@ServerLevel\@\@UEAAXXZ
     */
    MCVAPI void saveAdditionalData();
    /**
     * @symbol  ?saveDynamicProperties\@ServerLevel\@\@UEAAXXZ
     */
    MCVAPI void saveDynamicProperties();
    /**
     * @symbol  ?setCommandsEnabled\@ServerLevel\@\@UEAAX_N\@Z
     */
    MCVAPI void setCommandsEnabled(bool);
    /**
     * @symbol  ?setServerTickOffset\@ServerLevel\@\@UEAAX_J\@Z
     */
    MCVAPI void setServerTickOffset(__int64);
    /**
     * @symbol  ?setWorldTemplateOptionsUnlocked\@ServerLevel\@\@UEAAXXZ
     */
    MCVAPI void setWorldTemplateOptionsUnlocked();
    /**
     * @symbol  ?tick\@ServerLevel\@\@UEAAXXZ
     */
    MCVAPI void tick();
    /**
     * @symbol  ?updateSleepingPlayerList\@ServerLevel\@\@UEAAXXZ
     */
    MCVAPI void updateSleepingPlayerList();
    /**
     * @symbol  __unk_destructor_-1
     */
    MCVAPI ~ServerLevel();
#endif
    /**
     * @symbol  ??0ServerLevel\@\@QEAA\@AEBV?$not_null\@V?$NonOwnerPointer\@VSoundPlayerInterface\@\@\@Bedrock\@\@\@gsl\@\@V?$unique_ptr\@VLevelStorage\@\@U?$default_delete\@VLevelStorage\@\@\@std\@\@\@std\@\@V?$unique_ptr\@VLevelLooseFileStorage\@\@U?$default_delete\@VLevelLooseFileStorage\@\@\@std\@\@\@4\@AEAVIMinecraftEventing\@\@AEAVResourcePackManager\@\@4V?$not_null\@V?$NonOwnerPointer\@VStructureManager\@\@\@Bedrock\@\@\@2\@AEAVMinecraftCommands\@\@AEAVScheduler\@\@AEBV?$not_null\@V?$NonOwnerPointer\@VIEntityRegistryOwner\@\@\@Bedrock\@\@\@2\@V?$WeakRefT\@UEntityRefTraits\@\@\@\@V?$unique_ptr\@VBlockComponentFactory\@\@U?$default_delete\@VBlockComponentFactory\@\@\@std\@\@\@4\@V?$unique_ptr\@VBlockDefinitionGroup\@\@U?$default_delete\@VBlockDefinitionGroup\@\@\@std\@\@\@4\@VItemRegistryRef\@\@_NV?$weak_ptr\@VBlockTypeRegistry\@\@\@4\@\@Z
     */
    MCAPI ServerLevel(class gsl::not_null<class Bedrock::NonOwnerPointer<class SoundPlayerInterface>> const &, std::unique_ptr<class LevelStorage>, std::unique_ptr<class LevelLooseFileStorage>, class IMinecraftEventing &, class ResourcePackManager &, class ResourcePackManager &, class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class MinecraftCommands &, class Scheduler &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IEntityRegistryOwner>> const &, class WeakRefT<struct EntityRefTraits>, std::unique_ptr<class BlockComponentFactory>, std::unique_ptr<class BlockDefinitionGroup>, class ItemRegistryRef, bool, class std::weak_ptr<class BlockTypeRegistry>);
    /**
     * @symbol  ?addServerChunksToPacket\@ServerLevel\@\@QEAAXAEBVNetworkIdentifier\@\@W4SubClientId\@\@AEAVNetworkChunkPublisherUpdatePacket\@\@\@Z
     */
    MCAPI void addServerChunksToPacket(class NetworkIdentifier const &, enum class SubClientId, class NetworkChunkPublisherUpdatePacket &);
    /**
     * @symbol  ?clearAllGenerationRequests\@ServerLevel\@\@QEAAXAEBVNetworkIdentifier\@\@W4SubClientId\@\@\@Z
     */
    MCAPI void clearAllGenerationRequests(class NetworkIdentifier const &, enum class SubClientId);
    /**
     * @symbol  ?getCommands\@ServerLevel\@\@QEAAAEAVMinecraftCommands\@\@XZ
     */
    MCAPI class MinecraftCommands & getCommands();
    /**
     * @symbol  ?getDynamicPropertiesDefinition\@ServerLevel\@\@QEAAAEAVDynamicPropertiesDefinition\@\@XZ
     */
    MCAPI class DynamicPropertiesDefinition & getDynamicPropertiesDefinition();
    /**
     * @symbol  ?getFunctionManager\@ServerLevel\@\@QEAAAEAVFunctionManager\@\@XZ
     */
    MCAPI class FunctionManager & getFunctionManager();
    /**
     * @symbol  ?getMobEvents\@ServerLevel\@\@QEAAAEAVMobEvents\@\@XZ
     */
    MCAPI class MobEvents & getMobEvents();
    /**
     * @symbol  ?getMobEvents\@ServerLevel\@\@QEBAAEBVMobEvents\@\@XZ
     */
    MCAPI class MobEvents const & getMobEvents() const;
    /**
     * @symbol  ?getOrAddDynamicProperties\@ServerLevel\@\@QEAAAEAVDynamicProperties\@\@XZ
     */
    MCAPI class DynamicProperties & getOrAddDynamicProperties();
    /**
     * @symbol  ?hasPendingGenerationRequests\@ServerLevel\@\@QEAA_NAEBVNetworkIdentifier\@\@W4SubClientId\@\@\@Z
     */
    MCAPI bool hasPendingGenerationRequests(class NetworkIdentifier const &, enum class SubClientId);
    /**
     * @symbol  ?queueChunkGenerationRequest\@ServerLevel\@\@QEAAXAEBVNetworkIdentifier\@\@W4SubClientId\@\@AEBVChunkPos\@\@\@Z
     */
    MCAPI void queueChunkGenerationRequest(class NetworkIdentifier const &, enum class SubClientId, class ChunkPos const &);
    /**
     * @symbol  ?setShouldSendSleepMessage\@ServerLevel\@\@QEAAX_N\@Z
     */
    MCAPI void setShouldSendSleepMessage(bool);
    /**
     * @symbol  ?shouldSendSleepMessage\@ServerLevel\@\@QEBA_NXZ
     */
    MCAPI bool shouldSendSleepMessage() const;
    /**
     * @symbol  ?tryGetVolumeEntityManager\@ServerLevel\@\@QEBA?AV?$NonOwnerPointer\@VVolumeEntityManagerServer\@\@\@Bedrock\@\@XZ
     */
    MCAPI class Bedrock::NonOwnerPointer<class VolumeEntityManagerServer> tryGetVolumeEntityManager() const;

//private:
    /**
     * @symbol  ?_initializeActorManager\@ServerLevel\@\@AEAAXXZ
     */
    MCAPI void _initializeActorManager();
    /**
     * @symbol  ?_onActorEntityAdded\@ServerLevel\@\@AEAAXAEAVActor\@\@\@Z
     */
    MCAPI void _onActorEntityAdded(class Actor &);
    /**
     * @symbol  ?_onRemoveActorEntityReferences\@ServerLevel\@\@AEAAXAEAVActor\@\@\@Z
     */
    MCAPI void _onRemoveActorEntityReferences(class Actor &);
    /**
     * @symbol  ?_postReloadActorAdded\@ServerLevel\@\@AEAAXAEAVActor\@\@\@Z
     */
    MCAPI void _postReloadActorAdded(class Actor &);

private:

};