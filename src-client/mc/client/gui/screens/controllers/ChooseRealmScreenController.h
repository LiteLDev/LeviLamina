#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/SlotSelectedAction.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
struct RealmsWorldInfo;
namespace Realms { struct World; }
// clang-format on

class ChooseRealmScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                    mDirty;
    ::ll::TypedStorage<1, 1, bool>                                    mSlotsViewToggle;
    ::ll::TypedStorage<1, 1, bool>                                    mProgressLoadingVisible;
    ::ll::TypedStorage<4, 4, int>                                     mCurrentRealmIndex;
    ::ll::TypedStorage<8, 32, ::std::string>                          mCurrentSlotImage;
    ::ll::TypedStorage<8, 32, ::std::string>                          mCurrentSlotImagePath;
    ::ll::TypedStorage<1, 1, bool>                                    mIsFetching;
    ::ll::TypedStorage<8, 24, ::std::vector<::RealmsWorldInfo>>       mRealmsWorldsInfo;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Realms::World)>> mCallback;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                mOnCancelCallback;
    ::ll::TypedStorage<4, 4, ::SlotSelectedAction>                    mSlotSelectedAction;
    ::ll::TypedStorage<1, 1, bool>                                    mRealmSlotSelected;
    ::ll::TypedStorage<1, 1, bool>                                    mShowingConfirmationDialog;
    ::ll::TypedStorage<1, 1, bool>                                    mIsChangingSlot;
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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
