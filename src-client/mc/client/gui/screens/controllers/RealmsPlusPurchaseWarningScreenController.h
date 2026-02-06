#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
// clang-format on

class RealmsPlusPurchaseWarningScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                     mCheckedUnderstand;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsPlusPurchaseWarningScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsPlusPurchaseWarningScreenController() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsPlusPurchaseWarningScreenController(
        ::std::shared_ptr<::MainMenuScreenModel> model,
        ::std::function<void()>                  callback
    );

    MCAPI void _registerEventHandlers();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model, ::std::function<void()> callback);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
