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
    // prevent constructor by default
    VisualTreeProxyCallbacks& operator=(VisualTreeProxyCallbacks const&);
    VisualTreeProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI VisualTreeProxyCallbacks(::VisualTreeProxyCallbacks const&);

    MCAPI ~VisualTreeProxyCallbacks();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::VisualTreeProxyCallbacks const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
