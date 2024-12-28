#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct HC_WEBSOCKET_OBSERVER;
// clang-format on

namespace Bedrock::Http {

class WebSocket : public ::std::enable_shared_from_this<::Bedrock::Http::WebSocket> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk59fcc6;
    ::ll::UntypedStorage<8, 8>  mUnk2d81af;
    // NOLINTEND

public:
    // prevent constructor by default
    WebSocket& operator=(WebSocket const&);
    WebSocket(WebSocket const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WebSocket();

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
    MCAPI WebSocket();

    MCAPI ::HC_WEBSOCKET_OBSERVER* _allocateSocket();

    MCAPI void connect(
        ::std::string const&                                            uri,
        ::std::vector<::std::pair<::std::string, ::std::string>> const& headers,
        ::std::function<void(::std::error_code)>&&                      onComplete
    );

    MCAPI void disconnect();

    MCAPI bool isConnected() const;

    MCAPI void send(::std::string const& message, ::std::function<void(::std::error_code)>&& onComplete) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static long _deallocateSocket(::HC_WEBSOCKET_OBSERVER* handle);

    MCAPI static void _deallocateSocketAsync(::HC_WEBSOCKET_OBSERVER* handle);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onMessage(::std::string_view);

    MCAPI void $onBinaryMessage(::gsl::span<uchar const>);

    MCAPI void $onClose(uint);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::Http
