#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class FocusManagerProxy;
struct ScreenEvent;
struct VisualTreeProxy;
// clang-format on

struct ScreenViewProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::VisualTreeProxy*()>>   mGetVisualTree;
    ::ll::TypedStorage<8, 64, ::std::function<::FocusManagerProxy*()>> mGetFocusManager;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                 mIsInitialized;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::std::string const&, ::ScreenEvent&)>>
                                                       mTestAutomationHandleRawInputEvent;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>> mIsAnyFocusControlHovered;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenViewProxyCallbacks& operator=(ScreenViewProxyCallbacks const&);
    ScreenViewProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScreenViewProxyCallbacks(::ScreenViewProxyCallbacks const&);

    MCAPI ~ScreenViewProxyCallbacks();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::ScreenViewProxyCallbacks const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
