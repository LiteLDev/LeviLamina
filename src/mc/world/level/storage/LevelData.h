#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GameVersion.h"
#include "mc/common/editor/WorldType.h"
#include "mc/config/ChatRestrictionLevel.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/json/Value.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/network/GamePublishSetting.h"
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
#include "mc/world/level/WorldVersion.h"
#include "mc/world/level/levelgen/flat/FlatWorldPresetID.h"
#include "mc/world/level/storage/AdventureSettings.h"
#include "mc/world/level/storage/CloudSaveLevelInfo.h"
#include "mc/world/level/storage/ExperimentStorage.h"
#include "mc/world/level/storage/GameRules.h"
#include "mc/world/level/storage/LevelDataProperty.h"
#include "mc/world/level/storage/StorageVersion.h"
#include "mc/world/level/storage/WorldTemplateLevelData.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class CompoundTag;
class ContentIdentity;
class Experiments;
class ILevelStorageManagerConnector;
class LevelSeed64;
class LevelSettings;
struct EduSharedUriResource;
struct GameRuleId;
struct LevelDataValue;
struct PackIdVersion;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace RakNet { class BitStream; }
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
    ::ll::TypedStorage<4, 4, int>                                                     mTime;
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
    ::ll::TypedStorage<1, 1, bool>                                                    mIsCreatedInEditor;
    ::ll::TypedStorage<1, 1, bool>                                                    mIsExportedFromEditor;
    ::ll::TypedStorage<4, 4, ::EducationEditionOfferValue>                            mEducationEditionOffer;
    ::ll::TypedStorage<8, 176, ::std::optional<::CloudSaveLevelInfo>>                 mCloudSaveInfo;
    ::ll::TypedStorage<1, 1, bool>                                                    mEducationFeaturesEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                    mIsSingleUseWorld;
    ::ll::TypedStorage<1, 1, bool>                                                    mConfirmedPlatformLockedContent;
    ::ll::TypedStorage<1, 1, bool>                                                    mMultiplayerGameIntent;
    ::ll::TypedStorage<1, 1, bool>                                                    mMultiplayerGame;
    ::ll::TypedStorage<1, 1, bool>                                                    mLANBroadcastIntent;
    ::ll::TypedStorage<1, 1, bool>                                                    mLANBroadcast;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting>                            mXBLBroadcastIntent;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting>                            mXBLBroadcastMode;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting>                            mPlatformBroadcastIntent;
    ::ll::TypedStorage<4, 4, ::Social::GamePublishSetting>                            mPlatformBroadcastMode;
    ::ll::TypedStorage<1, 1, bool>                                                    mCheatsEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                    mCommandsEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                    mTexturePacksRequired;
    ::ll::TypedStorage<1, 1, bool>                                                    mHasLockedBehaviorPack;
    ::ll::TypedStorage<1, 1, bool>                                                    mHasLockedResourcePack;
    ::ll::TypedStorage<1, 1, bool>                                                    mIsFromLockedTemplate;
    ::ll::TypedStorage<1, 1, bool>                                                    mIsRandomSeedAllowed;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mEducationProductId;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mEducationCreatorId;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mEducationCreatorWorldId;
    ::ll::TypedStorage<8, 32, ::std::string>                                          mEducationReferrerId;
    ::ll::TypedStorage<1, 1, bool>                                                    mUseMsaGamertagsOnly;
    ::ll::TypedStorage<1, 1, bool>                                                    mBonusChestEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                    mBonusChestSpawned;
    ::ll::TypedStorage<1, 1, bool>                                                    mStartWithMapEnabled;
    ::ll::TypedStorage<1, 1, bool>                                                    mMapsCenteredToOrigin;
    ::ll::TypedStorage<1, 1, bool>                                                    mRequiresCopiedPackRemovalCheck;
    ::ll::TypedStorage<1, 1, bool>                                                    mSpawnV1Villagers;
    ::ll::TypedStorage<1, 1, bool>                                                    mPersonaDisabled;
    ::ll::TypedStorage<1, 1, bool>                                                    mCustomSkinsDisabled;
    ::ll::TypedStorage<1, 1, bool>                                                    mEmoteChatMuted;
    ::ll::TypedStorage<1, 1, bool>                                                    mUseAllowList;
    ::ll::TypedStorage<1, 1, bool>                                                    mHasUncompleteWorldFileOnDisk;
    ::ll::TypedStorage<1, 1, ::NetherWorldType>                                       mNetherType;
    ::ll::TypedStorage<8, 48, ::SpawnSettings>                                        mSpawnSettings;
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
    // NOLINTEND

public:
    // prevent constructor by default
    LevelData& operator=(LevelData const&);
    LevelData(LevelData const&);
    LevelData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LevelData(bool isEduMode);

    MCAPI LevelData(::LevelData&& rhs);

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

    MCAPI void _initLevelDataPropertyPublishers();

#ifdef LL_PLAT_C
    MCAPI void _resetDefaultAdvancedSettingsData(bool isTrial);

    MCAPI void _resetDefaultGeneralSettingsData();

    MCAPI void _resetDefaultMultiplayerSettingsData(bool isTrial);

    MCAPI void _resetDefaultScriptingCodingSettingsData();
#endif

    MCAPI bool achievementsWillBeDisabledOnLoad() const;

#ifdef LL_PLAT_C
    MCAPI void applyPolicyBasedSettings(bool hasBehaviourPack);
#endif

    MCAPI ::std::optional<::SemVersion> checkServerAuthOptOutVersion() const;

#ifdef LL_PLAT_C
    MCAPI void clearCloudSaveInfo();
#endif

    MCAPI bool cloudSaveForWorldIsEnabled() const;

    MCAPI ::std::unique_ptr<::CompoundTag> createTag() const;

    MCAPI void disableAchievements();

    MCAPI bool educationFeaturesEnabled() const;

    MCAPI bool getAdventureModeOverridesEnabled() const;

    MCFOLD ::AdventureSettings const& getAdventureSettings() const;

    MCFOLD ::AdventureSettings& getAdventureSettings();

    MCAPI bool getAllowListActive() const;

    MCAPI ::BaseGameVersion const& getBaseGameVersion() const;

    MCAPI ::std::string const getBiomeOverride() const;

    MCAPI bool getBonusChestSpawned() const;

    MCAPI ::ChatRestrictionLevel getChatRestrictionLevel() const;

    MCFOLD ::CloudSaveLevelInfo const& getCloudSaveInfo() const;

#ifdef LL_PLAT_C
    MCFOLD ::CloudSaveLevelInfo& getCloudSaveInfo();
#endif

    MCFOLD ::Tick const& getCurrentTick() const;

    MCAPI bool getCustomSkinsDisabled() const;

    MCAPI ::DaylightCycle getDaylightCycle() const;

    MCFOLD ::Abilities& getDefaultAbilities();

    MCFOLD ::PermissionsHandler const& getDefaultPermissions() const;

    MCFOLD ::PermissionsHandler& getDefaultPermissions();

    MCAPI ::Editor::WorldType getEditorWorldType() const;

    MCAPI ::CompoundTag const& getEduSharedUriResource() const;

    MCFOLD ::std::string const& getEducationCreatorId() const;

    MCAPI ::std::string const& getEducationCreatorWorldId() const;

    MCAPI ::EducationEditionOffer getEducationEditionOffer() const;

#ifdef LL_PLAT_C
    MCAPI ::std::string const& getEducationOid() const;
#endif

    MCFOLD ::std::string const& getEducationProductId() const;

    MCFOLD ::std::string const& getEducationReferrerId() const;

    MCAPI bool getEmoteChatMuted() const;

#ifdef LL_PLAT_C
    MCAPI ::std::optional<::std::string> const& getExperienceWorldId() const;
#endif

    MCFOLD ::Experiments const& getExperiments() const;

    MCFOLD ::Experiments& getExperiments();

    MCAPI ::Json::Value const& getFlatWorldOptions() const;

#ifdef LL_PLAT_C
    MCAPI ::std::optional<::FlatWorldPresetID> getFlatWorldPreset() const;
#endif

    MCAPI bool getForceGameType() const;

    MCFOLD ::SharedTypes::Legacy::Difficulty getGameDifficulty() const;

    MCFOLD ::GameRules const& getGameRules() const;

    MCFOLD ::GameRules& getGameRules();

    MCAPI ::GameType getGameType() const;

    MCAPI ::GeneratorType getGenerator() const;

#ifdef LL_PLAT_C
    MCAPI bool getHasUncompleteWorldFileOnDisk() const;

    MCAPI bool const getIsSingleUseWorld() const;
#endif

    MCAPI bool getLANBroadcast() const;

    MCAPI bool getLANBroadcastIntent() const;

#ifdef LL_PLAT_C
    MCFOLD int64 getLastSaved() const;
#endif

    MCFOLD ::std::string const& getLevelName() const;

    MCAPI float getLightningLevel() const;

    MCAPI int getLightningTime() const;

    MCAPI int getLimitedWorldDepth() const;

    MCAPI int getLimitedWorldWidth() const;

    MCAPI ::CompoundTag& getLoadedPlayerTag();

#ifdef LL_PLAT_C
    MCFOLD ::GameVersion const& getMinCompatibleClientVersion() const;
#endif

    MCAPI bool getMultiplayerGameIntent() const;

    MCAPI int getNetherScale() const;

    MCAPI ::NetherWorldType getNetherType() const;

#ifdef LL_PLAT_C
    MCFOLD int getNetworkVersion() const;
#endif

    MCAPI bool getOnlySpawnV1Villagers() const;

    MCAPI bool getPersonaDisabled() const;

    MCFOLD ::Social::GamePublishSetting getPlatformBroadcastIntent() const;

    MCAPI ::Social::GamePublishSetting getPlatformBroadcastMode() const;

#ifdef LL_PLAT_C
    MCAPI bool getPlayerHasDied() const;
#endif

    MCAPI ::ContentIdentity const& getPremiumTemplateContentIdentity() const;

    MCAPI float getRainLevel() const;

    MCAPI int getRainTime() const;

    MCAPI ::LevelSeed64 getSeed() const;

    MCFOLD uint getServerChunkTickRange() const;

    MCAPI ::BlockPos const& getSpawnPos() const;

    MCFOLD ::SpawnSettings const& getSpawnSettings() const;

    MCAPI ::StorageVersion getStorageVersion() const;

    MCAPI void getTagData(::CompoundTag const& tag);

    MCFOLD int getTime() const;

    MCAPI bool getUseMsaGamertagsOnly() const;

    MCAPI ::BlockPos const& getWorldCenter() const;

    MCAPI uint getWorldStartCount() const;

    MCAPI ::PackIdVersion const& getWorldTemplateIdentity() const;

    MCAPI ::WorldVersion getWorldVersion() const;

    MCAPI ::Social::GamePublishSetting getXBLBroadcastIntent() const;

    MCAPI ::Social::GamePublishSetting getXBLBroadcastMode() const;

    MCAPI bool hasAchievementsDisabled() const;

    MCAPI bool hasBonusChestEnabled() const;

    MCAPI bool hasCheatsEnabled() const;

    MCAPI bool hasCommandsEnabled() const;

    MCAPI bool hasConfirmedPlatformLockedContent() const;

    MCAPI bool hasLockedBehaviorPack() const;

    MCAPI bool hasLockedResourcePack() const;

    MCAPI bool hasMapsCenteredToOrigin() const;

    MCFOLD bool hasSpawnPos() const;

    MCAPI bool hasStartWithMapEnabled() const;

    MCAPI void incrementTick();

#ifdef LL_PLAT_C
    MCAPI bool isAlwaysDay() const;
#endif

    MCAPI bool isCreatedInEditor() const;

#ifdef LL_PLAT_C
    MCAPI bool isEditionCompatible() const;
#endif

    MCAPI bool isEditorTestWorld() const;

    MCAPI bool isEditorWorld() const;

    MCAPI bool isEducationEditionLevel() const;

    MCAPI bool isExportedFromEditor() const;

    MCAPI bool isFromLockedTemplate() const;

    MCAPI bool isFromWorldTemplate() const;

#ifdef LL_PLAT_C
    MCAPI bool isGameRule(::GameRuleId gameRule) const;
#endif

    MCAPI bool isHardcore() const;

    MCAPI bool isLegacyLevel() const;

    MCAPI bool isLightning() const;

    MCAPI bool isMultiplayerGame() const;

#ifdef LL_PLAT_C
    MCAPI bool isNewLevel() const;
#endif

    MCAPI bool isPremiumWorldTemplate() const;

    MCAPI bool isRaining() const;

#ifdef LL_PLAT_C
    MCFOLD bool isRandomSeedAllowed() const;
#endif

    MCAPI bool isTexturepacksRequired() const;

    MCAPI bool isWorldTemplateOptionLocked() const;

    MCAPI ::LevelData& operator=(::LevelData&& rhs);

    MCAPI void recordStartUp();

#ifdef LL_PLAT_C
    MCAPI ::Bedrock::PubSub::Subscription registerIsHardcoreListener(::std::function<void(bool)> callback) const;

    MCAPI ::Bedrock::PubSub::Subscription
    registerLevelDataPropertyListener(::LevelDataProperty property, ::std::function<void()> callback) const;
#endif

    MCAPI void registerWithLevelStorageManagerEvents(::ILevelStorageManagerConnector& levelStorageManagerConnector);

#ifdef LL_PLAT_C
    MCAPI bool requiresCopiedPackRemovalCheck() const;

    MCAPI void resetDefaultCheatSettingsData();

    MCAPI void resetSettingsForRandomSeed();

    MCAPI void resetToDefaultSettings();

    MCAPI void resetToTrialSettings();
#endif

    MCAPI void setAdventureModeOverridesEnabled(bool overridesEnabled);

    MCAPI void setAllowListActive(bool val);

    MCAPI void setBaseGameVersion(::BaseGameVersion const& baseGameVersion);

    MCAPI void setBiomeOverride(::std::string const& biomeName);

    MCAPI void setBonusChestEnabled(bool bonusChestEnabled);

    MCAPI void setBonusChestSpawned(bool bonusChestSpawned);

    MCAPI void setChatRestrictionLevel(::ChatRestrictionLevel chatRestrictionLevel);

    MCAPI void setCheatsEnabled(bool cheatsEnabled);

#ifdef LL_PLAT_C
    MCAPI void setCloudSaveInfo(::CloudSaveLevelInfo const& cloudSaveInfo);
#endif

    MCAPI void setCommandsEnabled(bool commandsEnabled);

#ifdef LL_PLAT_C
    MCAPI void setConfirmedPlatformLockedContent(bool hasConfirmed);

    MCFOLD void setCurrentTick(::Tick currentTick);
#endif

    MCAPI void setCustomSkinsDisabled(bool val);

    MCAPI void setDataDrivenGenerator(::GeneratorType type);

    MCAPI void setDaylightCycle(::DaylightCycle daylightCycle);

    MCFOLD void setEditorWorldType(::Editor::WorldType t);

    MCAPI void setEduSharedUriResource(::EduSharedUriResource const& eduSharedUriResource);

    MCAPI void setEducationEditionOffer(::EducationEditionOffer offer);

    MCAPI void setEducationFeaturesEnabled(bool educationEnabled);

    MCAPI void setEducationOid(::std::string const& educationOid);

#ifdef LL_PLAT_C
    MCAPI void setEducationProductId(::std::string const& productId);

    MCAPI void setEducationReferrerId(::std::string const& referrerId);
#endif

    MCAPI void setEmoteChatMuted(bool val);

#ifdef LL_PLAT_C
    MCAPI void setExperienceWorldId(::std::string const& experienceWorldId);
#endif

    MCAPI void setFlatWorldPreset(::FlatWorldPresetID preset);

    MCAPI void setForceGameType(bool value);

#ifdef LL_PLAT_C
    MCAPI void setFromLockedTemplate(bool isLocked);

    MCAPI void setFromWorldTemplate(bool isFromWorldTemplate);
#endif

    MCAPI void setGameDifficulty(::SharedTypes::Legacy::Difficulty difficulty);

    MCAPI void setGameType(::GameType type);

    MCAPI void setGenerator(::GeneratorType version);

    MCAPI void setHasLockedBehaviorPack(bool hasLockedPack);

    MCAPI void setHasLockedResourcePack(bool hasLockedPack);

#ifdef LL_PLAT_C
    MCAPI void setHasUncompleteWorldFileOnDisk(bool val);
#endif

    MCAPI void setIsCreatedInEditor(bool isCreatedInEditor);

    MCAPI void setIsExportedFromEditor(bool isExportedFromEditor);

    MCAPI void setIsHardcore(bool value);

#ifdef LL_PLAT_C
    MCAPI void setIsRandomSeedAllowed(bool allowed);
#endif

    MCAPI void setIsSingleUseWorld(bool isSingleUseWorld);

    MCAPI void setLANBroadcast(bool broadcast);

    MCAPI void setLANBroadcastIntent(bool broadcast);

    MCAPI void setLevelName(::std::string const& levelName);

    MCAPI void setLightningLevel(float level);

    MCAPI void setLightningTime(int lightningTime);

    MCAPI void setMultiplayerGame(bool multiplayer);

    MCAPI void setMultiplayerGameIntent(bool multiplayer);

#ifdef LL_PLAT_C
    MCAPI void setNetherType(::NetherWorldType const& netherType);
#endif

    MCAPI void setOnlySpawnV1Villagers(bool val);

    MCAPI void setPersonaDisabled(bool val);

    MCAPI void setPlatformBroadcastIntent(::Social::GamePublishSetting broadcastMode);

    MCAPI void setPlatformBroadcastMode(::Social::GamePublishSetting broadcastMode);

    MCAPI void setPlayerHasDied(bool value);

    MCAPI void setPremiumTemplateContentIdentity(::ContentIdentity const& templateContentIdentity);

    MCAPI void setRainLevel(float level);

    MCAPI void setRainTime(int rainTime);

#ifdef LL_PLAT_C
    MCAPI void setRequiresCopiedPackRemovalCheck(bool required);
#endif

    MCAPI void setSeed(::LevelSeed64 seed);

    MCAPI void setServerChunkTickRange(uint newRange);

    MCAPI void setSpawnPos(::BlockPos const& spawn);

    MCAPI void setSpawnSettings(::SpawnSettings const& settings);

    MCAPI void setStartWithMapEnabled(bool startWithMapEnabled);

    MCAPI void setStorageVersion(::StorageVersion version);

    MCAPI void setTagData(::CompoundTag& tag) const;

    MCAPI void setTexturepacksRequired(bool texturepacksRequired);

    MCAPI void setTime(int time);

    MCAPI void setUseMsaGamertagsOnly(bool useMsaGamertagsOnly);

    MCAPI void setWorldTemplateIdentity(::PackIdVersion const& packIdVersion);

    MCAPI void setWorldTemplateOptionLocked(bool isLocked);

    MCAPI void setWorldVersion(::WorldVersion version);

    MCAPI void setXBLBroadcastIntent(::Social::GamePublishSetting broadcastMode);

    MCAPI void setXBLBroadcastMode(::Social::GamePublishSetting broadcastMode);

#ifdef LL_PLAT_C
    MCAPI bool shouldAchievementsBeDisabled(bool isTrialMode, bool hasBehaviourPack) const;
#endif

    MCAPI void touchLastLoadedWithVersion();

    MCAPI void updateLastTimeSaved() const;

    MCAPI void v1_read(::RakNet::BitStream& bitStream, ::StorageVersion storageVersion);

    MCAPI ~LevelData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool isEduMode);

    MCAPI void* $ctor(::LevelData&& rhs);

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
