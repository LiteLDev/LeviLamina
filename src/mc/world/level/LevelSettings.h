#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/WorldType.h"
#include "mc/config/ChatRestrictionLevel.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/network/GamePublishSetting.h"
#include "mc/options/EducationEditionOffer.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/Difficulty.h"
#include "mc/world/level/DaylightCycle.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/GeneratorType.h"
#include "mc/world/level/NetherWorldType.h"
#include "mc/world/level/WorldVersion.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class BlockPos;
class CloudSaveLevelInfo;
class Dimension;
class EducationEditionOfferValue;
class ExperimentStorage;
class Experiments;
class GameRules;
class LevelData;
class LevelSeed64;
class PermissionsHandler;
struct EduSharedUriResource;
struct EducationLevelSettings;
struct PackInstanceId;
struct SpawnSettings;
// clang-format on

class LevelSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LevelSeed64>                               mSeed;
    ::ll::TypedStorage<4, 4, ::GameType>                                  mGameType;
    ::ll::TypedStorage<1, 1, bool>                                        mIsHardcore;
    ::ll::TypedStorage<4, 4, ::Difficulty>                                mGameDifficulty;
    ::ll::TypedStorage<1, 1, bool>                                        mForceGameType;
    ::ll::TypedStorage<4, 4, ::GeneratorType>                             mGenerator;
    ::ll::TypedStorage<1, 1, ::WorldVersion>                              mWorldVersion;
    ::ll::TypedStorage<1, 1, ::NetherWorldType>                           mNetherType;
    ::ll::TypedStorage<8, 48, ::SpawnSettings>                            mSpawnSettings;
    ::ll::TypedStorage<1, 1, bool>                                        mAchievementsDisabled;
    ::ll::TypedStorage<4, 4, ::Editor::WorldType>                         mEditorWorldType;
    ::ll::TypedStorage<1, 1, bool>                                        mIsCreatedInEditor;
    ::ll::TypedStorage<1, 1, bool>                                        mIsExportedFromEditor;
    ::ll::TypedStorage<4, 4, int>                                         mTime;
    ::ll::TypedStorage<4, 4, ::EducationEditionOfferValue>                mEducationEditionOffer;
    ::ll::TypedStorage<1, 1, bool>                                        mEducationFeaturesEnabled;
    ::ll::TypedStorage<1, 1, bool>                                        mImmutableWorld;
    ::ll::TypedStorage<4, 4, float>                                       mRainLevel;
    ::ll::TypedStorage<4, 4, float>                                       mLightningLevel;
    ::ll::TypedStorage<1, 1, bool>                                        mConfirmedPlatformLockedContent;
    ::ll::TypedStorage<1, 1, bool>                                        mMultiplayerGameIntent;
    ::ll::TypedStorage<1, 1, bool>                                        mLANBroadcastIntent;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting>                mXBLBroadcastIntent;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting>                mPlatformBroadcastIntent;
    ::ll::TypedStorage<1, 1, ::DaylightCycle>                             mDaylightCycle;
    ::ll::TypedStorage<1, 1, bool>                                        mDisablePlayerInteractions;
    ::ll::TypedStorage<1, 1, bool>                                        mCheatsEnabled;
    ::ll::TypedStorage<1, 1, bool>                                        mAdventureModeOverridesEnabled;
    ::ll::TypedStorage<1, 1, bool>                                        mCommandsEnabled;
    ::ll::TypedStorage<1, 1, bool>                                        mTexturePacksRequired;
    ::ll::TypedStorage<1, 1, bool>                                        mHasLockedBehaviorPack;
    ::ll::TypedStorage<1, 1, bool>                                        mHasLockedResourcePack;
    ::ll::TypedStorage<1, 1, bool>                                        mIsFromLockedTemplate;
    ::ll::TypedStorage<1, 1, bool>                                        mIsRandomSeedAllowed;
    ::ll::TypedStorage<1, 1, bool>                                        mUseMsaGamertagsOnly;
    ::ll::TypedStorage<1, 1, bool>                                        mOverrideSettings;
    ::ll::TypedStorage<1, 1, bool>                                        mBonusChestEnabled;
    ::ll::TypedStorage<1, 1, bool>                                        mStartWithMapEnabled;
    ::ll::TypedStorage<4, 4, int>                                         mServerChunkTickRange;
    ::ll::TypedStorage<1, 1, bool>                                        mIsFromWorldTemplate;
    ::ll::TypedStorage<1, 1, bool>                                        mIsWorldTemplateOptionLocked;
    ::ll::TypedStorage<1, 1, bool>                                        mSpawnV1Villagers;
    ::ll::TypedStorage<1, 1, bool>                                        mPersonaDisabled;
    ::ll::TypedStorage<1, 1, bool>                                        mCustomSkinsDisabled;
    ::ll::TypedStorage<1, 1, bool>                                        mEmoteChatMuted;
    ::ll::TypedStorage<4, 4, int>                                         mLimitedWorldWidth;
    ::ll::TypedStorage<4, 4, int>                                         mLimitedWorldDepth;
    ::ll::TypedStorage<1, 2, ::PermissionsHandler>                        mDefaultPermissions;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                 mDefaultSpawn;
    ::ll::TypedStorage<8, 24, ::std::vector<::PackInstanceId>>            mNewWorldBehaviorPackIdentities;
    ::ll::TypedStorage<8, 24, ::std::vector<::PackInstanceId>>            mNewWorldResourcePackIdentities;
    ::ll::TypedStorage<8, 192, ::GameRules>                               mGameRules;
    ::ll::TypedStorage<8, 72, ::ExperimentStorage>                        mExperiments;
    ::ll::TypedStorage<8, 120, ::BaseGameVersion>                         mBaseGameVersion;
    ::ll::TypedStorage<8, 32, ::std::string>                              mEducationProductID;
    ::ll::TypedStorage<8, 32, ::std::string>                              mBiomeOverride;
    ::ll::TypedStorage<8, 64, ::EduSharedUriResource>                     mEduSharedUriResource;
    ::ll::TypedStorage<1, 1, ::ChatRestrictionLevel>                      mChatRestrictionLevel;
    ::ll::TypedStorage<8, 32, ::std::string>                              mServerId;
    ::ll::TypedStorage<8, 32, ::std::string>                              mWorldId;
    ::ll::TypedStorage<8, 32, ::std::string>                              mScenarioId;
    ::ll::TypedStorage<8, 328, ::std::optional<::EducationLevelSettings>> mEducationLevelSettings;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                       mOverrideForceExperimentalGameplayFlag;
    ::ll::TypedStorage<8, 176, ::std::optional<::CloudSaveLevelInfo>>     mCloudSaveInfo;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>               mExcludedScriptModules;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string const& GetScenarioId() const;

    MCAPI ::std::string const& GetServerId() const;

    MCFOLD ::std::string const& GetWorldId() const;

    MCAPI LevelSettings();

    MCAPI LevelSettings(::LevelSettings const&);

    MCAPI LevelSettings(::LevelSettings&&);

    MCAPI LevelSettings(::LevelData const& data, ::DimensionType dimension);

    MCAPI bool achievementsWillBeDisabledOnLoad() const;

    MCAPI ::LevelSettings& addExcludedScriptModule(::std::string const& moduleUUID);

    MCAPI bool cloudSaveForWorldIsEnabled() const;

    MCFOLD bool educationFeaturesEnabled() const;

    MCFOLD ::std::string const& educationProductID() const;

    MCFOLD bool forceGameType() const;

    MCAPI bool getAdventureModeOverridesEnabled() const;

    MCFOLD ::BaseGameVersion const& getBaseGameVersion() const;

    MCAPI ::std::string const& getBiomeOverride() const;

    MCAPI ::ChatRestrictionLevel getChatRestrictionLevel() const;

    MCAPI ::CloudSaveLevelInfo const& getCloudSaveInfo() const;

    MCFOLD bool getCustomSkinsDisabled() const;

    MCFOLD ::DaylightCycle getDaylightCycle() const;

    MCFOLD ::PermissionsHandler const& getDefaultPermissions() const;

    MCAPI ::BlockPos const& getDefaultSpawn() const;

    MCAPI bool getDisablePlayerInteractions() const;

    MCAPI ::Editor::WorldType getEditorWorldType() const;

    MCFOLD ::EduSharedUriResource const& getEduSharedUriResource() const;

    MCFOLD ::EducationEditionOffer getEducationEditionOffer() const;

    MCAPI ::std::optional<::EducationLevelSettings> const& getEducationLevelSettings() const;

    MCFOLD bool getEmoteChatMuted() const;

    MCAPI ::std::vector<::std::string> const& getExcludedScriptModules() const;

    MCFOLD ::Experiments const& getExperiments() const;

    MCFOLD ::Difficulty getGameDifficulty() const;

    MCFOLD ::GameRules const& getGameRules() const;

    MCFOLD ::GameType getGameType() const;

    MCFOLD ::GeneratorType getGenerator() const;

    MCAPI bool getImmutableWorld() const;

    MCAPI bool getLanBroadcastIntent() const;

    MCAPI float getLightningLevel() const;

    MCAPI int getLimitedWorldDepth() const;

    MCFOLD int getLimitedWorldWidth() const;

    MCAPI bool getMultiplayerGameIntent() const;

    MCFOLD ::NetherWorldType getNetherType() const;

    MCAPI bool getOnlySpawnV1Villagers() const;

    MCAPI bool getPersonaDisabled() const;

    MCFOLD ::Social::GamePublishSetting getPlatformBroadcastIntent() const;

    MCAPI float getRainLevel() const;

    MCFOLD ::LevelSeed64 getSeed() const;

    MCFOLD uint getServerChunkTickRange() const;

    MCAPI ::SpawnSettings getSpawnSettings() const;

    MCAPI int getTime() const;

    MCFOLD ::WorldVersion getWorldVersion() const;

    MCFOLD ::Social::GamePublishSetting getXBLBroadcastIntent() const;

    MCFOLD bool hasAchievementsDisabled() const;

    MCFOLD bool hasBonusChestEnabled() const;

    MCFOLD bool hasCheatsEnabled() const;

    MCFOLD bool hasCommandsEnabled() const;

    MCFOLD bool hasConfirmedPlatformLockedContent() const;

    MCFOLD bool hasLockedBehaviorPack() const;

    MCAPI bool hasLockedResourcePack() const;

    MCFOLD bool hasStartWithMapEnabled() const;

    MCFOLD bool isCreatedInEditor() const;

    MCAPI bool isEditorWorld() const;

    MCFOLD bool isExportedFromEditor() const;

    MCAPI bool isFromLockedTemplate() const;

    MCFOLD bool isFromWorldTemplate() const;

    MCFOLD bool isHardcore() const;

    MCAPI bool isRandomSeedAllowed() const;

    MCFOLD bool isTexturepacksRequired() const;

    MCFOLD bool isWorldTemplateOptionLocked() const;

    MCAPI ::LevelSettings& operator=(::LevelSettings&&);

    MCFOLD ::LevelSettings& setAdventureModeOverridesEnabled(bool adventureModeOverridesEnabled);

    MCFOLD ::LevelSettings& setBaseGameVersion(::BaseGameVersion const& baseGameVersion);

    MCAPI ::LevelSettings& setChatRestrictionLevel(::ChatRestrictionLevel chatRestrictionLevel);

    MCAPI ::LevelSettings& setCommandsEnabled(bool commandsEnabled);

    MCAPI ::LevelSettings& setCustomSkinsDisabled(bool val);

    MCAPI ::LevelSettings& setDefaultPlayerPermissions(::PlayerPermissionLevel playerPermissionLevel);

    MCAPI ::LevelSettings& setDifficulty(::Difficulty difficulty);

    MCAPI ::LevelSettings& setDisablePlayerInteractions(bool disableInteractions);

    MCAPI ::LevelSettings& setEditorWorldType(::Editor::WorldType editorWorldType);

    MCAPI ::LevelSettings& setEduSharedUriResource(::EduSharedUriResource const& eduSharedUriResource);

    MCAPI ::LevelSettings& setEducationEditionOffer(::EducationEditionOffer offer);

    MCAPI ::LevelSettings& setEducationFeaturesEnabled(bool enabled);

    MCAPI ::LevelSettings& setEducationProductID(::std::string id);

    MCAPI ::LevelSettings& setEmoteChatMuted(bool val);

    MCAPI ::LevelSettings& setExperiments(::ExperimentStorage const& experiments);

    MCAPI ::LevelSettings& setForceGameType(bool value);

    MCAPI ::LevelSettings& setGameRules(::GameRules gameRules);

    MCAPI ::LevelSettings& setGameType(::GameType gameType);

    MCAPI ::LevelSettings& setGeneratorType(::GeneratorType generatorType);

    MCAPI ::LevelSettings& setIsHardcore(bool isHardcore);

    MCAPI void setOnlySpawnV1Villagers(bool spawnV1Villagers);

    MCAPI ::LevelSettings& setOverrideSavedSettings(bool overrideSaved);

    MCFOLD ::LevelSettings& setPlatformBroadcastIntent(::Social::GamePublishSetting platformBroadcastIntent);

    MCFOLD ::LevelSettings& setRandomSeed(::LevelSeed64 seed);

    MCAPI ::LevelSettings& setScenarioId(::std::string scenarioId);

    MCAPI ::LevelSettings& setServerChunkTickRange(uint serverChunkTickRange);

    MCAPI ::LevelSettings& setServerId(::std::string serverId);

    MCAPI ::LevelSettings& setSpawnSettings(::SpawnSettings spawnSettings);

    MCAPI ::LevelSettings& setTexturePackRequired(bool texturePackRequired);

    MCAPI ::LevelSettings& setUseMsaGamertagsOnly(bool useMsaGamertagsOnly);

    MCAPI ::LevelSettings& setWorldId(::std::string worldId);

    MCAPI ::LevelSettings& setXblBroadcastIntent(::Social::GamePublishSetting xblBroadcastIntent);

    MCAPI bool shouldOverrideSavedSettings() const;

    MCAPI bool useMsaGamertagsOnly() const;

    MCAPI ~LevelSettings();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::LevelSeed64> parseSeedString(::std::string const& seedInput);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::LevelSettings const&);

    MCAPI void* $ctor(::LevelSettings&&);

    MCAPI void* $ctor(::LevelData const& data, ::DimensionType dimension);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
