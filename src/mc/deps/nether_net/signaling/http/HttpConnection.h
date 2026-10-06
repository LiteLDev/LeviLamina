#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/ContextProxy.h"
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/signal_with_thread_policy.h"
#include "mc/external/sigslot/single_threaded.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { class HttpServer; }
namespace webrtc { class PendingTaskSafetyFlag; }
namespace webrtc { class Socket; }
// clang-format on

namespace NetherNet {

class HttpConnection : public ::NetherNet::ContextProxy,
                       public ::sigslot::has_slots<::sigslot::single_threaded>,
                       public ::std::enable_shared_from_this<::NetherNet::HttpConnection> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        48,
        ::sigslot::signal_with_thread_policy<::sigslot::single_threaded, ::NetherNet::HttpConnection*>>
                                                                                       SignalClosed;
    ::ll::TypedStorage<8, 8, ::NetherNet::HttpServer&>                                 mServer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::webrtc::Socket>>                      mSocket;
    ::ll::TypedStorage<8, 32, ::std::string>                                           mBuffer;
    ::ll::TypedStorage<8, 8, ::webrtc::scoped_refptr<::webrtc::PendingTaskSafetyFlag>> mSafetyFlag;
    // NOLINTEND

public:
    // prevent constructor by default
    HttpConnection& operator=(HttpConnection const&);
    HttpConnection(HttpConnection const&);
    HttpConnection();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HttpConnection() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _onCloseEvent(::webrtc::Socket*, int);

    MCAPI void _onReadEvent(::webrtc::Socket*);
    // NOLINTEND
};

} // namespace NetherNet
