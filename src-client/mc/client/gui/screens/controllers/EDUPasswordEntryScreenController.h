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

class EDUPasswordEntryScreenController : public ::MinecraftScreenController {
public:
    // EDUPasswordEntryScreenController inner types define
    using OnConfirmPassword = ::std::function<void(::Social::EduDedicatedServerDetails const&, ::std::string const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                  mPrevCaretPosition;
    ::ll::TypedStorage<8, 32, ::std::string>                       mPassword;
    ::ll::TypedStorage<8, 32, ::std::string>                       mDisplayedPassword;
    ::ll::TypedStorage<1, 1, bool>                                 mHidePassword;
    ::ll::TypedStorage<1, 1, bool>                                 mShowPasswordTooltip;
    ::ll::TypedStorage<8, 88, ::Social::EduDedicatedServerDetails> mServerDetails;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Social::EduDedicatedServerDetails const&, ::std::string const&)>>
        mOnConfirmPassword;
    // NOLINTEND

public:
    // prevent constructor by default
    EDUPasswordEntryScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EDUPasswordEntryScreenController() /*override*/;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EDUPasswordEntryScreenController(
        ::std::shared_ptr<::MinecraftScreenModel>                                               model,
        ::std::function<void(::Social::EduDedicatedServerDetails const&, ::std::string const&)> onConfirmPassword
    );

    MCAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel>                                               model,
        ::std::function<void(::Social::EduDedicatedServerDetails const&, ::std::string const&)> onConfirmPassword
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
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
