#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/SceneType.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"
#include "mc/client/gui/screens/models/PlayScreenDefaultTab.h"
#include "mc/client/network/realms/RealmsAPI.h"
#include "mc/client/world/LocalWorldInfo.h"
#include "mc/client/world/NetworkWorldType.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class DlcChecker;
class DlcUIWrapper;
class PlatformMultiplayerRestrictions;
class PlayScreenModel;
class ServicesManager;
struct LegacyWorldInfo;
struct NetworkWorldInfo;
namespace Json { class Value; }
namespace Social { struct PermissionCheckResult; }
namespace ui { class ScreenTechStackSelector; }
// clang-format on

class PlayScreenController : public ::MainMenuScreenController {
public:
    // PlayScreenController inner types define
    enum class ConvertProgressState : int {
        Closed   = 0,
        Active   = 1,
        TryClose = 2,
    };

    enum class ServerCollectionName : int {
        ThirdParty = 0,
        External   = 1,
        Invalid    = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::PlayScreenModel>>                mPlayScreenModel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DlcUIWrapper>>                    mDlcUIWrapper;
    ::ll::TypedStorage<4, 4, ::PlayScreenDefaultTab>                               mActiveTabIndex;
    ::ll::TypedStorage<1, 1, bool>                                                 mForceRefreshRealmsOnOpen;
    ::ll::TypedStorage<1, 1, bool>                                                 mForceRefreshThirdPartyServersOnOpen;
    ::ll::TypedStorage<1, 1, bool>                                                 mRealmsBindingsDirty;
    ::ll::TypedStorage<1, 1, bool>                                                 mCheckUGCOnTabChange;
    ::ll::TypedStorage<1, 1, bool>                                                 mRealmsCompatibilityCheckComplete;
    ::ll::TypedStorage<4, 4, ::RealmsAPI::Compatibility>                           mRealmsCompatibility;
    ::ll::TypedStorage<1, 1, bool>                                                 mStorageDropdownActive;
    ::ll::TypedStorage<1, 1, bool>                                                 mUseTabs;
    ::ll::TypedStorage<4, 4, uint>                                                 mIconBouncesInProgress;
    ::ll::TypedStorage<1, 1, bool>                                                 mFriendsIconBouncing;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>              mBounceCooldownTimer;
    ::ll::TypedStorage<8, 8, ::std::chrono::seconds const>                         mBounceCooldownTimerDuration;
    ::ll::TypedStorage<1, 1, bool>                                                 mInviteIconDisplayed;
    ::ll::TypedStorage<1, 1, bool>                                                 mFriendTabViewed;
    ::ll::TypedStorage<1, 1, bool>                                                 mPlatformRestrictsMultiplayer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlatformMultiplayerRestrictions>> mPlatformMultiplayerRestrictions;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mInviteCode;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                        mTaskGroup;
    ::ll::TypedStorage<4, 4, ::PlayScreenController::ServerCollectionName>         mCurrentServerCollectionName;
    ::ll::TypedStorage<4, 4, ::PlayScreenController::ConvertProgressState>         mProgressScreenState;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mDirtyLevelId;
    ::ll::TypedStorage<1, 1, bool>                                                 mLayoutDirty;
    ::ll::TypedStorage<4, 4, int>                                                  mCurrentServerIndex;
    ::ll::TypedStorage<4, 4, int>                                                  mCurrentScreenshotIndex;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsDescriptionExpanded;
    ::ll::TypedStorage<1, 1, bool>                                                 mIsNewsExpanded;
    ::ll::TypedStorage<1, 1, bool>                                                 mAddServerInfoVisible;
    ::ll::TypedStorage<1, 1, bool>                                                 mNavigatedToAddServer;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mRealmsTrialRandomText;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DlcChecker>>                      mDlcChecker;
    ::ll::TypedStorage<8, 1040, ::LocalWorldInfo>                                  mTempLocalWorldInfo;
    ::ll::TypedStorage<8, 8, ::ui::ScreenTechStackSelector&>                       mScreenTechStackSelector;
    ::ll::TypedStorage<1, 1, bool>                                                 mNeedsOfflineAuthCode;
    ::ll::TypedStorage<1, 1, bool>                             mOwnershipVerificationAnimationVisibleState;
    ::ll::TypedStorage<1, 1, bool>                             mDirty;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mBuildGameListSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mMCTokenUpdateSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayScreenController& operator=(PlayScreenController const&);
    PlayScreenController(PlayScreenController const&);
    PlayScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayScreenController() /*override*/;

    virtual void addStaticScreenVars(::Json::Value& globalVars) /*override*/;

    virtual void onOpen() /*override*/;

    virtual void onLeave() /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification notification) /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::std::string getAdditionalScreenInfo() const /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;

    virtual ::std::string _getButtonADescription() /*override*/;

    virtual void _registerEventHandlers();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlayScreenController(
        ::std::shared_ptr<::PlayScreenModel> model,
        ::PlayScreenDefaultTab               tab,
        ::ui::ScreenTechStackSelector&       screenTechStackSelector,
        ::std::string const&                 dirtyLevelId
    );

    MCNAPI bool _checkIfPingIsLoading(int collectionIndex);

    MCNAPI ::ui::ViewRequest _convertLegacyWorld(::LegacyWorldInfo const& world);

    MCNAPI void _displayRealmsFailedToJoinModal(::std::function<void(::ModalScreenButtonId)> callback);

    MCNAPI ::std::string _getCrossPlatformFriendsGridWarningText();

    MCNAPI ::std::string _getFriendsGridWarningText();

    MCNAPI ::std::string _getGeneralMultiplayerWarningText();

    MCNAPI ::ui::ViewRequest _handleStartNetworkItem(int index, ::NetworkWorldType nwt);

    MCNAPI void _navigatePlayScreenTechStack(::PlayScreenDefaultTab tab);

    MCNAPI void _navigateToCreateWorldScreen();

    MCNAPI void _onMCTokenUpdated(::ServicesManager*);

    MCNAPI ::Social::PermissionCheckResult _parentalControlsDialogCheck();

    MCNAPI void _registerBindings();

    MCNAPI void _setOwnershipVerificationAnimationVisibleState();

    MCNAPI bool _shouldShowLockIcon(::LocalWorldInfo const& world) const;

    MCNAPI ::ui::ViewRequest _startLocalWorld(::LocalWorldInfo const& world);

    MCNAPI ::ui::ViewRequest _startNetworkWorld(::NetworkWorldInfo const& world, ::NetworkWorldType worldType);

    MCNAPI bool _worldHasHeader(::NetworkWorldType type, int collectionIndex);

    MCNAPI bool _worldHasImage(::NetworkWorldType type, int collectionIndex);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::NetworkWorldType _getNetworkWorldTypeFromCollection(::std::string const& collectionName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::shared_ptr<::PlayScreenModel> model,
        ::PlayScreenDefaultTab               tab,
        ::ui::ScreenTechStackSelector&       screenTechStackSelector,
        ::std::string const&                 dirtyLevelId
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCNAPI void $onOpen();

    MCNAPI void $onLeave();

    MCNAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification notification);

    MCNAPI ::ui::DirtyFlag $tick();

    MCNAPI ::std::string $getAdditionalScreenInfo() const;

    MCNAPI ::ui::SceneType $getSceneType() const;

    MCNAPI ::std::string $_getButtonADescription();

    MCNAPI void $_registerEventHandlers();
    // NOLINTEND
};
