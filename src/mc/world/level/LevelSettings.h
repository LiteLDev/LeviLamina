#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/config/ChatRestrictionLevel.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/json/Value.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/editor/WorldType.h"
#include "mc/network/GamePublishSetting.h"
#include "mc/options/EduSharedUriResource.h"
#include "mc/options/EducationEditionOffer.h"
#include "mc/options/EducationEditionOfferValue.h"
#include "mc/resources/BaseGameVersion.h"
#include "mc/world/actor/player/PermissionsHandler.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/DaylightCycle.h"
#include "mc/world/level/EducationLevelSettings.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/GeneratorType.h"
#include "mc/world/level/LevelSeed64.h"
#include "mc/world/level/NetherWorldType.h"
#include "mc/world/level/SpawnSettings.h"
#include "mc/world/level/WorldVersion.h"
#include "mc/world/level/storage/CloudSaveLevelInfo.h"
#include "mc/world/level/storage/ExperimentStorage.h"
#include "mc/world/level/storage/GameRules.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class LevelData;
struct PackInstanceId;
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
    ::ll::TypedStorage<4, 4, int>                                         mLimitedWorldWidth;
    ::ll::TypedStorage<4, 4, int>                                         mLimitedWorldDepth;
    ::ll::TypedStorage<1, 2, ::PermissionsHandler>                        mDefaultPermissions;
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
    ::ll::TypedStorage<8, 32, ::std::string>                              mServerId;
    ::ll::TypedStorage<8, 32, ::std::string>                              mWorldId;
    ::ll::TypedStorage<8, 32, ::std::string>                              mScenarioId;
    ::ll::TypedStorage<8, 32, ::std::string>                              mOwnerId;
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

    MCAPI LevelSettings(::LevelSettings const&);

    MCAPI LevelSettings(::LevelSettings&&);

    MCAPI LevelSettings(::LevelData const& data, ::DimensionType dimension);

    MCAPI ::LevelSettings& addExcludedScriptModule(::mce::UUID moduleUUID);

    MCAPI ::CloudSaveLevelInfo const& getCloudSaveInfo() const;

    MCAPI ::SpawnSettings getSpawnSettings() const;

    MCAPI ::LevelSettings& operator=(::LevelSettings&&);

    MCAPI ::LevelSettings& setBaseGameVersion(::BaseGameVersion const& baseGameVersion);

    MCAPI ::LevelSettings& setEduSharedUriResource(::EduSharedUriResource const& eduSharedUriResource);

    MCAPI ::LevelSettings& setEducationCreatorID(::std::string id);

    MCAPI ::LevelSettings& setEducationCreatorWorldID(::std::string id);

    MCAPI ::LevelSettings& setEducationEditionOffer(::EducationEditionOffer offer);

    MCAPI ::LevelSettings& setEducationProductID(::std::string id);

    MCAPI ::LevelSettings& setExperiments(::ExperimentStorage const& experiments);

    MCAPI ::LevelSettings& setGameRules(::GameRules gameRules);

    MCAPI ::LevelSettings& setOwnerId(::std::string ownerId);

    MCAPI ::LevelSettings& setScenarioId(::std::string scenarioId);

    MCAPI ::LevelSettings& setServerId(::std::string serverId);

    MCAPI ::LevelSettings& setSpawnSettings(::SpawnSettings spawnSettings);

    MCAPI ::LevelSettings& setWorldId(::std::string worldId);

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
