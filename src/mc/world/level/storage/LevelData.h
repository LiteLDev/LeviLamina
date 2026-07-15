#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GameVersion.h"
#include "mc/common/editor/WorldType.h"
#include "mc/config/ChatRestrictionLevel.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/json/Value.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/network/GamePublishSetting.h"
#include "mc/network/ServerEditorConnectionPolicy.h"
#include "mc/options/EducationEditionOffer.h"
#include "mc/options/EducationEditionOfferValue.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/world/actor/player/Abilities.h"
#include "mc/world/actor/player/PermissionsHandler.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/DaylightCycle.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/GeneratorType.h"
#include "mc/world/level/NetherWorldType.h"
#include "mc/world/level/SpawnSettings.h"
#include "mc/world/level/Tick.h"
#include "mc/world/level/levelgen/flat/FlatWorldPresetID.h"
#include "mc/world/level/storage/AdventureSettings.h"
#include "mc/world/level/storage/CloudSaveLevelInfo.h"
#include "mc/world/level/storage/ExperimentStorage.h"
#include "mc/world/level/storage/GameRules.h"
#include "mc/world/level/storage/LevelDataProperty.h"
#include "mc/world/level/storage/LevelDataType.h"
#include "mc/world/level/storage/StorageVersion.h"
#include "mc/world/level/storage/WorldTemplateLevelData.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class CompoundTag;
class ILevelStorageManagerConnector;
class LevelSeed64;
class LevelSettings;
class WorldClockRegistry;
struct EduSharedUriResource;
struct LevelDataValue;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

class LevelData {
public:
    // LevelData inner types define
    using LevelDataPublisher = ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>;

    using LevelDataPublisherRefWrapper = ::std::reference_wrapper<
        ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 5, ::AdventureSettings>                                     mAdventureSettings;
    ::ll::TypedStorage<8, 144, ::WorldTemplateLevelData>                              mWorldTemplateLevelData;
    ::ll::TypedStorage<8, 192, ::GameRules>                                           mGameRules;
    ::ll::TypedStorage<8, 72, ::ExperimentStorage>                                    mExperiments;
    ::ll::TypedStorage<4, 240, ::Abilities>                                           mDefaultAbilities;
    ::ll::TypedStorage<8, 24, ::PermissionsHandler>                                   mDefaultPermissions;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mLevelName;
    ::ll::TypedStorage<4, 4, ::StorageVersion>                                        mStorageVersion;
    ::ll::TypedStorage<8, 56, ::GameVersion>                                          mMinCompatibleClientVersion;
    ::ll::TypedStorage<4, 4, int>                                                     mNetworkVersion;
    ::ll::TypedStorage<8, 24, ::SemVersion>                                           mInventoryVersion;
    ::ll::TypedStorage<8, 8, ::Tick>                                                  mCurrentTick;
    ::ll::TypedStorage<1, 1, bool>                                                    mHasSpawnPos;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                             mLimitedWorldOrigin;
    ::ll::TypedStorage<4, 4, int>                                                     mOverworldTimeSetting;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::WorldClockRegistry const>> mWorldClockRegistry;
    ::ll::TypedStorage<8, 8, int64>                                                   mLastSaved;
    ::ll::TypedStorage<4, 4, uint>                                                    mServerTickRange;
    ::ll::TypedStorage<4, 4, float>                                                   mRainLevel;
    ::ll::TypedStorage<4, 4, int>                                                     mRainTime;
    ::ll::TypedStorage<4, 4, float>                                                   mLightningLevel;
    ::ll::TypedStorage<4, 4, int>                                                     mLightningTime;
    ::ll::TypedStorage<4, 4, int>                                                     mNetherScale;
    ::ll::TypedStorage<8, 56, ::GameVersion>                                          mLastOpenedWithVersion;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::Difficulty>                       mGameDifficulty;
    ::ll::TypedStorage<1, 1, bool>                                                    mForceGameType;
    ::ll::TypedStorage<1, 1, bool>                                                    mIsHardcore;
    ::ll::TypedStorage<1, 1, bool>                                                    mPlayerHasDied;
    ::ll::TypedStorage<1, 1, bool>                                                    mSpawnMobs;
    ::ll::TypedStorage<1, 1, bool>                                                    mAdventureModeOverridesEnabled;
    ::ll::TypedStorage<8, 16, ::Json::Value>                                          mFlatWorldOptions;
    ::ll::TypedStorage<4, 4, uint>                                                    mWorldStartCount;
    ::ll::TypedStorage<1, 1, bool>                                                    mAchievementsDisabled;
    ::ll::TypedStorage<4, 4, ::Editor::WorldType>                                     mEditorWorldType;
    ::ll::TypedStorage<1, 1, bool>                                    mAllowAnonymousBlockDropsInEditorWorlds;
    ::ll::TypedStorage<4, 4, ::ServerEditorConnectionPolicy>          mServerEditorConnectionPolicy;
    ::ll::TypedStorage<1, 1, bool>                                    mIsCreatedInEditor;
    ::ll::TypedStorage<1, 1, bool>                                    mIsExportedFromEditor;
    ::ll::TypedStorage<4, 4, ::EducationEditionOfferValue>            mEducationEditionOffer;
    ::ll::TypedStorage<8, 176, ::std::optional<::CloudSaveLevelInfo>> mCloudSaveInfo;
    ::ll::TypedStorage<1, 1, bool>                                    mEducationFeaturesEnabled;
    ::ll::TypedStorage<1, 1, bool>                                    mIsSingleUseWorld;
    ::ll::TypedStorage<1, 1, bool>                                    mConfirmedPlatformLockedContent;
    ::ll::TypedStorage<1, 1, bool>                                    mMultiplayerGameIntent;
    ::ll::TypedStorage<1, 1, bool>                                    mMultiplayerGame;
    ::ll::TypedStorage<1, 1, bool>                                    mLANBroadcastIntent;
    ::ll::TypedStorage<1, 1, bool>                                    mLANBroadcast;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting>            mXBLBroadcastIntent;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting>            mXBLBroadcastMode;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting>            mPlatformBroadcastIntent;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting>            mPlatformBroadcastMode;
    ::ll::TypedStorage<1, 1, bool>                                    mCheatsEnabled;
    ::ll::TypedStorage<1, 1, bool>                                    mCommandsEnabled;
    ::ll::TypedStorage<1, 1, bool>                                    mTexturePacksRequired;
    ::ll::TypedStorage<1, 1, bool>                                    mHasLockedBehaviorPack;
    ::ll::TypedStorage<1, 1, bool>                                    mHasLockedResourcePack;
    ::ll::TypedStorage<1, 1, bool>                                    mIsFromLockedTemplate;
    ::ll::TypedStorage<1, 1, bool>                                    mIsRandomSeedAllowed;
    ::ll::TypedStorage<8, 32, ::std::string>                          mEducationProductId;
    ::ll::TypedStorage<8, 32, ::std::string>                          mEducationCreatorId;
    ::ll::TypedStorage<8, 32, ::std::string>                          mEducationCreatorWorldId;
    ::ll::TypedStorage<8, 32, ::std::string>                          mEducationReferrerId;
    ::ll::TypedStorage<1, 1, bool>                                    mUseMsaGamertagsOnly;
    ::ll::TypedStorage<1, 1, bool>                                    mBonusChestEnabled;
    ::ll::TypedStorage<1, 1, bool>                                    mBonusChestSpawned;
    ::ll::TypedStorage<1, 1, bool>                                    mStartWithMapEnabled;
    ::ll::TypedStorage<1, 1, bool>                                    mMapsCenteredToOrigin;
    ::ll::TypedStorage<1, 1, bool>                                    mRequiresCopiedPackRemovalCheck;
    ::ll::TypedStorage<1, 1, bool>                                    mSpawnV1Villagers;
    ::ll::TypedStorage<1, 1, bool>                                    mPersonaDisabled;
    ::ll::TypedStorage<1, 1, bool>                                    mCustomSkinsDisabled;
    ::ll::TypedStorage<1, 1, bool>                                    mEmoteChatMuted;
    ::ll::TypedStorage<1, 1, bool>                                    mHasUncompleteWorldFileOnDisk;
    ::ll::TypedStorage<1, 1, ::NetherWorldType>                       mNetherType;
    ::ll::TypedStorage<8, 48, ::SpawnSettings>                        mSpawnSettings;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::LevelDataValue>> mValues;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::LevelDataValue>> mOverrides;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mBiomeOverride;
    ::ll::TypedStorage<4, 8, ::std::optional<::GeneratorType>>                        mDataDrivenGeneratorType;
    ::ll::TypedStorage<1, 1, ::ChatRestrictionLevel>                                  mChatRestrictionLevel;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<::Bedrock::PubSub::Publisher<void(bool), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>>
                                                               mIsHardcoreSubscribers;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSaveLevelData;
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            ::LevelDataProperty,
            ::std::unique_ptr<::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>,
            ::std::less<::LevelDataProperty>,
            ::std::vector<::LevelDataProperty>,
            ::std::vector<::std::unique_ptr<
                ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>>>>
                                                              mLevelDataPropertiesPublishers;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mExperienceWorldId;
    ::ll::TypedStorage<4, 4, ::LevelDataType>                 mLevelDataType;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelData& operator=(LevelData const&);
    LevelData(LevelData const&);
    LevelData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelData(::LevelData&& rhs);

    MCAPI explicit LevelData(::CompoundTag const& tag);

    MCAPI LevelData(bool isEduMode, ::LevelDataType levelDataType);

    MCAPI LevelData(
        ::LevelSettings const&  settings,
        ::std::string const&    levelName,
        ::GeneratorType         generatorVersion,
        ::BlockPos const&       defaultSpawn,
        bool                    achievementsDisabled,
        ::EducationEditionOffer eduOffer,
        float                   rainLevel,
        float                   lightningLevel
    );

#ifdef LL_PLAT_C
    MCAPI ::std::optional<::std::reference_wrapper<
        ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>>
    _getLevelDataPropertyPublisher(::LevelDataProperty property) const;
#endif

    MCFOLD ::LevelDataValue const* _getValue(::HashedString const& key) const;

    MCFOLD ::LevelDataValue* _getValue(::HashedString const& key);

#ifdef LL_PLAT_C
    MCAPI void _resetDefaultAdvancedSettingsData(bool isTrial);

    MCAPI void _resetDefaultGeneralSettingsData();

    MCAPI void _resetDefaultMultiplayerSettingsData(bool isTrial);

    MCAPI void _resetDefaultScriptingCodingSettingsData();

    MCAPI void applyPolicyBasedSettings(bool hasBehaviourPack);
#endif

    MCAPI ::std::unique_ptr<::CompoundTag> createTag() const;

    MCAPI void disableAchievements();

    MCAPI ::BaseGameVersion const& getBaseGameVersion() const;

    MCAPI ::std::string const getBiomeOverride() const;

    MCAPI ::CompoundTag const& getEduSharedUriResource() const;

    MCAPI ::GeneratorType getGenerator() const;

#ifdef LL_PLAT_C
    MCAPI void getTagData(::CompoundTag const& tag);
#endif

    MCAPI bool hasCloudSaveAssociation() const;

#ifdef LL_PLAT_C
    MCAPI bool isCloudSaveActiveForWorld() const;

    MCAPI bool isEditionCompatible() const;
#endif

    MCAPI ::LevelData& operator=(::LevelData&& rhs);

#ifdef LL_PLAT_C
    MCAPI ::Bedrock::PubSub::Subscription registerIsHardcoreListener(::std::function<void(bool)> callback) const;

    MCAPI ::Bedrock::PubSub::Subscription
    registerLevelDataPropertyListener(::LevelDataProperty property, ::std::function<void()> callback) const;
#endif

    MCAPI void registerWithLevelStorageManagerEvents(::ILevelStorageManagerConnector& levelStorageManagerConnector);

#ifdef LL_PLAT_C
    MCAPI void resetDefaultCheatSettingsData();

    MCAPI void resetSettingsForRandomSeed();

    MCAPI void setBiomeOverride(::std::string const& biomeName);
#endif

    MCAPI void setCheatsEnabled(bool cheatsEnabled);

#ifdef LL_PLAT_C
    MCAPI void setCloudSaveInfo(::CloudSaveLevelInfo const& cloudSaveInfo);
#endif

    MCAPI void setCommandsEnabled(bool commandsEnabled);

    MCAPI void setDaylightCycle(::DaylightCycle daylightCycle);

    MCAPI void setEduSharedUriResource(::EduSharedUriResource const& eduSharedUriResource);

    MCAPI void setEducationFeaturesEnabled(bool educationEnabled);

#ifdef LL_PLAT_C
    MCAPI void setEducationOid(::std::string const& educationOid);

    MCAPI void setFlatWorldPreset(::FlatWorldPresetID preset);
#endif

    MCAPI void setGameDifficulty(::SharedTypes::Legacy::Difficulty difficulty);

    MCAPI void setGameType(::GameType type);

#ifdef LL_PLAT_C
    MCAPI void setGenerator(::GeneratorType version);
#endif

    MCAPI void setIsHardcore(bool value);

    MCAPI void setLevelName(::std::string const& levelName);

    MCAPI void setOverworldTimeSetting(int time);

#ifdef LL_PLAT_C
    MCAPI void setSeed(::LevelSeed64 seed);
#endif

    MCAPI void setServerChunkTickRange(uint newRange);

    MCAPI void setSpawnPos(::BlockPos const& spawn);

    MCAPI void setTagData(::CompoundTag& tag) const;

    MCAPI void setWorldClockRegistry(::Bedrock::NonOwnerPointer<::WorldClockRegistry const> registry);

    MCAPI void setWorldTemplateOptionLocked(bool isLocked);

#ifdef LL_PLAT_C
    MCAPI bool shouldAchievementsBeDisabled(bool isTrialMode, bool hasBehaviourPack) const;
#endif

    MCAPI void touchLastLoadedWithVersion();

    MCAPI ~LevelData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LevelData&& rhs);

    MCAPI void* $ctor(::CompoundTag const& tag);

    MCAPI void* $ctor(bool isEduMode, ::LevelDataType levelDataType);

    MCAPI void* $ctor(
        ::LevelSettings const&  settings,
        ::std::string const&    levelName,
        ::GeneratorType         generatorVersion,
        ::BlockPos const&       defaultSpawn,
        bool                    achievementsDisabled,
        ::EducationEditionOffer eduOffer,
        float                   rainLevel,
        float                   lightningLevel
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
