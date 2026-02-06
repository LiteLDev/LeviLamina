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
#include "mc/client/legacy/ImportStatus.h"
#include "mc/client/network/realms/RealmsAPI.h"
#include "mc/client/world/LocalWorldInfo.h"
#include "mc/client/world/NetworkWorldType.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class DlcUIWrapper;
class PlatformMultiplayerRestrictions;
class PlayScreenModel;
struct DlcChecker;
struct ImportResult;
struct LegacyWorldInfo;
struct NetworkWorldInfo;
struct ServicesManager;
namespace Json { class Value; }
namespace Realms { struct World; }
namespace Social { struct PermissionCheckResult; }
namespace ui { struct ScreenTechStackSelector; }
// clang-format on

class PlayScreenController : public ::MainMenuScreenController {
public:
    // PlayScreenController inner types define
    enum class ConvertProgressState : int {};

    enum class ServerCollectionName : int {};

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
    ::ll::TypedStorage<8, 1032, ::LocalWorldInfo>                                  mTempLocalWorldInfo;
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

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification) /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::std::string getAdditionalScreenInfo() const /*override*/;

    virtual ::ui::SceneType getSceneType() const /*override*/;

    virtual ::std::string _getButtonADescription() /*override*/;

    virtual void _registerEventHandlers();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayScreenController(
        ::std::shared_ptr<::PlayScreenModel> model,
        ::PlayScreenDefaultTab               tab,
        ::ui::ScreenTechStackSelector&       screenTechStackSelector,
        ::std::string const&                 dirtyLevelId
    );

    MCAPI bool _checkIfPingIsLoading(int collectionIndex);

    MCAPI ::ui::ViewRequest _convertLegacyWorld(::LegacyWorldInfo const& world);

    MCAPI void _displayRealmsFailedToJoinModal(::std::function<void(::ModalScreenButtonId)> callback);

    MCAPI void _errorStoreUnavailable();

    MCAPI ::LegacyWorldInfo const& _getBetaRetailLegacyWorld(int index) const;

    MCAPI ::std::string _getCrossPlatformFriendsGridWarningText();

    MCAPI ::std::string _getFriendsGridWarningText();

    MCAPI ::std::string _getGeneralMultiplayerWarningText();

    MCAPI int _getIndexForRealmsCollection(::std::string const& collectionName, int collectionIndex) const;

    MCAPI ::LegacyWorldInfo const& _getLegacyWorld(int index);

    MCAPI ::std::function<void(::Legacy::ImportStatus, float, ::std::shared_ptr<::ImportResult>)>
    _getLegacyWorldConvertCallback(::LegacyWorldInfo const& worldInfo, ::std::string const& levelId);

    MCAPI ::NetworkWorldInfo const& _getNetworkWorld(int index, ::NetworkWorldType networkType);

    MCAPI ::NetworkWorldType _getNetworkWorldTypeFromCollection(::std::string const& collectionName) const;

    MCAPI ::std::string _getRealmsUnavailableMessage() const;

    MCAPI int _getTotalServerCount() const;

    MCAPI ::ui::ViewRequest _handleEditRealm(int index);

    MCAPI ::ui::ViewRequest _handleLeaveRealm(int index);

    MCAPI ::ui::ViewRequest _handleStartNetworkItem(int index, ::NetworkWorldType nwt);

    MCAPI ::ui::ViewRequest _handleStartRealm(int index);

    MCAPI bool _isRealmCreationPossible() const;

    MCAPI bool _isRealmExpiringForPlatform(::Realms::World const& world);

    MCAPI void _navigatePlayScreenTechStack(::PlayScreenDefaultTab tab);

    MCAPI void _navigateToCreateWorldScreen();

    MCAPI void _onMCTokenUpdated(::ServicesManager*);

    MCAPI void _onWorldConversionCompleted(::std::shared_ptr<::ImportResult> result, ::std::string const& levelId);

    MCAPI void _openProcessWorldProgressDialog();

    MCAPI ::Social::PermissionCheckResult _parentalControlsDialogCheck();

    MCAPI void _registerBindings();

    MCAPI void _setOwnershipVerificationAnimationVisibleState();

    MCAPI bool _shouldShowLockIcon(::LocalWorldInfo const& world) const;

    MCAPI ::ui::ViewRequest _startLocalWorld(::LocalWorldInfo const& world);

    MCAPI ::ui::ViewRequest _startNetworkWorld(::NetworkWorldInfo const& world, ::NetworkWorldType worldType);

    MCAPI ::ui::DirtyFlag _tickRealms();

    MCAPI bool _updateFriendsTab();

    MCAPI void _updateNeedsOfflineAuthCode();

    MCAPI bool _userGeneratedContentRestrictionsDialogCheck() const;

    MCAPI bool _worldHasImage(::NetworkWorldType type, int collectionIndex);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::chrono::seconds& mFiveSecondInterval();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::PlayScreenModel> model,
        ::PlayScreenDefaultTab               tab,
        ::ui::ScreenTechStackSelector&       screenTechStackSelector,
        ::std::string const&                 dirtyLevelId
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
    MCAPI void $addStaticScreenVars(::Json::Value& globalVars);

    MCAPI void $onOpen();

    MCAPI void $onLeave();

    MCAPI ::ui::DirtyFlag $tick();

    MCAPI ::std::string $getAdditionalScreenInfo() const;

    MCFOLD ::ui::SceneType $getSceneType() const;

    MCFOLD ::std::string $_getButtonADescription();

    MCAPI void $_registerEventHandlers();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
