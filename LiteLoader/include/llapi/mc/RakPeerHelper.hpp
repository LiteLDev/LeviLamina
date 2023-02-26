/**
 * @file  RakPeerHelper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @symbol  ??0RakPeerHelper\@\@QEAA\@AEAVIPSupportInterface\@0\@\@Z
     */
    MCAPI RakPeerHelper(class RakPeerHelper::IPSupportInterface &);
    /**
     * @symbol  ?getConnectionIndex\@RakPeerHelper\@\@QEBAHAEBVGameConnectionInfo\@Social\@\@\@Z
     */
    MCAPI int getConnectionIndex(class Social::GameConnectionInfo const &) const;
    /**
     * @symbol  ?getIPv4BoundPort\@RakPeerHelper\@\@QEBAGXZ
     */
    MCAPI unsigned short getIPv4BoundPort() const;
    /**
     * @symbol  ?getIPv4ConnectionIndex\@RakPeerHelper\@\@QEBAHXZ
     */
    MCAPI int getIPv4ConnectionIndex() const;
    /**
     * @symbol  ?getIPv6BoundPort\@RakPeerHelper\@\@QEBAGXZ
     */
    MCAPI unsigned short getIPv6BoundPort() const;
    /**
     * @symbol  ?getIPv6ConnectionIndex\@RakPeerHelper\@\@QEBAHXZ
     */
    MCAPI int getIPv6ConnectionIndex() const;
    /**
     * @symbol  ?isIPv4Supported\@RakPeerHelper\@\@QEBA_NXZ
     */
    MCAPI bool isIPv4Supported() const;
    /**
     * @symbol  ?isIPv6Supported\@RakPeerHelper\@\@QEBA_NXZ
     */
    MCAPI bool isIPv6Supported() const;
    /**
     * @symbol  ?peerStartup\@RakPeerHelper\@\@QEAA?AW4StartupResult\@RakNet\@\@PEAVRakPeerInterface\@3\@AEBUConnectionDefinition\@\@W4PeerPurpose\@1\@\@Z
     */
    MCAPI enum class RakNet::StartupResult peerStartup(class RakNet::RakPeerInterface *, struct ConnectionDefinition const &, enum class RakPeerHelper::PeerPurpose);
    /**
     * @symbol  ?reset\@RakPeerHelper\@\@QEAAXXZ
     */
    MCAPI void reset();

//private:
    /**
     * @symbol  ?LogIPSupport\@RakPeerHelper\@\@AEAAXW4PeerPurpose\@1\@\@Z
     */
    MCAPI void LogIPSupport(enum class RakPeerHelper::PeerPurpose);
    /**
     * @symbol  ?_resetToIPv6Only\@RakPeerHelper\@\@AEAAXV?$span\@USocketDescriptor\@RakNet\@\@$01\@gsl\@\@AEAH\@Z
     */
    MCAPI void _resetToIPv6Only(class gsl::span<struct RakNet::SocketDescriptor, 2>, int &);
    /**
     * @symbol  ?_startupInternal\@RakPeerHelper\@\@AEAA?AW4StartupResult\@RakNet\@\@V?$not_null\@PEAVRakPeerInterface\@RakNet\@\@\@gsl\@\@AEBUConnectionDefinition\@\@PEAUSocketDescriptor\@3\@AEAHH\@Z
     */
    MCAPI enum class RakNet::StartupResult _startupInternal(class gsl::not_null<class RakNet::RakPeerInterface *>, struct ConnectionDefinition const &, struct RakNet::SocketDescriptor *, int &, int);

private:

};