#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/network/RakPeerHelper.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { class RakPeerInterface; }
namespace RakNet { struct Packet; }
namespace RakNet { struct RakNetGUID; }
// clang-format on

class RakNetServerLocator {
public:
    // RakNetServerLocator inner types declare
    // clang-format off
    struct AnnounceServerData;
    struct StateChangeRequestData;
    class SuspendStateData;
    // clang-format on

    // RakNetServerLocator inner types define
    struct AnnounceServerData {

    public:
        // prevent constructor by default
        AnnounceServerData() = delete;

    public:
        /**
         * @symbol ??0AnnounceServerData\@RakNetServerLocator\@\@QEAA\@AEBU01\@\@Z
         */
        MCAPI AnnounceServerData(struct RakNetServerLocator::AnnounceServerData const&); // NOLINT
        /**
         * @symbol ??4AnnounceServerData\@RakNetServerLocator\@\@QEAAAEAU01\@AEBU01\@\@Z
         */
        MCAPI struct RakNetServerLocator::AnnounceServerData&
        operator=(struct RakNetServerLocator::AnnounceServerData const&); // NOLINT
        /**
         * @symbol ??1AnnounceServerData\@RakNetServerLocator\@\@QEAA\@XZ
         */
        MCAPI ~AnnounceServerData(); // NOLINT
    };

    struct StateChangeRequestData {

    public:
        // prevent constructor by default
        StateChangeRequestData& operator=(StateChangeRequestData const&) = delete;
        StateChangeRequestData(StateChangeRequestData const&)            = delete;
        StateChangeRequestData()                                         = delete;

    public:
        /**
         * @symbol ??1StateChangeRequestData\@RakNetServerLocator\@\@QEAA\@XZ
         */
        MCAPI ~StateChangeRequestData(); // NOLINT
    };

    class SuspendStateData {

    public:
        // prevent constructor by default
        SuspendStateData& operator=(SuspendStateData const&) = delete;
        SuspendStateData(SuspendStateData const&)            = delete;
        SuspendStateData()                                   = delete;

    public:
        /**
         * @symbol ??1SuspendStateData\@RakNetServerLocator\@\@QEAA\@XZ
         */
        MCAPI ~SuspendStateData(); // NOLINT
    };

public:
    // prevent constructor by default
    RakNetServerLocator& operator=(RakNetServerLocator const&) = delete;
    RakNetServerLocator(RakNetServerLocator const&)            = delete;
    RakNetServerLocator()                                      = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?_onDisable\@RakNetServerLocator\@\@EEAAXXZ
     */
    virtual void _onDisable(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?_onEnable\@RakNetServerLocator\@\@EEAAXXZ
     */
    virtual void _onEnable(); // NOLINT
    /**
     * @vftbl 3
     * @symbol
     * ?startAnnouncingServer\@RakNetServerLocator\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0V?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@W4GameType\@\@HH_N3\@Z
     */
    virtual void startAnnouncingServer(
        std::string const&,
        std::string const&,
        class Bedrock::NonOwnerPointer<class AppPlatform>,
        enum class GameType,
        int,
        int,
        bool,
        bool
    ); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?stopAnnouncingServer\@RakNetServerLocator\@\@UEAAXV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@\@Z
     */
    virtual void stopAnnouncingServer(class Bedrock::NonOwnerPointer<class AppPlatform>); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?startServerDiscovery\@RakNetServerLocator\@\@UEAAXUPortPair\@\@\@Z
     */
    virtual void startServerDiscovery(struct PortPair); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?stopServerDiscovery\@RakNetServerLocator\@\@UEAAXXZ
     */
    virtual void stopServerDiscovery(); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?addCustomServer\@RakNetServerLocator\@\@UEAAXAEBVAsynchronousIPResolver\@\@H\@Z
     */
    virtual void addCustomServer(class AsynchronousIPResolver const&, int); // NOLINT
    /**
     * @vftbl 8
     * @symbol
     * ?addCustomServer\@RakNetServerLocator\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    virtual void addCustomServer(std::string const&, int); // NOLINT
    /**
     * @vftbl 9
     * @symbol
     * ?getServerList\@RakNetServerLocator\@\@UEBA?AV?$vector\@UPingedCompatibleServer\@\@V?$allocator\@UPingedCompatibleServer\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::vector<struct PingedCompatibleServer> getServerList() const; // NOLINT
    /**
     * @vftbl 10
     * @symbol ?clearServerList\@RakNetServerLocator\@\@UEAAXXZ
     */
    virtual void clearServerList(); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?update\@RakNetServerLocator\@\@UEAAXXZ
     */
    virtual void update(); // NOLINT
    /**
     * @vftbl 12
     * @symbol ?isIPv4Supported\@RakNetServerLocator\@\@UEBA_NXZ
     */
    virtual bool isIPv4Supported() const; // NOLINT
    /**
     * @vftbl 13
     * @symbol ?isIPv6Supported\@RakNetServerLocator\@\@UEBA_NXZ
     */
    virtual bool isIPv6Supported() const; // NOLINT
    /**
     * @vftbl 14
     * @symbol
     * ?getPingTimeForGUID\@RakNetServerLocator\@\@UEAAMAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual float getPingTimeForGUID(std::string const&); // NOLINT
    /**
     * @vftbl 15
     * @symbol
     * ?checkCanConnectToCustomServerAsync\@RakNetServerLocator\@\@UEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HV?$function\@$$A6AX_N\@Z\@3\@\@Z
     */
    virtual void checkCanConnectToCustomServerAsync(std::string, int, class std::function<void(bool)>); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RAKNETSERVERLOCATOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~RakNetServerLocator(); // NOLINT
#endif
    /**
     * @symbol
     * ??0RakNetServerLocator\@\@QEAA\@AEAVRakNetConnector\@\@AEAVIPSupportInterface\@RakPeerHelper\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@_NW4RakNetServerLANVisibility\@\@W4PermissionLAN\@\@W4PermissionIPv6\@\@AEBV?$NonOwnerPointer\@VAppPlatform\@\@\@Bedrock\@\@V?$function\@$$A6A?AV?$unique_ptr\@VRakPeerInterface\@RakNet\@\@P6AXPEAV12\@\@Z\@std\@\@XZ\@5\@\@Z
     */
    MCAPI
    RakNetServerLocator(class RakNetConnector&, class RakPeerHelper::IPSupportInterface&, std::vector<std::string>, bool, enum class RakNetServerLANVisibility, enum class PermissionLAN, enum class PermissionIPv6, class Bedrock::NonOwnerPointer<class AppPlatform> const&, class std::function<class std::unique_ptr<class RakNet::RakPeerInterface, void (*)(class RakNet::RakPeerInterface*)>(void)>); // NOLINT
    /**
     * @symbol
     * ?parseUnconnectedPongPacketData\@RakNetServerLocator\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@3\@\@Z
     */
    MCAPI static bool parseUnconnectedPongPacketData(std::string const&, std::vector<std::string>&); // NOLINT

    // private:
    /**
     * @symbol ?_activate\@RakNetServerLocator\@\@AEAAXXZ
     */
    MCAPI void _activate(); // NOLINT
    /**
     * @symbol ?_addCustomServerFromIpResolver\@RakNetServerLocator\@\@AEAAXAEBVAsynchronousIPResolver\@\@H\@Z
     */
    MCAPI void _addCustomServerFromIpResolver(class AsynchronousIPResolver const&, int); // NOLINT
    /**
     * @symbol ?_addCustomServerV4\@RakNetServerLocator\@\@AEAA_NAEBVAsynchronousIPResolver\@\@H\@Z
     */
    MCAPI bool _addCustomServerV4(class AsynchronousIPResolver const&, int); // NOLINT
    /**
     * @symbol ?_addCustomServerV6\@RakNetServerLocator\@\@AEAA_NAEBVAsynchronousIPResolver\@\@H\@Z
     */
    MCAPI bool _addCustomServerV6(class AsynchronousIPResolver const&, int); // NOLINT
    /**
     * @symbol ?_announceServer\@RakNetServerLocator\@\@AEAAXAEBUAnnounceServerData\@1\@\@Z
     */
    MCAPI void _announceServer(struct RakNetServerLocator::AnnounceServerData const&); // NOLINT
    /**
     * @symbol
     * ?_enqueueStateChangeRequest\@RakNetServerLocator\@\@AEAAXW4LocatorStateChangeRequest\@\@UAnnounceServerData\@1\@UPortPair\@\@\@Z
     */
    MCAPI void _enqueueStateChangeRequest(
        enum class LocatorStateChangeRequest,
        struct RakNetServerLocator::AnnounceServerData,
        struct PortPair
    ); // NOLINT
    /**
     * @symbol
     * ?_getHostGuid\@RakNetServerLocator\@\@AEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@H\@Z
     */
    MCAPI std::string _getHostGuid(std::string const&, int); // NOLINT
    /**
     * @symbol
     * ?_getServerOriginalAddress\@RakNetServerLocator\@\@AEAAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI void _getServerOriginalAddress(std::string&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?_handleUnconnectedPong\@RakNetServerLocator\@\@AEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBUPacket\@RakNet\@\@_N_K\@Z
     */
    MCAPI bool
    _handleUnconnectedPong(std::string const&, struct RakNet::Packet const*, bool, unsigned __int64); // NOLINT
    /**
     * @symbol ?_initializeBroadcastAddresses\@RakNetServerLocator\@\@AEAAXXZ
     */
    MCAPI void _initializeBroadcastAddresses(); // NOLINT
    /**
     * @symbol ?_onPongReceive\@RakNetServerLocator\@\@AEAA_NAEAMAEBURakNetGUID\@RakNet\@\@AEBIH\@Z
     */
    MCAPI bool _onPongReceive(float&, struct RakNet::RakNetGUID const&, unsigned int const&, int); // NOLINT
    /**
     * @symbol
     * ?_pingServerV4\@RakNetServerLocator\@\@AEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI bool _pingServerV4(std::string const&, int); // NOLINT
    /**
     * @symbol ?_setPingResponder\@RakNetServerLocator\@\@AEAAXAEBUAnnounceServerData\@1\@\@Z
     */
    MCAPI void _setPingResponder(struct RakNetServerLocator::AnnounceServerData const&); // NOLINT
    /**
     * @symbol ?_startAnnouncingServer\@RakNetServerLocator\@\@AEAAXAEBUAnnounceServerData\@1\@\@Z
     */
    MCAPI void _startAnnouncingServer(struct RakNetServerLocator::AnnounceServerData const&); // NOLINT
    /**
     * @symbol ?_startServerDiscovery\@RakNetServerLocator\@\@AEAAXAEBUPortPair\@\@\@Z
     */
    MCAPI void _startServerDiscovery(struct PortPair const&); // NOLINT
    /**
     * @symbol ?_stopAnnouncingServer\@RakNetServerLocator\@\@AEAAXXZ
     */
    MCAPI void _stopAnnouncingServer(); // NOLINT
    /**
     * @symbol ?_stopServerDiscovery\@RakNetServerLocator\@\@AEAAXXZ
     */
    MCAPI void _stopServerDiscovery(); // NOLINT
    /**
     * @symbol ?_updateNetwork\@RakNetServerLocator\@\@AEAAXXZ
     */
    MCAPI void _updateNetwork(); // NOLINT
    /**
     * @symbol ?_updateQueuedPings\@RakNetServerLocator\@\@AEAA_NXZ
     */
    MCAPI bool _updateQueuedPings(); // NOLINT

private:
};
