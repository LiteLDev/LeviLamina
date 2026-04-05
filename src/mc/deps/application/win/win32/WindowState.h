#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class WindowStatePlatform;
class WindowStateStorage;
// clang-format on

class WindowState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk3c6aa9;
    ::ll::UntypedStorage<4, 4>  mUnkdf21d2;
    ::ll::UntypedStorage<8, 8>  mUnk8852a5;
    ::ll::UntypedStorage<8, 8>  mUnkf85291;
    // NOLINTEND

public:
    // prevent constructor by default
    WindowState& operator=(WindowState const&);
    WindowState(WindowState const&);
    WindowState();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI WindowState(
        ::tagRECT const&                         defaultRect,
        ::std::unique_ptr<::WindowStateStorage>  storage,
        ::std::unique_ptr<::WindowStatePlatform> platform
    );

    MCNAPI bool _fitToScreen();

    MCNAPI bool readFromWindow(::HWND__* window);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::tagRECT const&                         defaultRect,
        ::std::unique_ptr<::WindowStateStorage>  storage,
        ::std::unique_ptr<::WindowStatePlatform> platform
    );
#endif
    // NOLINTEND
};
