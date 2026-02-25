#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ToggleComponent;
class UIControl;
// clang-format on

struct VisualTreeProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<::std::vector<::std::shared_ptr<::UIControl>>(::std::function<bool(::ToggleComponent const&)>)>>
                                                                           mGetVisibleControlsWith;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::std::string const&)>> mVisibleControlExistsWithName;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<::std::shared_ptr<::UIControl>(::std::function<bool(::UIControl const&)> const&)>>
        mGetFirstVisibleControl;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~VisualTreeProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
