#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/RackspaceOperationType.h"
#include "mc/deps/raknet/RakString.h"
#include "mc/deps/raknet/SystemAddress.h"
#include "mc/deps/raknet/data_structures/List.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class Rackspace2EventCallback; }
namespace RakNet { class TCPInterface; }
// clang-format on

namespace RakNet {

class Rackspace {
public:
    // Rackspace inner types declare
    // clang-format off
    struct RackspaceOperation;
    // clang-format on

    // Rackspace inner types define
    struct RackspaceOperation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::RakNet::RackspaceOperationType> type;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>        connectionAddress;
        ::ll::TypedStorage<1, 1, bool>                             isPendingAuthentication;
        ::ll::TypedStorage<8, 8, ::RakNet::RakString>              incomingStream;
        ::ll::TypedStorage<8, 8, ::RakNet::RakString>              httpCommand;
        ::ll::TypedStorage<8, 8, ::RakNet::RakString>              operation;
        ::ll::TypedStorage<8, 8, ::RakNet::RakString>              xml;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::Rackspace2EventCallback*>>      eventCallbacks;
    ::ll::TypedStorage<8, 8, ::RakNet::TCPInterface*>                                          tcpInterface;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::Rackspace::RackspaceOperation>> operations;
    ::ll::TypedStorage<8, 8, ::RakNet::RakString>                                              serverManagementURL;
    ::ll::TypedStorage<8, 8, ::RakNet::RakString>                                              serverManagementDomain;
    ::ll::TypedStorage<8, 8, ::RakNet::RakString>                                              serverManagementPath;
    ::ll::TypedStorage<8, 8, ::RakNet::RakString>                                              storageURL;
    ::ll::TypedStorage<8, 8, ::RakNet::RakString>                                              storageDomain;
    ::ll::TypedStorage<8, 8, ::RakNet::RakString>                                              storagePath;
    ::ll::TypedStorage<8, 8, ::RakNet::RakString>                                              cdnManagementURL;
    ::ll::TypedStorage<8, 8, ::RakNet::RakString>                                              cdnManagementDomain;
    ::ll::TypedStorage<8, 8, ::RakNet::RakString>                                              cdnManagementPath;
    ::ll::TypedStorage<8, 8, ::RakNet::RakString>                                              storageToken;
    ::ll::TypedStorage<8, 8, ::RakNet::RakString>                                              authToken;
    ::ll::TypedStorage<8, 8, ::RakNet::RakString>                                              rackspaceCloudUsername;
    ::ll::TypedStorage<8, 8, ::RakNet::RakString>                                              apiAccessKey;
    // NOLINTEND
};

} // namespace RakNet
