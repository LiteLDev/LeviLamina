#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventCoordinator.h"

// auto generated forward declare list
// clang-format off
class UIEventListener;
// clang-format on

class UIEventCoordinator : public ::EventCoordinator<::UIEventListener> {
public:
    // prevent constructor by default
    UIEventCoordinator& operator=(UIEventCoordinator const&);
    UIEventCoordinator(UIEventCoordinator const&);
    UIEventCoordinator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UIEventCoordinator() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};
