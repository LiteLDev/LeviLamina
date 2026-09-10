#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/platform/Result.h"

namespace NetherNet {

class IUdpSocket {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IUdpSocket() = default;

    virtual ::Bedrock::Result<int, int>
    sendTo(::gsl::span<::std::byte const> data, ::std::string const& remoteIP, ushort remotePort) = 0;

    virtual ::Bedrock::PubSub::Connector<void(::gsl::span<::std::byte const>, ::std::string const&, ushort)>&
    onPacketReceived() = 0;

    virtual ushort getLocalPort() const = 0;
    // NOLINTEND
};

} // namespace NetherNet
