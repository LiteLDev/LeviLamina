#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class FocusManagerProxy;
class VisualTreeProxy;
struct ScreenEvent;
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
};
