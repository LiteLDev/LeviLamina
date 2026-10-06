#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/AsyncPromise.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/nether_net/ESessionError.h"
#include "mc/deps/nether_net/ISignalingInterface.h"
#include "mc/deps/nether_net/signaling/MessageReceived.h"
#include "mc/deps/nether_net/signaling/http/HttpServer.h"
#include "mc/external/webrtc/scoped_refptr.h"
#include "mc/platform/Result.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace NetherNet { struct HttpRequest; }
namespace NetherNet { struct HttpResponse; }
namespace NetherNet { struct ISignalingEventHandler; }
namespace NetherNet { struct NetworkID; }
namespace webrtc { class PendingTaskSafetyFlag; }
// clang-format on

namespace NetherNet {

class HttpSignalingServer : public ::NetherNet::HttpServer, public ::NetherNet::ISignalingInterface {
public:
    // HttpSignalingServer inner types define
    using PendingKey = ::std::pair<::NetherNet::NetworkID, ::std::string>;

    using ResponsePromise = ::Bedrock::Threading::AsyncPromise<::Bedrock::Result<::NetherNet::HttpResponse>>;

    using ResponseResult = ::Bedrock::Result<::NetherNet::HttpResponse>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        16,
        ::std::map<
            ::std::pair<::NetherNet::NetworkID, ::std::string>,
            ::Bedrock::Threading::AsyncPromise<::Bedrock::Result<::NetherNet::HttpResponse>>>>
        mPendingJoinPromises;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::std::variant<::NetherNet::SignalingEvents::MessageReceived> const&),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
                                                                                               mEventDispatcher;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<::Bedrock::Result<::std::string>()>> mGetServerInfo;
    ::ll::TypedStorage<8, 8, ::webrtc::scoped_refptr<::webrtc::PendingTaskSafetyFlag>>         mSafetyFlag;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HttpSignalingServer() /*override*/ = default;

    virtual ::Bedrock::Threading::Async<::NetherNet::ESessionError>
    SendSignal(::NetherNet::NetworkID, ::NetherNet::NetworkID to, ::std::string const& signal) /*override*/;

    virtual ::Bedrock::PubSub::Subscription
    RegisterEventHandler(::NetherNet::ISignalingEventHandler* handler) /*override*/;

    virtual ::Bedrock::Threading::Async<::Bedrock::Result<::NetherNet::HttpResponse>>
    onRequest(::NetherNet::HttpRequest request) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Bedrock::Threading::Async<::NetherNet::ESessionError>
    $SendSignal(::NetherNet::NetworkID, ::NetherNet::NetworkID to, ::std::string const& signal);

    MCAPI ::Bedrock::PubSub::Subscription $RegisterEventHandler(::NetherNet::ISignalingEventHandler* handler);

    MCAPI ::Bedrock::Threading::Async<::Bedrock::Result<::NetherNet::HttpResponse>>
    $onRequest(::NetherNet::HttpRequest request);


    // NOLINTEND
};

} // namespace NetherNet
