#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/social/EduDedicatedServerDetails.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class EDUPasscodeEntryScreenController : public ::MinecraftScreenController {
public:
    // EDUPasscodeEntryScreenController inner types define
    using OnConfirmPasscode = ::std::function<void(::Social::EduDedicatedServerDetails const&, ::std::string const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                  mPrevCaretPosition;
    ::ll::TypedStorage<8, 32, ::std::string>                       mPasscode;
    ::ll::TypedStorage<8, 32, ::std::string>                       mDisplayedPasscode;
    ::ll::TypedStorage<1, 1, bool>                                 mHidePasscode;
    ::ll::TypedStorage<1, 1, bool>                                 mShowPasscodeTooltip;
    ::ll::TypedStorage<8, 88, ::Social::EduDedicatedServerDetails> mServerDetails;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Social::EduDedicatedServerDetails const&, ::std::string const&)>>
        mOnConfirmPasscode;
    // NOLINTEND

public:
    // prevent constructor by default
    EDUPasscodeEntryScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EDUPasscodeEntryScreenController() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EDUPasscodeEntryScreenController(
        ::std::shared_ptr<::MinecraftScreenModel>                                               model,
        ::std::function<void(::Social::EduDedicatedServerDetails const&, ::std::string const&)> onConfirmPasscode
    );

    MCAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel>                                               model,
        ::std::function<void(::Social::EduDedicatedServerDetails const&, ::std::string const&)> onConfirmPasscode
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
