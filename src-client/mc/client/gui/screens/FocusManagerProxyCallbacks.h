#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class UIControl;
// clang-format on

struct FocusManagerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<bool(::std::string const&)>>       mSetFocusControl;
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::UIControl>()>> mGetFocusedControl;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~FocusManagerProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
