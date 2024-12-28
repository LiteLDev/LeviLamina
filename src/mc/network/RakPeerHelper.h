#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/StartupResult.h"

// auto generated forward declare list
// clang-format off
struct ConnectionDefinition;
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
    class IPSupportInterface {
    public:
        // prevent constructor by default
        IPSupportInterface& operator=(IPSupportInterface const&);
        IPSupportInterface(IPSupportInterface const&);
        IPSupportInterface();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~IPSupportInterface();

        // vIndex: 1
        virtual bool useIPv4Only() const = 0;

        // vIndex: 2
        virtual bool useIPv6Only() const = 0;

        // vIndex: 3
        virtual ushort getDefaultGamePort() const = 0;

        // vIndex: 4
        virtual ushort getDefaultGamePortv6() const = 0;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCAPI static void** $vftable();
        // NOLINTEND
    };

    enum class PeerPurpose : int {
        Gameplay     = 0,
        LanDiscovery = 1,
        Count        = 2,
    };

    enum class IPVersion : int {
        IPv4  = 0,
        IPv6  = 1,
        Count = 2,
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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void LogIPSupport(::RakPeerHelper::PeerPurpose purpose);

    MCAPI explicit RakPeerHelper(::RakPeerHelper::IPSupportInterface& ipInterface);

    MCAPI ::RakNet::StartupResult _startupInternal(
        ::gsl::not_null<::RakNet::RakPeerInterface*> peer,
        ::ConnectionDefinition const&                definition,
        ::RakNet::SocketDescriptor*                  sockets,
        int&                                         socketCount,
        int                                          ipv6Index
    );

    MCAPI int getConnectionIndex(::Social::GameConnectionInfo const& connectionInfo) const;

    MCAPI ushort getIPv4BoundPort() const;

    MCAPI int getIPv4ConnectionIndex() const;

    MCAPI ushort getIPv6BoundPort() const;

    MCAPI int getIPv6ConnectionIndex() const;

    MCAPI bool isIPv4Supported() const;

    MCAPI bool isIPv6Supported() const;

    MCAPI ::RakNet::StartupResult peerStartup(
        ::RakNet::RakPeerInterface*   peerIn,
        ::ConnectionDefinition const& definition,
        ::RakPeerHelper::PeerPurpose  purpose
    );

    MCAPI void reset();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::RakPeerHelper::IPSupportInterface& ipInterface);
    // NOLINTEND
};
