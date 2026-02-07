#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/gui/screens/models/PackListType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/resources/InvalidPacksFilterGroup.h"
#include "mc/resources/PackScope.h"

// auto generated forward declare list
// clang-format off
class ContentTierIncompatibleReason;
class ContentView;
class DlcUIWrapper;
class IContentManager;
class IContentManagerContext;
class MainMenuScreenModel;
class MultiplayerLockState;
class ResourceLocation;
struct ContentItem;
struct DlcChecker;
struct MoveResourcePackResult;
struct PackContentItem;
struct PackIdVersion;
struct PackMoveResult;
struct UIPropertyBag;
// clang-format on

class ResourcePacksScreenController : public ::SettingsScreenControllerBase {
public:
    // ResourcePacksScreenController inner types define
    enum class PackRestriction : int {};

    using ConstContentItemPtr = ::std::shared_ptr<::ContentItem const>;

    using ContentItemPtr = ::std::shared_ptr<::ContentItem>;

    using PackContentItemPtr = ::std::shared_ptr<::PackContentItem>;

    using ConstPackContentItemPtr = ::std::shared_ptr<::PackContentItem const>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IContentManager&>                      mContentManager;
    ::ll::TypedStorage<8, 8, ::ContentView*>                          mSelectedContentView;
    ::ll::TypedStorage<8, 8, ::ContentView*>                          mAvailableContentView;
    ::ll::TypedStorage<8, 8, ::ContentView*>                          mRealmsContentView;
    ::ll::TypedStorage<8, 8, ::ContentView*>                          mInvalidContentView;
    ::ll::TypedStorage<8, 8, ::ContentView*>                          mUnownedContentView;
    ::ll::TypedStorage<1, 1, ::PackScope>                             mScope;
    ::ll::TypedStorage<8, 8, uint64>                                  mSelectedId;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<bool>>                mExistanceTracker;
    ::ll::TypedStorage<8, 8, ::ResourcePacksScreenController*>        mOtherPacksTabController;
    ::ll::TypedStorage<8, 8, ::ContentType>                           mContentType;
    ::ll::TypedStorage<4, 4, uint>                                    mIconIndex;
    ::ll::TypedStorage<1, 1, bool>                                    mChooseFromActive;
    ::ll::TypedStorage<8, 24, ::InvalidPacksFilterGroup>              mInvalidPacksFilter;
    ::ll::TypedStorage<8, 24, ::std::vector<::ResourceLocation>>      mInvalidPacks;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DlcUIWrapper>>       mDlcUIWrapper;
    ::ll::TypedStorage<8, 8, ::MultiplayerLockState&>                 mMultiplayerState;
    ::ll::TypedStorage<8, 8, ::std::chrono::seconds const>            mTwoSecondInterval;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLastIconCycle;
    ::ll::TypedStorage<1, 1, bool>                                    mSelectedContentUpdated;
    ::ll::TypedStorage<1, 1, bool>                                    mRepopulateReports;
    ::ll::TypedStorage<1, 1, bool>                                    mRepopulatingReports;
    ::ll::TypedStorage<1, 1, bool>                                    mSelectedExpanded;
    ::ll::TypedStorage<1, 1, bool>                                    mAvailableExpanded;
    ::ll::TypedStorage<1, 1, bool>                                    mRealmsExpanded;
    ::ll::TypedStorage<1, 1, bool>                                    mUnownedExpanded;
    ::ll::TypedStorage<1, 1, bool>                                    mDoNotShowAddonWarning;
    ::ll::TypedStorage<1, 1, bool>                                    mGetInitialSelectedPacks;
    ::ll::TypedStorage<8, 24, ::std::vector<::PackIdVersion>>         mInitialSelectedPacks;
    ::ll::TypedStorage<8, 32, ::std::string>                          mInitialPackId;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                mCopyWorldCallback;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                mIsWorldTemplateOptionLockedCallback;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::DlcChecker>>         mDlcChecker;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePacksScreenController& operator=(ResourcePacksScreenController const&);
    ResourcePacksScreenController(ResourcePacksScreenController const&);
    ResourcePacksScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResourcePacksScreenController() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ::ui::DirtyFlag handleGameEventNotification(::ui::GameEventNotification notification) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ResourcePacksScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::IContentManager&                       contentManager,
        ::ContentType                            type,
        ::InvalidPacksFilterGroup                invalidFilter,
        ::PackScope                              scope,
        ::MultiplayerLockState&                  multiplayerState,
        ::IContentManagerContext&                contentManagerContext,
        ::ResourcePacksScreenController*         otherPacksTabController,
        ::std::function<bool()>                  templateOptionLockGetter,
        ::std::function<void()>                  copyWorld,
        ::std::string                            initialPackId
    );

    MCAPI void _confirmationRestrictedPacksOnWorldDialog(
        ::PackContentItem&                               packItem,
        ::ContentView&                                   contentView,
        int                                              collectionIndex,
        ::PackListType                                   fromPackList,
        ::ResourcePacksScreenController::PackRestriction restriction
    );

    MCAPI uint64 _countAddonsActivated();

    MCAPI void _determineHasLockedContent();

    MCAPI void _displayAddonStackingWarningModal(::std::function<void(bool)> moveCallback);

    MCAPI ::std::string _getAvailableSize(int slot);

    MCAPI ::ContentView* _getContentView(::UIPropertyBag* bag) const;

    MCAPI ::std::string _getCyclingIconFileSystem();

    MCAPI ::Core::PathBuffer<::std::string> _getCyclingIconPath();

    MCAPI ::Core::PathBuffer<::std::string> _getCyclingIconZip();

    MCAPI ::PackListType _getPackListType(::UIPropertyBag* bag) const;

    MCAPI ::ui::ViewRequest _handleAvailablePackClicked(::UIPropertyBag* bag);

    MCAPI void _handleCycleIcon();

    MCAPI ::ui::ViewRequest _handleInvalidPackClicked(::UIPropertyBag* bag);

    MCAPI void _handlePackSelectResult(
        ::PackMoveResult const& result,
        ::ContentView*          contentView,
        int                     collectionIndex,
        ::PackListType          packListType
    );

    MCAPI ::ui::ViewRequest _handleReportErrorsClicked(::UIPropertyBag* bag);

    MCAPI ::ui::ViewRequest _handleSelectedPackMoveClicked(::UIPropertyBag* bag);

    MCAPI ::ui::ViewRequest _handleSortPackClicked(::UIPropertyBag* bag, int dir);

    MCAPI ::ui::ViewRequest _handleStoreClicked(::UIPropertyBag* bag);

    MCAPI bool _hasRestrictedContent(::ContentView& view) const;

    MCAPI bool _launchAddonStackingWarningDialogIfNeeded(
        ::ContentView* contentView,
        int            collectionIndex,
        ::PackListType fromPackList,
        bool           forceMove
    );

    MCAPI bool _launchPlatformLockedDialogIfNeeded(
        ::PackContentItem&      packItem,
        ::ContentView&          contentView,
        int                     collectionIndex,
        ::PackListType          fromPackList,
        bool                    moveDependencies,
        bool                    forceMove,
        ::std::function<void()> moveCallback
    );

    MCAPI void _movePackAfterDataPackWarningMessage(::MoveResourcePackResult result);

    MCAPI void _moveResource(
        ::std::shared_ptr<::PackContentItem> const& item,
        ::ContentView*                              contentView,
        int                                         collectionIndex,
        ::PackListType                              fromPackList,
        bool,
        bool forceMove
    );

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();

    MCAPI void _removeSelectedPacks(int beginAtIndex);

    MCAPI void _showDataPackWarningMessage(::MoveResourcePackResult& result);

    MCAPI void _showIncompatibleMessage(::ContentTierIncompatibleReason const& reason);

    MCAPI void _showMissingDependencyMessage(::ContentView* contentView, int index, ::PackListType fromPacks);

    MCAPI void _showStoreConnectFailedMessage();

    MCAPI void _tryMoveResource(
        ::std::shared_ptr<::ContentItem> const& item,
        ::ContentView*                          contentView,
        int                                     collectionIndex,
        ::PackListType                          fromPackList,
        bool                                    forceMove
    );

    MCAPI void activatePack(::std::string packId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::IContentManager&                       contentManager,
        ::ContentType                            type,
        ::InvalidPacksFilterGroup                invalidFilter,
        ::PackScope                              scope,
        ::MultiplayerLockState&                  multiplayerState,
        ::IContentManagerContext&                contentManagerContext,
        ::ResourcePacksScreenController*         otherPacksTabController,
        ::std::function<bool()>                  templateOptionLockGetter,
        ::std::function<void()>                  copyWorld,
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
    MCAPI ::ui::DirtyFlag $tick();

    MCAPI ::ui::DirtyFlag $handleGameEventNotification(::ui::GameEventNotification notification);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
