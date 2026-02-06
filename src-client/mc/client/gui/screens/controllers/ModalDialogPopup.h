#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonMode.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class ModalDialogPopup : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const>               messageOverride;
    ::ll::TypedStorage<8, 32, ::std::string const>               message;
    ::ll::TypedStorage<8, 64, ::std::function<void(bool)> const> mCallback;
    ::ll::TypedStorage<8, 32, ::std::string const>               mTitle;
    ::ll::TypedStorage<4, 4, ::ModalScreenButtonMode>            mButtonMode;
    ::ll::TypedStorage<1, 1, bool>                               mDisplayedPopup;
    // NOLINTEND

public:
    // prevent constructor by default
    ModalDialogPopup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ModalDialogPopup() /*override*/;

    virtual void onOpen() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ModalDialogPopup(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::string const&                      mainMessage,
        ::std::string const&                      overrideMessage,
        ::std::function<void(bool)>               callback,
        ::std::string const&                      title,
        ::ModalScreenButtonMode                   buttonMode
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::string const&                      mainMessage,
        ::std::string const&                      overrideMessage,
        ::std::function<void(bool)>               callback,
        ::std::string const&                      title,
        ::ModalScreenButtonMode                   buttonMode
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
