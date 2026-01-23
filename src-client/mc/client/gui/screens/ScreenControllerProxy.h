#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct MainMenuScreenModel;
// clang-format on

class ScreenControllerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6d01e7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenControllerProxy& operator=(ScreenControllerProxy const&);
    ScreenControllerProxy(ScreenControllerProxy const&);
    ScreenControllerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScreenControllerProxy();

    virtual ::std::shared_ptr<::MainMenuScreenModel> getMainMenuScreenModel();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
