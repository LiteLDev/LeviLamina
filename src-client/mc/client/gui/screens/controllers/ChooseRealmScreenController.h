#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/ViewRequest.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/SlotSelectedAction.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
namespace Realms { struct Slot; }
namespace Realms { struct World; }
namespace RealmsScreenUtils { struct RealmsWorldLoadingDetailsGroup; }
// clang-format on

class ChooseRealmScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>           mDirty;
    ::ll::TypedStorage<1, 1, bool>           mSlotsViewToggle;
    ::ll::TypedStorage<1, 1, bool>           mProgressLoadingVisible;
    ::ll::TypedStorage<4, 4, int>            mCurrentRealmIndex;
    ::ll::TypedStorage<8, 32, ::std::string> mCurrentSlotImage;
    ::ll::TypedStorage<8, 32, ::std::string> mCurrentSlotImagePath;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RealmsScreenUtils::RealmsWorldLoadingDetailsGroup>>
                                                                      mRealmsWorldLoadingDetailsGroup;
    ::ll::TypedStorage<1, 1, bool>                                    mDoneLoading;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Realms::World)>> mCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                mOnCancelCallback;
    ::ll::TypedStorage<4, 4, ::SlotSelectedAction>                    mSlotSelectedAction;
    ::ll::TypedStorage<1, 1, bool>                                    mRealmSlotSelected;
    ::ll::TypedStorage<1, 1, bool>                                    mShowingConfirmationDialog;
    // NOLINTEND

public:
    // prevent constructor by default
    ChooseRealmScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onCreation() /*override*/;

    virtual void onOpen() /*override*/;

    virtual void onDelete() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;

    virtual ~ChooseRealmScreenController() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChooseRealmScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::std::function<void(::Realms::World)>   callback,
        ::SlotSelectedAction                     selectionAction,
        ::std::function<void()>                  onCancelCallback
    );

    MCAPI void _fetchUserWorlds();

    MCAPI ::Realms::Slot _getSlotAt(int index);

    MCAPI ::ui::ViewRequest _notifyCallback(::Realms::World world);

    MCAPI void _registerBindings();

    MCAPI void _registerEvents();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::std::function<void(::Realms::World)>   callback,
        ::SlotSelectedAction                     selectionAction,
        ::std::function<void()>                  onCancelCallback
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

    MCAPI void $onDelete();

    MCAPI ::ui::DirtyFlag $tick();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
