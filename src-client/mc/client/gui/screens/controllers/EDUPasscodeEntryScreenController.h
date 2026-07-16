#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/DirtyFlag.h"
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/social/EduDedicatedServerDetails.h"

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
    // virtual functions
    // NOLINTBEGIN
    virtual ~EDUPasscodeEntryScreenController() /*override*/ = default;

    virtual ::ui::DirtyFlag tick() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
