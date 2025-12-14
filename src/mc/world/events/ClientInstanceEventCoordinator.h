#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ClientInstanceGameplayEvent.h"
#include "mc/world/events/EventCoordinator.h"
#include "mc/world/events/EventRef.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceEventHandler;
class ClientInstanceEventListener;
// clang-format on

class ClientInstanceEventCoordinator : public ::EventCoordinator<::ClientInstanceEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ClientInstanceEventHandler>> mClientInstanceGameplayHandler;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientInstanceEventCoordinator() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C void sendEvent(::EventRef<::ClientInstanceGameplayEvent<void>> const& event);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
