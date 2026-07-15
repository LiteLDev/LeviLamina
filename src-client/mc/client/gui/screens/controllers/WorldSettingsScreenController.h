#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"
#include "mc/client/gui/screens/controllers/SettingsScreenMode.h"
#include "mc/client/gui/screens/controllers/WorldMultiplayerLockState.h"
#include "mc/client/gui/screens/interfaces/IWorldSettingsStorage.h"
#include "mc/client/gui/screens/rules/WorldSettingsRules.h"
#include "mc/client/network/realms/World.h"
#include "mc/deps/cereal/schema/dynamic/NullType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/Result.h"
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
struct PackManagerContentSource;
namespace Core { class FileStorageArea; }
namespace EduCloud { struct IEduCloudSaveSystem; }
namespace Json { class Value; }
namespace MSGraph::Models { struct DriveItem; }
namespace MSGraph::Models { struct GraphError; }
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
    ::ll::TypedStorage<8, 848, ::LevelSummary>                                     mEditedLevel;
    ::ll::TypedStorage<8, 1744, ::LevelDataWrapper>                                mLevelData;
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
    ::ll::TypedStorage<1, 1, bool>           mUnhideServerSettings;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldSettingsScreenController& operator=(WorldSettingsScreenController const&);
    WorldSettingsScreenController(WorldSettingsScreenController const&);
    WorldSettingsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldSettingsScreenController() /*override*/ = default;

    virtual void onCreation() /*override*/;

    virtual void onOpen() /*override*/;

    virtual void onTerminate() /*override*/;

    virtual void onLevelDeleted(::std::string const& levelId) /*override*/;

    virtual void onStorageChanged() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual bool hasAvailableSpaceForLevel(::std::shared_ptr<::Core::FileStorageArea>) /*override*/;

    virtual void saveWorld() /*override*/;

    virtual ::LevelSummary& getLevelSummary() /*override*/;

    virtual ::LevelData& getLevelData() /*override*/;

    virtual void _registerControllerCallbacks();

    virtual void _displayLockedWorldPopup() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldSettingsScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        bool                                     createWorld,
        bool                                     unhideServerSettings
    );

    MCAPI WorldSettingsScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::LevelSummary const&                    levelSummary,
        bool                                     createFromTemplate,
        ::std::function<void()>                  onOpenCallback,
        ::std::string                            initialPackId,
        bool                                     unhideServerSettings
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void addStaticScreenVars(::Json::Value& globalVars, bool exportDisabled, bool isMultiplayerClient);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model, bool createWorld, bool unhideServerSettings);

    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::LevelSummary const&                    levelSummary,
        bool                                     createFromTemplate,
        ::std::function<void()>                  onOpenCallback,
        ::std::string                            initialPackId,
        bool                                     unhideServerSettings
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
