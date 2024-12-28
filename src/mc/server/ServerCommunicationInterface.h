#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ChunkLoadTelemetryData;
struct NetworkAddress;
namespace Json { class Value; }
// clang-format on

class ServerCommunicationInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk921281;
    ::ll::UntypedStorage<8, 136> mUnkd080df;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerCommunicationInterface& operator=(ServerCommunicationInterface const&);
    ServerCommunicationInterface(ServerCommunicationInterface const&);
    ServerCommunicationInterface();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void communicate(::std::string const& method, ::Json::Value const& params);

    MCAPI void sendBandwidthMetric(
        uint64               connectionTotalBytesReceived,
        uint64               connectionTotalBytesSent,
        uint64               playerDeltaBytesReceived,
        uint64               playerDeltaBytesSent,
        ::std::string const& xuid
    );

    MCAPI void sendChunkLoadTelemtryData(::ChunkLoadTelemetryData const& data);

    MCAPI void sendServerStarted();

    MCAPI void sendServerTickTime(::std::chrono::nanoseconds timepoint);

    MCAPI ~ServerCommunicationInterface();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::ServerCommunicationInterface> create(::NetworkAddress const& address);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
