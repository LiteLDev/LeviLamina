#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct Packet; }
namespace RakNet { struct SystemAddress; }
// clang-format on

class TcpProxy {
public:
    // prevent constructor by default
    TcpProxy& operator=(TcpProxy const&);
    TcpProxy(TcpProxy const&);
    TcpProxy();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1TcpProxy@@UEAA@XZ
    virtual ~TcpProxy();

    // vIndex: 1, symbol: ?start@RakTcpProxy@@UEAA_NGGG@Z
    virtual bool start(ushort port, ushort, ushort) = 0;

    // vIndex: 2, symbol:
    // ?connect@RakTcpProxy@@UEAA?AUSystemAddress@RakNet@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@Z
    virtual struct RakNet::SystemAddress connect(std::string const& host, ushort port) = 0;

    // vIndex: 3, symbol: ?send@RakTcpProxy@@UEAAXPEBDIUSystemAddress@RakNet@@@Z
    virtual void send(char const* data, uint length, struct RakNet::SystemAddress address) = 0;

    // vIndex: 4, symbol: ?close@RakTcpProxy@@UEAAXUSystemAddress@RakNet@@@Z
    virtual void close(struct RakNet::SystemAddress address) = 0;

    // vIndex: 5, symbol: ?packetsAvailable@RakTcpProxy@@UEAA_NXZ
    virtual bool packetsAvailable() = 0;

    // vIndex: 6, symbol: ?nextPacket@RakTcpProxy@@UEAAPEAUPacket@RakNet@@XZ
    virtual struct RakNet::Packet* nextPacket() = 0;

    // vIndex: 7, symbol: ?deallocatePacket@RakTcpProxy@@UEAAXPEAUPacket@RakNet@@@Z
    virtual void deallocatePacket(struct RakNet::Packet* packet) = 0;

    // vIndex: 8, symbol: ?nextCompletedConnectionAttempt@RakTcpProxy@@UEAA?AUSystemAddress@RakNet@@XZ
    virtual struct RakNet::SystemAddress nextCompletedConnectionAttempt() = 0;

    // vIndex: 9, symbol: ?nextFailedConnectionAttempt@RakTcpProxy@@UEAA?AUSystemAddress@RakNet@@XZ
    virtual struct RakNet::SystemAddress nextFailedConnectionAttempt() = 0;

    // vIndex: 10, symbol: ?nextLostConnection@RakTcpProxy@@UEAA?AUSystemAddress@RakNet@@XZ
    virtual struct RakNet::SystemAddress nextLostConnection() = 0;

    // NOLINTEND
};
