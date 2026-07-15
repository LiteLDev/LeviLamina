#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/GameEventNotification.h"
#include "mc/client/gui/screens/controllers/SettingsScreenControllerBase.h"
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/resources/InvalidPacksFilterGroup.h"
#include "mc/resources/PackScope.h"

// auto generated forward declare list
// clang-format off
class ContentView;
class DlcChecker;
class DlcUIWrapper;
class IContentManager;
class IContentManagerContext;
class MainMenuScreenModel;
class MultiplayerLockState;
class ResourceLocation;
struct ContentItem;
struct PackContentItem;
struct PackIdVersion;
// clang-format on

class ResourcePacksScreenController : public ::SettingsScreenControllerBase {
public:
    // ResourcePacksScreenController inner types define
    enum class PackRestriction : int {
        Unrestricted = 0,
        Restricted   = 1,
    };

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
    virtual ~ResourcePacksScreenController() /*override*/ = default;

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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
