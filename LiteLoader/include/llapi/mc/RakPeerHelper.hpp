/**
 * @file  MC/RakPeerHelper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Social.hpp"
#include "RakNet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RakPeerHelper.
 *
 */
class RakPeerHelper {

#define AFTER_EXTRA
// Add Member There
public:
    class IPSupportInterface;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKPEERHELPER
public:
    class RakPeerHelper& operator=(class RakPeerHelper const &) = delete;
    RakPeerHelper(class RakPeerHelper const &) = delete;
    RakPeerHelper() = delete;
#endif

public:
    /**
     * @hash   -822959803
     * @symbol ??0RakPeerHelper@@QEAA@AEAVIPSupportInterface@0@@Z
     */
    MCAPI RakPeerHelper(class RakPeerHelper::IPSupportInterface &);
    /**
     * @hash   598117543
     * @symbol ?getConnectionIndex@RakPeerHelper@@QEBAHAEBVGameConnectionInfo@Social@@@Z
     */
    MCAPI int getConnectionIndex(class Social::GameConnectionInfo const &) const;
    /**
     * @hash   -608525027
     * @symbol ?getIPv4BoundPort@RakPeerHelper@@QEBAGXZ
     */
    MCAPI unsigned short getIPv4BoundPort() const;
    /**
     * @hash   -1020216904
     * @symbol ?getIPv4ConnectionIndex@RakPeerHelper@@QEBAHXZ
     */
    MCAPI int getIPv4ConnectionIndex() const;
    /**
     * @hash   431372473
     * @symbol ?getIPv6BoundPort@RakPeerHelper@@QEBAGXZ
     */
    MCAPI unsigned short getIPv6BoundPort() const;
    /**
     * @hash   -1634032428
     * @symbol ?getIPv6ConnectionIndex@RakPeerHelper@@QEBAHXZ
     */
    MCAPI int getIPv6ConnectionIndex() const;
    /**
     * @hash   -134766186
     * @symbol ?isIPv4Supported@RakPeerHelper@@QEBA_NXZ
     */
    MCAPI bool isIPv4Supported() const;
    /**
     * @hash   -1989873562
     * @symbol ?isIPv6Supported@RakPeerHelper@@QEBA_NXZ
     */
    MCAPI bool isIPv6Supported() const;
    /**
     * @hash   245475105
     * @symbol ?peerStartup@RakPeerHelper@@QEAA?AW4StartupResult@RakNet@@PEAVRakPeerInterface@3@AEBUConnectionDefinition@@@Z
     */
    MCAPI enum RakNet::StartupResult peerStartup(class RakNet::RakPeerInterface *, struct ConnectionDefinition const &);
    /**
     * @hash   -790647869
     * @symbol ?reset@RakPeerHelper@@QEAAXXZ
     */
    MCAPI void reset();

//private:
    /**
     * @hash   -789967900
     * @symbol ?LogIPSupport@RakPeerHelper@@AEAAXXZ
     */
    MCAPI void LogIPSupport();
    /**
     * @hash   -496665028
     * @symbol ?_resetToIPv6Only@RakPeerHelper@@AEAAXV?$span@USocketDescriptor@RakNet@@$01@gsl@@AEAH@Z
     */
    MCAPI void _resetToIPv6Only(class gsl::span<struct RakNet::SocketDescriptor, 2>, int &);
    /**
     * @hash   -840951999
     * @symbol ?_startupInternal@RakPeerHelper@@AEAA?AW4StartupResult@RakNet@@V?$not_null@PEAVRakPeerInterface@RakNet@@@gsl@@AEBUConnectionDefinition@@PEAUSocketDescriptor@3@AEAHH@Z
     */
    MCAPI enum RakNet::StartupResult _startupInternal(class gsl::not_null<class RakNet::RakPeerInterface *>, struct ConnectionDefinition const &, struct RakNet::SocketDescriptor *, int &, int);

private:

};