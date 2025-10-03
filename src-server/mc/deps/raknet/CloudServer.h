#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/CloudAllocator.h"
#include "mc/deps/raknet/CloudKey.h"
#include "mc/deps/raknet/CloudQuery.h"
#include "mc/deps/raknet/CloudQueryResult.h"
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"
#include "mc/deps/raknet/RakNetGUID.h"
#include "mc/deps/raknet/SystemAddress.h"
#include "mc/deps/raknet/data_structures/List.h"

// auto generated forward declare list
// clang-format off
namespace DataStructures { class Hash; }
namespace DataStructures { class OrderedList; }
namespace RakNet { class CloudServerQueryFilter; }
namespace RakNet { struct Packet; }
// clang-format on

namespace RakNet {

class CloudServer : public ::RakNet::PluginInterface2, public ::RakNet::CloudAllocator {
public:
    // CloudServer inner types declare
    // clang-format off
    struct BufferedGetResponseFromServer;
    struct CloudData;
    struct CloudDataList;
    struct CloudQueryWithAddresses;
    struct GetRequest;
    struct KeySubscriberID;
    struct RemoteCloudClient;
    struct RemoteServer;
    // clang-format on

    // CloudServer inner types define
    struct CloudData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 32, uchar[32]>                stackData;
        ::ll::TypedStorage<8, 8, uchar*>                    allocatedData;
        ::ll::TypedStorage<8, 8, uchar*>                    dataPtr;
        ::ll::TypedStorage<4, 4, uint>                      dataLengthBytes;
        ::ll::TypedStorage<1, 1, bool>                      isUploaded;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> serverSystemAddress;
        ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress> clientSystemAddress;
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>     serverGUID;
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>     clientGUID;
        ::ll::TypedStorage<
            8,
            16,
            ::DataStructures::OrderedList<::RakNet::RakNetGUID, ::RakNet::RakNetGUID, $unknown_type>>
            specificSubscribers;
        // NOLINTEND
    };

    struct CloudDataList {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>                uploaderCount;
        ::ll::TypedStorage<4, 4, uint>                subscriberCount;
        ::ll::TypedStorage<8, 16, ::RakNet::CloudKey> key;
        ::ll::TypedStorage<
            8,
            16,
            ::DataStructures::OrderedList<::RakNet::RakNetGUID, ::RakNet::CloudServer::CloudData*, $unknown_type>>
            keyData;
        ::ll::TypedStorage<
            8,
            16,
            ::DataStructures::OrderedList<::RakNet::RakNetGUID, ::RakNet::RakNetGUID, $unknown_type>>
            nonSpecificSubscribers;
        // NOLINTEND
    };

    struct KeySubscriberID {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::RakNet::CloudKey> key;
        ::ll::TypedStorage<
            8,
            16,
            ::DataStructures::OrderedList<::RakNet::RakNetGUID, ::RakNet::RakNetGUID, $unknown_type>>
            specificSystemsSubscribedTo;
        // NOLINTEND
    };

    struct RemoteCloudClient {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::DataStructures::OrderedList<::RakNet::CloudKey, ::RakNet::CloudKey, $unknown_type>>
            uploadedKeys;
        ::ll::TypedStorage<
            8,
            16,
            ::DataStructures::OrderedList<::RakNet::CloudKey, ::RakNet::CloudServer::KeySubscriberID*, $unknown_type>>
                                         subscribedKeys;
        ::ll::TypedStorage<8, 8, uint64> uploadedBytes;
        // NOLINTEND
    };

    struct RemoteServer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID> serverAddress;
        ::ll::TypedStorage<8, 16, ::DataStructures::OrderedList<::RakNet::CloudKey, ::RakNet::CloudKey, $unknown_type>>
            subscribedKeys;
        ::ll::TypedStorage<8, 16, ::DataStructures::OrderedList<::RakNet::CloudKey, ::RakNet::CloudKey, $unknown_type>>
                                       uploadedKeys;
        ::ll::TypedStorage<1, 1, bool> workingFlag;
        ::ll::TypedStorage<1, 1, bool> gotSubscribedAndUploadedKeys;
        // NOLINTEND
    };

    struct BufferedGetResponseFromServer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>       serverAddress;
        ::ll::TypedStorage<8, 72, ::RakNet::CloudQueryResult> queryResult;
        ::ll::TypedStorage<1, 1, bool>                        gotResult;
        // NOLINTEND
    };

    struct CloudQueryWithAddresses {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::RakNet::CloudQuery>                         cloudQuery;
        ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::RakNetGUID>> specificSystems;
        // NOLINTEND
    };

    struct GetRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 48, ::RakNet::CloudServer::CloudQueryWithAddresses> cloudQueryWithAddresses;
        ::ll::TypedStorage<8, 8, uint64>                                          requestStartTime;
        ::ll::TypedStorage<4, 4, uint>                                            requestId;
        ::ll::TypedStorage<8, 16, ::RakNet::RakNetGUID>                           requestingClient;
        ::ll::TypedStorage<
            8,
            16,
            ::DataStructures::
                OrderedList<::RakNet::RakNetGUID, ::RakNet::CloudServer::BufferedGetResponseFromServer*, $unknown_type>>
            remoteServerResponses;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> maxUploadBytesPerClient;
    ::ll::TypedStorage<8, 8, uint64> maxBytesPerDowload;
    ::ll::TypedStorage<
        8,
        16,
        ::DataStructures::OrderedList<::RakNet::CloudKey, ::RakNet::CloudServer::CloudDataList*, $unknown_type>>
        dataRepository;
    ::ll::TypedStorage<
        8,
        16,
        ::DataStructures::Hash<::RakNet::RakNetGUID, ::RakNet::CloudServer::RemoteCloudClient*, 2048, $unknown_type>>
        remoteSystems;
    ::ll::TypedStorage<
        8,
        16,
        ::DataStructures::OrderedList<::RakNet::RakNetGUID, ::RakNet::CloudServer::RemoteServer*, $unknown_type>>
        remoteServers;
    ::ll::TypedStorage<8, 16, ::DataStructures::OrderedList<uint, ::RakNet::CloudServer::GetRequest*, $unknown_type>>
                                                                                         getRequests;
    ::ll::TypedStorage<8, 8, uint64>                                                     nextGetRequestsCheck;
    ::ll::TypedStorage<4, 4, uint>                                                       nextGetRequestId;
    ::ll::TypedStorage<8, 16, ::DataStructures::List<::RakNet::CloudServerQueryFilter*>> queryFilters;
    ::ll::TypedStorage<8, 136, ::RakNet::SystemAddress>                                  forceAddress;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CloudServer() /*override*/ = default;

    // vIndex: 3
    virtual void Update() /*override*/;

    // vIndex: 4
    virtual ::RakNet::PluginReceiveResult OnReceive(::RakNet::Packet*) /*override*/;

    // vIndex: 7
    virtual void OnClosedConnection(
        ::RakNet::SystemAddress const&,
        ::RakNet::RakNetGUID,
        ::RakNet::PI2_LostConnectionReason
    ) /*override*/;

    // vIndex: 6
    virtual void OnRakPeerShutdown() /*override*/;

    // vIndex: 17
    virtual void OnPostRequest(::RakNet::Packet*);

    // vIndex: 18
    virtual void OnReleaseRequest(::RakNet::Packet*);

    // vIndex: 19
    virtual void OnGetRequest(::RakNet::Packet*);

    // vIndex: 20
    virtual void OnUnsubscribeRequest(::RakNet::Packet*);

    // vIndex: 21
    virtual void OnServerToServerGetRequest(::RakNet::Packet*);

    // vIndex: 22
    virtual void OnServerToServerGetResponse(::RakNet::Packet*);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
