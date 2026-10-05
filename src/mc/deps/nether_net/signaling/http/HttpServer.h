#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/nether_net/ContextProxy.h"
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/single_threaded.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class HttpConnection; }
namespace NetherNet { struct HttpRequest; }
namespace NetherNet { struct HttpResponse; }
namespace webrtc { class Socket; }
// clang-format on

namespace NetherNet {

class HttpServer : public ::NetherNet::ContextProxy, public ::sigslot::has_slots<::sigslot::single_threaded> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort>                                                         mPort;
    ::ll::TypedStorage<8, 32, ::std::string>                                                 mBindAddress;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::webrtc::Socket>>                            mListenSocket;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::NetherNet::HttpConnection>>> mConnections;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                                  mTaskGroup;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HttpServer() /*override*/ = default;

    virtual ::Bedrock::Threading::Async<::Bedrock::Result<::NetherNet::HttpResponse>>
    onRequest(::NetherNet::HttpRequest request) = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _onConnectionClosed(::NetherNet::HttpConnection* conn);

    MCAPI void _onListenReadEvent(::webrtc::Socket*);
    // NOLINTEND
};

} // namespace NetherNet
