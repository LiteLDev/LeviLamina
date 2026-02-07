#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonMode.h"
#include "mc/client/gui/screens/controllers/MultiplayerLockState.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"
#include "mc/client/network/realms/SubscriptionInfo.h"
#include "mc/client/network/realms/World.h"
#include "mc/client/network/realms/WorldBackupList.h"
#include "mc/client/services/clubs/ClubModel.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/world/level/storage/GameRules.h"

// auto generated forward declare list
// clang-format off
class DlcUIWrapper;
class IContentManager;
class IContentManagerContext;
class MainMenuScreenModel;
class Pack;
class PlatformMultiplayerRestrictions;
class RealmsAllowListScreenController;
class ResourcePacksScreenController;
struct GameRuleId;
struct PackContentItem;
struct PackManagerContentSource;
struct UIPropertyBag;
namespace Realms { struct Backup; }
namespace Realms { struct ConfigInfo; }
namespace Realms { struct Content; }
namespace Realms { struct ContentService; }
namespace Realms { struct InviteLink; }
namespace Realms { struct ServerRegion; }
namespace Realms { struct WorldBackup; }
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
    enum class PurchaseIntent : int {};

    enum class SaveType : int {};

    enum class RealmsSaveAction : int {};

    struct SaveStatusTracker {};

    struct RealmsVersionState {};

    struct DelayedStandardModalScreenData {};

    using PackContentItemPtr = ::std::shared_ptr<::PackContentItem>;

    using ConstPackContentItemPtr = ::std::shared_ptr<::PackContentItem const>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                     mClubModelMutex;
    ::ll::TypedStorage<8, 128, ::Clubs::ClubModel>                             mClubModel;
    ::ll::TypedStorage<8, 128, ::Clubs::ClubModel>                             mUpdatedClubModel;
    ::ll::TypedStorage<8, 656, ::Realms::World>                                mWorld;
    ::ll::TypedStorage<8, 656, ::Realms::World>                                mUpdatedWorld;
    ::ll::TypedStorage<8, 80, ::Realms::SubscriptionInfo>                      mSubscription;
    ::ll::TypedStorage<1, 1, bool>                                             mIsInitialWorldLoadComplete;
    ::ll::TypedStorage<1, 1, bool>                                             mRefreshWorldAndSubscriptionInfoOnOpen;
    ::ll::TypedStorage<4, 4, ::RealmsSettingsScreenController::PurchaseIntent> mPurchaseIntent;
    ::ll::TypedStorage<8, 32, ::std::string>                                   mSelectedSectionTitle;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RealmsAllowListScreenController>> mRealmsAllowListScreenController;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ResourcePacksScreenController>>   mBehaviorPacksScreenController;
    ::ll::TypedStorage<4, 4, int>                                                   mActiveTabIndex;
    ::ll::TypedStorage<1, 1, bool>                                                  mIsSlotsScreen;
    ::ll::TypedStorage<1, 1, bool>                                                  mHasSubscriptionInfoBeenReceived;
    ::ll::TypedStorage<1, 1, bool>                                                  mRefreshScreen;
    ::ll::TypedStorage<1, 1, bool>                                                  mIsReplacingWithBackup;
    ::ll::TypedStorage<1, 1, bool>                                                  mIsUploadingPacks;
    ::ll::TypedStorage<1, 1, bool>                                                  mHasLoadedBackups;
    ::ll::TypedStorage<1, 1, bool>                                                  mDidBackupsReceiveNetworkError;
    ::ll::TypedStorage<1, 1, bool>                                                  mRealmsSelectedContentInitialized;
    ::ll::TypedStorage<1, 1, bool>                                                  mDidReplaceWorld;
    ::ll::TypedStorage<1, 1, bool>                                                  mRefreshingWorldInfo;
    ::ll::TypedStorage<1, 1, bool>                                                  mScreenHasRefreshed;
    ::ll::TypedStorage<1, 1, bool>                                                  mRealmDescriptionEdited;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlatformMultiplayerRestrictions>>  mPlatformMultiplayerRestrictions;
    ::ll::TypedStorage<8, 8, ::IContentManager&>                                    mContentManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DlcUIWrapper>>                     mDlcUIWrapper;
    ::ll::TypedStorage<8, 8, ::Realms::ContentService&>                             mContentService;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IContentManagerContext>>           mContentManagerContext;
    ::ll::TypedStorage<1, 8, ::MultiplayerLockState>                                mMultiplayerState;
    ::ll::TypedStorage<8, 8, ::PackManagerContentSource*>                           mRealmContentSource;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mInitialPackId;
    ::ll::TypedStorage<8, 8, uint64>                                                mLoadedItemsCount;
    ::ll::TypedStorage<1, 3, ::RealmsSettingsScreenController::SaveStatusTracker>   mSaveStatusTracker;
    ::ll::TypedStorage<8, 24, ::std::vector<::Realms::Backup>>                      mBackups;
    ::ll::TypedStorage<8, 8, uint64>                                                mRestoreBackupIndex;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mNewSlotWorldName;
    ::ll::TypedStorage<8, 64, ::Realms::WorldBackupList>                            mWorldBackupList;
    ::ll::TypedStorage<1, 1, bool>                                                  mIsWorldReplicaBasedBackupEnabled;
    ::ll::TypedStorage<1, 1, bool>                                               mDidWorldBackupListReceiveNetworkError;
    ::ll::TypedStorage<1, 1, bool>                                               mHasLoadedWorldBackupList;
    ::ll::TypedStorage<1, 1, bool>                                               mHasLoadedActiveWorldSize;
    ::ll::TypedStorage<1, 1, bool>                                               mDidFetchActiveWorldSizeReceiveError;
    ::ll::TypedStorage<4, 4, float>                                              mStorageTotal;
    ::ll::TypedStorage<4, 4, float>                                              mStorageUsed;
    ::ll::TypedStorage<8, 8, int64>                                              mActiveWorldSizeBytes;
    ::ll::TypedStorage<8, 32, ::std::vector<bool>>                               mManualSavesToggleStates;
    ::ll::TypedStorage<4, 4, int>                                                mActiveSavesTabIndex;
    ::ll::TypedStorage<4, 4, int>                                                mSelectedSaveIndex;
    ::ll::TypedStorage<8, 32, ::std::string>                                     mSelectedBackupId;
    ::ll::TypedStorage<4, 4, ::RealmsSettingsScreenController::RealmsSaveAction> mLastSaveAction;
    ::ll::TypedStorage<4, 8, ::std::optional<::RealmsSettingsScreenController::RealmsSaveAction>> mSaveAction;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                                       mBackupsToReplace;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mLastFocusIdBeforeModalOpen;
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
    ::ll::TypedStorage<4, 4, int>            mPlayerSleepPercentInt;
    ::ll::TypedStorage<8, 32, ::std::string> mRespawnRadiusString;
    ::ll::TypedStorage<8, 32, ::std::string> mRandomTickSpeedString;
    ::ll::TypedStorage<8, 192, ::GameRules>  mGameRules;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsSettingsScreenController& operator=(RealmsSettingsScreenController const&);
    RealmsSettingsScreenController(RealmsSettingsScreenController const&);
    RealmsSettingsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsSettingsScreenController() /*override*/;

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

    MCAPI void _addInviteLink();

    MCAPI void _applyPacks(::std::function<void()> packsApplyCallback);

    MCAPI bool _checkMultiplayerPrivileges();

    MCAPI void _confirmCloseRealm();

    MCAPI void _confirmResetRealm();

    MCAPI bool _contentNeedApplication(::std::vector<::std::shared_ptr<::PackContentItem>> const& selectedContent);

    MCAPI ::std::function<void(::std::vector<::Realms::Content>)>
    _createApplyContentOnRealmProgressCallbackChain(::std::function<void()> packApplyCallback);

    MCAPI ::std::unique_ptr<::Pack> _createUnknownPack(::Realms::Content const& content, ::PackType packType);

    MCAPI void _deleteBackup();

    MCAPI void _displayFreeUpSpacePopup();

    MCAPI void _displayModalPopup(
        ::std::string const&        title,
        ::std::string const&        message,
        ::std::function<void(bool)> callback,
        ::std::string const&        leftButtonLabel,
        ::std::string const&        middleButtonLabel,
        ::std::string const&        rightButtonLabel,
        ::ModalScreenButtonMode     buttonNumber,
        ::std::string const&        telemetryOverride
    );

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

    MCAPI void _downloadMostRecentBackup();

    MCAPI void _downloadMostRecentBackupV2();

    MCAPI void _downloadRealmsBackupInContext();

    MCAPI void _downloadRealmsWorld(
        uint64               estimatedSize,
        ::std::string const& backupId,
        ::std::string const& time,
        bool                 shouldCheckForSettingsChanged
    );

    MCAPI void _fetchActiveWorldSize();

    MCAPI void _fetchAppliedContent();

    MCAPI void _fetchInviteLinks();

    MCAPI void _fetchWorldBackupList();

    MCAPI void _fetchWorldBackups();

    MCAPI ::std::vector<::std::shared_ptr<::PackContentItem>> _gatherSelectedContent();

    MCAPI ::std::string _getConsumableToSubscriptionInfoText();

    MCAPI ::std::string _getCurrentRealmsVersionReference();

    MCAPI ::std::string _getDurationLabelText();

    MCAPI ::std::string _getMaxPlayerLabelText();

    MCAPI void _getPreferredRegions();

    MCAPI ::std::string _getSubscriptionOriginMismatchLabelText();

    MCAPI void _goToManageSubscriptionLink();

    MCAPI void _handleRealmBackupButtonClick(::UIPropertyBag& bag);

    MCAPI void _handleRealmReplaceBackupButtonClick(int index);

    MCAPI bool _hasClubInfoChanged() const;

    MCAPI bool _hasGameRulesChanged();

    MCAPI bool _hasSettingsChangePermission() const;

    MCAPI bool _hasSlotInfoChanged();

    MCAPI bool _hasWorldInfoChanged();

    MCAPI bool _isStoreMismatch() const;

    MCAPI void _openCloseRealm(bool isRequestToOpen);

    MCAPI void _queryRealmsConfigInfo();

    MCAPI void _querySubscriptionInfo();

    MCAPI bool _randomTickSpeedHelper(::std::string const& optionValue);

    MCAPI void _refreshRealmsConfigDetails(::Realms::ConfigInfo& realmsConfigInfo);

    MCAPI void _refreshWorldInfo(bool refreshSubscriptionInfo);

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();

    MCAPI void _removeUnneededItemsFromRealmsUnknownContentSource();

    MCAPI void _renewRealmHandler();

    MCAPI void _resetRealm();

    MCAPI bool _respawnRadiusHelper(::std::string const& optionValue);

    MCAPI void _restoreBackup();

    MCAPI void _restoreBackupProgressTick();

    MCAPI void _restoreBackupV2();

    MCAPI void _saveAutoRealmWorldBackup();

    MCAPI void _saveClubInfo();

    MCAPI void _saveRealmWorldBackup();

    MCAPI void _saveSettings(bool showRealmsLoadingLevelProgressHandler, ::std::function<void(bool)> actionAfterSave);

    MCAPI void _saveSettingsAndExitScreen();

    MCAPI void _setAllowCheatsWithConfirmation(bool value);

    MCAPI void _setFocusToLastIdBeforeModalOpen();

    MCAPI void _setGameModeWithConfirmation(int value);

    MCAPI void _setGameRule(int value, ::GameRuleId gameRuleId);

    MCAPI void _setIsHardcore(bool isHardcore);

    MCAPI void _setRandomTickSpeedString(::std::string const& value);

    MCAPI void _setRealmsContentSelected();

    MCAPI void _setUpCallbacksBooleanGameRuleSettings(
        ::std::vector<::std::pair<::std::string, ::GameRuleId>> const& rules,
        ::std::function<bool()>                                        enabledFunction
    );

    MCAPI void _setupPacksScreen();

    MCAPI void _showBackupProgressAndExitScreen();

    MCAPI void _showErrorPopup(::std::string titleId, ::std::string contentId, ::std::function<void(bool)> action);

    MCAPI void _showErrorPopupAndExitScreenAfterDismissed(::std::string titleId, ::std::string contentId);

    MCAPI void _showRefreshWorldInfoPopup();

    MCAPI void _showSaveAndDeletePopup(int toDelete);

    MCAPI void _showSuccessPopup();

    MCAPI void _switchToOreUITechStack();

    MCAPI void _updateRealmBranchConfig(::std::string const& ref);

    MCAPI void _updateSubscriptionInformation(::Realms::SubscriptionInfo subscription);

    MCAPI void _updateVersionsModel(::std::string const& filter, bool forceUpdate);

    MCAPI void _updateWorld(::Realms::World& world);

    MCAPI void _uploadWorld();

    MCAPI void showGeneralErrorPopupAndExitScreenAfterDismissed();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string
    _getDateAsFormattedStringForBackupByIndex(::std::vector<::Realms::WorldBackup> const& backups, int index);

    MCAPI static ::std::string
    _getGameServerVersionForBackupByIndex(::std::vector<::Realms::WorldBackup> const& backups, int index);

    MCAPI static ::std::string
    _getPacksListTextForBackupByIndex(::std::vector<::Realms::WorldBackup> const& backups, int index);

    MCAPI static ::std::string _getSizeForBackupByIndex(::std::vector<::Realms::WorldBackup> const& backups, int index);

    MCAPI static ::std::string
    _getTimeAsFormattedStringForBackupByIndex(::std::vector<::Realms::WorldBackup> const& backups, int index);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& DEFAULT_SAVES_TAB_FOCUS();

    MCAPI static ::std::string const& SAVES_BUTTON_FOCUS_CONTROL();
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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
