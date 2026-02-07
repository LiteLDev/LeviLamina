#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MinecraftScreenController.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
// clang-format on

class ExternalLinkModalDialogPopup : public ::MinecraftScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const>           mTitle;
    ::ll::TypedStorage<8, 32, ::std::string const>           mMessage;
    ::ll::TypedStorage<8, 32, ::std::string const>           mExternalLink;
    ::ll::TypedStorage<8, 32, ::std::string const>           mGoToPageText;
    ::ll::TypedStorage<8, 32, ::std::string const>           mSecondButtonText;
    ::ll::TypedStorage<8, 64, ::std::function<void()> const> mCallback;
    ::ll::TypedStorage<1, 1, bool>                           mDisplayedPopup;
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalLinkModalDialogPopup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onOpen() /*override*/;

    virtual ~ExternalLinkModalDialogPopup() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExternalLinkModalDialogPopup(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::string const&                      title,
        ::std::string const&                      mainMessage,
        ::std::string const&                      externalLink,
        ::std::string const&                      goToPageText,
        ::std::string const&                      secondButtonText,
        ::std::function<void()> const&            callback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::MinecraftScreenModel> model,
        ::std::string const&                      title,
        ::std::string const&                      mainMessage,
        ::std::string const&                      externalLink,
        ::std::string const&                      goToPageText,
        ::std::string const&                      secondButtonText,
        ::std::function<void()> const&            callback
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
    MCNAPI static void** $vftableForScreenController();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
