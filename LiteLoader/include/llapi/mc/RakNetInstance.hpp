/**
 * @file  RakNetInstance.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RakPeerHelper.hpp"
#include "Bedrock.hpp"
#include "RakNet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RakNetInstance.
 *
 */
class RakNetInstance {

#define AFTER_EXTRA
// Add Member There
public:
class RakNetNetworkPeer {
public:
    RakNetNetworkPeer() = delete;
    RakNetNetworkPeer(RakNetNetworkPeer const&) = delete;
    RakNetNetworkPeer(RakNetNetworkPeer const&&) = delete;
};
enum class NATState;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKNETINSTANCE
public:
    class RakNetInstance& operator=(class RakNetInstance const &) = delete;
    RakNetInstance(class RakNetInstance const &) = delete;
    RakNetInstance() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAKNETINSTANCE
    /**
     * @hash   237407053
     * @symbol ?_onDisable@RakNetInstance@@EEAAXXZ
     */
    MCVAPI void _onDisable();
    /**
     * @hash   1643783908
     * @symbol ?_onEnable@RakNetInstance@@EEAAXXZ
     */
    MCVAPI void _onEnable();
    /**
     * @hash   -443550649
     * @symbol ?addConnectionStateListener@RakNetInstance@@UEAAXPEAVConnectionStateListener@Connector@@@Z
     */
    MCVAPI void addConnectionStateListener(class Connector::ConnectionStateListener *);
    /**
     * @hash   1514553399
     * @symbol ?connect@RakNetInstance@@UEAA_NPEAX@Z
     */
    MCVAPI bool connect(void *);
    /**
     * @hash   1295891277
     * @symbol ?disconnect@RakNetInstance@@UEAAXXZ
     */
    MCVAPI void disconnect();
    /**
     * @hash   -1575813705
     * @symbol ?getConnectedGameInfo@RakNetInstance@@UEBAAEBVGameConnectionInfo@Social@@XZ
     */
    MCVAPI class Social::GameConnectionInfo const & getConnectedGameInfo() const;
    /**
     * @hash   1651439727
     * @symbol ?getIPv4Port@RakNetInstance@@UEBAGXZ
     */
    MCVAPI unsigned short getIPv4Port() const;
    /**
     * @hash   -554618175
     * @symbol ?getIPv6Port@RakNetInstance@@UEBAGXZ
     */
    MCVAPI unsigned short getIPv6Port() const;
    /**
     * @hash   -756967743
     * @symbol ?getLocalIp@RakNetInstance@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCVAPI std::string getLocalIp();
    /**
     * @hash   -918589690
     * @symbol ?getLocalIps@RakNetInstance@@UEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     */
    MCVAPI std::vector<std::string> getLocalIps() const;
    /**
     * @hash   -282688843
     * @symbol ?getNatPunchInfo@RakNetInstance@@UEBA?AUNatPunchInfo@Connector@@XZ
     */
    MCVAPI struct Connector::NatPunchInfo getNatPunchInfo() const;
    /**
     * @hash   -267047237
     * @symbol ?getPeer@RakNetInstance@@UEAAPEAVRakPeerInterface@RakNet@@XZ
     */
    MCVAPI class RakNet::RakPeerInterface * getPeer();
    /**
     * @hash   -87189897
     * @symbol ?getPeer@RakNetInstance@@UEBAPEBVRakPeerInterface@RakNet@@XZ
     */
    MCVAPI class RakNet::RakPeerInterface const * getPeer() const;
    /**
     * @hash   32453434
     * @symbol ?getPort@RakNetInstance@@UEBAGXZ
     */
    MCVAPI unsigned short getPort() const;
    /**
     * @hash   1698784025
     * @symbol ?getRefinedLocalIps@RakNetInstance@@UEBA?AV?$vector@USystemAddress@RakNet@@V?$allocator@USystemAddress@RakNet@@@std@@@std@@XZ
     */
    MCVAPI std::vector<struct RakNet::SystemAddress> getRefinedLocalIps() const;
    /**
     * @hash   1979223686
     * @symbol ?getTransportIdentifier@RakNetInstance@@UEBA_KXZ
     */
    MCVAPI unsigned __int64 getTransportIdentifier() const;
    /**
     * @hash   -1585730270
     * @symbol ?host@RakNetInstance@@UEAA_NAEBUConnectionDefinition@@@Z
     */
    MCVAPI bool host(struct ConnectionDefinition const &);
    /**
     * @hash   2131342401
     * @symbol ?isIPv4Supported@RakNetInstance@@UEBA_NXZ
     */
    MCVAPI bool isIPv4Supported() const;
    /**
     * @hash   -118131761
     * @symbol ?isIPv6Supported@RakNetInstance@@UEBA_NXZ
     */
    MCVAPI bool isIPv6Supported() const;
    /**
     * @hash   1179231663
     * @symbol ?isServer@RakNetInstance@@UEBA_NXZ
     */
    MCVAPI bool isServer() const;
    /**
     * @hash   321817754
     * @symbol ?removeConnectionStateListener@RakNetInstance@@UEAAXPEAVConnectionStateListener@Connector@@@Z
     */
    MCVAPI void removeConnectionStateListener(class Connector::ConnectionStateListener *);
    /**
     * @hash   1227155125
     * @symbol ?runEvents@RakNetInstance@@UEAAXXZ
     */
    MCVAPI void runEvents();
    /**
     * @hash   745908945
     * @symbol ?setupNatPunch@RakNetInstance@@UEAAX_N@Z
     */
    MCVAPI void setupNatPunch(bool);
    /**
     * @hash   -2042952768
     * @symbol ?startNatPunchingClient@RakNetInstance@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@G@Z
     */
    MCVAPI void startNatPunchingClient(std::string const &, unsigned short);
    /**
     * @hash   928401710
     * @symbol ?tick@RakNetInstance@@UEAAXXZ
     */
    MCVAPI void tick();
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RakNetInstance();
#endif
    /**
     * @hash   -1010499556
     * @symbol ??0RakNetInstance@@QEAA@AEAVConnectionCallbacks@0@AEAVIPSupportInterface@RakPeerHelper@@AEBV?$NonOwnerPointer@VAppPlatform@@@Bedrock@@@Z
     */
    MCAPI RakNetInstance(class RakNetInstance::ConnectionCallbacks &, class RakPeerHelper::IPSupportInterface &, class Bedrock::NonOwnerPointer<class AppPlatform> const &);

//private:
    /**
     * @hash   -1565325282
     * @symbol ?_changeNatState@RakNetInstance@@AEAAXW4NATState@1@HAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void _changeNatState(enum class RakNetInstance::NATState, int, std::string const &);
    /**
     * @hash   120408888
     * @symbol ?_createPeer@RakNetInstance@@AEAA?AV?$shared_ptr@VRakNetNetworkPeer@RakNetInstance@@@std@@AEBVNetworkIdentifier@@@Z
     */
    MCAPI class std::shared_ptr<class RakNetInstance::RakNetNetworkPeer> _createPeer(class NetworkIdentifier const &);
    /**
     * @hash   77453804
     * @symbol ?_openNatConnection@RakNetInstance@@AEAAXAEBUSystemAddress@RakNet@@@Z
     */
    MCAPI void _openNatConnection(struct RakNet::SystemAddress const &);
    /**
     * @hash   1856517657
     * @symbol ?_pingNatService@RakNetInstance@@AEAAX_N@Z
     */
    MCAPI void _pingNatService(bool);
    /**
     * @hash   -1015009834
     * @symbol ?_storeLocalIP@RakNetInstance@@AEAAXXZ
     */
    MCAPI void _storeLocalIP();

private:

};