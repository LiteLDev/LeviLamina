#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventCoordinator.h"

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
    // vIndex: 0
    virtual ~ClientInstanceEventCoordinator() /*override*/ = default;
    // NOLINTEND

};
