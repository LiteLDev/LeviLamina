#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/ServerMetrics.h"

class ServerMetricsImpl : public ::ServerMetrics {
public:
    // prevent constructor by default
    ServerMetricsImpl& operator=(ServerMetricsImpl const&);
    ServerMetricsImpl(ServerMetricsImpl const&);
    ServerMetricsImpl();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerMetricsImpl() = default;

    // vIndex: 1
    virtual void sendPeriodicMetrics(class ServerInstance& serverInstance);

    // vIndex: 2
    virtual void sendServerTickTime(std::chrono::nanoseconds const& timepoint);

    // vIndex: 3
    virtual void sendChunkLoadTelemetryData();

    MCAPI explicit ServerMetricsImpl(class ServerCommunicationInterface* serverCommunicationInterface);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void sendPeriodicMetricsInternal(class ServerInstance& serverInstance);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class ServerCommunicationInterface* serverCommunicationInterface);

    MCAPI void sendChunkLoadTelemetryData$();

    MCAPI void sendPeriodicMetrics$(class ServerInstance& serverInstance);

    MCAPI void sendServerTickTime$(std::chrono::nanoseconds const& timepoint);

    // NOLINTEND
};
