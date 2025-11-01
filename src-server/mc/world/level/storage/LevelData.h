#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GameVersion.h"
#include "mc/common/editor/WorldType.h"
#include "mc/config/ChatRestrictionLevel.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/json/Value.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/network/GamePublishSetting.h"
#include "mc/options/EducationEditionOffer.h"
#include "mc/options/EducationEditionOfferValue.h"
#include "mc/versionless/world/level/BlockPos.h"
#include "mc/world/actor/player/Abilities.h"
#include "mc/world/actor/player/PermissionsHandler.h"
#include "mc/world/level/DaylightCycle.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/GeneratorType.h"
#include "mc/world/level/NetherWorldType.h"
#include "mc/world/level/SpawnSettings.h"
#include "mc/world/level/Tick.h"
#include "mc/world/level/WorldVersion.h"
#include "mc/world/level/levelgen/flat/FlatWorldPresetID.h"
#include "mc/world/level/storage/AdventureSettings.h"
#include "mc/world/level/storage/CloudSaveLevelInfo.h"
#include "mc/world/level/storage/ExperimentStorage.h"
#include "mc/world/level/storage/GameRules.h"
#include "mc/world/level/storage/StorageVersion.h"
#include "mc/world/level/storage/WorldTemplateLevelData.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class CompoundTag;
class HashedString;
class ILevelStorageManagerConnector;
class LevelSeed64;
class LevelSettings;
struct EduSharedUriResource;
struct LevelDataValue;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace RakNet { class BitStream; }
// clang-format on

class LevelData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 5, ::AdventureSettings> mAdventureSettings;
    ::ll::TypedStorage<8, 144, ::WorldTemplateLevelData> mWorldTemplateLevelData;
    ::ll::TypedStorage<8, 192, ::GameRules> mGameRules;
    ::ll::TypedStorage<8, 72, ::ExperimentStorage> mExperiments;
    ::ll::TypedStorage<4, 240, ::Abilities> mDefaultAbilities;
    ::ll::TypedStorage<1, 2, ::PermissionsHandler> mDefaultPermissions;
    ::ll::TypedStorage<8, 32, ::std::string> mLevelName;
    ::ll::TypedStorage<4, 4, ::StorageVersion> mStorageVersion;
    ::ll::TypedStorage<8, 56, ::GameVersion> mMinCompatibleClientVersion;
    ::ll::TypedStorage<4, 4, int> mNetworkVersion;
    ::ll::TypedStorage<8, 24, ::SemVersion> mInventoryVersion;
    ::ll::TypedStorage<8, 8, ::Tick> mCurrentTick;
    ::ll::TypedStorage<1, 1, bool> mHasSpawnPos;
    ::ll::TypedStorage<4, 12, ::BlockPos> mLimitedWorldOrigin;
    ::ll::TypedStorage<4, 4, int> mTime;
    ::ll::TypedStorage<8, 8, int64> mLastSaved;
    ::ll::TypedStorage<4, 4, uint> mServerTickRange;
    ::ll::TypedStorage<4, 4, float> mRainLevel;
    ::ll::TypedStorage<4, 4, int> mRainTime;
    ::ll::TypedStorage<4, 4, float> mLightningLevel;
    ::ll::TypedStorage<4, 4, int> mLightningTime;
    ::ll::TypedStorage<4, 4, int> mNetherScale;
    ::ll::TypedStorage<8, 56, ::GameVersion> mLastOpenedWithVersion;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::Difficulty> mGameDifficulty;
    ::ll::TypedStorage<1, 1, bool> mForceGameType;
    ::ll::TypedStorage<1, 1, bool> mIsHardcore;
    ::ll::TypedStorage<1, 1, bool> mPlayerHasDied;
    ::ll::TypedStorage<1, 1, bool> mSpawnMobs;
    ::ll::TypedStorage<1, 1, bool> mAdventureModeOverridesEnabled;
    ::ll::TypedStorage<8, 16, ::Json::Value> mFlatWorldOptions;
    ::ll::TypedStorage<4, 4, uint> mWorldStartCount;
    ::ll::TypedStorage<1, 1, bool> mAchievementsDisabled;
    ::ll::TypedStorage<4, 4, ::Editor::WorldType> mEditorWorldType;
    ::ll::TypedStorage<1, 1, bool> mIsCreatedInEditor;
    ::ll::TypedStorage<1, 1, bool> mIsExportedFromEditor;
    ::ll::TypedStorage<4, 4, ::EducationEditionOfferValue> mEducationEditionOffer;
    ::ll::TypedStorage<8, 176, ::std::optional<::CloudSaveLevelInfo>> mCloudSaveInfo;
    ::ll::TypedStorage<1, 1, bool> mEducationFeaturesEnabled;
    ::ll::TypedStorage<1, 1, bool> mIsSingleUseWorld;
    ::ll::TypedStorage<1, 1, bool> mConfirmedPlatformLockedContent;
    ::ll::TypedStorage<1, 1, bool> mMultiplayerGameIntent;
    ::ll::TypedStorage<1, 1, bool> mMultiplayerGame;
    ::ll::TypedStorage<1, 1, bool> mLANBroadcastIntent;
    ::ll::TypedStorage<1, 1, bool> mLANBroadcast;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting> mXBLBroadcastIntent;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting> mXBLBroadcastMode;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting> mPlatformBroadcastIntent;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting> mPlatformBroadcastMode;
    ::ll::TypedStorage<1, 1, bool> mCheatsEnabled;
    ::ll::TypedStorage<1, 1, bool> mCommandsEnabled;
    ::ll::TypedStorage<1, 1, bool> mTexturePacksRequired;
    ::ll::TypedStorage<1, 1, bool> mHasLockedBehaviorPack;
    ::ll::TypedStorage<1, 1, bool> mHasLockedResourcePack;
    ::ll::TypedStorage<1, 1, bool> mIsFromLockedTemplate;
    ::ll::TypedStorage<1, 1, bool> mIsRandomSeedAllowed;
    ::ll::TypedStorage<8, 32, ::std::string> mEducationProductId;
    ::ll::TypedStorage<8, 32, ::std::string> mEducationCreatorId;
    ::ll::TypedStorage<8, 32, ::std::string> mEducationCreatorWorldId;
    ::ll::TypedStorage<8, 32, ::std::string> mEducationReferrerId;
    ::ll::TypedStorage<1, 1, bool> mUseMsaGamertagsOnly;
    ::ll::TypedStorage<1, 1, bool> mBonusChestEnabled;
    ::ll::TypedStorage<1, 1, bool> mBonusChestSpawned;
    ::ll::TypedStorage<1, 1, bool> mStartWithMapEnabled;
    ::ll::TypedStorage<1, 1, bool> mMapsCenteredToOrigin;
    ::ll::TypedStorage<1, 1, bool> mRequiresCopiedPackRemovalCheck;
    ::ll::TypedStorage<1, 1, bool> mSpawnV1Villagers;
    ::ll::TypedStorage<1, 1, bool> mPersonaDisabled;
    ::ll::TypedStorage<1, 1, bool> mCustomSkinsDisabled;
    ::ll::TypedStorage<1, 1, bool> mEmoteChatMuted;
    ::ll::TypedStorage<1, 1, bool> mHasUncompleteWorldFileOnDisk;
    ::ll::TypedStorage<1, 1, ::NetherWorldType> mNetherType;
    ::ll::TypedStorage<8, 48, ::SpawnSettings> mSpawnSettings;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::LevelDataValue>> mValues;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::LevelDataValue>> mOverrides;
    ::ll::TypedStorage<8, 32, ::std::string> mBiomeOverride;
    ::ll::TypedStorage<4, 8, ::std::optional<::GeneratorType>> mDataDrivenGeneratorType;
    ::ll::TypedStorage<1, 1, ::ChatRestrictionLevel> mChatRestrictionLevel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Bedrock::PubSub::Publisher<void(bool), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>> mIsHardcoreSubscribers;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnSaveLevelData;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelData& operator=(LevelData const&);
    LevelData(LevelData const&);
    LevelData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelData(::LevelData&&);

    MCAPI explicit LevelData(bool isEduMode);

    MCAPI LevelData(::LevelSettings const& settings, ::std::string const& levelName, ::GeneratorType generatorVersion, ::BlockPos const& defaultSpawn, bool achievementsDisabled, ::EducationEditionOffer eduOffer, float rainLevel, float lightningLevel);

    MCAPI void _determineMaxBaseGameVersion();

    MCAPI void _setValue(::HashedString const& key, ::LevelDataValue&& value);

    MCAPI void _updateLimitedWorldOrigin(::BlockPos const& pos);

    MCAPI ::std::optional<::SemVersion> checkServerAuthOptOutVersion() const;

    MCAPI bool cloudSaveForWorldIsEnabled() const;

    MCAPI ::std::unique_ptr<::CompoundTag> createTag() const;

    MCAPI ::BaseGameVersion const& getBaseGameVersion() const;

    MCAPI ::CompoundTag const& getEduSharedUriResource() const;

    MCAPI ::std::string const& getEducationOid() const;

    MCAPI ::GameType getGameType() const;

    MCAPI ::GeneratorType getGenerator() const;

    MCAPI ::LevelSeed64 getSeed() const;

    MCAPI void getTagData(::CompoundTag const& tag);

    MCAPI ::WorldVersion getWorldVersion() const;

    MCAPI void registerWithLevelStorageManagerEvents(::ILevelStorageManagerConnector& levelStorageManagerConnector);

    MCAPI void setBiomeOverride(::std::string const& biomeName);

    MCAPI void setDaylightCycle(::DaylightCycle daylightCycle);

    MCAPI void setEduSharedUriResource(::EduSharedUriResource const& eduSharedUriResource);

    MCAPI void setEducationEditionOffer(::EducationEditionOffer offer);

    MCAPI void setEducationOid(::std::string const& educationOid);

    MCAPI void setFlatWorldOptions(::Json::Value const& options);

    MCAPI void setFlatWorldPreset(::FlatWorldPresetID preset);

    MCAPI void setGameType(::GameType type);

    MCAPI void setGenerator(::GeneratorType version);

    MCAPI void setIsHardcore(bool value);

    MCAPI void setSeed(::LevelSeed64 seed);

    MCAPI void setSpawnPos(::BlockPos const& spawn);

    MCAPI void setTagData(::CompoundTag& tag) const;

    MCAPI void setWorldVersion(::WorldVersion version);

    MCAPI void v1_read(::RakNet::BitStream& bitStream, ::StorageVersion storageVersion);

    MCAPI ~LevelData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LevelData&&);

    MCAPI void* $ctor(bool isEduMode);

    MCAPI void* $ctor(::LevelSettings const& settings, ::std::string const& levelName, ::GeneratorType generatorVersion, ::BlockPos const& defaultSpawn, bool achievementsDisabled, ::EducationEditionOffer eduOffer, float rainLevel, float lightningLevel);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
