#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/AsyncPromise.h"
#include "mc/deps/core/threading/IAsyncResult.h"

// auto generated forward declare list
// clang-format off
struct HC_WEBSOCKET_OBSERVER;
struct XAsyncBlock;
namespace Bedrock::Http { class HeaderCollection; }
// clang-format on

namespace Bedrock::Http {

class WebSocket : public ::std::enable_shared_from_this<::Bedrock::Http::WebSocket> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk59fcc6;
    ::ll::UntypedStorage<8, 8>  mUnk2d81af;
    ::ll::UntypedStorage<8, 8>  mUnk5cda29;
    // NOLINTEND

public:
    // prevent constructor by default
    WebSocket& operator=(WebSocket const&);
    WebSocket(WebSocket const&);
    WebSocket();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WebSocket() = default;

    // vIndex: 1
    virtual void onMessage(::std::string_view);

    // vIndex: 2
    virtual void onBinaryMessage(::gsl::span<uchar const>);

    // vIndex: 3
    virtual void onClose(uint);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::std::error_code>>
    connect(::std::string const& uri, ::Bedrock::Http::HeaderCollection const& headers);

    MCNAPI ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::std::error_code>>
    send(::std::string const& message) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _deallocateSocketAsync(::HC_WEBSOCKET_OBSERVER* handle);

    MCNAPI static void _onConnect(
        ::XAsyncBlock*                                        asyncConnect,
        ::std::weak_ptr<::Bedrock::Http::WebSocket>           weakThis,
        ::Bedrock::Threading::AsyncPromise<::std::error_code> onComplete,
        ::HC_WEBSOCKET_OBSERVER*                              connectHandle
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onMessage(::std::string_view);

    MCNAPI void $onBinaryMessage(::gsl::span<uchar const>);

    MCNAPI void $onClose(uint);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Http
