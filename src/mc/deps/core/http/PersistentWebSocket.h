#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/StatusCode.h"
#include "mc/deps/core/http/WebSocket.h"
#include "mc/deps/core/threading/AsyncPromise.h"
#include "mc/deps/core/threading/IAsyncResult.h"

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
    // vIndex: 0
    virtual ~PersistentWebSocket() /*override*/;

    // vIndex: 4
    virtual bool shouldReconnect() const;

    // vIndex: 5
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::Http::Url>> getUrl() = 0;

    // vIndex: 6
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::Http::HeaderCollection>> getHeaders();

    // vIndex: 7
    virtual ::Bedrock::Http::RetryPolicy getReconnectPolicy();

    // vIndex: 8
    virtual void onConnect();

    // vIndex: 9
    virtual void onDisconnect(bool, uint);

    // vIndex: 3
    virtual void onClose(uint status) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersistentWebSocket();

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
    MCNAPI void* $ctor();
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

    MCNAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::Bedrock::Http::HeaderCollection>> $getHeaders();

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
