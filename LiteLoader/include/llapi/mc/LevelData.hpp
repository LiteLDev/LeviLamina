/**
 * @file  LevelData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Social.hpp"
#include "RakNet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelData.
 *
 */
class LevelData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELDATA
public:
    class LevelData& operator=(class LevelData const &) = delete;
    LevelData(class LevelData const &) = delete;
    LevelData() = delete;
#endif

public:
    /**
     * @hash   -1512472669
     * @symbol ??0LevelData@@QEAA@_N@Z
     */
    MCAPI LevelData(bool);
    /**
     * @hash   -1071038506
     * @symbol ??0LevelData@@QEAA@AEBVLevelSettings@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4GeneratorType@@AEBVBlockPos@@_NW4EducationEditionOffer@@MM@Z
     */
    MCAPI LevelData(class LevelSettings const &, std::string const &, enum class GeneratorType, class BlockPos const &, bool, enum class EducationEditionOffer, float, float);
    /**
     * @hash   416214712
     * @symbol ?_getValue@LevelData@@QEBAPEBULevelDataValue@@AEBVHashedString@@@Z
     */
    MCAPI struct LevelDataValue const * _getValue(class HashedString const &) const;
    /**
     * @hash   -213834060
     * @symbol ?achievementsWillBeDisabledOnLoad@LevelData@@QEBA_NXZ
     */
    MCAPI bool achievementsWillBeDisabledOnLoad() const;
    /**
     * @hash   643945846
     * @symbol ?createTag@LevelData@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> createTag() const;
    /**
     * @hash   1150924957
     * @symbol ?disableAchievements@LevelData@@QEAAXXZ
     */
    MCAPI void disableAchievements();
    /**
     * @hash   -1584067388
     * @symbol ?educationFeaturesEnabled@LevelData@@QEBA_NXZ
     */
    MCAPI bool educationFeaturesEnabled() const;
    /**
     * @hash   1266411398
     * @symbol ?getAdventureSettings@LevelData@@QEBAAEBUAdventureSettings@@XZ
     */
    MCAPI struct AdventureSettings const & getAdventureSettings() const;
    /**
     * @hash   -710766900
     * @symbol ?getAdventureSettings@LevelData@@QEAAAEAUAdventureSettings@@XZ
     */
    MCAPI struct AdventureSettings & getAdventureSettings();
    /**
     * @hash   2139245636
     * @symbol ?getBaseGameVersion@LevelData@@QEBAAEBVBaseGameVersion@@XZ
     */
    MCAPI class BaseGameVersion const & getBaseGameVersion() const;
    /**
     * @hash   2048120942
     * @symbol ?getBiomeOverride@LevelData@@QEBA?BV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const getBiomeOverride() const;
    /**
     * @hash   -497046924
     * @symbol ?getBonusChestSpawned@LevelData@@QEBA_NXZ
     */
    MCAPI bool getBonusChestSpawned() const;
    /**
     * @hash   197150602
     * @symbol ?getChatRestrictionLevel@LevelData@@QEBA?AW4ChatRestrictionLevel@@XZ
     */
    MCAPI enum class ChatRestrictionLevel getChatRestrictionLevel() const;
    /**
     * @hash   756854212
     * @symbol ?getCurrentTick@LevelData@@QEBAAEBUTick@@XZ
     */
    MCAPI struct Tick const & getCurrentTick() const;
    /**
     * @hash   -1746494092
     * @symbol ?getCustomSkinsDisabled@LevelData@@QEBA_NXZ
     */
    MCAPI bool getCustomSkinsDisabled() const;
    /**
     * @hash   1508703122
     * @symbol ?getDefaultAbilities@LevelData@@QEAAAEAVAbilities@@XZ
     */
    MCAPI class Abilities & getDefaultAbilities();
    /**
     * @hash   952403012
     * @symbol ?getDefaultPermissions@LevelData@@QEAAAEAVPermissionsHandler@@XZ
     */
    MCAPI class PermissionsHandler & getDefaultPermissions();
    /**
     * @hash   1181004994
     * @symbol ?getDefaultPermissions@LevelData@@QEBAAEBVPermissionsHandler@@XZ
     */
    MCAPI class PermissionsHandler const & getDefaultPermissions() const;
    /**
     * @hash   -1796492274
     * @symbol ?getEduSharedUriResource@LevelData@@QEBAAEBVCompoundTag@@XZ
     */
    MCAPI class CompoundTag const & getEduSharedUriResource() const;
    /**
     * @hash   -235195988
     * @symbol ?getEducationEditionOffer@LevelData@@QEBA?AW4EducationEditionOffer@@XZ
     */
    MCAPI enum class EducationEditionOffer getEducationEditionOffer() const;
    /**
     * @hash   -1169266562
     * @symbol ?getEducationProductId@LevelData@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getEducationProductId() const;
    /**
     * @hash   683548234
     * @symbol ?getExperiments@LevelData@@QEAAAEAVExperiments@@XZ
     */
    MCAPI class Experiments & getExperiments();
    /**
     * @hash   413123076
     * @symbol ?getExperiments@LevelData@@QEBAAEBVExperiments@@XZ
     */
    MCAPI class Experiments const & getExperiments() const;
    /**
     * @hash   1071863680
     * @symbol ?getFlatWorldGeneratorOptions@LevelData@@QEBAAEBVValue@Json@@XZ
     */
    MCAPI class Json::Value const & getFlatWorldGeneratorOptions() const;
    /**
     * @hash   453770852
     * @symbol ?getForceGameType@LevelData@@QEBA_NXZ
     */
    MCAPI bool getForceGameType() const;
    /**
     * @hash   -653200540
     * @symbol ?getGameDifficulty@LevelData@@QEBA?AW4Difficulty@@XZ
     */
    MCAPI enum class Difficulty getGameDifficulty() const;
    /**
     * @hash   197781780
     * @symbol ?getGameRules@LevelData@@QEBAAEBVGameRules@@XZ
     */
    MCAPI class GameRules const & getGameRules() const;
    /**
     * @hash   -1616425318
     * @symbol ?getGameRules@LevelData@@QEAAAEAVGameRules@@XZ
     */
    MCAPI class GameRules & getGameRules();
    /**
     * @hash   -674180430
     * @symbol ?getGameType@LevelData@@QEBA?AW4GameType@@XZ
     */
    MCAPI enum class GameType getGameType() const;
    /**
     * @hash   815297416
     * @symbol ?getGenerator@LevelData@@QEBA?AW4GeneratorType@@XZ
     */
    MCAPI enum class GeneratorType getGenerator() const;
    /**
     * @hash   -331990430
     * @symbol ?getLANBroadcast@LevelData@@QEBA_NXZ
     */
    MCAPI bool getLANBroadcast() const;
    /**
     * @hash   -238064974
     * @symbol ?getLANBroadcastIntent@LevelData@@QEBA_NXZ
     */
    MCAPI bool getLANBroadcastIntent() const;
    /**
     * @hash   322740579
     * @symbol ?getLastPlayed@LevelData@@QEBA_JXZ
     */
    MCAPI __int64 getLastPlayed() const;
    /**
     * @hash   380266286
     * @symbol ?getLevelName@LevelData@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getLevelName() const;
    /**
     * @hash   -1145937338
     * @symbol ?getLightningLevel@LevelData@@QEBAMXZ
     */
    MCAPI float getLightningLevel() const;
    /**
     * @hash   1597186184
     * @symbol ?getLightningTime@LevelData@@QEBAHXZ
     */
    MCAPI int getLightningTime() const;
    /**
     * @hash   883309760
     * @symbol ?getLimitedWorldDepth@LevelData@@QEBAHXZ
     */
    MCAPI int getLimitedWorldDepth() const;
    /**
     * @hash   -1614869946
     * @symbol ?getLimitedWorldWidth@LevelData@@QEBAHXZ
     */
    MCAPI int getLimitedWorldWidth() const;
    /**
     * @hash   407737428
     * @symbol ?getLoadedPlayerTag@LevelData@@QEAAAEAVCompoundTag@@XZ
     */
    MCAPI class CompoundTag & getLoadedPlayerTag();
    /**
     * @hash   660984868
     * @symbol ?getMultiplayerGameIntent@LevelData@@QEBA_NXZ
     */
    MCAPI bool getMultiplayerGameIntent() const;
    /**
     * @hash   -1929309138
     * @symbol ?getNetherScale@LevelData@@QEBAHXZ
     */
    MCAPI int getNetherScale() const;
    /**
     * @hash   1281242834
     * @symbol ?getNetherType@LevelData@@QEBA?AW4NetherWorldType@@XZ
     */
    MCAPI enum class NetherWorldType getNetherType() const;
    /**
     * @hash   1263725266
     * @symbol ?getOnlySpawnV1Villagers@LevelData@@QEBA_NXZ
     */
    MCAPI bool getOnlySpawnV1Villagers() const;
    /**
     * @hash   -804133596
     * @symbol ?getPersonaDisabled@LevelData@@QEBA_NXZ
     */
    MCAPI bool getPersonaDisabled() const;
    /**
     * @hash   1951572808
     * @symbol ?getPlatformBroadcastIntent@LevelData@@QEBA?AW4GamePublishSetting@Social@@XZ
     */
    MCAPI enum class Social::GamePublishSetting getPlatformBroadcastIntent() const;
    /**
     * @hash   140032486
     * @symbol ?getPlatformBroadcastMode@LevelData@@QEBA?AW4GamePublishSetting@Social@@XZ
     */
    MCAPI enum class Social::GamePublishSetting getPlatformBroadcastMode() const;
    /**
     * @hash   -1794105380
     * @symbol ?getPremiumTemplateContentIdentity@LevelData@@QEBAAEBVContentIdentity@@XZ
     */
    MCAPI class ContentIdentity const & getPremiumTemplateContentIdentity() const;
    /**
     * @hash   -1882994904
     * @symbol ?getRainLevel@LevelData@@QEBAMXZ
     */
    MCAPI float getRainLevel() const;
    /**
     * @hash   2128120262
     * @symbol ?getRainTime@LevelData@@QEBAHXZ
     */
    MCAPI int getRainTime() const;
    /**
     * @hash   1283629918
     * @symbol ?getSeed@LevelData@@QEBA?AVLevelSeed64@@XZ
     */
    MCAPI class LevelSeed64 getSeed() const;
    /**
     * @hash   -2145647350
     * @symbol ?getServerChunkTickRange@LevelData@@QEBAIXZ
     */
    MCAPI unsigned int getServerChunkTickRange() const;
    /**
     * @hash   -2004175744
     * @symbol ?getSpawnPos@LevelData@@QEBAAEBVBlockPos@@XZ
     */
    MCAPI class BlockPos const & getSpawnPos() const;
    /**
     * @hash   -801180826
     * @symbol ?getSpawnSettings@LevelData@@QEBAAEBUSpawnSettings@@XZ
     */
    MCAPI struct SpawnSettings const & getSpawnSettings() const;
    /**
     * @hash   1178788368
     * @symbol ?getStorageVersion@LevelData@@QEBA?AW4StorageVersion@@XZ
     */
    MCAPI enum class StorageVersion getStorageVersion() const;
    /**
     * @hash   1785877554
     * @symbol ?getStoredGenerator@LevelData@@QEBA?AW4GeneratorType@@XZ
     */
    MCAPI enum class GeneratorType getStoredGenerator() const;
    /**
     * @hash   -732735800
     * @symbol ?getTagData@LevelData@@QEAAXAEBVCompoundTag@@@Z
     */
    MCAPI void getTagData(class CompoundTag const &);
    /**
     * @hash   2002239742
     * @symbol ?getTime@LevelData@@QEBAHXZ
     */
    MCAPI int getTime() const;
    /**
     * @hash   -128071612
     * @symbol ?getUseMsaGamertagsOnly@LevelData@@QEBA_NXZ
     */
    MCAPI bool getUseMsaGamertagsOnly() const;
    /**
     * @hash   -750386334
     * @symbol ?getWorldCenter@LevelData@@QEBAAEBVBlockPos@@XZ
     */
    MCAPI class BlockPos const & getWorldCenter() const;
    /**
     * @hash   -1534539454
     * @symbol ?getWorldStartCount@LevelData@@QEBAIXZ
     */
    MCAPI unsigned int getWorldStartCount() const;
    /**
     * @hash   -973927598
     * @symbol ?getWorldTemplateIdentity@LevelData@@QEBAAEBUPackIdVersion@@XZ
     */
    MCAPI struct PackIdVersion const & getWorldTemplateIdentity() const;
    /**
     * @hash   -264379202
     * @symbol ?getWorldVersion@LevelData@@QEBA?AW4WorldVersion@@XZ
     */
    MCAPI enum class WorldVersion getWorldVersion() const;
    /**
     * @hash   577719812
     * @symbol ?getXBLBroadcastIntent@LevelData@@QEBA?AW4GamePublishSetting@Social@@XZ
     */
    MCAPI enum class Social::GamePublishSetting getXBLBroadcastIntent() const;
    /**
     * @hash   374737826
     * @symbol ?getXBLBroadcastMode@LevelData@@QEBA?AW4GamePublishSetting@Social@@XZ
     */
    MCAPI enum class Social::GamePublishSetting getXBLBroadcastMode() const;
    /**
     * @hash   279656082
     * @symbol ?hasAchievementsDisabled@LevelData@@QEBA_NXZ
     */
    MCAPI bool hasAchievementsDisabled() const;
    /**
     * @hash   744990436
     * @symbol ?hasBonusChestEnabled@LevelData@@QEBA_NXZ
     */
    MCAPI bool hasBonusChestEnabled() const;
    /**
     * @hash   -2086390156
     * @symbol ?hasCommandsEnabled@LevelData@@QEBA_NXZ
     */
    MCAPI bool hasCommandsEnabled() const;
    /**
     * @hash   433295778
     * @symbol ?hasConfirmedPlatformLockedContent@LevelData@@QEBA_NXZ
     */
    MCAPI bool hasConfirmedPlatformLockedContent() const;
    /**
     * @hash   2103120690
     * @symbol ?hasLockedBehaviorPack@LevelData@@QEBA_NXZ
     */
    MCAPI bool hasLockedBehaviorPack() const;
    /**
     * @hash   -491127102
     * @symbol ?hasLockedResourcePack@LevelData@@QEBA_NXZ
     */
    MCAPI bool hasLockedResourcePack() const;
    /**
     * @hash   1689354354
     * @symbol ?hasMapsCenteredToOrigin@LevelData@@QEBA_NXZ
     */
    MCAPI bool hasMapsCenteredToOrigin() const;
    /**
     * @hash   755643588
     * @symbol ?hasStartWithMapEnabled@LevelData@@QEBA_NXZ
     */
    MCAPI bool hasStartWithMapEnabled() const;
    /**
     * @hash   1261124445
     * @symbol ?incrementTick@LevelData@@QEAAXXZ
     */
    MCAPI void incrementTick();
    /**
     * @hash   -65528830
     * @symbol ?isEditorWorld@LevelData@@QEBA_NXZ
     */
    MCAPI bool isEditorWorld() const;
    /**
     * @hash   1492367474
     * @symbol ?isEducationEditionLevel@LevelData@@QEBA_NXZ
     */
    MCAPI bool isEducationEditionLevel() const;
    /**
     * @hash   486523876
     * @symbol ?isFromLockedTemplate@LevelData@@QEBA_NXZ
     */
    MCAPI bool isFromLockedTemplate() const;
    /**
     * @hash   -813908334
     * @symbol ?isFromWorldTemplate@LevelData@@QEBA_NXZ
     */
    MCAPI bool isFromWorldTemplate() const;
    /**
     * @hash   -748422398
     * @symbol ?isLegacyLevel@LevelData@@QEBA_NXZ
     */
    MCAPI bool isLegacyLevel() const;
    /**
     * @hash   1065186002
     * @symbol ?isLightning@LevelData@@QEBA_NXZ
     */
    MCAPI bool isLightning() const;
    /**
     * @hash   -1029747742
     * @symbol ?isMultiplayerGame@LevelData@@QEBA_NXZ
     */
    MCAPI bool isMultiplayerGame() const;
    /**
     * @hash   606246644
     * @symbol ?isPremiumWorldTemplate@LevelData@@QEBA_NXZ
     */
    MCAPI bool isPremiumWorldTemplate() const;
    /**
     * @hash   851541842
     * @symbol ?isRaining@LevelData@@QEBA_NXZ
     */
    MCAPI bool isRaining() const;
    /**
     * @hash   -657847740
     * @symbol ?isTexturepacksRequired@LevelData@@QEBA_NXZ
     */
    MCAPI bool isTexturepacksRequired() const;
    /**
     * @hash   -56476846
     * @symbol ?isWorldTemplateOptionLocked@LevelData@@QEBA_NXZ
     */
    MCAPI bool isWorldTemplateOptionLocked() const;
    /**
     * @hash   -1610482544
     * @symbol ??4LevelData@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class LevelData & operator=(class LevelData &&);
    /**
     * @hash   309376909
     * @symbol ?recordStartUp@LevelData@@QEAAXXZ
     */
    MCAPI void recordStartUp();
    /**
     * @hash   1381036754
     * @symbol ?setBaseGameVersion@LevelData@@QEAAXAEBVBaseGameVersion@@@Z
     */
    MCAPI void setBaseGameVersion(class BaseGameVersion const &);
    /**
     * @hash   1919657864
     * @symbol ?setBonusChestSpawned@LevelData@@QEAAX_N@Z
     */
    MCAPI void setBonusChestSpawned(bool);
    /**
     * @hash   -74096252
     * @symbol ?setChatRestrictionLevel@LevelData@@QEAAXW4ChatRestrictionLevel@@@Z
     */
    MCAPI void setChatRestrictionLevel(enum class ChatRestrictionLevel);
    /**
     * @hash   -137126584
     * @symbol ?setCommandsEnabled@LevelData@@QEAAX_N@Z
     */
    MCAPI void setCommandsEnabled(bool);
    /**
     * @hash   -1248535336
     * @symbol ?setCustomSkinsDisabled@LevelData@@QEAAX_N@Z
     */
    MCAPI void setCustomSkinsDisabled(bool);
    /**
     * @hash   -630194088
     * @symbol ?setDataDrivenGenerator@LevelData@@QEAAXW4GeneratorType@@@Z
     */
    MCAPI void setDataDrivenGenerator(enum class GeneratorType);
    /**
     * @hash   -11419706
     * @symbol ?setEduSharedUriResource@LevelData@@QEAAXAEBUEduSharedUriResource@@@Z
     */
    MCAPI void setEduSharedUriResource(struct EduSharedUriResource const &);
    /**
     * @hash   -1391393628
     * @symbol ?setEducationEditionOffer@LevelData@@QEAAXW4EducationEditionOffer@@@Z
     */
    MCAPI void setEducationEditionOffer(enum class EducationEditionOffer);
    /**
     * @hash   1581589284
     * @symbol ?setEducationOid@LevelData@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setEducationOid(std::string const &);
    /**
     * @hash   -357458248
     * @symbol ?setForceGameType@LevelData@@QEAAX_N@Z
     */
    MCAPI void setForceGameType(bool);
    /**
     * @hash   2090012510
     * @symbol ?setGameDifficulty@LevelData@@QEAAXW4Difficulty@@@Z
     */
    MCAPI void setGameDifficulty(enum class Difficulty);
    /**
     * @hash   1064928044
     * @symbol ?setGameType@LevelData@@QEAAXW4GameType@@@Z
     */
    MCAPI void setGameType(enum class GameType);
    /**
     * @hash   164977212
     * @symbol ?setGenerator@LevelData@@QEAAXW4GeneratorType@@@Z
     */
    MCAPI void setGenerator(enum class GeneratorType);
    /**
     * @hash   -679383608
     * @symbol ?setHasLockedBehaviorPack@LevelData@@QEAAX_N@Z
     */
    MCAPI void setHasLockedBehaviorPack(bool);
    /**
     * @hash   502867560
     * @symbol ?setHasLockedResourcePack@LevelData@@QEAAX_N@Z
     */
    MCAPI void setHasLockedResourcePack(bool);
    /**
     * @hash   -554391158
     * @symbol ?setLANBroadcast@LevelData@@QEAAX_N@Z
     */
    MCAPI void setLANBroadcast(bool);
    /**
     * @hash   -1706583718
     * @symbol ?setLANBroadcastIntent@LevelData@@QEAAX_N@Z
     */
    MCAPI void setLANBroadcastIntent(bool);
    /**
     * @hash   445156420
     * @symbol ?setLevelName@LevelData@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setLevelName(std::string const &);
    /**
     * @hash   32191468
     * @symbol ?setLightningLevel@LevelData@@QEAAXM@Z
     */
    MCAPI void setLightningLevel(float);
    /**
     * @hash   783586462
     * @symbol ?setLightningTime@LevelData@@QEAAXH@Z
     */
    MCAPI void setLightningTime(int);
    /**
     * @hash   -820069368
     * @symbol ?setMultiplayerGame@LevelData@@QEAAX_N@Z
     */
    MCAPI void setMultiplayerGame(bool);
    /**
     * @hash   -490398376
     * @symbol ?setMultiplayerGameIntent@LevelData@@QEAAX_N@Z
     */
    MCAPI void setMultiplayerGameIntent(bool);
    /**
     * @hash   610362282
     * @symbol ?setOnlySpawnV1Villagers@LevelData@@QEAAX_N@Z
     */
    MCAPI void setOnlySpawnV1Villagers(bool);
    /**
     * @hash   1038068920
     * @symbol ?setPersonaDisabled@LevelData@@QEAAX_N@Z
     */
    MCAPI void setPersonaDisabled(bool);
    /**
     * @hash   -370062448
     * @symbol ?setPlatformBroadcastIntent@LevelData@@QEAAXW4GamePublishSetting@Social@@@Z
     */
    MCAPI void setPlatformBroadcastIntent(enum class Social::GamePublishSetting);
    /**
     * @hash   709117714
     * @symbol ?setPlatformBroadcastMode@LevelData@@QEAAXW4GamePublishSetting@Social@@@Z
     */
    MCAPI void setPlatformBroadcastMode(enum class Social::GamePublishSetting);
    /**
     * @hash   1839245362
     * @symbol ?setPremiumTemplateContentIdentity@LevelData@@QEAAXAEBVContentIdentity@@@Z
     */
    MCAPI void setPremiumTemplateContentIdentity(class ContentIdentity const &);
    /**
     * @hash   2130346394
     * @symbol ?setRainLevel@LevelData@@QEAAXM@Z
     */
    MCAPI void setRainLevel(float);
    /**
     * @hash   1959870736
     * @symbol ?setRainTime@LevelData@@QEAAXH@Z
     */
    MCAPI void setRainTime(int);
    /**
     * @hash   1074548472
     * @symbol ?setSeed@LevelData@@QEAAXVLevelSeed64@@@Z
     */
    MCAPI void setSeed(class LevelSeed64);
    /**
     * @hash   -1668249168
     * @symbol ?setServerChunkTickRange@LevelData@@QEAAXI@Z
     */
    MCAPI void setServerChunkTickRange(unsigned int);
    /**
     * @hash   -1994199576
     * @symbol ?setSpawnPos@LevelData@@QEAAXAEBVBlockPos@@@Z
     */
    MCAPI void setSpawnPos(class BlockPos const &);
    /**
     * @hash   -557752230
     * @symbol ?setStorageVersion@LevelData@@QEAAXW4StorageVersion@@@Z
     */
    MCAPI void setStorageVersion(enum class StorageVersion);
    /**
     * @hash   1098452644
     * @symbol ?setTagData@LevelData@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void setTagData(class CompoundTag &) const;
    /**
     * @hash   -567801654
     * @symbol ?setTexturepacksRequired@LevelData@@QEAAX_N@Z
     */
    MCAPI void setTexturepacksRequired(bool);
    /**
     * @hash   789914312
     * @symbol ?setTime@LevelData@@QEAAXH@Z
     */
    MCAPI void setTime(int);
    /**
     * @hash   1407457448
     * @symbol ?setUseMsaGamertagsOnly@LevelData@@QEAAX_N@Z
     */
    MCAPI void setUseMsaGamertagsOnly(bool);
    /**
     * @hash   416533676
     * @symbol ?setWorldTemplateIdentity@LevelData@@QEAAXAEBUPackIdVersion@@@Z
     */
    MCAPI void setWorldTemplateIdentity(struct PackIdVersion const &);
    /**
     * @hash   1905829448
     * @symbol ?setWorldTemplateOptionLocked@LevelData@@QEAAX_N@Z
     */
    MCAPI void setWorldTemplateOptionLocked(bool);
    /**
     * @hash   982597432
     * @symbol ?setWorldVersion@LevelData@@QEAAXW4WorldVersion@@@Z
     */
    MCAPI void setWorldVersion(enum class WorldVersion);
    /**
     * @hash   -1117385788
     * @symbol ?setXBLBroadcastIntent@LevelData@@QEAAXW4GamePublishSetting@Social@@@Z
     */
    MCAPI void setXBLBroadcastIntent(enum class Social::GamePublishSetting);
    /**
     * @hash   1427063878
     * @symbol ?setXBLBroadcastMode@LevelData@@QEAAXW4GamePublishSetting@Social@@@Z
     */
    MCAPI void setXBLBroadcastMode(enum class Social::GamePublishSetting);
    /**
     * @hash   267765891
     * @symbol ?touchLastLoadedWithVersion@LevelData@@QEAAXXZ
     */
    MCAPI void touchLastLoadedWithVersion();
    /**
     * @hash   -801871505
     * @symbol ?updateLastTimePlayed@LevelData@@QEBAXXZ
     */
    MCAPI void updateLastTimePlayed() const;
    /**
     * @hash   670189465
     * @symbol ?v1_read@LevelData@@QEAAXAEAVBitStream@RakNet@@W4StorageVersion@@@Z
     */
    MCAPI void v1_read(class RakNet::BitStream &, enum class StorageVersion);
    /**
     * @hash   1273834874
     * @symbol ??1LevelData@@QEAA@XZ
     */
    MCAPI ~LevelData();

//private:
    /**
     * @hash   -525287501
     * @symbol ?_determineMaxBaseGameVersion@LevelData@@AEAAXXZ
     */
    MCAPI void _determineMaxBaseGameVersion();
    /**
     * @hash   -1017363282
     * @symbol ?_setGameRulesBasedOnPremiumContentIdentity@LevelData@@AEAAXXZ
     */
    MCAPI void _setGameRulesBasedOnPremiumContentIdentity();
    /**
     * @hash   -1050377143
     * @symbol ?_setValue@LevelData@@AEAAXAEBVHashedString@@$$QEAULevelDataValue@@@Z
     */
    MCAPI void _setValue(class HashedString const &, struct LevelDataValue &&);

private:

};