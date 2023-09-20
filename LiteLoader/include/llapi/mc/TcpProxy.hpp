/**
 * @file  TcpProxy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "RakNet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TcpProxy.
 *
 */
class TcpProxy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TCPPROXY
public:
    class TcpProxy& operator=(class TcpProxy const &) = delete;
    TcpProxy(class TcpProxy const &) = delete;
    TcpProxy() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?start\@RakTcpProxy\@\@UEAA_NGGG\@Z
     */
    virtual bool start(unsigned short, unsigned short, unsigned short) = 0;
    /**
     * @vftbl 2
     * @symbol ?connect\@RakTcpProxy\@\@UEAA?AUSystemAddress\@RakNet\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@G\@Z
     */
    virtual struct RakNet::SystemAddress connect(std::string const &, unsigned short) = 0;
    /**
     * @vftbl 3
     * @symbol ?send\@RakTcpProxy\@\@UEAAXPEBDIUSystemAddress\@RakNet\@\@\@Z
     */
    virtual void send(char const *, unsigned int, struct RakNet::SystemAddress) = 0;
    /**
     * @vftbl 4
     * @symbol ?close\@RakTcpProxy\@\@UEAAXUSystemAddress\@RakNet\@\@\@Z
     */
    virtual void close(struct RakNet::SystemAddress) = 0;
    /**
     * @vftbl 5
     * @symbol ?packetsAvailable\@RakTcpProxy\@\@UEAA_NXZ
     */
    virtual bool packetsAvailable() = 0;
    /**
     * @vftbl 6
     * @symbol ?nextPacket\@RakTcpProxy\@\@UEAAPEAUPacket\@RakNet\@\@XZ
     */
    virtual struct RakNet::Packet * nextPacket() = 0;
    /**
     * @vftbl 7
     * @symbol ?deallocatePacket\@RakTcpProxy\@\@UEAAXPEAUPacket\@RakNet\@\@\@Z
     */
    virtual void deallocatePacket(struct RakNet::Packet *) = 0;
    /**
     * @vftbl 8
     * @symbol ?nextCompletedConnectionAttempt\@RakTcpProxy\@\@UEAA?AUSystemAddress\@RakNet\@\@XZ
     */
    virtual struct RakNet::SystemAddress nextCompletedConnectionAttempt() = 0;
    /**
     * @vftbl 9
     * @symbol ?nextFailedConnectionAttempt\@RakTcpProxy\@\@UEAA?AUSystemAddress\@RakNet\@\@XZ
     */
    virtual struct RakNet::SystemAddress nextFailedConnectionAttempt() = 0;
    /**
     * @vftbl 10
     * @symbol ?nextLostConnection\@RakTcpProxy\@\@UEAA?AUSystemAddress\@RakNet\@\@XZ
     */
    virtual struct RakNet::SystemAddress nextLostConnection() = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TCPPROXY
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~TcpProxy();
#endif

};
