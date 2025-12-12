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
#ifdef LL_PLAT_S
    virtual ~ServerMetrics();
#else // LL_PLAT_C
    virtual ~ServerMetrics() = default;
#endif

    virtual void sendPeriodicMetrics(::ServerInstance&) = 0;

    virtual void sendServerTickTime(::std::chrono::nanoseconds const&) = 0;

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
};
