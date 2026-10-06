#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/nether_net/MappedAddressRange.h"
#include "mc/deps/nether_net/StunRelayServer.h"

namespace NetherNet {

struct TransportConfiguration {
public:
    // TransportConfiguration inner types declare
    // clang-format off
    struct Http;
    // clang-format on

    // TransportConfiguration inner types define
    struct Http {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> mBindAddress;
        ::ll::TypedStorage<2, 2, ushort>         mPort;
        // NOLINTEND
    };

    using DefaultSignalingInterface = ::std::variant<::std::monostate, ::NetherNet::TransportConfiguration::Http>;

    using None = ::std::monostate;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 1536, ::NetherNet::StunRelayServer[16]>    mStunRelayServers;
    ::ll::TypedStorage<4, 4, int>                                    mStunRelayServerCount;
    ::ll::TypedStorage<8, 1536, ::NetherNet::MappedAddressRange[16]> mKnownMappedAddressRanges;
    ::ll::TypedStorage<4, 4, int>                                    mKnownMappedAddressRangeCount;
    ::ll::TypedStorage<8, 48, ::std::variant<::std::monostate, ::NetherNet::TransportConfiguration::Http>>
                                     mDefaultSignalingChannel;
    ::ll::TypedStorage<4, 4, int>    mNegotiationTimeoutInSeconds;
    ::ll::TypedStorage<2, 2, ushort> mMinUdpPort;
    ::ll::TypedStorage<2, 2, ushort> mMaxUdpPort;
    ::ll::TypedStorage<1, 1, bool>   mGlobalUdpPort;
    // NOLINTEND
};

} // namespace NetherNet
