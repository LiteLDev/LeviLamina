#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/ScreenControllerProxyType.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
// clang-format on

class ScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ScreenControllerProxyType const> mType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScreenControllerProxy();

    virtual ::std::shared_ptr<::MainMenuScreenModel> getMainMenuScreenModel();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::std::shared_ptr<::MainMenuScreenModel> $getMainMenuScreenModel();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
