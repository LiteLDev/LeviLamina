#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/StartupResult.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class RakPeerInterface; }
namespace RakNet { struct SocketDescriptor; }
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
        // vIndex: 0, symbol: ??1IPSupportInterface@RakPeerHelper@@UEAA@XZ
        virtual ~IPSupportInterface();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    RakPeerHelper& operator=(RakPeerHelper const&);
    RakPeerHelper(RakPeerHelper const&);
    RakPeerHelper();

public:
    // NOLINTBEGIN
    // symbol:
    // ?peerStartup@RakPeerHelper@@QEAA?AW4StartupResult@RakNet@@PEAVRakPeerInterface@3@AEBUConnectionDefinition@@W4PeerPurpose@1@@Z
    MCAPI ::RakNet::StartupResult peerStartup(
        class RakNet::RakPeerInterface*    peerIn,
        struct ConnectionDefinition const& definition,
        ::RakPeerHelper::PeerPurpose       purpose
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?LogIPSupport@RakPeerHelper@@AEAAXW4PeerPurpose@1@@Z
    MCAPI void LogIPSupport(::RakPeerHelper::PeerPurpose purpose);

    // symbol: ?_resetToIPv6Only@RakPeerHelper@@AEAAXV?$span@USocketDescriptor@RakNet@@$01@gsl@@AEAH@Z
    MCAPI void _resetToIPv6Only(gsl::span<struct RakNet::SocketDescriptor, 2> sockets, int& socketCount);

    // symbol:
    // ?_startupInternal@RakPeerHelper@@AEAA?AW4StartupResult@RakNet@@V?$not_null@PEAVRakPeerInterface@RakNet@@@gsl@@AEBUConnectionDefinition@@PEAUSocketDescriptor@3@AEAHH@Z
    MCAPI ::RakNet::StartupResult _startupInternal(
        gsl::not_null<class RakNet::RakPeerInterface*> peer,
        struct ConnectionDefinition const&             definition,
        struct RakNet::SocketDescriptor*               sockets,
        int&                                           socketCount,
        int                                            ipv6Index
    );

    // NOLINTEND
};
