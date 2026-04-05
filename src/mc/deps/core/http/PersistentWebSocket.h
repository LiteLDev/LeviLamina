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
    ::ll::UntypedStorage<8, 8>   mUnk13cdc9;
    ::ll::UntypedStorage<8, 136> mUnkd613a3;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    PersistentWebSocket& operator=(PersistentWebSocket const&);
    PersistentWebSocket(PersistentWebSocket const&);

#else // LL_PLAT_C
public:
    // prevent constructor by default
    PersistentWebSocket& operator=(PersistentWebSocket const&);
    PersistentWebSocket(PersistentWebSocket const&);
    PersistentWebSocket();

#endif
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
#ifdef LL_PLAT_S
    MCNAPI PersistentWebSocket();
#endif

    MCNAPI void _connectWithRetry(
        ::std::string const&                     uri,
        ::Bedrock::Http::HeaderCollection const& headers,
        ::nonstd::expected<::Bedrock::Http::StatusCode, ::std::error_code>,
        ::Bedrock::Http::RetryPolicy&& retry
    );

    MCNAPI void _onCloseMaybeReconnect(uint status, bool shouldReconnect);

    MCNAPI void _onConnect(
        ::nonstd::expected<::Bedrock::Http::StatusCode, ::std::error_code> result,
        ::Bedrock::Http::RetryPolicy&&                                     retry
    );

    MCNAPI void _reconnect(
        ::nonstd::expected<::Bedrock::Http::StatusCode, ::std::error_code> lastResult,
        ::Bedrock::Http::RetryPolicy&&                                     retry
    );

    MCNAPI ::Bedrock::Threading::Async<::nonstd::expected<::Bedrock::Http::StatusCode, ::std::error_code>>
    connectWithRetry(::Bedrock::Http::RetryPolicy&& retry);

    MCNAPI void disconnect();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void* $ctor();
#endif
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
