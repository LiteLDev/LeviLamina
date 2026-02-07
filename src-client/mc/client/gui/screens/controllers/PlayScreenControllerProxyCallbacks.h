#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/PlayScreenDefaultTab.h"

// auto generated forward declare list
// clang-format off
struct SelectNavigationTabCommand;
// clang-format on

struct PlayScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::SelectNavigationTabCommand&)>> mSelectTab;
    ::ll::TypedStorage<8, 64, ::std::function<::PlayScreenDefaultTab()>>            mGetActiveTabIndex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlayScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
