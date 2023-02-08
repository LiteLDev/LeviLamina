/**
 * @file  LevelData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @hash   -726974333
     * @symbol  ??0LevelData\@\@QEAA\@_N\@Z
     */
    MCAPI LevelData(bool);
    /**
     * @symbol  ??0LevelData\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI LevelData(class LevelData &&);
    /**
     * @hash   -285586298
     * @symbol  ??0LevelData\@\@QEAA\@AEBVLevelSettings\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4GeneratorType\@\@AEBVBlockPos\@\@_NW4EducationEditionOffer\@\@MM\@Z
     */
    MCAPI LevelData(class LevelSettings const &, std::string const &, enum class GeneratorType, class BlockPos const &, bool, enum class EducationEditionOffer, float, float);
    /**
     * @hash   1201467032
     * @symbol  ?_getValue\@LevelData\@\@QEBAPEBULevelDataValue\@\@AEBVHashedString\@\@\@Z
     */
    MCAPI struct LevelDataValue const * _getValue(class HashedString const &) const;
    /**
     * @hash   571418260
     * @symbol  ?achievementsWillBeDisabledOnLoad\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool achievementsWillBeDisabledOnLoad() const;
    /**
     * @hash   1429198166
     * @symbol  ?createTag\@LevelData\@\@QEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class CompoundTag> createTag() const;
    /**
     * @hash   1936177277
     * @symbol  ?disableAchievements\@LevelData\@\@QEAAXXZ
     */
    MCAPI void disableAchievements();
    /**
     * @hash   -798815068
     * @symbol  ?educationFeaturesEnabled\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool educationFeaturesEnabled() const;
    /**
     * @hash   -614144116
     * @symbol  ?getAdventureSettings\@LevelData\@\@QEAAAEAUAdventureSettings\@\@XZ
     */
    MCAPI struct AdventureSettings & getAdventureSettings();
    /**
     * @hash   1363034182
     * @symbol  ?getAdventureSettings\@LevelData\@\@QEBAAEBUAdventureSettings\@\@XZ
     */
    MCAPI struct AdventureSettings const & getAdventureSettings() const;
    /**
     * @hash   -1370469340
     * @symbol  ?getBaseGameVersion\@LevelData\@\@QEBAAEBVBaseGameVersion\@\@XZ
     */
    MCAPI class BaseGameVersion const & getBaseGameVersion() const;
    /**
     * @hash   -1461594034
     * @symbol  ?getBiomeOverride\@LevelData\@\@QEBA?BV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const getBiomeOverride() const;
    /**
     * @hash   288205396
     * @symbol  ?getBonusChestSpawned\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool getBonusChestSpawned() const;
    /**
     * @hash   982402922
     * @symbol  ?getChatRestrictionLevel\@LevelData\@\@QEBA?AW4ChatRestrictionLevel\@\@XZ
     */
    MCAPI enum class ChatRestrictionLevel getChatRestrictionLevel() const;
    /**
     * @hash   -785587628
     * @symbol  ?getCurrentTick\@LevelData\@\@QEBAAEBUTick\@\@XZ
     */
    MCAPI struct Tick const & getCurrentTick() const;
    /**
     * @hash   -961226396
     * @symbol  ?getCustomSkinsDisabled\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool getCustomSkinsDisabled() const;
    /**
     * @hash   -2000996478
     * @symbol  ?getDefaultAbilities\@LevelData\@\@QEAAAEAVAbilities\@\@XZ
     */
    MCAPI class Abilities & getDefaultAbilities();
    /**
     * @hash   1737670708
     * @symbol  ?getDefaultPermissions\@LevelData\@\@QEAAAEAVPermissionsHandler\@\@XZ
     */
    MCAPI class PermissionsHandler & getDefaultPermissions();
    /**
     * @hash   1966272690
     * @symbol  ?getDefaultPermissions\@LevelData\@\@QEBAAEBVPermissionsHandler\@\@XZ
     */
    MCAPI class PermissionsHandler const & getDefaultPermissions() const;
    /**
     * @hash   -1011224578
     * @symbol  ?getEduSharedUriResource\@LevelData\@\@QEBAAEBVCompoundTag\@\@XZ
     */
    MCAPI class CompoundTag const & getEduSharedUriResource() const;
    /**
     * @hash   550071708
     * @symbol  ?getEducationEditionOffer\@LevelData\@\@QEBA?AW4EducationEditionOffer\@\@XZ
     */
    MCAPI enum class EducationEditionOffer getEducationEditionOffer() const;
    /**
     * @symbol  ?getEducationOid\@LevelData\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getEducationOid() const;
    /**
     * @hash   -2040615298
     * @symbol  ?getEducationProductId\@LevelData\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getEducationProductId() const;
    /**
     * @symbol  ?getEmoteChatMuted\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool getEmoteChatMuted() const;
    /**
     * @hash   385879658
     * @symbol  ?getExperiments\@LevelData\@\@QEAAAEAVExperiments\@\@XZ
     */
    MCAPI class Experiments & getExperiments();
    /**
     * @hash   115454500
     * @symbol  ?getExperiments\@LevelData\@\@QEBAAEBVExperiments\@\@XZ
     */
    MCAPI class Experiments const & getExperiments() const;
    /**
     * @hash   1857116000
     * @symbol  ?getFlatWorldGeneratorOptions\@LevelData\@\@QEBAAEBVValue\@Json\@\@XZ
     */
    MCAPI class Json::Value const & getFlatWorldGeneratorOptions() const;
    /**
     * @hash   1239023172
     * @symbol  ?getForceGameType\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool getForceGameType() const;
    /**
     * @hash   132051780
     * @symbol  ?getGameDifficulty\@LevelData\@\@QEBA?AW4Difficulty\@\@XZ
     */
    MCAPI enum class Difficulty getGameDifficulty() const;
    /**
     * @hash   2038792746
     * @symbol  ?getGameRules\@LevelData\@\@QEAAAEAVGameRules\@\@XZ
     */
    MCAPI class GameRules & getGameRules();
    /**
     * @hash   -441967452
     * @symbol  ?getGameRules\@LevelData\@\@QEBAAEBVGameRules\@\@XZ
     */
    MCAPI class GameRules const & getGameRules() const;
    /**
     * @hash   111071890
     * @symbol  ?getGameType\@LevelData\@\@QEBA?AW4GameType\@\@XZ
     */
    MCAPI enum class GameType getGameType() const;
    /**
     * @hash   1600549736
     * @symbol  ?getGenerator\@LevelData\@\@QEBA?AW4GeneratorType\@\@XZ
     */
    MCAPI enum class GeneratorType getGenerator() const;
    /**
     * @symbol  ?getIsSingleUseWorld\@LevelData\@\@QEBA?B_NXZ
     */
    MCAPI bool const getIsSingleUseWorld() const;
    /**
     * @hash   453261890
     * @symbol  ?getLANBroadcast\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool getLANBroadcast() const;
    /**
     * @hash   547187346
     * @symbol  ?getLANBroadcastIntent\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool getLANBroadcastIntent() const;
    /**
     * @hash   1107992899
     * @symbol  ?getLastPlayed\@LevelData\@\@QEBA_JXZ
     */
    MCAPI __int64 getLastPlayed() const;
    /**
     * @hash   -668253906
     * @symbol  ?getLevelName\@LevelData\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getLevelName() const;
    /**
     * @hash   -360685018
     * @symbol  ?getLightningLevel\@LevelData\@\@QEBAMXZ
     */
    MCAPI float getLightningLevel() const;
    /**
     * @hash   -1912528792
     * @symbol  ?getLightningTime\@LevelData\@\@QEBAHXZ
     */
    MCAPI int getLightningTime() const;
    /**
     * @hash   1668562080
     * @symbol  ?getLimitedWorldDepth\@LevelData\@\@QEBAHXZ
     */
    MCAPI int getLimitedWorldDepth() const;
    /**
     * @hash   -829617626
     * @symbol  ?getLimitedWorldWidth\@LevelData\@\@QEBAHXZ
     */
    MCAPI int getLimitedWorldWidth() const;
    /**
     * @hash   1192989748
     * @symbol  ?getLoadedPlayerTag\@LevelData\@\@QEAAAEAVCompoundTag\@\@XZ
     */
    MCAPI class CompoundTag & getLoadedPlayerTag();
    /**
     * @symbol  ?getMinCompatibleClientVersion\@LevelData\@\@QEBAAEBVGameVersion\@\@XZ
     */
    MCAPI class GameVersion const & getMinCompatibleClientVersion() const;
    /**
     * @hash   1446237188
     * @symbol  ?getMultiplayerGameIntent\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool getMultiplayerGameIntent() const;
    /**
     * @hash   -1144056818
     * @symbol  ?getNetherScale\@LevelData\@\@QEBAHXZ
     */
    MCAPI int getNetherScale() const;
    /**
     * @hash   2066495154
     * @symbol  ?getNetherType\@LevelData\@\@QEBA?AW4NetherWorldType\@\@XZ
     */
    MCAPI enum class NetherWorldType getNetherType() const;
    /**
     * @symbol  ?getNetworkVersion\@LevelData\@\@QEBAHXZ
     */
    MCAPI int getNetworkVersion() const;
    /**
     * @hash   2048977586
     * @symbol  ?getOnlySpawnV1Villagers\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool getOnlySpawnV1Villagers() const;
    /**
     * @hash   -18881276
     * @symbol  ?getPersonaDisabled\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool getPersonaDisabled() const;
    /**
     * @hash   -1558142168
     * @symbol  ?getPlatformBroadcastIntent\@LevelData\@\@QEBA?AW4GamePublishSetting\@Social\@\@XZ
     */
    MCAPI enum class Social::GamePublishSetting getPlatformBroadcastIntent() const;
    /**
     * @hash   925284806
     * @symbol  ?getPlatformBroadcastMode\@LevelData\@\@QEBA?AW4GamePublishSetting\@Social\@\@XZ
     */
    MCAPI enum class Social::GamePublishSetting getPlatformBroadcastMode() const;
    /**
     * @hash   -1008853060
     * @symbol  ?getPremiumTemplateContentIdentity\@LevelData\@\@QEBAAEBVContentIdentity\@\@XZ
     */
    MCAPI class ContentIdentity const & getPremiumTemplateContentIdentity() const;
    /**
     * @hash   -1097742584
     * @symbol  ?getRainLevel\@LevelData\@\@QEBAMXZ
     */
    MCAPI float getRainLevel() const;
    /**
     * @hash   -1381594714
     * @symbol  ?getRainTime\@LevelData\@\@QEBAHXZ
     */
    MCAPI int getRainTime() const;
    /**
     * @hash   2068882238
     * @symbol  ?getSeed\@LevelData\@\@QEBA?AVLevelSeed64\@\@XZ
     */
    MCAPI class LevelSeed64 getSeed() const;
    /**
     * @hash   -1360395030
     * @symbol  ?getServerChunkTickRange\@LevelData\@\@QEBAIXZ
     */
    MCAPI unsigned int getServerChunkTickRange() const;
    /**
     * @hash   -1218923424
     * @symbol  ?getSpawnPos\@LevelData\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getSpawnPos() const;
    /**
     * @hash   -15928506
     * @symbol  ?getSpawnSettings\@LevelData\@\@QEBAAEBUSpawnSettings\@\@XZ
     */
    MCAPI struct SpawnSettings const & getSpawnSettings() const;
    /**
     * @hash   1964040688
     * @symbol  ?getStorageVersion\@LevelData\@\@QEBA?AW4StorageVersion\@\@XZ
     */
    MCAPI enum class StorageVersion getStorageVersion() const;
    /**
     * @hash   -1723837422
     * @symbol  ?getStoredGenerator\@LevelData\@\@QEBA?AW4GeneratorType\@\@XZ
     */
    MCAPI enum class GeneratorType getStoredGenerator() const;
    /**
     * @hash   52516520
     * @symbol  ?getTagData\@LevelData\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void getTagData(class CompoundTag const &);
    /**
     * @hash   -1507090834
     * @symbol  ?getTime\@LevelData\@\@QEBAHXZ
     */
    MCAPI int getTime() const;
    /**
     * @hash   657565108
     * @symbol  ?getUseMsaGamertagsOnly\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool getUseMsaGamertagsOnly() const;
    /**
     * @hash   35250386
     * @symbol  ?getWorldCenter\@LevelData\@\@QEBAAEBVBlockPos\@\@XZ
     */
    MCAPI class BlockPos const & getWorldCenter() const;
    /**
     * @hash   -748902734
     * @symbol  ?getWorldStartCount\@LevelData\@\@QEBAIXZ
     */
    MCAPI unsigned int getWorldStartCount() const;
    /**
     * @hash   -188290878
     * @symbol  ?getWorldTemplateIdentity\@LevelData\@\@QEBAAEBUPackIdVersion\@\@XZ
     */
    MCAPI struct PackIdVersion const & getWorldTemplateIdentity() const;
    /**
     * @hash   521257518
     * @symbol  ?getWorldVersion\@LevelData\@\@QEBA?AW4WorldVersion\@\@XZ
     */
    MCAPI enum class WorldVersion getWorldVersion() const;
    /**
     * @hash   1363356532
     * @symbol  ?getXBLBroadcastIntent\@LevelData\@\@QEBA?AW4GamePublishSetting\@Social\@\@XZ
     */
    MCAPI enum class Social::GamePublishSetting getXBLBroadcastIntent() const;
    /**
     * @hash   1160374546
     * @symbol  ?getXBLBroadcastMode\@LevelData\@\@QEBA?AW4GamePublishSetting\@Social\@\@XZ
     */
    MCAPI enum class Social::GamePublishSetting getXBLBroadcastMode() const;
    /**
     * @hash   1065292802
     * @symbol  ?hasAchievementsDisabled\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool hasAchievementsDisabled() const;
    /**
     * @hash   1530627156
     * @symbol  ?hasBonusChestEnabled\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool hasBonusChestEnabled() const;
    /**
     * @hash   -1300753436
     * @symbol  ?hasCommandsEnabled\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool hasCommandsEnabled() const;
    /**
     * @hash   1218932498
     * @symbol  ?hasConfirmedPlatformLockedContent\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool hasConfirmedPlatformLockedContent() const;
    /**
     * @hash   -1406209886
     * @symbol  ?hasLockedBehaviorPack\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool hasLockedBehaviorPack() const;
    /**
     * @hash   294509618
     * @symbol  ?hasLockedResourcePack\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool hasLockedResourcePack() const;
    /**
     * @hash   -1819976222
     * @symbol  ?hasMapsCenteredToOrigin\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool hasMapsCenteredToOrigin() const;
    /**
     * @hash   1541280308
     * @symbol  ?hasStartWithMapEnabled\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool hasStartWithMapEnabled() const;
    /**
     * @hash   2046761165
     * @symbol  ?incrementTick\@LevelData\@\@QEAAXXZ
     */
    MCAPI void incrementTick();
    /**
     * @hash   720107890
     * @symbol  ?isEditorWorld\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isEditorWorld() const;
    /**
     * @hash   -2016963102
     * @symbol  ?isEducationEditionLevel\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isEducationEditionLevel() const;
    /**
     * @hash   1272160596
     * @symbol  ?isFromLockedTemplate\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isFromLockedTemplate() const;
    /**
     * @hash   -28271614
     * @symbol  ?isFromWorldTemplate\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isFromWorldTemplate() const;
    /**
     * @hash   37214322
     * @symbol  ?isLegacyLevel\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isLegacyLevel() const;
    /**
     * @hash   1850822722
     * @symbol  ?isLightning\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isLightning() const;
    /**
     * @hash   -244111022
     * @symbol  ?isMultiplayerGame\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isMultiplayerGame() const;
    /**
     * @hash   1391883364
     * @symbol  ?isPremiumWorldTemplate\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isPremiumWorldTemplate() const;
    /**
     * @hash   1637178562
     * @symbol  ?isRaining\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isRaining() const;
    /**
     * @hash   127788980
     * @symbol  ?isTexturepacksRequired\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isTexturepacksRequired() const;
    /**
     * @hash   729159874
     * @symbol  ?isWorldTemplateOptionLocked\@LevelData\@\@QEBA_NXZ
     */
    MCAPI bool isWorldTemplateOptionLocked() const;
    /**
     * @hash   -825230224
     * @symbol  ??4LevelData\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class LevelData & operator=(class LevelData &&);
    /**
     * @hash   1095013629
     * @symbol  ?recordStartUp\@LevelData\@\@QEAAXXZ
     */
    MCAPI void recordStartUp();
    /**
     * @hash   -2128293822
     * @symbol  ?setBaseGameVersion\@LevelData\@\@QEAAXAEBVBaseGameVersion\@\@\@Z
     */
    MCAPI void setBaseGameVersion(class BaseGameVersion const &);
    /**
     * @hash   -1589672712
     * @symbol  ?setBonusChestSpawned\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setBonusChestSpawned(bool);
    /**
     * @hash   711540468
     * @symbol  ?setChatRestrictionLevel\@LevelData\@\@QEAAXW4ChatRestrictionLevel\@\@\@Z
     */
    MCAPI void setChatRestrictionLevel(enum class ChatRestrictionLevel);
    /**
     * @hash   648510136
     * @symbol  ?setCommandsEnabled\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setCommandsEnabled(bool);
    /**
     * @hash   -462898616
     * @symbol  ?setCustomSkinsDisabled\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setCustomSkinsDisabled(bool);
    /**
     * @hash   155442632
     * @symbol  ?setDataDrivenGenerator\@LevelData\@\@QEAAXW4GeneratorType\@\@\@Z
     */
    MCAPI void setDataDrivenGenerator(enum class GeneratorType);
    /**
     * @hash   774217014
     * @symbol  ?setEduSharedUriResource\@LevelData\@\@QEAAXAEBUEduSharedUriResource\@\@\@Z
     */
    MCAPI void setEduSharedUriResource(struct EduSharedUriResource const &);
    /**
     * @hash   -605710780
     * @symbol  ?setEducationEditionOffer\@LevelData\@\@QEAAXW4EducationEditionOffer\@\@\@Z
     */
    MCAPI void setEducationEditionOffer(enum class EducationEditionOffer);
    /**
     * @hash   59962234
     * @symbol  ?setEducationFeaturesEnabled\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setEducationFeaturesEnabled(bool);
    /**
     * @hash   -1927679788
     * @symbol  ?setEducationOid\@LevelData\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setEducationOid(std::string const &);
    /**
     * @symbol  ?setEmoteChatMuted\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setEmoteChatMuted(bool);
    /**
     * @hash   428255352
     * @symbol  ?setForceGameType\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setForceGameType(bool);
    /**
     * @hash   -1419241186
     * @symbol  ?setGameDifficulty\@LevelData\@\@QEAAXW4Difficulty\@\@\@Z
     */
    MCAPI void setGameDifficulty(enum class Difficulty);
    /**
     * @hash   1850641644
     * @symbol  ?setGameType\@LevelData\@\@QEAAXW4GameType\@\@\@Z
     */
    MCAPI void setGameType(enum class GameType);
    /**
     * @hash   950706188
     * @symbol  ?setGenerator\@LevelData\@\@QEAAXW4GeneratorType\@\@\@Z
     */
    MCAPI void setGenerator(enum class GeneratorType);
    /**
     * @hash   106360744
     * @symbol  ?setHasLockedBehaviorPack\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setHasLockedBehaviorPack(bool);
    /**
     * @hash   1288611912
     * @symbol  ?setHasLockedResourcePack\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setHasLockedResourcePack(bool);
    /**
     * @hash   -213102232
     * @symbol  ?setIsEditorWorld\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setIsEditorWorld(bool);
    /**
     * @hash   231368570
     * @symbol  ?setLANBroadcast\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setLANBroadcast(bool);
    /**
     * @hash   -920823990
     * @symbol  ?setLANBroadcastIntent\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setLANBroadcastIntent(bool);
    /**
     * @hash   1230916148
     * @symbol  ?setLevelName\@LevelData\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setLevelName(std::string const &);
    /**
     * @hash   817951196
     * @symbol  ?setLightningLevel\@LevelData\@\@QEAAXM\@Z
     */
    MCAPI void setLightningLevel(float);
    /**
     * @hash   1569346190
     * @symbol  ?setLightningTime\@LevelData\@\@QEAAXH\@Z
     */
    MCAPI void setLightningTime(int);
    /**
     * @hash   -34309640
     * @symbol  ?setMultiplayerGame\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setMultiplayerGame(bool);
    /**
     * @hash   295361352
     * @symbol  ?setMultiplayerGameIntent\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setMultiplayerGameIntent(bool);
    /**
     * @hash   1396122010
     * @symbol  ?setOnlySpawnV1Villagers\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setOnlySpawnV1Villagers(bool);
    /**
     * @hash   1823828648
     * @symbol  ?setPersonaDisabled\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setPersonaDisabled(bool);
    /**
     * @hash   415697280
     * @symbol  ?setPlatformBroadcastIntent\@LevelData\@\@QEAAXW4GamePublishSetting\@Social\@\@\@Z
     */
    MCAPI void setPlatformBroadcastIntent(enum class Social::GamePublishSetting);
    /**
     * @hash   1494877442
     * @symbol  ?setPlatformBroadcastMode\@LevelData\@\@QEAAXW4GamePublishSetting\@Social\@\@\@Z
     */
    MCAPI void setPlatformBroadcastMode(enum class Social::GamePublishSetting);
    /**
     * @hash   -1669962206
     * @symbol  ?setPremiumTemplateContentIdentity\@LevelData\@\@QEAAXAEBVContentIdentity\@\@\@Z
     */
    MCAPI void setPremiumTemplateContentIdentity(class ContentIdentity const &);
    /**
     * @hash   -1378861174
     * @symbol  ?setRainLevel\@LevelData\@\@QEAAXM\@Z
     */
    MCAPI void setRainLevel(float);
    /**
     * @hash   -1549336832
     * @symbol  ?setRainTime\@LevelData\@\@QEAAXH\@Z
     */
    MCAPI void setRainTime(int);
    /**
     * @hash   1860308200
     * @symbol  ?setSeed\@LevelData\@\@QEAAXVLevelSeed64\@\@\@Z
     */
    MCAPI void setSeed(class LevelSeed64);
    /**
     * @hash   -882474064
     * @symbol  ?setServerChunkTickRange\@LevelData\@\@QEAAXI\@Z
     */
    MCAPI void setServerChunkTickRange(unsigned int);
    /**
     * @hash   -1208424472
     * @symbol  ?setSpawnPos\@LevelData\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setSpawnPos(class BlockPos const &);
    /**
     * @hash   228038250
     * @symbol  ?setStorageVersion\@LevelData\@\@QEAAXW4StorageVersion\@\@\@Z
     */
    MCAPI void setStorageVersion(enum class StorageVersion);
    /**
     * @hash   1884243124
     * @symbol  ?setTagData\@LevelData\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void setTagData(class CompoundTag &) const;
    /**
     * @hash   217773562
     * @symbol  ?setTexturepacksRequired\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setTexturepacksRequired(bool);
    /**
     * @hash   1575489528
     * @symbol  ?setTime\@LevelData\@\@QEAAXH\@Z
     */
    MCAPI void setTime(int);
    /**
     * @hash   -2101934632
     * @symbol  ?setUseMsaGamertagsOnly\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setUseMsaGamertagsOnly(bool);
    /**
     * @hash   1202108892
     * @symbol  ?setWorldTemplateIdentity\@LevelData\@\@QEAAXAEBUPackIdVersion\@\@\@Z
     */
    MCAPI void setWorldTemplateIdentity(struct PackIdVersion const &);
    /**
     * @hash   -1603562632
     * @symbol  ?setWorldTemplateOptionLocked\@LevelData\@\@QEAAX_N\@Z
     */
    MCAPI void setWorldTemplateOptionLocked(bool);
    /**
     * @hash   1768172648
     * @symbol  ?setWorldVersion\@LevelData\@\@QEAAXW4WorldVersion\@\@\@Z
     */
    MCAPI void setWorldVersion(enum class WorldVersion);
    /**
     * @hash   -331795196
     * @symbol  ?setXBLBroadcastIntent\@LevelData\@\@QEAAXW4GamePublishSetting\@Social\@\@\@Z
     */
    MCAPI void setXBLBroadcastIntent(enum class Social::GamePublishSetting);
    /**
     * @hash   -2082312826
     * @symbol  ?setXBLBroadcastMode\@LevelData\@\@QEAAXW4GamePublishSetting\@Social\@\@\@Z
     */
    MCAPI void setXBLBroadcastMode(enum class Social::GamePublishSetting);
    /**
     * @hash   1053356483
     * @symbol  ?touchLastLoadedWithVersion\@LevelData\@\@QEAAXXZ
     */
    MCAPI void touchLastLoadedWithVersion();
    /**
     * @hash   -16280913
     * @symbol  ?updateLastTimePlayed\@LevelData\@\@QEBAXXZ
     */
    MCAPI void updateLastTimePlayed() const;
    /**
     * @hash   1455780057
     * @symbol  ?v1_read\@LevelData\@\@QEAAXAEAVBitStream\@RakNet\@\@W4StorageVersion\@\@\@Z
     */
    MCAPI void v1_read(class RakNet::BitStream &, enum class StorageVersion);
    /**
     * @hash   2059010314
     * @symbol  ??1LevelData\@\@QEAA\@XZ
     */
    MCAPI ~LevelData();

//private:
    /**
     * @hash   259964819
     * @symbol  ?_determineMaxBaseGameVersion\@LevelData\@\@AEAAXXZ
     */
    MCAPI void _determineMaxBaseGameVersion();
    /**
     * @hash   -232110962
     * @symbol  ?_setGameRulesBasedOnPremiumContentIdentity\@LevelData\@\@AEAAXXZ
     */
    MCAPI void _setGameRulesBasedOnPremiumContentIdentity();
    /**
     * @hash   -265124823
     * @symbol  ?_setValue\@LevelData\@\@AEAAXAEBVHashedString\@\@$$QEAULevelDataValue\@\@\@Z
     */
    MCAPI void _setValue(class HashedString const &, struct LevelDataValue &&);

private:

};