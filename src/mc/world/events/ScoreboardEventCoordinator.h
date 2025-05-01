#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventCoordinator.h"

// auto generated forward declare list
// clang-format off
class ScoreboardEventListener;
// clang-format on

class ScoreboardEventCoordinator : public ::EventCoordinator<::ScoreboardEventListener> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScoreboardEventCoordinator() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
