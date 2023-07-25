#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct Packet; }
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class TCPInterface {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNET_TCPINTERFACE
public:
    TCPInterface& operator=(TCPInterface const&) = delete;
    TCPInterface(TCPInterface const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?Send\@TCPInterface\@RakNet\@\@UEAAXPEBDIAEBUSystemAddress\@2\@_N\@Z
     */
    virtual void Send(char const*, unsigned int, struct RakNet::SystemAddress const&, bool);
    /**
     * @vftbl 2
     * @symbol ?SendList\@TCPInterface\@RakNet\@\@UEAA_NPEAPEBDPEBIHAEBUSystemAddress\@2\@_N\@Z
     */
    virtual bool SendList(char const**, unsigned int const*, int, struct RakNet::SystemAddress const&, bool);
    /**
     * @vftbl 3
     * @symbol ?ReceiveHasPackets\@TCPInterface\@RakNet\@\@UEAA_NXZ
     */
    virtual bool ReceiveHasPackets();
    /**
     * @vftbl 4
     * @symbol ?Receive\@TCPInterface\@RakNet\@\@UEAAPEAUPacket\@2\@XZ
     */
    virtual struct RakNet::Packet* Receive();
    /**
     * @vftbl 5
     * @symbol ?PushBackPacket\@TCPInterface\@RakNet\@\@UEAAXPEAUPacket\@2\@_N\@Z
     */
    virtual void PushBackPacket(struct RakNet::Packet*, bool);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAKNET_TCPINTERFACE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TCPInterface();
#endif
    /**
     * @symbol ?CloseConnection\@TCPInterface\@RakNet\@\@QEAAXUSystemAddress\@2\@\@Z
     */
    MCAPI void CloseConnection(struct RakNet::SystemAddress);
    /**
     * @symbol ?Connect\@TCPInterface\@RakNet\@\@QEAA?AUSystemAddress\@2\@PEBDG_NG0\@Z
     */
    MCAPI struct RakNet::SystemAddress Connect(char const*, unsigned short, bool, unsigned short, char const*);
    /**
     * @symbol ?DeallocatePacket\@TCPInterface\@RakNet\@\@QEAAXPEAUPacket\@2\@\@Z
     */
    MCAPI void DeallocatePacket(struct RakNet::Packet*);
    /**
     * @symbol ?GetConnectionCount\@TCPInterface\@RakNet\@\@QEBAGXZ
     */
    MCAPI unsigned short GetConnectionCount() const;
    /**
     * @symbol ?GetConnectionList\@TCPInterface\@RakNet\@\@QEBAXPEAUSystemAddress\@2\@PEAG\@Z
     */
    MCAPI void GetConnectionList(struct RakNet::SystemAddress*, unsigned short*) const;
    /**
     * @symbol ?GetOutgoingDataBufferSize\@TCPInterface\@RakNet\@\@QEBAIUSystemAddress\@2\@\@Z
     */
    MCAPI unsigned int GetOutgoingDataBufferSize(struct RakNet::SystemAddress) const;
    /**
     * @symbol ?HasCompletedConnectionAttempt\@TCPInterface\@RakNet\@\@QEAA?AUSystemAddress\@2\@XZ
     */
    MCAPI struct RakNet::SystemAddress HasCompletedConnectionAttempt();
    /**
     * @symbol ?HasFailedConnectionAttempt\@TCPInterface\@RakNet\@\@QEAA?AUSystemAddress\@2\@XZ
     */
    MCAPI struct RakNet::SystemAddress HasFailedConnectionAttempt();
    /**
     * @symbol ?HasLostConnection\@TCPInterface\@RakNet\@\@QEAA?AUSystemAddress\@2\@XZ
     */
    MCAPI struct RakNet::SystemAddress HasLostConnection();
    /**
     * @symbol ?Start\@TCPInterface\@RakNet\@\@QEAA_NGGGHGPEBD\@Z
     */
    MCAPI bool Start(unsigned short, unsigned short, unsigned short, int, unsigned short, char const*);
    /**
     * @symbol ?Stop\@TCPInterface\@RakNet\@\@QEAAXXZ
     */
    MCAPI void Stop();
    /**
     * @symbol ??0TCPInterface\@RakNet\@\@QEAA\@XZ
     */
    MCAPI TCPInterface();
    /**
     * @symbol ?WasStarted\@TCPInterface\@RakNet\@\@QEBA_NXZ
     */
    MCAPI bool WasStarted() const;

    // protected:
    /**
     * @symbol ?CreateListenSocket\@TCPInterface\@RakNet\@\@IEAA_NGGGPEBD\@Z
     */
    MCAPI bool CreateListenSocket(unsigned short, unsigned short, unsigned short, char const*);
    /**
     * @symbol ?SocketConnect\@TCPInterface\@RakNet\@\@IEAA_KPEBDGG0\@Z
     */
    MCAPI unsigned __int64 SocketConnect(char const*, unsigned short, unsigned short, char const*);
    /**
     * @symbol ?_removeFromBlockingSocketList\@TCPInterface\@RakNet\@\@IEAA_NAEB_K\@Z
     */
    MCAPI bool _removeFromBlockingSocketList(unsigned __int64 const&);

protected:
};

}; // namespace RakNet
