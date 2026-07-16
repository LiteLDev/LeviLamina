#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/nether_net/ContextProxy.h"
#include "mc/external/sigslot/has_slots.h"
#include "mc/external/sigslot/single_threaded.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { struct HttpRequest; }
namespace NetherNet { struct HttpResponse; }
// clang-format on

namespace NetherNet {

class HttpServer : public ::NetherNet::ContextProxy, public ::sigslot::has_slots<::sigslot::single_threaded> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2>   mUnk202df9;
    ::ll::UntypedStorage<8, 32>  mUnk784a80;
    ::ll::UntypedStorage<8, 8>   mUnkf36298;
    ::ll::UntypedStorage<8, 24>  mUnk3d8f1e;
    ::ll::UntypedStorage<8, 336> mUnka23eeb;
    // NOLINTEND

public:
    // prevent constructor by default
    HttpServer& operator=(HttpServer const&);
    HttpServer(HttpServer const&);
    HttpServer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HttpServer() /*override*/ = default;

    virtual ::Bedrock::Threading::Async<::Bedrock::Result<::NetherNet::HttpResponse>>
        onRequest(::NetherNet::HttpRequest) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace NetherNet
