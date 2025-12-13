#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/StatusCode.h"
#include "mc/deps/core/http/WebSocket.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/AsyncPromise.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class HeaderCollection; }
namespace Bedrock::Http { class RetryPolicy; }
namespace Bedrock::Http { struct Url; }
// clang-format on

namespace Bedrock::Http {

class PersistentWebSocket : public ::Bedrock::Http::WebSocket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk5730d9;
    ::ll::UntypedStorage<8, 104> mUnkd613a3;
    // NOLINTEND

public:
    // prevent constructor by default
    PersistentWebSocket& operator=(PersistentWebSocket const&);
    PersistentWebSocket(PersistentWebSocket const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PersistentWebSocket() /*override*/;

    virtual bool shouldReconnect() const;

    virtual ::Bedrock::Threading::Async<::Bedrock::Http::Url> getUrl() = 0;

    virtual ::Bedrock::Threading::Async<::Bedrock::Http::HeaderCollection> getHeaders();

    virtual ::Bedrock::Http::RetryPolicy getReconnectPolicy();

    virtual void onConnect();

    virtual void onDisconnect(bool, uint);

    virtual void onClose(uint status) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_S PersistentWebSocket();

    MCNAPI void _connectWithRetry(
        ::std::string const&                                               uri,
        ::Bedrock::Http::HeaderCollection const&                           headers,
        ::nonstd::expected<::Bedrock::Http::StatusCode, ::std::error_code> lastResult,
        ::Bedrock::Http::RetryPolicy&&                                     retry
    );

    MCNAPI void _onConnect(
        ::nonstd::expected<::Bedrock::Http::StatusCode, ::std::error_code> result,
        ::Bedrock::Http::RetryPolicy&&                                     retry
    );

    MCNAPI void _reconnect(
        ::nonstd::expected<::Bedrock::Http::StatusCode, ::std::error_code> lastResult,
        ::Bedrock::Http::RetryPolicy&&                                     retry
    );

    MCNAPI void disconnect();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_S void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $shouldReconnect() const;

    MCNAPI ::Bedrock::Threading::Async<::Bedrock::Http::HeaderCollection> $getHeaders();

    MCNAPI ::Bedrock::Http::RetryPolicy $getReconnectPolicy();

    MCNAPI void $onConnect();

    MCNAPI void $onDisconnect(bool, uint);

    MCNAPI void $onClose(uint status);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Http
