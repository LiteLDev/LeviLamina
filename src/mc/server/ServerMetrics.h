#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ServerInstance;
// clang-format on

class ServerMetrics {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerMetrics();

    // vIndex: 1
    virtual void sendPeriodicMetrics(::ServerInstance&) = 0;

    // vIndex: 2
    virtual void sendServerTickTime(::std::chrono::nanoseconds const&) = 0;

    // vIndex: 3
    virtual void sendChunkLoadTelemetryData() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
