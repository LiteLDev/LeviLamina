#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/ScreenControllerProxy.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenController;
class MainMenuScreenModel;
// clang-format on

class StartMenuScreenControllerProxy : public ::ScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::MainMenuScreenController>> mOwnerWeakPtr;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StartMenuScreenControllerProxy() /*override*/;

    virtual ::std::shared_ptr<::MainMenuScreenModel> getMainMenuScreenModel() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::MainMenuScreenModel> $getMainMenuScreenModel();
    // NOLINTEND
};
