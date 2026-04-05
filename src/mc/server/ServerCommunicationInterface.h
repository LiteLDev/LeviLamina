#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct NetworkAddress;
namespace Json { class Value; }
// clang-format on

class ServerCommunicationInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk48044d;
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
#ifdef LL_PLAT_S
    MCNAPI void communicate(::std::string const& method, ::Json::Value const& params);

    MCNAPI void sendBandwidthMetric(
        uint64               connectionTotalBytesReceived,
        uint64               connectionTotalBytesSent,
        uint64               playerDeltaBytesReceived,
        uint64               playerDeltaBytesSent,
        ::std::string const& xuid
    );

    MCNAPI void sendServerStarted();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI static ::std::unique_ptr<::ServerCommunicationInterface> create(::NetworkAddress const& address);
#endif
    // NOLINTEND
};
