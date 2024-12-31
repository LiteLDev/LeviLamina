#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/CloudAllocator.h"
#include "mc/deps/raknet/PI2_LostConnectionReason.h"
#include "mc/deps/raknet/PluginInterface2.h"
#include "mc/deps/raknet/PluginReceiveResult.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct Packet; }
namespace RakNet { struct RakNetGUID; }
namespace RakNet { struct SystemAddress; }
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
        ::ll::UntypedStorage<1, 32>  mUnkf16be6;
        ::ll::UntypedStorage<8, 8>   mUnke63fe5;
        ::ll::UntypedStorage<8, 8>   mUnk394d17;
        ::ll::UntypedStorage<4, 4>   mUnkd4a3aa;
        ::ll::UntypedStorage<1, 1>   mUnke551b3;
        ::ll::UntypedStorage<8, 136> mUnkad3f6c;
        ::ll::UntypedStorage<8, 136> mUnk1eaa0a;
        ::ll::UntypedStorage<8, 16>  mUnkd4497a;
        ::ll::UntypedStorage<8, 16>  mUnk2ecedf;
        ::ll::UntypedStorage<8, 16>  mUnk154e02;
        // NOLINTEND

    public:
        // prevent constructor by default
        CloudData& operator=(CloudData const&);
        CloudData(CloudData const&);
        CloudData();
    };

    struct CloudDataList {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk43b28f;
        ::ll::UntypedStorage<4, 4>  mUnkca166c;
        ::ll::UntypedStorage<8, 16> mUnkd41815;
        ::ll::UntypedStorage<8, 16> mUnkc61baf;
        ::ll::UntypedStorage<8, 16> mUnkb91dd9;
        // NOLINTEND

    public:
        // prevent constructor by default
        CloudDataList& operator=(CloudDataList const&);
        CloudDataList(CloudDataList const&);
        CloudDataList();
    };

    struct KeySubscriberID {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk57ae32;
        ::ll::UntypedStorage<8, 16> mUnk6d9f91;
        // NOLINTEND

    public:
        // prevent constructor by default
        KeySubscriberID& operator=(KeySubscriberID const&);
        KeySubscriberID(KeySubscriberID const&);
        KeySubscriberID();
    };

    struct RemoteCloudClient {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnkd95c6a;
        ::ll::UntypedStorage<8, 16> mUnk6ff0e1;
        ::ll::UntypedStorage<8, 8>  mUnkeab725;
        // NOLINTEND

    public:
        // prevent constructor by default
        RemoteCloudClient& operator=(RemoteCloudClient const&);
        RemoteCloudClient(RemoteCloudClient const&);
        RemoteCloudClient();
    };

    struct RemoteServer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk1d0fa8;
        ::ll::UntypedStorage<8, 16> mUnkf200ed;
        ::ll::UntypedStorage<8, 16> mUnkb7eb23;
        ::ll::UntypedStorage<1, 1>  mUnkf589a6;
        ::ll::UntypedStorage<1, 1>  mUnk88da0b;
        // NOLINTEND

    public:
        // prevent constructor by default
        RemoteServer& operator=(RemoteServer const&);
        RemoteServer(RemoteServer const&);
        RemoteServer();
    };

    struct BufferedGetResponseFromServer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk7816d1;
        ::ll::UntypedStorage<8, 72> mUnkd7e6c9;
        ::ll::UntypedStorage<1, 1>  mUnk740942;
        // NOLINTEND

    public:
        // prevent constructor by default
        BufferedGetResponseFromServer& operator=(BufferedGetResponseFromServer const&);
        BufferedGetResponseFromServer(BufferedGetResponseFromServer const&);
        BufferedGetResponseFromServer();
    };

    struct CloudQueryWithAddresses {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkaf427c;
        ::ll::UntypedStorage<8, 16> mUnke33067;
        // NOLINTEND

    public:
        // prevent constructor by default
        CloudQueryWithAddresses& operator=(CloudQueryWithAddresses const&);
        CloudQueryWithAddresses(CloudQueryWithAddresses const&);
        CloudQueryWithAddresses();
    };

    struct GetRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 48> mUnk33c3b1;
        ::ll::UntypedStorage<8, 8>  mUnk656c97;
        ::ll::UntypedStorage<4, 4>  mUnkc0d6cd;
        ::ll::UntypedStorage<8, 16> mUnked6604;
        ::ll::UntypedStorage<8, 16> mUnk1f848a;
        // NOLINTEND

    public:
        // prevent constructor by default
        GetRequest& operator=(GetRequest const&);
        GetRequest(GetRequest const&);
        GetRequest();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk27253f;
    ::ll::UntypedStorage<8, 8>   mUnkd0a5af;
    ::ll::UntypedStorage<8, 16>  mUnkcece0b;
    ::ll::UntypedStorage<8, 16>  mUnk6a5163;
    ::ll::UntypedStorage<8, 16>  mUnk6ffb76;
    ::ll::UntypedStorage<8, 16>  mUnk46ff2b;
    ::ll::UntypedStorage<8, 8>   mUnk291a22;
    ::ll::UntypedStorage<4, 4>   mUnk515af2;
    ::ll::UntypedStorage<8, 16>  mUnkfc3151;
    ::ll::UntypedStorage<8, 136> mUnk4af8a3;
    // NOLINTEND

public:
    // prevent constructor by default
    CloudServer& operator=(CloudServer const&);
    CloudServer(CloudServer const&);
    CloudServer();

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
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
