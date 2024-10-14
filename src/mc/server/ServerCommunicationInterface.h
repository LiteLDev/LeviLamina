#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ServerCommunicationInterface {
public:
    // prevent constructor by default
    ServerCommunicationInterface& operator=(ServerCommunicationInterface const&);
    ServerCommunicationInterface(ServerCommunicationInterface const&);
    ServerCommunicationInterface();

public:
    // NOLINTBEGIN
    MCAPI void sendBandwidthMetric(
        uint64             connectionTotalBytesReceived,
        uint64             connectionTotalBytesSent,
        uint64             playerDeltaBytesReceived,
        uint64             playerDeltaBytesSent,
        std::string const& xuid
    );

    MCAPI void sendChunkLoadTelemtryData(struct ChunkLoadTelemetryData const& data);

    MCAPI void sendServerStarted();

    MCAPI void sendServerTickTime(std::chrono::nanoseconds timepoint);

    MCAPI ~ServerCommunicationInterface();

    MCAPI static std::unique_ptr<class ServerCommunicationInterface> create(struct NetworkAddress const& address);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void communicate(std::string const& method, class Json::Value const& params);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
