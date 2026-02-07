#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/RealmsSettingsScreenController.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
class PlatformMultiplayerRestrictions;
namespace Realms { struct World; }
namespace Social { struct PermissionCheckResult; }
// clang-format on

class RealmsSlotsScreenController : public ::RealmsSettingsScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                       mCurrentSlotImage;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mCurrentSlotImagePath;
    ::ll::TypedStorage<4, 4, int>                                                  mFeedUnreadCount;
    ::ll::TypedStorage<1, 1, bool>                                                 mPlatformRestrictsMultiplayer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlatformMultiplayerRestrictions>> mPlatformMultiplayerRestrictions;
    ::ll::TypedStorage<1, 1, bool>                                                 mRealmsSlotsScreenNeedsRefresh;
    ::ll::TypedStorage<1, 1, bool>                  mRealmsSlotsScreenNeedsRefreshOnScreenOpen;
    ::ll::TypedStorage<1, 3, ::std::array<bool, 3>> mSlotViewToggle;
    ::ll::TypedStorage<1, 1, bool>                  mChangingSlot;
    ::ll::TypedStorage<8, 32, ::std::string>        mSelectedWorldFocusButton;
    ::ll::TypedStorage<4, 4, int>                   mSelectedWorldFocusButtonDelayTicks;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsSlotsScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsSlotsScreenController() /*override*/;

    virtual void onOpen() /*override*/;

    virtual void onCreation() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsSlotsScreenController(::std::shared_ptr<::MainMenuScreenModel> model, ::Realms::World& world);

    MCAPI ::ui::ViewRequest _editRealm();

    MCAPI void _getUnreadCount();

    MCAPI bool _isRealmExpiringForPlatform();

    MCAPI ::Social::PermissionCheckResult _parentalControlsDialogCheck();

    MCAPI void _refreshSlotsInfo();

    MCAPI void _registerBindings();

    MCAPI void _registerEventHandlers();

    MCAPI void _setActiveSlot(int slotIndex, ::std::function<void()> callback, bool refreshScreen);

    MCAPI ::ui::ViewRequest _startRealm();

    MCAPI bool _userGeneratedContentRestrictionsDialogCheck() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model, ::Realms::World& world);
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
