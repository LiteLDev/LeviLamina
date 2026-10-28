#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class SignInErrorModalScreenController : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>           mErrorMessage;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mOnDismiss;
    ::ll::TypedStorage<1, 1, bool>                     mDisplayedPopup;
    // NOLINTEND

public:
    // prevent constructor by default
    SignInErrorModalScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SignInErrorModalScreenController() /*override*/ = default;

    virtual void onOpen() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SignInErrorModalScreenController(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::string                             errorMessage,
        ::std::function<void()>                   onDismiss
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::string                             errorMessage,
        ::std::function<void()>                   onDismiss
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onOpen();
    // NOLINTEND
};
