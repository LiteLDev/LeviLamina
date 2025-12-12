#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventCoordinator.h"

// auto generated forward declare list
// clang-format off
class ClientScriptEventListener;
// clang-format on

class ClientScriptEventCoordinator : public ::EventCoordinator<::ClientScriptEventListener> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientScriptEventCoordinator() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
