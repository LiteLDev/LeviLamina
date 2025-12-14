#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/ScreenControllerProxy.h"

// auto generated forward declare list
// clang-format off
struct MainMenuScreenModel;
// clang-format on

class StartMenuScreenControllerProxy : public ::ScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk6a7b95;
    // NOLINTEND

public:
    // prevent constructor by default
    StartMenuScreenControllerProxy& operator=(StartMenuScreenControllerProxy const&);
    StartMenuScreenControllerProxy(StartMenuScreenControllerProxy const&);
    StartMenuScreenControllerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StartMenuScreenControllerProxy() /*override*/ = default;

    virtual ::std::shared_ptr<::MainMenuScreenModel> getMainMenuScreenModel() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::shared_ptr<::MainMenuScreenModel> $getMainMenuScreenModel();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
