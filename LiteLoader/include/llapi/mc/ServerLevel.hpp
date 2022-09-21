/**
 * @file  MC/ServerLevel.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   -95819964
     * @symbol ?consolidateLevelChunkMetaData@ServerLevel@@UEAAXAEAVLevelChunk@@@Z
     */
    MCVAPI void consolidateLevelChunkMetaData(class LevelChunk &);
    /**
     * @hash   -2033061880
     * @symbol ?createDimension@ServerLevel@@UEAAPEAVDimension@@V?$AutomaticID@VDimension@@H@@@Z
     */
    MCVAPI class Dimension * createDimension(class AutomaticID<class Dimension, int>);
    /**
     * @hash   801419298
     * @symbol ?decrementTagCache@ServerLevel@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$TagRegistry@U?$IDType@ULevelTagIDType@@@@U?$IDType@ULevelTagSetIDType@@@@@@@Z
     */
    MCVAPI void decrementTagCache(std::string const &, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>> &);
    /**
     * @hash   1956104610
     * @symbol ?getClientResourcePackManager@ServerLevel@@UEBAPEAVResourcePackManager@@XZ
     */
    MCVAPI class ResourcePackManager * getClientResourcePackManager() const;
    /**
     * @hash   166517439
     * @symbol ?getLevelChunkMetaDataDictionary@ServerLevel@@UEBA?AV?$shared_ptr@VLevelChunkMetaDataDictionary@@@std@@XZ
     */
    MCVAPI class std::shared_ptr<class LevelChunkMetaDataDictionary> getLevelChunkMetaDataDictionary() const;
    /**
     * @hash   784473154
     * @symbol ?getLevelEventCoordinator@ServerLevel@@UEAAAEAVLevelEventCoordinator@@XZ
     */
    MCVAPI class LevelEventCoordinator & getLevelEventCoordinator();
    /**
     * @hash   -956830354
     * @symbol ?getPositionTrackerDBServer@ServerLevel@@UEBAPEAVPositionTrackingDBServer@PositionTrackingDB@@XZ
     */
    MCVAPI class PositionTrackingDB::PositionTrackingDBServer * getPositionTrackerDBServer() const;
    /**
     * @hash   -1536697318
     * @symbol ?getServerResourcePackManager@ServerLevel@@UEBAPEAVResourcePackManager@@XZ
     */
    MCVAPI class ResourcePackManager * getServerResourcePackManager() const;
    /**
     * @hash   -1122196161
     * @symbol ?getThreadRandom@ServerLevel@@UEBAAEAVRandom@@XZ
     */
    MCVAPI class Random & getThreadRandom() const;
    /**
     * @hash   1592834846
     * @symbol ?getTradeTables@ServerLevel@@UEAAPEAVTradeTables@@XZ
     */
    MCVAPI class TradeTables * getTradeTables();
    /**
     * @hash   -1902849762
     * @symbol ?incrementTagCache@ServerLevel@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$TagRegistry@U?$IDType@ULevelTagIDType@@@@U?$IDType@ULevelTagSetIDType@@@@@@@Z
     */
    MCVAPI void incrementTagCache(std::string const &, class TagRegistry<struct IDType<struct LevelTagIDType>, struct IDType<struct LevelTagSetIDType>> &);
    /**
     * @hash   1908384721
     * @symbol ?initialize@ServerLevel@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVLevelSettings@@PEAVLevelData@@AEBVExperiments@@PEBV23@@Z
     */
    MCVAPI bool initialize(std::string const &, class LevelSettings const &, class LevelData *, class Experiments const &, std::string const *);
    /**
     * @hash   -487433971
     * @symbol ?initializeLevelChunkMetaData@ServerLevel@@UEAAXAEAVLevelChunk@@@Z
     */
    MCVAPI void initializeLevelChunkMetaData(class LevelChunk &);
    /**
     * @hash   -1674486731
     * @symbol ?loadFunctionManager@ServerLevel@@UEAAXXZ
     */
    MCVAPI void loadFunctionManager();
    /**
     * @hash   15017872
     * @symbol ?onChunkLoaded@ServerLevel@@UEAAXAEAVChunkSource@@AEAVLevelChunk@@@Z
     */
    MCVAPI void onChunkLoaded(class ChunkSource &, class LevelChunk &);
    /**
     * @hash   -1254515344
     * @symbol ?registerEventCoordinators@ServerLevel@@UEAAXXZ
     */
    MCVAPI void registerEventCoordinators();
    /**
     * @hash   360940986
     * @symbol ?runCommand@ServerLevel@@UEAAXAEAVCommand@@AEAVCommandOrigin@@W4CommandOriginSystem@@@Z
     */
    MCVAPI void runCommand(class Command &, class CommandOrigin &, enum CommandOriginSystem);
    /**
     * @hash   -2090370009
     * @symbol ?runCommand@ServerLevel@@UEAAXAEBVHashedString@@AEAVCommandOrigin@@W4CommandOriginSystem@@W4CurrentCmdVersion@@@Z
     */
    MCVAPI void runCommand(class HashedString const &, class CommandOrigin &, enum CommandOriginSystem, enum CurrentCmdVersion);
    /**
     * @hash   2055608900
     * @symbol ?saveAdditionalData@ServerLevel@@UEAAXXZ
     */
    MCVAPI void saveAdditionalData();
    /**
     * @hash   481086827
     * @symbol ?saveDynamicProperties@ServerLevel@@UEAAXXZ
     */
    MCVAPI void saveDynamicProperties();
    /**
     * @hash   -1717703185
     * @symbol ?setCommandsEnabled@ServerLevel@@UEAAX_N@Z
     */
    MCVAPI void setCommandsEnabled(bool);
    /**
     * @hash   1166522158
     * @symbol ?setServerTickOffset@ServerLevel@@UEAAX_J@Z
     */
    MCVAPI void setServerTickOffset(__int64);
    /**
     * @hash   1250332589
     * @symbol ?setWorldTemplateOptionsUnlocked@ServerLevel@@UEAAXXZ
     */
    MCVAPI void setWorldTemplateOptionsUnlocked();
    /**
     * @hash   -193352413
     * @symbol ?tick@ServerLevel@@UEAAXXZ
     */
    MCVAPI void tick();
    /**
     * @hash   -2051826167
     * @symbol ?updateSleepingPlayerList@ServerLevel@@UEAAXXZ
     */
    MCVAPI void updateSleepingPlayerList();
#endif
    /**
     * @symbol ??0ServerLevel@@QEAA@AEBV?$not_null@V?$NonOwnerPointer@VSoundPlayerInterface@@@Bedrock@@@gsl@@V?$unique_ptr@VLevelStorage@@U?$default_delete@VLevelStorage@@@std@@@std@@V?$unique_ptr@VLevelLooseFileStorage@@U?$default_delete@VLevelLooseFileStorage@@@std@@@4@AEAVIMinecraftEventing@@AEAVResourcePackManager@@4V?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@2@AEAVMinecraftCommands@@AEAVScheduler@@AEBV?$not_null@V?$NonOwnerPointer@VIEntityRegistryOwner@@@Bedrock@@@2@V?$WeakRefT@UEntityRefTraits@@@@V?$unique_ptr@VBlockComponentFactory@@U?$default_delete@VBlockComponentFactory@@@std@@@4@V?$unique_ptr@VBlockDefinitionGroup@@U?$default_delete@VBlockDefinitionGroup@@@std@@@4@VItemRegistryRef@@_NV?$weak_ptr@VBlockTypeRegistry@@@4@@Z
     */
    MCAPI ServerLevel(class gsl::not_null<class Bedrock::NonOwnerPointer<class SoundPlayerInterface>> const &, std::unique_ptr<class LevelStorage>, std::unique_ptr<class LevelLooseFileStorage>, class IMinecraftEventing &, class ResourcePackManager &, class ResourcePackManager &, class gsl::not_null<class Bedrock::NonOwnerPointer<class StructureManager>>, class MinecraftCommands &, class Scheduler &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IEntityRegistryOwner>> const &, class WeakRefT<struct EntityRefTraits>, std::unique_ptr<class BlockComponentFactory>, std::unique_ptr<class BlockDefinitionGroup>, class ItemRegistryRef, bool, class std::weak_ptr<class BlockTypeRegistry>);
    /**
     * @hash   1310574010
     * @symbol ?getCommands@ServerLevel@@QEAAAEAVMinecraftCommands@@XZ
     */
    MCAPI class MinecraftCommands & getCommands();
    /**
     * @hash   -1480311878
     * @symbol ?getDynamicPropertiesDefinition@ServerLevel@@QEAAAEAVDynamicPropertiesDefinition@@XZ
     */
    MCAPI class DynamicPropertiesDefinition & getDynamicPropertiesDefinition();
    /**
     * @hash   -650556822
     * @symbol ?getFunctionManager@ServerLevel@@QEAAAEAVFunctionManager@@XZ
     */
    MCAPI class FunctionManager & getFunctionManager();
    /**
     * @hash   -1517303958
     * @symbol ?getMobEvents@ServerLevel@@QEAAAEAVMobEvents@@XZ
     */
    MCAPI class MobEvents & getMobEvents();
    /**
     * @hash   -319102748
     * @symbol ?getMobEvents@ServerLevel@@QEBAAEBVMobEvents@@XZ
     */
    MCAPI class MobEvents const & getMobEvents() const;
    /**
     * @hash   633155640
     * @symbol ?getOrAddDynamicProperties@ServerLevel@@QEAAAEAVDynamicProperties@@XZ
     */
    MCAPI class DynamicProperties & getOrAddDynamicProperties();
    /**
     * @hash   1526878032
     * @symbol ?setShouldSendSleepMessage@ServerLevel@@QEAAX_N@Z
     */
    MCAPI void setShouldSendSleepMessage(bool);
    /**
     * @hash   1377038942
     * @symbol ?shouldSendSleepMessage@ServerLevel@@QEBA_NXZ
     */
    MCAPI bool shouldSendSleepMessage() const;
    /**
     * @hash   169203595
     * @symbol ?tryGetVolumeEntityManager@ServerLevel@@QEBA?AV?$NonOwnerPointer@VVolumeEntityManagerServer@@@Bedrock@@XZ
     */
    MCAPI class Bedrock::NonOwnerPointer<class VolumeEntityManagerServer> tryGetVolumeEntityManager() const;

};