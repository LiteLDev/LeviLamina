#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"
#include "mc/client/gui/screens/controllers/SettingsScreenMode.h"
#include "mc/client/gui/screens/controllers/WorldMultiplayerLockState.h"
#include "mc/client/gui/screens/interfaces/IWorldSettingsStorage.h"
#include "mc/client/gui/screens/rules/WorldSettingsRules.h"
#include "mc/client/network/realms/World.h"
#include "mc/client/world/PostCreateWorldAction.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/Result.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/level/FileArchiver.h"
#include "mc/world/level/LevelListCacheObserver.h"
#include "mc/world/level/NetherWorldType.h"
#include "mc/world/level/SpawnSettings.h"
#include "mc/world/level/storage/ExperimentStorage.h"
#include "mc/world/level/storage/LevelDataWrapper.h"
#include "mc/world/level/storage/LevelSummary.h"
#include "mc/world/level/storage/edu_cloud/WorldSyncState.h"

// auto generated forward declare list
// clang-format off
class DlcUIWrapper;
class IContentManager;
class IContentManagerContext;
class LevelData;
class MainMenuScreenModel;
class PlatformMultiplayerRestrictions;
class WorldSettingsScreenControllerProxy;
struct GameRuleId;
struct PackManagerContentSource;
namespace Core { class FileStorageArea; }
namespace EduCloud { struct IEduCloudSaveSystem; }
namespace Json { class Value; }
namespace MSGraph::Models { struct DriveItem; }
namespace MSGraph::Models { struct GraphError; }
namespace cereal { struct NullType; }
// clang-format on

class WorldSettingsScreenController : public ::SettingsScreenControllerBase,
                                      public ::IWorldSettingsStorage,
                                      public ::LevelListCacheObserver {
public:
    // WorldSettingsScreenController inner types define
    using GameRuleValueMapping = ::std::tuple<::std::string, ::std::variant<::cereal::NullType, bool, int, float>>;

    using GameRuleValueMappingList =
        ::std::vector<::std::tuple<::std::string, ::std::variant<::cereal::NullType, bool, int, float>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SettingsScreenMode>                                 mSettingsMode;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mSeedString;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mRandomTickSpeedString;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mRespawnRadiusString;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                   mWorldImagePath;
    ::ll::TypedStorage<8, 840, ::LevelSummary>                                     mEditedLevel;
    ::ll::TypedStorage<8, 1640, ::LevelDataWrapper>                                mLevelData;
    ::ll::TypedStorage<8, 72, ::ExperimentStorage>                                 mOriginalExperiments;
    ::ll::TypedStorage<4, 4, ::EduCloud::WorldSyncState const>                     mEditedLevelSyncState;
    ::ll::TypedStorage<1, 1, bool>                                                 mEditedLevelDeleted;
    ::ll::TypedStorage<8, 112, ::WorldSettingsRules>                               mWorldSettingsRules;
    ::ll::TypedStorage<8, 8, ::IContentManager&>                                   mContentManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DlcUIWrapper>>                    mDlcUIWrapper;
    ::ll::TypedStorage<8, 16, ::WorldMultiplayerLockState>                         mMultiplayerState;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlatformMultiplayerRestrictions>> mPlatformMultiplayerRestrictions;
    ::ll::TypedStorage<8, 8, ::PackManagerContentSource*>                          mWorldContentSource;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::EduCloud::IEduCloudSaveSystem>> mEduCloudSaveSystem;
    ::ll::TypedStorage<1, 1, bool>                                                         mLocalCheatsAllowed;
    ::ll::TypedStorage<4, 4, int>                                                          mLocalGameType;
    ::ll::TypedStorage<4, 4, int>                                                          mGameDifficulty;
    ::ll::TypedStorage<1, 1, ::NetherWorldType>                                            mNetherType;
    ::ll::TypedStorage<8, 48, ::SpawnSettings>                                             mSpawnSettings;
    ::ll::TypedStorage<1, 1, bool>                                                         mGameVersionOverrideEnabled;
    ::ll::TypedStorage<8, 32, ::std::string>                                               mGameVersionOverride;
    ::ll::TypedStorage<8, 32, ::std::string>                                               mInitialPackId;
    ::ll::TypedStorage<1, 1, bool>                                                         mRefreshLevelData;
    ::ll::TypedStorage<1, 1, bool>                                                         mAttemptedToCreateNewWorld;
    ::ll::TypedStorage<1, 1, bool> mHackStatusVariableToTrackWorldCreationUntilWeFixInputBufferingOnUIStack;
    ::ll::TypedStorage<8, 656, ::Realms::World>   mRealmWorld;
    ::ll::TypedStorage<8, 24, ::std::vector<int>> mServerSimDistanceOptionValues;
    ::ll::TypedStorage<8, 24, ::std::vector<int>> mSleepPercentOptionValues;
    ::ll::TypedStorage<1, 1, bool>                mHasRealms;
    ::ll::TypedStorage<1, 1, bool>                mSleepEnabled;
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::tuple<::std::string, ::std::variant<::cereal::NullType, bool, int, float>>>>
                                                                                      mOriginalGameRuleValueCache;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IContentManagerContext>>             mContentManagerContext;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::WorldSettingsScreenControllerProxy>> mProxy;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                                mOnOpenCallback;
    ::ll::TypedStorage<
        8,
        16,
        ::Bedrock::Threading::Async<::Bedrock::Result<::MSGraph::Models::DriveItem, ::MSGraph::Models::GraphError>>>
                                             mGetCloudItemByIdHandle;
    ::ll::TypedStorage<8, 32, ::std::string> mCloudFileName;
    ::ll::TypedStorage<8, 32, ::std::string> mCloudLastChanged;
    ::ll::TypedStorage<1, 1, bool>           mCanEditGameModeInEdu;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldSettingsScreenController& operator=(WorldSettingsScreenController const&);
    WorldSettingsScreenController(WorldSettingsScreenController const&);
    WorldSettingsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldSettingsScreenController() /*override*/;

    virtual void onCreation() /*override*/;

    virtual void onOpen() /*override*/;

    virtual void onTerminate() /*override*/;

    virtual void onLevelDeleted(::std::string const& levelId) /*override*/;

    virtual void onStorageChanged() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual bool hasAvailableSpaceForLevel(::std::shared_ptr<::Core::FileStorageArea> sptStorageArea) /*override*/;

    virtual void saveWorld() /*override*/;

    virtual ::LevelSummary& getLevelSummary() /*override*/;

    virtual ::LevelData& getLevelData() /*override*/;

    virtual void _registerControllerCallbacks();

    virtual void _displayLockedWorldPopup() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldSettingsScreenController(::std::shared_ptr<::MainMenuScreenModel> model, bool createWorld);

    MCAPI WorldSettingsScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::LevelSummary const&                    levelSummary,
        bool                                     createFromTemplate,
        ::std::function<void()>                  onOpenCallback,
        ::std::string                            initialPackId
    );

    MCAPI bool _achievementsWillBeDisabledOnLoad();

    MCAPI void _cacheGameRuleValues();

    MCAPI void _calculateSleepPercentageOptions();

    MCAPI bool _canChangeWorldOption() const;

    MCAPI void _confirmationUnlockTemplatedWorldOptionsDialog();

    MCAPI void _copyAndSetDataHelper(::std::function<void(::LevelData&)> setDataCallback);

    MCAPI ::ui::ViewRequest _copyWorld(::std::function<void(::LevelData&)> setDataCallback, bool leaveScreen);

    MCAPI ::ui::ViewRequest _createWorld(::PostCreateWorldAction postCreateWorldAction);

    MCAPI void _createWorldOnRealms();

    MCAPI ::ui::ViewRequest _deleteWorld();

    MCAPI ::ui::ViewRequest _exportWorld(::FileArchiver::ExportType type);

    MCAPI void _fireCachedGameRuleTelemetryEventsOnExit();

    MCAPI bool _getAllowCheats() const;

    MCAPI int _getDifficulty();

    MCAPI bool _getGameRuleBool(::GameRuleId gameRuleId);

    MCAPI int _getGameRuleInt(::GameRuleId gameRuleId);

    MCAPI bool _getMultiplayerEnabled() const;

    MCAPI ::std::string _getPlatformMultiplayerWarningText() const;

    MCAPI uint _getRespawnRadiusMax();

    MCAPI int _getWorldGameMode();

    MCAPI ::std::string _getWorldName();

    MCAPI int _getWorldType();

    MCAPI ::std::string _getXBLMultiplayerWarningText() const;

    MCAPI bool _hasOperatorCommandsAbility() const;

    MCAPI void _init();

    MCAPI bool _isExperimentEnabled(int experimentIndex);

    MCAPI bool _isGameRuleEnabled() const;

    MCAPI bool _isMultiplayerModifiable() const;

    MCAPI void _limitSpawnRadiusAgainstWorldType();

    MCAPI bool _passedLockedContentCheck();

    MCAPI void _playWorldOnRealms();

    MCAPI void _registerWorldsClipboardSubController();

    MCAPI ::ui::ViewRequest _resetRandomTickSpeed();

    MCAPI void _selectRealm(::std::function<void(::Realms::World)> callback);

    MCAPI void _setAllowCheats(bool value);

    MCAPI void _setAllowCheatsHelper(bool value);

    MCAPI void _setAlwaysDay(bool value);

    MCAPI void _setDefaultPermissionLevel(::PlayerPermissionLevel newPermission);

    MCAPI void _setDefaultPermissionLevelHelper(::PlayerPermissionLevel value);

    MCAPI void _setDifficulty(int value);

    MCAPI void _setEducationFeaturesEnabled(bool value);

    MCAPI void _setExperimentHelper(bool value, int experimentIndex);

    MCAPI void _setExperimentalToggleHelper(bool value, int experimentIndex);

    MCAPI void _setGameRule(int value, ::GameRuleId gameRuleId, bool suppressOuput);

    MCAPI void _setGameRule(bool value, ::GameRuleId gameRuleId, bool suppressOuput);

    MCAPI void _setHasUserRealms();

    MCAPI void _setImmutableWorld(bool value);

    MCAPI void _setLevelEditorWorldFlag();

    MCAPI void _setMultiplayerEnabled(bool value);

    MCAPI void _setPlayerGameMode(int value);

    MCAPI void _setRandomTickSpeedString(::std::string const& value);

    MCAPI void _setServerVisible(bool value);

    MCAPI void _setWorldGameMode(int value);

    MCAPI void _setWorldGameModeHelper(int value);

    MCAPI void _setWorldName(::std::string value);

    MCAPI void _setWorldType(int value);

    MCAPI void _setWorldTypeHelper(int value);

    MCAPI void _setupCloudBindings();

    MCAPI bool _shouldShowMultiplayerWarningMessages() const;

    MCAPI void _showConfirmationNoCrossPlatformPlaySkinPopup();

    MCAPI ::ui::ViewRequest _startEducationWorld(bool shouldHost);

    MCAPI void confirmationExperimentalGameplayDialog(
        ::std::string const&                         messageId,
        ::std::function<void(::ModalScreenButtonId)> callback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model, bool createWorld);

    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::LevelSummary const&                    levelSummary,
        bool                                     createFromTemplate,
        ::std::function<void()>                  onOpenCallback,
        ::std::string                            initialPackId
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onCreation();

    MCAPI void $onOpen();

    MCAPI void $onTerminate();

    MCAPI void $onLevelDeleted(::std::string const& levelId);

    MCAPI void $onStorageChanged();

    MCAPI ::ui::DirtyFlag $tick();

    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI bool $hasAvailableSpaceForLevel(::std::shared_ptr<::Core::FileStorageArea> sptStorageArea);

    MCAPI void $saveWorld();

    MCFOLD ::LevelSummary& $getLevelSummary();

    MCAPI ::LevelData& $getLevelData();

    MCAPI void $_registerControllerCallbacks();

    MCAPI void $_displayLockedWorldPopup();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForLevelListCacheObserver();

    MCNAPI static void** $vftableForIWorldSettingsStorage();
    // NOLINTEND
};
