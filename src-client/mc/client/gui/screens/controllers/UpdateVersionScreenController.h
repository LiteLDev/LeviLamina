#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/MainMenuScreenController.h"
#include "mc/client/gui/screens/controllers/UpdateVersionScreenContext.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
// clang-format on

class UpdateVersionScreenController : public ::MainMenuScreenController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mBodyText;
    ::ll::TypedStorage<8, 32, ::std::string> mTitleText;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateVersionScreenController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UpdateVersionScreenController() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    UpdateVersionScreenController(::std::shared_ptr<::MainMenuScreenModel> model, ::UpdateVersionScreenContext context);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::MainMenuScreenModel> model, ::UpdateVersionScreenContext context);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForScreenController();
    // NOLINTEND
};
