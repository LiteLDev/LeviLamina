#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct Packet; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class TCPInterface {
public:
    // prevent constructor by default
    TCPInterface& operator=(TCPInterface const&);
    TCPInterface(TCPInterface const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1TCPInterface@RakNet@@UEAA@XZ
    virtual ~TCPInterface();

    // vIndex: 1, symbol: ?Send@TCPInterface@RakNet@@UEAAXPEBDIAEBUSystemAddress@2@_N@Z
    virtual void Send(char const* data, uint length, struct RakNet::SystemAddress const& systemAddress, bool broadcast);

    // vIndex: 2, symbol: ?SendList@TCPInterface@RakNet@@UEAA_NPEAPEBDPEBIHAEBUSystemAddress@2@_N@Z
    virtual bool SendList(
        char const**                        data,
        uint const*                         lengths,
        int                                 numParameters,
        struct RakNet::SystemAddress const& systemAddress,
        bool                                broadcast
    );

    // vIndex: 3, symbol: ?ReceiveHasPackets@TCPInterface@RakNet@@UEAA_NXZ
    virtual bool ReceiveHasPackets();

    // vIndex: 4, symbol: ?Receive@TCPInterface@RakNet@@UEAAPEAUPacket@2@XZ
    virtual struct RakNet::Packet* Receive();

    // vIndex: 5, symbol: ?PushBackPacket@TCPInterface@RakNet@@UEAAXPEAUPacket@2@_N@Z
    virtual void PushBackPacket(struct RakNet::Packet* packet, bool pushAtHead);

    // symbol: ?CloseConnection@TCPInterface@RakNet@@QEAAXUSystemAddress@2@@Z
    MCAPI void CloseConnection(struct RakNet::SystemAddress systemAddress);

    // symbol: ?Connect@TCPInterface@RakNet@@QEAA?AUSystemAddress@2@PEBDG_NG0@Z
    MCAPI struct RakNet::SystemAddress
    Connect(char const* host, ushort remotePort, bool block, ushort socketFamily, char const* bindAddress);

    // symbol: ?DeallocatePacket@TCPInterface@RakNet@@QEAAXPEAUPacket@2@@Z
    MCAPI void DeallocatePacket(struct RakNet::Packet* packet);

    // symbol: ?GetConnectionCount@TCPInterface@RakNet@@QEBAGXZ
    MCAPI ushort GetConnectionCount() const;

    // symbol: ?GetConnectionList@TCPInterface@RakNet@@QEBAXPEAUSystemAddress@2@PEAG@Z
    MCAPI void GetConnectionList(struct RakNet::SystemAddress* remoteSystems, ushort* numberOfSystems) const;

    // symbol: ?GetOutgoingDataBufferSize@TCPInterface@RakNet@@QEBAIUSystemAddress@2@@Z
    MCAPI uint GetOutgoingDataBufferSize(struct RakNet::SystemAddress systemAddress) const;

    // symbol: ?HasCompletedConnectionAttempt@TCPInterface@RakNet@@QEAA?AUSystemAddress@2@XZ
    MCAPI struct RakNet::SystemAddress HasCompletedConnectionAttempt();

    // symbol: ?HasFailedConnectionAttempt@TCPInterface@RakNet@@QEAA?AUSystemAddress@2@XZ
    MCAPI struct RakNet::SystemAddress HasFailedConnectionAttempt();

    // symbol: ?HasLostConnection@TCPInterface@RakNet@@QEAA?AUSystemAddress@2@XZ
    MCAPI struct RakNet::SystemAddress HasLostConnection();

    // symbol: ?Start@TCPInterface@RakNet@@QEAA_NGGGHGPEBD@Z
    MCAPI bool Start(
        ushort      port,
        ushort      maxIncomingConnections,
        ushort      maxConnections,
        int         _threadPriority,
        ushort      socketFamily,
        char const* bindAddress
    );

    // symbol: ?Stop@TCPInterface@RakNet@@QEAAXXZ
    MCAPI void Stop();

    // symbol: ??0TCPInterface@RakNet@@QEAA@XZ
    MCAPI TCPInterface();

    // symbol: ?WasStarted@TCPInterface@RakNet@@QEBA_NXZ
    MCAPI bool WasStarted() const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?CreateListenSocket@TCPInterface@RakNet@@IEAA_NGGGPEBD@Z
    MCAPI bool
    CreateListenSocket(ushort port, ushort maxIncomingConnections, ushort socketFamily, char const* bindAddress);

    // symbol: ?SocketConnect@TCPInterface@RakNet@@IEAA_KPEBDGG0@Z
    MCAPI uint64 SocketConnect(char const* host, ushort remotePort, ushort socketFamily, char const* bindAddress);

    // symbol: ?_removeFromBlockingSocketList@TCPInterface@RakNet@@IEAA_NAEB_K@Z
    MCAPI bool _removeFromBlockingSocketList(uint64 const&);

    // NOLINTEND
};

}; // namespace RakNet
