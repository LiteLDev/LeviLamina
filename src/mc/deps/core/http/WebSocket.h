#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/AsyncPromise.h"

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
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Http
