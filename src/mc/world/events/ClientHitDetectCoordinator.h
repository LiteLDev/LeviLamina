#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventCoordinator.h"

// auto generated forward declare list
// clang-format off
class ClientHitDetectListener;
// clang-format on

class ClientHitDetectCoordinator : public ::EventCoordinator<::ClientHitDetectListener> {
public:
    // prevent constructor by default
    ClientHitDetectCoordinator& operator=(ClientHitDetectCoordinator const&);
    ClientHitDetectCoordinator(ClientHitDetectCoordinator const&);
    ClientHitDetectCoordinator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClientHitDetectCoordinator() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};
