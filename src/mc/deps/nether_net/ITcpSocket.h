#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/platform/Result.h"

namespace NetherNet {

class ITcpSocket {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ITcpSocket() = default;

    virtual ::Bedrock::Threading::Async<::Bedrock::Result<uint64>> send(::gsl::span<::std::byte const> data) = 0;

    virtual ::Bedrock::PubSub::Connector<void(::gsl::span<::std::byte const>)>& onDataReceived() = 0;

    virtual ::Bedrock::PubSub::Connector<void(int)>& onClosed() = 0;

    virtual void close() = 0;

    virtual ::std::string getRemoteHost() const = 0;

    virtual ushort getRemotePort() const = 0;

    virtual ushort getLocalPort() const = 0;
    // NOLINTEND
};

} // namespace NetherNet
