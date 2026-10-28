#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonMode.h"
#include "mc/client/gui/screens/controllers/ModalScreenData.h"
#include "mc/client/gui/screens/controllers/MultiplayerLockState.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"
#include "mc/client/network/realms/ConfigInfo.h"
#include "mc/client/network/realms/SubscriptionInfo.h"
#include "mc/client/network/realms/World.h"
#include "mc/client/services/clubs/ClubModel.h"
#include "mc/world/level/storage/GameRules.h"

// auto generated forward declare list
// clang-format off
class DlcUIWrapper;
class IContentManager;
class IContentManagerContext;
class MainMenuScreenModel;
class PlatformMultiplayerRestrictions;
class RealmsAllowListScreenController;
class ResourcePacksScreenController;
class TaskGroup;
struct GameRuleId;
struct PackContentItem;
struct PackManagerContentSource;
namespace Realms { class ContentService; }
namespace Realms { struct Content; }
namespace Realms { struct InviteLink; }
namespace Realms { struct ServerRegion; }
// clang-format on

class RealmsSettingsScreenController : public ::SettingsScreenControllerBase {
public:
    // RealmsSettingsScreenController inner types declare
    // clang-format off
    struct SaveStatusTracker;
    struct RealmsVersionState;
    struct DelayedStandardModalScreenData;
    // clang-format on

    // RealmsSettingsScreenController inner types define
    enum class PurchaseIntent : int {
        Unsupported        = 0,
        ManageSubscription = 1,
        RenewSubscription  = 2,
        ExtendConsumable   = 3,
        RenewConsumable    = 4,
    };

    struct SaveStatusTracker {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mRealmsSaveInProgress;
        ::ll::TypedStorage<1, 1, bool> mClubsSaveInProgress;
        ::ll::TypedStorage<1, 1, bool> mRealmsSaveSuccess;
        // NOLINTEND
    };

    struct RealmsVersionState {
    public:
        // RealmsVersionState inner types define
        using Version = ::Realms::ConfigInfo::Version;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>                                           mPageIndex;
        ::ll::TypedStorage<1, 1, bool>                                          mAwaitingResponse;
        ::ll::TypedStorage<8, 32, ::std::string>                                mPendingRef;
        ::ll::TypedStorage<8, 32, ::std::string>                                mLastFilter;
        ::ll::TypedStorage<8, 56, ::Realms::ConfigInfo>                         mConfigInfo;
        ::ll::TypedStorage<8, 24, ::std::vector<::Realms::ConfigInfo::Version>> mFilteredVersions;
        ::ll::TypedStorage<8, 104, ::Realms::ConfigInfo::Version>               mMatchingVersion;
        // NOLINTEND
    };

    struct DelayedStandardModalScreenData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 368, ::ModalScreenData>                           screenData;
        ::ll::TypedStorage<8, 64, ::std::function<void(::ModalScreenButtonId)>> callback;
        // NOLINTEND
    };

    using PackContentItemPtr = ::std::shared_ptr<::PackContentItem>;

    using ConstPackContentItemPtr = ::std::shared_ptr<::PackContentItem const>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::std::mutex>                                    mClubModelMutex;
    ::ll::TypedStorage<8, 128, ::Clubs::ClubModel>                             mClubModel;
    ::ll::TypedStorage<8, 128, ::Clubs::ClubModel>                             mUpdatedClubModel;
    ::ll::TypedStorage<8, 720, ::Realms::World>                                mWorld;
    ::ll::TypedStorage<8, 720, ::Realms::World>                                mUpdatedWorld;
    ::ll::TypedStorage<8, 112, ::Realms::SubscriptionInfo>                     mSubscription;
    ::ll::TypedStorage<1, 1, bool>                                             mIsInitialWorldLoadComplete;
    ::ll::TypedStorage<1, 1, bool>                                             mRefreshWorldAndSubscriptionInfoOnOpen;
    ::ll::TypedStorage<4, 4, ::RealmsSettingsScreenController::PurchaseIntent> mPurchaseIntent;
    ::ll::TypedStorage<8, 32, ::std::string>                                   mSelectedSectionTitle;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RealmsAllowListScreenController>>  mRealmsAllowListScreenController;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ResourcePacksScreenController>>    mBehaviorPacksScreenController;
    ::ll::TypedStorage<4, 4, int>                                                    mActiveTabIndex;
    ::ll::TypedStorage<1, 1, bool>                                                   mHasSubscriptionInfoBeenReceived;
    ::ll::TypedStorage<1, 1, bool>                                                   mRefreshScreen;
    ::ll::TypedStorage<1, 1, bool>                                                   mIsUploadingPacks;
    ::ll::TypedStorage<1, 1, bool>                                                   mRealmsSelectedContentInitialized;
    ::ll::TypedStorage<1, 1, bool>                                                   mDidReplaceWorld;
    ::ll::TypedStorage<1, 1, bool>                                                   mRefreshingWorldInfo;
    ::ll::TypedStorage<1, 1, bool>                                                   mScreenHasRefreshed;
    ::ll::TypedStorage<1, 1, bool>                                                   mRealmDescriptionEdited;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlatformMultiplayerRestrictions>>   mPlatformMultiplayerRestrictions;
    ::ll::TypedStorage<8, 8, ::IContentManager&>                                     mContentManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DlcUIWrapper>>                      mDlcUIWrapper;
    ::ll::TypedStorage<8, 8, ::Realms::ContentService&>                              mContentService;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IContentManagerContext>>            mContentManagerContext;
    ::ll::TypedStorage<8, 8, ::MultiplayerLockState>                                 mMultiplayerState;
    ::ll::TypedStorage<8, 8, ::PackManagerContentSource*>                            mRealmContentSource;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mInitialPackId;
    ::ll::TypedStorage<8, 8, uint64>                                                 mLoadedItemsCount;
    ::ll::TypedStorage<1, 3, ::RealmsSettingsScreenController::SaveStatusTracker>    mSaveStatusTracker;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mNewSlotWorldName;
    ::ll::TypedStorage<1, 1, bool>                                                   mIsFetchingInviteLinkInfo;
    ::ll::TypedStorage<1, 1, bool>                                                   mHasInviteLinkInfoErrored;
    ::ll::TypedStorage<1, 1, bool>                                                   mIsPostingInviteLink;
    ::ll::TypedStorage<8, 24, ::std::vector<::Realms::InviteLink>>                   mInviteLinks;
    ::ll::TypedStorage<1, 1, bool>                                                   mRefetchInviteLinksOnOpen;
    ::ll::TypedStorage<1, 1, bool>                                                   mActiveDropdown;
    ::ll::TypedStorage<4, 4, int>                                                    mRegionSelectedIndex;
    ::ll::TypedStorage<8, 24, ::std::vector<::Realms::ServerRegion>>                 mRegionData;
    ::ll::TypedStorage<1, 1, bool>                                                   mIsFetchingPreferredRegions;
    ::ll::TypedStorage<1, 1, bool>                                                   mHasPreferredRegionsErrored;
    ::ll::TypedStorage<8, 256, ::RealmsSettingsScreenController::RealmsVersionState> mRealmsVersionState;
    ::ll::TypedStorage<8, 24, ::std::vector<::RealmsSettingsScreenController::DelayedStandardModalScreenData>>
                                                             mDelayedStandardModalPopups;
    ::ll::TypedStorage<4, 4, int>                            mPlayerSleepPercentInt;
    ::ll::TypedStorage<8, 32, ::std::string>                 mRespawnRadiusString;
    ::ll::TypedStorage<8, 32, ::std::string>                 mRandomTickSpeedString;
    ::ll::TypedStorage<8, 192, ::GameRules>                  mGameRules;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>> mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsSettingsScreenController& operator=(RealmsSettingsScreenController const&);
    RealmsSettingsScreenController(RealmsSettingsScreenController const&);
    RealmsSettingsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsSettingsScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;

    virtual void onCreation() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::std::string getAdditionalScreenInfo() const /*override*/;

    virtual void addEventProperties(::std::unordered_map<::std::string, ::std::string>& eventProperties) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsSettingsScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::Realms::World const&                   world,
        ::std::string const&                     initialPackId
    );

    MCAPI void _addContentToBeAppliedAndUploadIfNeeded(
        ::std::vector<::std::shared_ptr<::PackContentItem>>                             contentToUpload,
        ::std::shared_ptr<::std::vector<::Realms::Content>>                             contentToApply,
        int                                                                             index,
        ::std::function<void(::std::vector<::Realms::Content>)>                         completeUploadCallback,
        ::std::function<void(::std::vector<::std::shared_ptr<::PackContentItem>>, int)> failedUploadCallback
    );

    MCAPI void _applyPacks(::std::function<void()> packsApplyCallback);

    MCAPI bool _canChangeCheatGameRules() const;

    MCAPI void _displayModalPopup(
        ::std::string const&                         title,
        ::std::string const&                         message,
        ::std::function<void(::ModalScreenButtonId)> callback,
        ::std::string const&                         leftButtonLabel,
        ::std::string const&                         middleButtonLabel,
        ::std::string const&                         rightButtonLabel,
        ::ModalScreenButtonMode                      buttonNumber,
        ::std::string const&                         telemetryOverride
    );

    MCAPI void _fetchAppliedContent();

    MCAPI void _fetchInviteLinks();

    MCAPI bool _hasGameRulesChanged();

    MCAPI bool _hasSingleGameRuleChanged(::GameRuleId const& rule);

    MCAPI bool _hasSlotInfoChanged();

    MCAPI bool _hasWorldInfoChanged();

    MCAPI bool _isStoreMismatch() const;

    MCAPI void _openCloseRealm(bool isRequestToOpen);

    MCAPI void _querySubscriptionInfo();

    MCAPI void _refreshWorldInfo(bool refreshSubscriptionInfo);

    MCAPI void _registerEventHandlers();

    MCAPI void _renewRealmHandler();

    MCAPI void _saveSettings(bool showRealmsLoadingLevelProgressHandler, ::std::function<void(bool)> actionAfterSave);

    MCAPI void _setUpCallbacksBooleanGameRuleSettings(
        ::std::vector<::std::pair<::std::string, ::GameRuleId>> const& rules,
        ::std::function<bool()>                                        enabledFunction
    );

    MCAPI void _showErrorPopup(::std::string titleId, ::std::string contentId, ::std::function<void(bool)> action);

    MCAPI void _updateRealmBranchConfig(::std::string const& ref);

    MCAPI void _updateVersionsModel(::std::string const& filter, bool forceUpdate);

    MCAPI void activateInitialPack();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::Realms::World const&                   world,
        ::std::string const&                     initialPackId
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();

    MCAPI void $onCreation();

    MCAPI ::ui::DirtyFlag $tick();

    MCAPI ::std::string $getAdditionalScreenInfo() const;

    MCAPI void $addEventProperties(::std::unordered_map<::std::string, ::std::string>& eventProperties) const;
    // NOLINTEND
};
