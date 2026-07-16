#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/StartupResult.h"

class RakPeerHelper {
public:
    // RakPeerHelper inner types declare
    // clang-format off
    class IPSupportInterface;
    // clang-format on

    // RakPeerHelper inner types define
    enum class IPVersion : int {
        IPv4  = 0,
        IPv6  = 1,
        Count = 2,
    };

    enum class PeerPurpose : int {
        Gameplay     = 0,
        LanDiscovery = 1,
        Count        = 2,
    };

    class IPSupportInterface {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~IPSupportInterface() = default;

        virtual bool useIPv4Only() const = 0;

        virtual bool useIPv6Only() const = 0;

        virtual ushort getDefaultGamePort() const = 0;

        virtual ushort getDefaultGamePortv6() const = 0;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::RakNet::StartupResult>              mResult;
    ::ll::TypedStorage<4, 8, int[2]>                               mConnectionIndices;
    ::ll::TypedStorage<2, 4, ushort[2]>                            mBoundPorts;
    ::ll::TypedStorage<8, 8, ::RakPeerHelper::IPSupportInterface&> mIPSupportInterface;
    // NOLINTEND

public:
    // prevent constructor by default
    RakPeerHelper& operator=(RakPeerHelper const&);
    RakPeerHelper(RakPeerHelper const&);
    RakPeerHelper();
};
