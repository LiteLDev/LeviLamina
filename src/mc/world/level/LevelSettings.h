#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/GamePublishSetting.h"
#include "mc/enums/ChatRestrictionLevel.h"
#include "mc/enums/DaylightCycle.h"
#include "mc/enums/Difficulty.h"
#include "mc/enums/EducationEditionOffer.h"
#include "mc/enums/GameType.h"
#include "mc/enums/WorldVersion.h"
#include "mc/network/NetherWorldType.h"
#include "mc/server/editor/WorldType.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/player/PlayerPermissionLevel.h"
#include "mc/world/level/levelgen/GeneratorType.h"

class LevelSettings {
public:
    // prevent constructor by default
    LevelSettings& operator=(LevelSettings const&);

public:
    // NOLINTBEGIN
    // symbol: ??0LevelSettings@@QEAA@XZ
    MCAPI LevelSettings();

    // symbol: ??0LevelSettings@@QEAA@$$QEAV0@@Z
    MCAPI LevelSettings(class LevelSettings&&);

    // symbol: ??0LevelSettings@@QEAA@AEBV0@@Z
    MCAPI LevelSettings(class LevelSettings const&);

    // symbol: ??0LevelSettings@@QEAA@AEBVLevelData@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI LevelSettings(class LevelData const&, DimensionType);

    // symbol: ?achievementsWillBeDisabledOnLoad@LevelSettings@@QEBA_NXZ
    MCAPI bool achievementsWillBeDisabledOnLoad() const;

    // symbol: ?educationFeaturesEnabled@LevelSettings@@QEBA_NXZ
    MCAPI bool educationFeaturesEnabled() const;

    // symbol:
    // ?educationProductID@LevelSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& educationProductID() const;

    // symbol: ?forceGameType@LevelSettings@@QEBA_NXZ
    MCAPI bool forceGameType() const;

    // symbol: ?getAdventureModeOverridesEnabled@LevelSettings@@QEBA_NXZ
    MCAPI bool getAdventureModeOverridesEnabled() const;

    // symbol: ?getBaseGameVersion@LevelSettings@@QEBAAEBVBaseGameVersion@@XZ
    MCAPI class BaseGameVersion const& getBaseGameVersion() const;

    // symbol: ?getBiomeOverride@LevelSettings@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getBiomeOverride() const;

    // symbol: ?getChatRestrictionLevel@LevelSettings@@QEBA?AW4ChatRestrictionLevel@@XZ
    MCAPI ::ChatRestrictionLevel getChatRestrictionLevel() const;

    // symbol: ?getCustomSkinsDisabled@LevelSettings@@QEBA_NXZ
    MCAPI bool getCustomSkinsDisabled() const;

    // symbol: ?getDaylightCycle@LevelSettings@@QEBA?AW4DaylightCycle@@XZ
    MCAPI ::DaylightCycle getDaylightCycle() const;

    // symbol: ?getDefaultPermissions@LevelSettings@@QEBAAEBVPermissionsHandler@@XZ
    MCAPI class PermissionsHandler const& getDefaultPermissions() const;

    // symbol: ?getDisablePlayerInteractions@LevelSettings@@QEBA_NXZ
    MCAPI bool getDisablePlayerInteractions() const;

    // symbol: ?getEditorWorldType@LevelSettings@@QEBA?AW4WorldType@Editor@@XZ
    MCAPI ::Editor::WorldType getEditorWorldType() const;

    // symbol: ?getEduSharedUriResource@LevelSettings@@QEBAAEBUEduSharedUriResource@@XZ
    MCAPI struct EduSharedUriResource const& getEduSharedUriResource() const;

    // symbol: ?getEducationLevelSettings@LevelSettings@@QEBAAEBV?$optional@UEducationLevelSettings@@@std@@XZ
    MCAPI std::optional<struct EducationLevelSettings> const& getEducationLevelSettings() const;

    // symbol: ?getEmoteChatMuted@LevelSettings@@QEBA_NXZ
    MCAPI bool getEmoteChatMuted() const;

    // symbol: ?getExperiments@LevelSettings@@QEBAAEBVExperiments@@XZ
    MCAPI class Experiments const& getExperiments() const;

    // symbol: ?getGameDifficulty@LevelSettings@@QEBA?AW4Difficulty@@XZ
    MCAPI ::Difficulty getGameDifficulty() const;

    // symbol: ?getGameRules@LevelSettings@@QEBAAEBVGameRules@@XZ
    MCAPI class GameRules const& getGameRules() const;

    // symbol: ?getGameType@LevelSettings@@QEBA?AW4GameType@@XZ
    MCAPI ::GameType getGameType() const;

    // symbol: ?getImmutableWorld@LevelSettings@@QEBA_NXZ
    MCAPI bool getImmutableWorld() const;

    // symbol: ?getLanBroadcastIntent@LevelSettings@@QEBA_NXZ
    MCAPI bool getLanBroadcastIntent() const;

    // symbol: ?getLimitedWorldDepth@LevelSettings@@QEBAHXZ
    MCAPI int getLimitedWorldDepth() const;

    // symbol: ?getLimitedWorldWidth@LevelSettings@@QEBAHXZ
    MCAPI int getLimitedWorldWidth() const;

    // symbol: ?getMultiplayerGameIntent@LevelSettings@@QEBA_NXZ
    MCAPI bool getMultiplayerGameIntent() const;

    // symbol: ?getNetherType@LevelSettings@@QEBA?AW4NetherWorldType@@XZ
    MCAPI ::NetherWorldType getNetherType() const;

    // symbol: ?getOnlySpawnV1Villagers@LevelSettings@@QEBA_NXZ
    MCAPI bool getOnlySpawnV1Villagers() const;

    // symbol: ?getPersonaDisabled@LevelSettings@@QEBA_NXZ
    MCAPI bool getPersonaDisabled() const;

    // symbol: ?getPlatformBroadcastIntent@LevelSettings@@QEBA?AW4GamePublishSetting@Social@@XZ
    MCAPI ::Social::GamePublishSetting getPlatformBroadcastIntent() const;

    // symbol: ?getSeed@LevelSettings@@QEBA?AVLevelSeed64@@XZ
    MCAPI class LevelSeed64 getSeed() const;

    // symbol: ?getServerChunkTickRange@LevelSettings@@QEBAIXZ
    MCAPI uint getServerChunkTickRange() const;

    // symbol: ?getSpawnSettings@LevelSettings@@QEBA?AUSpawnSettings@@XZ
    MCAPI struct SpawnSettings getSpawnSettings() const;

    // symbol: ?getTime@LevelSettings@@QEBAHXZ
    MCAPI int getTime() const;

    // symbol: ?getWorldVersion@LevelSettings@@QEBA?AW4WorldVersion@@XZ
    MCAPI ::WorldVersion getWorldVersion() const;

    // symbol: ?getXBLBroadcastIntent@LevelSettings@@QEBA?AW4GamePublishSetting@Social@@XZ
    MCAPI ::Social::GamePublishSetting getXBLBroadcastIntent() const;

    // symbol: ?hasBonusChestEnabled@LevelSettings@@QEBA_NXZ
    MCAPI bool hasBonusChestEnabled() const;

    // symbol: ?hasCheatsEnabled@LevelSettings@@QEBA_NXZ
    MCAPI bool hasCheatsEnabled() const;

    // symbol: ?hasCommandsEnabled@LevelSettings@@QEBA_NXZ
    MCAPI bool hasCommandsEnabled() const;

    // symbol: ?hasConfirmedPlatformLockedContent@LevelSettings@@QEBA_NXZ
    MCAPI bool hasConfirmedPlatformLockedContent() const;

    // symbol: ?hasLockedBehaviorPack@LevelSettings@@QEBA_NXZ
    MCAPI bool hasLockedBehaviorPack() const;

    // symbol: ?hasLockedResourcePack@LevelSettings@@QEBA_NXZ
    MCAPI bool hasLockedResourcePack() const;

    // symbol: ?hasStartWithMapEnabled@LevelSettings@@QEBA_NXZ
    MCAPI bool hasStartWithMapEnabled() const;

    // symbol: ?isCreatedInEditor@LevelSettings@@QEBA_NXZ
    MCAPI bool isCreatedInEditor() const;

    // symbol: ?isEditorWorld@LevelSettings@@QEBA_NXZ
    MCAPI bool isEditorWorld() const;

    // symbol: ?isExportedFromEditor@LevelSettings@@QEBA_NXZ
    MCAPI bool isExportedFromEditor() const;

    // symbol: ?isFromLockedTemplate@LevelSettings@@QEBA_NXZ
    MCAPI bool isFromLockedTemplate() const;

    // symbol: ?isFromWorldTemplate@LevelSettings@@QEBA_NXZ
    MCAPI bool isFromWorldTemplate() const;

    // symbol: ?isRandomSeedAllowed@LevelSettings@@QEBA_NXZ
    MCAPI bool isRandomSeedAllowed() const;

    // symbol: ?isTexturepacksRequired@LevelSettings@@QEBA_NXZ
    MCAPI bool isTexturepacksRequired() const;

    // symbol: ?isWorldTemplateOptionLocked@LevelSettings@@QEBA_NXZ
    MCAPI bool isWorldTemplateOptionLocked() const;

    // symbol: ??4LevelSettings@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class LevelSettings& operator=(class LevelSettings&&);

    // symbol: ?overrideSavedSettings@LevelSettings@@QEBAXAEAVLevelData@@@Z
    MCAPI void overrideSavedSettings(class LevelData&) const;

    // symbol: ?setAdventureModeOverridesEnabled@LevelSettings@@QEAAAEAV1@_N@Z
    MCAPI class LevelSettings& setAdventureModeOverridesEnabled(bool);

    // symbol: ?setBaseGameVersion@LevelSettings@@QEAAAEAV1@AEBVBaseGameVersion@@@Z
    MCAPI class LevelSettings& setBaseGameVersion(class BaseGameVersion const&);

    // symbol: ?setChatRestrictionLevel@LevelSettings@@QEAAAEAV1@W4ChatRestrictionLevel@@@Z
    MCAPI class LevelSettings& setChatRestrictionLevel(::ChatRestrictionLevel);

    // symbol: ?setCommandsEnabled@LevelSettings@@QEAAAEAV1@_N@Z
    MCAPI class LevelSettings& setCommandsEnabled(bool);

    // symbol: ?setCustomSkinsDisabled@LevelSettings@@QEAAAEAV1@_N@Z
    MCAPI class LevelSettings& setCustomSkinsDisabled(bool);

    // symbol: ?setDefaultPlayerPermissions@LevelSettings@@QEAAAEAV1@W4PlayerPermissionLevel@@@Z
    MCAPI class LevelSettings& setDefaultPlayerPermissions(::PlayerPermissionLevel);

    // symbol: ?setDifficulty@LevelSettings@@QEAAAEAV1@W4Difficulty@@@Z
    MCAPI class LevelSettings& setDifficulty(::Difficulty);

    // symbol: ?setDisablePlayerInteractions@LevelSettings@@QEAAAEAV1@_N@Z
    MCAPI class LevelSettings& setDisablePlayerInteractions(bool);

    // symbol: ?setEduSharedUriResource@LevelSettings@@QEAAAEAV1@AEBUEduSharedUriResource@@@Z
    MCAPI class LevelSettings& setEduSharedUriResource(struct EduSharedUriResource const&);

    // symbol: ?setEducationEditionOffer@LevelSettings@@QEAAAEAV1@W4EducationEditionOffer@@@Z
    MCAPI class LevelSettings& setEducationEditionOffer(::EducationEditionOffer);

    // symbol: ?setEducationFeaturesEnabled@LevelSettings@@QEAAAEAV1@_N@Z
    MCAPI class LevelSettings& setEducationFeaturesEnabled(bool);

    // symbol:
    // ?setEducationProductID@LevelSettings@@QEAAAEAV1@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class LevelSettings& setEducationProductID(std::string);

    // symbol: ?setEmoteChatMuted@LevelSettings@@QEAAAEAV1@_N@Z
    MCAPI class LevelSettings& setEmoteChatMuted(bool);

    // symbol: ?setExperiments@LevelSettings@@QEAAAEAV1@AEBVExperimentStorage@@@Z
    MCAPI class LevelSettings& setExperiments(class ExperimentStorage const&);

    // symbol: ?setForceGameType@LevelSettings@@QEAAAEAV1@_N@Z
    MCAPI class LevelSettings& setForceGameType(bool);

    // symbol: ?setGameRules@LevelSettings@@QEAAAEAV1@VGameRules@@@Z
    MCAPI class LevelSettings& setGameRules(class GameRules);

    // symbol: ?setGameType@LevelSettings@@QEAAAEAV1@W4GameType@@@Z
    MCAPI class LevelSettings& setGameType(::GameType);

    // symbol: ?setGeneratorType@LevelSettings@@QEAAAEAV1@W4GeneratorType@@@Z
    MCAPI class LevelSettings& setGeneratorType(::GeneratorType);

    // symbol: ?setOnlySpawnV1Villagers@LevelSettings@@QEAAX_N@Z
    MCAPI void setOnlySpawnV1Villagers(bool);

    // symbol: ?setOverrideSavedSettings@LevelSettings@@QEAAAEAV1@_N@Z
    MCAPI class LevelSettings& setOverrideSavedSettings(bool);

    // symbol: ?setPlatformBroadcastIntent@LevelSettings@@QEAAAEAV1@W4GamePublishSetting@Social@@@Z
    MCAPI class LevelSettings& setPlatformBroadcastIntent(::Social::GamePublishSetting);

    // symbol: ?setRandomSeed@LevelSettings@@QEAAAEAV1@VLevelSeed64@@@Z
    MCAPI class LevelSettings& setRandomSeed(class LevelSeed64);

    // symbol: ?setServerChunkTickRange@LevelSettings@@QEAAAEAV1@I@Z
    MCAPI class LevelSettings& setServerChunkTickRange(uint);

    // symbol: ?setSpawnSettings@LevelSettings@@QEAAAEAV1@USpawnSettings@@@Z
    MCAPI class LevelSettings& setSpawnSettings(struct SpawnSettings);

    // symbol: ?setTexturePackRequired@LevelSettings@@QEAAAEAV1@_N@Z
    MCAPI class LevelSettings& setTexturePackRequired(bool);

    // symbol: ?setUseMsaGamertagsOnly@LevelSettings@@QEAAAEAV1@_N@Z
    MCAPI class LevelSettings& setUseMsaGamertagsOnly(bool);

    // symbol: ?setXblBroadcastIntent@LevelSettings@@QEAAAEAV1@W4GamePublishSetting@Social@@@Z
    MCAPI class LevelSettings& setXblBroadcastIntent(::Social::GamePublishSetting);

    // symbol: ?shouldOverrideSavedSettings@LevelSettings@@QEBA_NXZ
    MCAPI bool shouldOverrideSavedSettings() const;

    // symbol: ?useMsaGamertagsOnly@LevelSettings@@QEBA_NXZ
    MCAPI bool useMsaGamertagsOnly() const;

    // symbol: ??1LevelSettings@@QEAA@XZ
    MCAPI ~LevelSettings();

    // symbol:
    // ?parseSeedString@LevelSettings@@SA?AV?$optional@VLevelSeed64@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI static std::optional<class LevelSeed64> parseSeedString(std::string const&);

    // NOLINTEND
};
