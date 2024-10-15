#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/StartupResult.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class RakPeerInterface; }
namespace RakNet { struct SocketDescriptor; }
namespace Social { class GameConnectionInfo; }
// clang-format on

class RakPeerHelper {
public:
    // RakPeerHelper inner types declare
    // clang-format off
    class IPSupportInterface;
    // clang-format on

    // RakPeerHelper inner types define
    enum class PeerPurpose : int {
        Gameplay      = 0x0,
        LAN_Discovery = 0x1,
        Count         = 0x2,
    };

    class IPSupportInterface {
    public:
        // prevent constructor by default
        IPSupportInterface& operator=(IPSupportInterface const&);
        IPSupportInterface(IPSupportInterface const&);
        IPSupportInterface();

    public:
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~IPSupportInterface();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI static void** $vftable();

        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    RakPeerHelper& operator=(RakPeerHelper const&);
    RakPeerHelper(RakPeerHelper const&);
    RakPeerHelper();

public:
    // NOLINTBEGIN
    MCAPI explicit RakPeerHelper(class RakPeerHelper::IPSupportInterface& ipInterface);

    MCAPI int getConnectionIndex(class Social::GameConnectionInfo const& connectionInfo) const;

    MCAPI ushort getIPv4BoundPort() const;

    MCAPI int getIPv4ConnectionIndex() const;

    MCAPI ushort getIPv6BoundPort() const;

    MCAPI int getIPv6ConnectionIndex() const;

    MCAPI bool isIPv4Supported() const;

    MCAPI bool isIPv6Supported() const;

    MCAPI ::RakNet::StartupResult peerStartup(
        class RakNet::RakPeerInterface*    peerIn,
        struct ConnectionDefinition const& definition,
        ::RakPeerHelper::PeerPurpose       purpose
    );

    MCAPI void reset();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void LogIPSupport(::RakPeerHelper::PeerPurpose purpose);

    MCAPI void _resetToIPv6Only(gsl::span<struct RakNet::SocketDescriptor, 2> sockets, int& socketCount);

    MCAPI ::RakNet::StartupResult _startupInternal(
        gsl::not_null<class RakNet::RakPeerInterface*> peer,
        struct ConnectionDefinition const&             definition,
        struct RakNet::SocketDescriptor*               sockets,
        int&                                           socketCount,
        int                                            ipv6Index
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class RakPeerHelper::IPSupportInterface& ipInterface);

    // NOLINTEND
};
