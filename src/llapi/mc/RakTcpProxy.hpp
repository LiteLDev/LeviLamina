/**
 * @file  RakTcpProxy.hpp
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
 * @brief MC class RakTcpProxy.
 *
 */
class RakTcpProxy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKTCPPROXY
public:
    class RakTcpProxy& operator=(class RakTcpProxy const &) = delete;
    RakTcpProxy(class RakTcpProxy const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~RakTcpProxy();
    /**
     * @vftbl  1
     * @symbol  ?start\@RakTcpProxy\@\@UEAA_NGGG\@Z
     */
    virtual bool start(unsigned short, unsigned short, unsigned short);
    /**
     * @vftbl  2
     * @symbol  ?connect\@RakTcpProxy\@\@UEAA?AUSystemAddress\@RakNet\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@G\@Z
     */
    virtual struct RakNet::SystemAddress connect(std::string const &, unsigned short);
    /**
     * @vftbl  3
     * @symbol  ?send\@RakTcpProxy\@\@UEAAXPEBDIUSystemAddress\@RakNet\@\@\@Z
     */
    virtual void send(char const *, unsigned int, struct RakNet::SystemAddress);
    /**
     * @vftbl  4
     * @symbol  ?close\@RakTcpProxy\@\@UEAAXUSystemAddress\@RakNet\@\@\@Z
     */
    virtual void close(struct RakNet::SystemAddress);
    /**
     * @vftbl  5
     * @symbol  ?packetsAvailable\@RakTcpProxy\@\@UEAA_NXZ
     */
    virtual bool packetsAvailable();
    /**
     * @vftbl  6
     * @symbol  ?nextPacket\@RakTcpProxy\@\@UEAAPEAUPacket\@RakNet\@\@XZ
     */
    virtual struct RakNet::Packet * nextPacket();
    /**
     * @vftbl  7
     * @symbol  ?deallocatePacket\@RakTcpProxy\@\@UEAAXPEAUPacket\@RakNet\@\@\@Z
     */
    virtual void deallocatePacket(struct RakNet::Packet *);
    /**
     * @vftbl  8
     * @symbol  ?nextCompletedConnectionAttempt\@RakTcpProxy\@\@UEAA?AUSystemAddress\@RakNet\@\@XZ
     */
    virtual struct RakNet::SystemAddress nextCompletedConnectionAttempt();
    /**
     * @vftbl  9
     * @symbol  ?nextFailedConnectionAttempt\@RakTcpProxy\@\@UEAA?AUSystemAddress\@RakNet\@\@XZ
     */
    virtual struct RakNet::SystemAddress nextFailedConnectionAttempt();
    /**
     * @vftbl  10
     * @symbol  ?nextLostConnection\@RakTcpProxy\@\@UEAA?AUSystemAddress\@RakNet\@\@XZ
     */
    virtual struct RakNet::SystemAddress nextLostConnection();
    /**
     * @symbol  ??0RakTcpProxy\@\@QEAA\@XZ
     */
    MCAPI RakTcpProxy();

};