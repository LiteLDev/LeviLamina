#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/WorldType.h"
#include "mc/config/ChatRestrictionLevel.h"
#include "mc/deps/json/Value.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/network/GamePublishSetting.h"
#include "mc/options/EduSharedUriResource.h"
#include "mc/options/EducationEditionOffer.h"
#include "mc/options/EducationEditionOfferValue.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/util/BaseGameVersion.h"
#include "mc/world/actor/player/PermissionsHandler.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/DaylightCycle.h"
#include "mc/world/level/EducationLevelSettings.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/GeneratorType.h"
#include "mc/world/level/LevelSeed64.h"
#include "mc/world/level/NetherWorldType.h"
#include "mc/world/level/PackInstanceId.h"
#include "mc/world/level/SpawnSettings.h"
#include "mc/world/level/WorldVersion.h"
#include "mc/world/level/storage/CloudSaveLevelInfo.h"
#include "mc/world/level/storage/ExperimentStorage.h"
#include "mc/world/level/storage/GameRules.h"

// auto generated forward declare list
// clang-format off
class Experiments;
class LevelData;
struct DimensionType;
struct LevelSummary;
namespace mce { class UUID; }
// clang-format on

class LevelSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::LevelSeed64>                               mSeed;
    ::ll::TypedStorage<4, 4, ::GameType>                                  mGameType;
    ::ll::TypedStorage<1, 1, bool>                                        mIsHardcore;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::Difficulty>           mGameDifficulty;
    ::ll::TypedStorage<1, 1, bool>                                        mForceGameType;
    ::ll::TypedStorage<4, 4, ::GeneratorType>                             mGenerator;
    ::ll::TypedStorage<8, 16, ::Json::Value>                              mFlatWorldOptions;
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
    ::ll::TypedStorage<1, 1, bool>                                        mAllowListActive;
    ::ll::TypedStorage<4, 4, int>                                         mLimitedWorldWidth;
    ::ll::TypedStorage<4, 4, int>                                         mLimitedWorldDepth;
    ::ll::TypedStorage<8, 24, ::PermissionsHandler>                       mDefaultPermissions;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                 mDefaultSpawn;
    ::ll::TypedStorage<8, 24, ::std::vector<::PackInstanceId>>            mNewWorldBehaviorPackIdentities;
    ::ll::TypedStorage<8, 24, ::std::vector<::PackInstanceId>>            mNewWorldResourcePackIdentities;
    ::ll::TypedStorage<8, 192, ::GameRules>                               mGameRules;
    ::ll::TypedStorage<8, 72, ::ExperimentStorage>                        mExperiments;
    ::ll::TypedStorage<8, 32, ::BaseGameVersion>                          mBaseGameVersion;
    ::ll::TypedStorage<8, 32, ::std::string>                              mEducationProductID;
    ::ll::TypedStorage<8, 32, ::std::string>                              mEducationCreatorID;
    ::ll::TypedStorage<8, 32, ::std::string>                              mEducationCreatorWorldID;
    ::ll::TypedStorage<8, 32, ::std::string>                              mEducationReferrerID;
    ::ll::TypedStorage<8, 32, ::std::string>                              mBiomeOverride;
    ::ll::TypedStorage<8, 64, ::EduSharedUriResource>                     mEduSharedUriResource;
    ::ll::TypedStorage<1, 1, ::ChatRestrictionLevel>                      mChatRestrictionLevel;
    ::ll::TypedStorage<8, 328, ::std::optional<::EducationLevelSettings>> mEducationLevelSettings;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>                       mOverrideForceExperimentalGameplayFlag;
    ::ll::TypedStorage<8, 176, ::std::optional<::CloudSaveLevelInfo>>     mCloudSaveInfo;
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::UUID>>                 mExcludedScriptModules;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelSettings& operator=(LevelSettings const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelSettings();

    MCAPI LevelSettings(::LevelSettings&&);

    MCAPI LevelSettings(::LevelSettings const&);

#ifdef LL_PLAT_C
    MCAPI explicit LevelSettings(::LevelSummary const& summary);
#endif

    MCAPI LevelSettings(::LevelData const& data, ::DimensionType dimension);

    MCAPI bool achievementsWillBeDisabledOnLoad() const;

#ifdef LL_PLAT_S
    MCAPI ::LevelSettings& addExcludedScriptModule(::mce::UUID moduleUUID);
#endif

    MCAPI bool cloudSaveForWorldIsEnabled() const;

    MCFOLD bool educationFeaturesEnabled() const;

    MCFOLD ::std::string const& educationProductID() const;

    MCFOLD bool forceGameType() const;

    MCFOLD bool getAdventureModeOverridesEnabled() const;

    MCAPI bool getAllowListActive() const;

    MCFOLD ::BaseGameVersion const& getBaseGameVersion() const;

    MCFOLD ::std::string const& getBiomeOverride() const;

    MCFOLD ::ChatRestrictionLevel getChatRestrictionLevel() const;

    MCAPI ::CloudSaveLevelInfo const& getCloudSaveInfo() const;

    MCAPI bool getCustomSkinsDisabled() const;

    MCAPI ::DaylightCycle getDaylightCycle() const;

    MCFOLD ::PermissionsHandler const& getDefaultPermissions() const;

    MCFOLD ::BlockPos const& getDefaultSpawn() const;

    MCAPI bool getDisablePlayerInteractions() const;

    MCFOLD ::Editor::WorldType getEditorWorldType() const;

    MCAPI ::EduSharedUriResource const& getEduSharedUriResource() const;

    MCFOLD ::std::string const& getEducationCreatorID() const;

    MCFOLD ::std::string const& getEducationCreatorWorldID() const;

    MCFOLD ::EducationEditionOffer getEducationEditionOffer() const;

    MCFOLD ::std::optional<::EducationLevelSettings> const& getEducationLevelSettings() const;

    MCFOLD ::std::string const& getEducationReferrerID() const;

    MCAPI bool getEmoteChatMuted() const;

    MCFOLD ::std::vector<::mce::UUID> const& getExcludedScriptModules() const;

    MCFOLD ::Experiments const& getExperiments() const;

    MCFOLD ::Json::Value const& getFlatWorldOptions() const;

    MCFOLD ::SharedTypes::Legacy::Difficulty getGameDifficulty() const;

    MCFOLD ::GameRules const& getGameRules() const;

    MCFOLD ::GameType getGameType() const;

    MCFOLD ::GeneratorType getGenerator() const;

    MCFOLD bool getImmutableWorld() const;

    MCAPI bool getLanBroadcastIntent() const;

    MCAPI float getLightningLevel() const;

    MCFOLD int getLimitedWorldDepth() const;

    MCFOLD int getLimitedWorldWidth() const;

    MCFOLD bool getMultiplayerGameIntent() const;

    MCFOLD ::NetherWorldType getNetherType() const;

    MCFOLD bool getOnlySpawnV1Villagers() const;

    MCAPI bool getPersonaDisabled() const;

    MCFOLD ::Social::GamePublishSetting getPlatformBroadcastIntent() const;

    MCFOLD float getRainLevel() const;

    MCFOLD ::LevelSeed64 getSeed() const;

    MCFOLD uint getServerChunkTickRange() const;

    MCAPI ::SpawnSettings getSpawnSettings() const;

    MCFOLD int getTime() const;

    MCFOLD ::WorldVersion getWorldVersion() const;

    MCAPI ::Social::GamePublishSetting getXBLBroadcastIntent() const;

    MCFOLD bool hasAchievementsDisabled() const;

    MCFOLD bool hasBonusChestEnabled() const;

    MCAPI bool hasCheatsEnabled() const;

    MCFOLD bool hasCommandsEnabled() const;

    MCFOLD bool hasConfirmedPlatformLockedContent() const;

    MCAPI bool hasLockedBehaviorPack() const;

    MCAPI bool hasLockedResourcePack() const;

    MCFOLD bool hasStartWithMapEnabled() const;

    MCFOLD bool isCreatedInEditor() const;

#ifdef LL_PLAT_C
    MCAPI bool isEditorTestWorld() const;
#endif

    MCAPI bool isEditorWorld() const;

    MCFOLD bool isExportedFromEditor() const;

    MCAPI bool isFromLockedTemplate() const;

    MCFOLD bool isFromWorldTemplate() const;

    MCFOLD bool isHardcore() const;

    MCAPI bool isRandomSeedAllowed() const;

    MCFOLD bool isTexturepacksRequired() const;

    MCFOLD bool isWorldTemplateOptionLocked() const;

    MCAPI ::LevelSettings& operator=(::LevelSettings&&);

#ifdef LL_PLAT_S
    MCAPI ::LevelSettings& setAdventureModeOverridesEnabled(bool adventureModeOverridesEnabled);

    MCAPI ::LevelSettings& setAllowListActive(bool active);
#endif

    MCAPI ::LevelSettings& setBaseGameVersion(::BaseGameVersion const& baseGameVersion);

#ifdef LL_PLAT_C
    MCAPI ::LevelSettings& setBiomeOverride(::std::string const& biomeName);
#endif

#ifdef LL_PLAT_S
    MCAPI ::LevelSettings& setChatRestrictionLevel(::ChatRestrictionLevel chatRestrictionLevel);
#endif

    MCAPI ::LevelSettings& setCloudSaveInfo(::std::optional<::CloudSaveLevelInfo> cloudSaveInfo);

#ifdef LL_PLAT_S
    MCAPI ::LevelSettings& setCommandsEnabled(bool commandsEnabled);

    MCAPI ::LevelSettings& setCustomSkinsDisabled(bool val);

    MCAPI ::LevelSettings& setDefaultPlayerPermissions(::PlayerPermissionLevel playerPermissionLevel);

    MCAPI ::LevelSettings& setDifficulty(::SharedTypes::Legacy::Difficulty difficulty);
#endif

    MCAPI ::LevelSettings& setDisablePlayerInteractions(bool disableInteractions);

    MCAPI ::LevelSettings& setEditorWorldType(::Editor::WorldType editorWorldType);

    MCAPI ::LevelSettings& setEducationCreatorID(::std::string id);

    MCAPI ::LevelSettings& setEducationCreatorWorldID(::std::string id);

#ifdef LL_PLAT_C
    MCAPI ::LevelSettings& setEducationEditionOffer(::EducationEditionOffer offer);
#endif

    MCAPI ::LevelSettings& setEducationFeaturesEnabled(bool enabled);

#ifdef LL_PLAT_C
    MCAPI void setEducationLevelSettings(::EducationLevelSettings settings);
#endif

    MCAPI ::LevelSettings& setEducationProductID(::std::string id);

    MCAPI ::LevelSettings& setEducationReferrerID(::std::string id);

#ifdef LL_PLAT_S
    MCAPI ::LevelSettings& setEmoteChatMuted(bool val);
#endif

    MCAPI ::LevelSettings& setExperiments(::ExperimentStorage const& experiments);

#ifdef LL_PLAT_S
    MCAPI ::LevelSettings& setForceGameType(bool value);

    MCAPI ::LevelSettings& setGameRules(::GameRules gameRules);

    MCAPI ::LevelSettings& setGameType(::GameType gameType);

    MCAPI ::LevelSettings& setGeneratorType(::GeneratorType generatorType);
#endif

#ifdef LL_PLAT_C
    MCAPI ::LevelSettings& setImmutableWorld(bool immutable);
#endif

#ifdef LL_PLAT_S
    MCAPI ::LevelSettings& setIsHardcore(bool isHardcore);
#endif

#ifdef LL_PLAT_C
    MCAPI ::LevelSettings& setLanBroadcastIntent(bool lanBroadcastIntent);

    MCAPI ::LevelSettings& setMultiplayerGameIntent(bool multiplayerGameIntent);

    MCAPI ::LevelSettings& setNetherType(::NetherWorldType netherType);

    MCAPI void setNewWorldBehaviorPackIdentities(::std::vector<::PackInstanceId> const& identities);

    MCAPI void setNewWorldResourcePackIdentities(::std::vector<::PackInstanceId> const& identities);
#endif

#ifdef LL_PLAT_S
    MCAPI void setOnlySpawnV1Villagers(bool spawnV1Villagers);

    MCAPI ::LevelSettings& setOverrideSavedSettings(bool overrideSaved);
#endif

    MCAPI ::LevelSettings& setPlatformBroadcastIntent(::Social::GamePublishSetting platformBroadcastIntent);

#ifdef LL_PLAT_S
    MCFOLD ::LevelSettings& setRandomSeed(::LevelSeed64 seed);

    MCAPI ::LevelSettings& setServerChunkTickRange(uint serverChunkTickRange);
#endif

    MCAPI ::LevelSettings& setSpawnSettings(::SpawnSettings spawnSettings);

#ifdef LL_PLAT_S
    MCAPI ::LevelSettings& setTexturePackRequired(bool texturePackRequired);

    MCAPI ::LevelSettings& setUseMsaGamertagsOnly(bool useMsaGamertagsOnly);
#endif

    MCAPI ::LevelSettings& setXblBroadcastIntent(::Social::GamePublishSetting xblBroadcastIntent);

    MCAPI bool shouldOverrideSavedSettings() const;

    MCFOLD bool useMsaGamertagsOnly() const;

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

    MCAPI void* $ctor(::LevelSettings&&);

    MCAPI void* $ctor(::LevelSettings const&);

#ifdef LL_PLAT_C
    MCAPI void* $ctor(::LevelSummary const& summary);
#endif

    MCAPI void* $ctor(::LevelData const& data, ::DimensionType dimension);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
