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
    ::ll::UntypedStorage<8, 8>  mUnk8beb99;
    ::ll::UntypedStorage<8, 8>  mUnk57ddf0;
    // NOLINTEND

public:
    // prevent constructor by default
    WindowState& operator=(WindowState const&);
    WindowState(WindowState const&);
    WindowState();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C WindowState(
        ::tagRECT const&                         defaultRect,
        ::std::unique_ptr<::WindowStateStorage>  storage,
        ::std::unique_ptr<::WindowStatePlatform> platform
    );

    MCNAPI_C bool _fitToScreen();

    MCNAPI_C bool readFromWindow(::HWND__* window);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::tagRECT const&                         defaultRect,
        ::std::unique_ptr<::WindowStateStorage>  storage,
        ::std::unique_ptr<::WindowStatePlatform> platform
    );
    // NOLINTEND
};
