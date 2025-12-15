#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
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
#ifdef LL_PLAT_S
    virtual ~ScreenControllerProxy() = default;
#else // LL_PLAT_C
    virtual ~ScreenControllerProxy();
#endif

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
#ifdef LL_PLAT_C
    MCNAPI ::std::shared_ptr<::MainMenuScreenModel> $getMainMenuScreenModel();
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
