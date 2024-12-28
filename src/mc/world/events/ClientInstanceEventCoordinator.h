#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventCoordinator.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceEventListener;
// clang-format on

class ClientInstanceEventCoordinator : public ::EventCoordinator<::ClientInstanceEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk46ffef;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientInstanceEventCoordinator& operator=(ClientInstanceEventCoordinator const&);
    ClientInstanceEventCoordinator(ClientInstanceEventCoordinator const&);
    ClientInstanceEventCoordinator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClientInstanceEventCoordinator() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
