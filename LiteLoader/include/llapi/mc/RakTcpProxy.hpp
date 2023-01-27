/**
 * @file  RakTcpProxy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../RakNet.hpp"

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
     * @hash   -2072757525
     * @vftbl  1
     * @symbol  ?start\@RakTcpProxy\@\@UEAA_NGGG\@Z
     */
    virtual bool start(unsigned short, unsigned short, unsigned short);
    /**
     * @hash   -1179437887
     * @vftbl  2
     * @symbol  ?connect\@RakTcpProxy\@\@UEAA?AUSystemAddress\@RakNet\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@G\@Z
     */
    virtual struct RakNet::SystemAddress connect(std::string const &, unsigned short);
    /**
     * @hash   167097905
     * @vftbl  3
     * @symbol  ?send\@RakTcpProxy\@\@UEAAXPEBDIUSystemAddress\@RakNet\@\@\@Z
     */
    virtual void send(char const *, unsigned int, struct RakNet::SystemAddress);
    /**
     * @hash   1494003308
     * @vftbl  4
     * @symbol  ?close\@RakTcpProxy\@\@UEAAXUSystemAddress\@RakNet\@\@\@Z
     */
    virtual void close(struct RakNet::SystemAddress);
    /**
     * @hash   -1538126674
     * @vftbl  5
     * @symbol  ?packetsAvailable\@RakTcpProxy\@\@UEAA_NXZ
     */
    virtual bool packetsAvailable();
    /**
     * @hash   -1512130149
     * @vftbl  6
     * @symbol  ?nextPacket\@RakTcpProxy\@\@UEAAPEAUPacket\@RakNet\@\@XZ
     */
    virtual struct RakNet::Packet * nextPacket();
    /**
     * @hash   1595372056
     * @vftbl  7
     * @symbol  ?deallocatePacket\@RakTcpProxy\@\@UEAAXPEAUPacket\@RakNet\@\@\@Z
     */
    virtual void deallocatePacket(struct RakNet::Packet *);
    /**
     * @hash   -942766019
     * @vftbl  8
     * @symbol  ?nextCompletedConnectionAttempt\@RakTcpProxy\@\@UEAA?AUSystemAddress\@RakNet\@\@XZ
     */
    virtual struct RakNet::SystemAddress nextCompletedConnectionAttempt();
    /**
     * @hash   426496645
     * @vftbl  9
     * @symbol  ?nextFailedConnectionAttempt\@RakTcpProxy\@\@UEAA?AUSystemAddress\@RakNet\@\@XZ
     */
    virtual struct RakNet::SystemAddress nextFailedConnectionAttempt();
    /**
     * @hash   -1371157989
     * @vftbl  10
     * @symbol  ?nextLostConnection\@RakTcpProxy\@\@UEAA?AUSystemAddress\@RakNet\@\@XZ
     */
    virtual struct RakNet::SystemAddress nextLostConnection();
    /**
     * @hash   311531925
     * @symbol  ??0RakTcpProxy\@\@QEAA\@XZ
     */
    MCAPI RakTcpProxy();

};