#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/PI2_FailedConnectionAttemptReason.h"
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"
#include "mc/deps/raknet/RakString.h"
#include "mc/deps/raknet/SimpleMutex.h"
#include "mc/deps/raknet/SystemAddress.h"
#include "mc/deps/raknet/data_structures/List.h"
#include "mc/deps/raknet/data_structures/Queue.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct Packet; }
namespace RakNet { struct RakNetGUID; }
// clang-format on

namespace RakNet {

class HTTPConnection2 : public ::RakNet::PluginInterface2 {
public:
    // HTTPConnection2 inner types declare
    // clang-format off
    struct Request;
    // clang-format on

    // HTTPConnection2 inner types define
    struct Request {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::RakNet::RakString>       stringToTransmit;
        ::ll::TypedStorage<8, 8, ::RakNet::RakString>       stringReceived;
        ::ll::TypedStorage<8, 8, ::RakNet::RakString>       host;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> hostEstimatedAddress;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> hostCompletedAddress;
        ::ll::TypedStorage<2, 2, ushort>                    port;
        ::ll::TypedStorage<1, 1, bool>                      useSSL;
        ::ll::TypedStorage<4, 4, int>                       contentOffset;
        ::ll::TypedStorage<4, 4, int>                       contentLength;
        ::ll::TypedStorage<4, 4, int>                       ipVersion;
        ::ll::TypedStorage<8, 8, void*>                     userData;
        ::ll::TypedStorage<1, 1, bool>                      chunked;
        ::ll::TypedStorage<8, 8, uint64>                    thisChunkSize;
        ::ll::TypedStorage<8, 8, uint64>                    bytesReadForThisChunk;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::DataStructures::Queue<::RakNet::HTTPConnection2::Request*>> pendingRequests;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::HTTPConnection2::Request*>>  sentRequests;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::HTTPConnection2::Request*>>  completedRequests;
    ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex>                                        pendingRequestsMutex;
    ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex>                                        sentRequestsMutex;
    ::ll::TypedStorage<8, 40, ::RakNet::SimpleMutex>                                        completedRequestsMutex;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HTTPConnection2() /*override*/ = default;

    // vIndex: 4
    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;

    // vIndex: 7
    virtual void OnClosedConnection(
        ::RakNet::SystemAddress const&,
        ::RakNet::RakNetGUID,
        ::RakNet::PI2_LostConnectionReason
    ) /*override*/;

    // vIndex: 8
    virtual void OnNewConnection(::RakNet::SystemAddress const&, ::RakNet::RakNetGUID, bool) /*override*/;

    // vIndex: 9
    virtual void OnFailedConnectionAttempt(::RakNet::Packet*, ::RakNet::PI2_FailedConnectionAttemptReason) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
