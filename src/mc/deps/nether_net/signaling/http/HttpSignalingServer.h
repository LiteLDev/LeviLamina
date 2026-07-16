#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/AsyncPromise.h"
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/deps/nether_net/ISignalingInterface.h"
#include "mc/deps/nether_net/signaling/http/HttpServer.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace NetherNet { struct HttpRequest; }
namespace NetherNet { struct HttpResponse; }
namespace NetherNet { struct ISignalingEventHandler; }
namespace NetherNet { struct NetworkID; }
// clang-format on

namespace NetherNet {

class HttpSignalingServer : public ::NetherNet::HttpServer, public ::NetherNet::ISignalingInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnka951d0;
    ::ll::UntypedStorage<8, 128> mUnkb54189;
    ::ll::UntypedStorage<8, 8>   mUnkaf0d99;
    // NOLINTEND

public:
    // prevent constructor by default
    HttpSignalingServer& operator=(HttpSignalingServer const&);
    HttpSignalingServer(HttpSignalingServer const&);
    HttpSignalingServer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HttpSignalingServer() /*override*/ = default;

    virtual void SendSignal(
        ::NetherNet::NetworkID,
        ::NetherNet::NetworkID,
        ::std::string const&,
        ::std::function<void(::NetherNet::ESessionError)>&&
    ) /*override*/;

    virtual ::Bedrock::PubSub::Subscription RegisterEventHandler(::NetherNet::ISignalingEventHandler*) /*override*/;

    virtual ::Bedrock::Threading::Async<::Bedrock::Result<::NetherNet::HttpResponse>>
        onRequest(::NetherNet::HttpRequest) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace NetherNet
