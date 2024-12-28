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
    // prevent constructor by default
    ClientScriptEventCoordinator& operator=(ClientScriptEventCoordinator const&);
    ClientScriptEventCoordinator(ClientScriptEventCoordinator const&);
    ClientScriptEventCoordinator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClientScriptEventCoordinator() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
