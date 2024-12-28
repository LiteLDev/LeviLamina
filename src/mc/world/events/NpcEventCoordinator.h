#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventCoordinator.h"

// auto generated forward declare list
// clang-format off
class NpcEventListener;
// clang-format on

class NpcEventCoordinator : public ::EventCoordinator<::NpcEventListener> {
public:
    // prevent constructor by default
    NpcEventCoordinator& operator=(NpcEventCoordinator const&);
    NpcEventCoordinator(NpcEventCoordinator const&);
    NpcEventCoordinator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NpcEventCoordinator() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
