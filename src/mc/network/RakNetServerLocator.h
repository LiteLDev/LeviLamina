#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/LocatorStateChangeRequest.h"
#include "mc/network/PermissionIPv6.h"
#include "mc/network/PermissionLAN.h"
#include "mc/network/RakNetServerLANVisibility.h"
#include "mc/network/RakPeerHelper.h"
#include "mc/network/ServerConnectivityTestResult.h"
#include "mc/network/ServerLocator.h"
#include "mc/platform/threading/LockGuard.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class AsynchronousIPResolver;
class RakNetConnector;
struct PingedCompatibleServer;
struct PortPair;
namespace RakNet { class RakPeerInterface; }
namespace RakNet { struct Packet; }
namespace RakNet { struct RakNetGUID; }
// clang-format on

class RakNetServerLocator : public ::ServerLocator {
public:
    // RakNetServerLocator inner types declare
    // clang-format off
    struct AnnounceServerData;
    class NatHolePuncherFunctor;
    class PingRateRecorder;
    struct StateChangeRequestData;
    struct SuspendStateData;
    // clang-format on

    // RakNetServerLocator inner types define
    enum class protocolVersion : int {
        Ipv4 = 4,
        Ipv6 = 6,
    };

    class PingRateRecorder {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk4c52e9;
        ::ll::UntypedStorage<4, 4>  mUnke4ceed;
        ::ll::UntypedStorage<4, 4>  mUnkafd9c7;
        ::ll::UntypedStorage<4, 4>  mUnkc2e940;
        ::ll::UntypedStorage<4, 4>  mUnk7e5467;
        ::ll::UntypedStorage<4, 4>  mUnk55e198;
        ::ll::UntypedStorage<4, 4>  mUnk4b04bf;
        ::ll::UntypedStorage<1, 1>  mUnk762855;
        ::ll::UntypedStorage<1, 1>  mUnkca8a9c;
        // NOLINTEND

    public:
        // prevent constructor by default
        PingRateRecorder& operator=(PingRateRecorder const&);
        PingRateRecorder(PingRateRecorder const&);
        PingRateRecorder();
    };

    class NatHolePuncherFunctor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk4e485b;
        // NOLINTEND

    public:
        // prevent constructor by default
        NatHolePuncherFunctor& operator=(NatHolePuncherFunctor const&);
        NatHolePuncherFunctor(NatHolePuncherFunctor const&);
        NatHolePuncherFunctor();
    };

    struct AnnounceServerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkf568e7;
        ::ll::UntypedStorage<8, 32> mUnk59b4c0;
        ::ll::UntypedStorage<4, 4>  mUnka30b10;
        ::ll::UntypedStorage<4, 4>  mUnk7f5665;
        ::ll::UntypedStorage<4, 4>  mUnk9c0fab;
        ::ll::UntypedStorage<1, 1>  mUnk8d0484;
        ::ll::UntypedStorage<1, 1>  mUnk43329d;
        ::ll::UntypedStorage<1, 1>  mUnka62802;
        // NOLINTEND

    public:
        // prevent constructor by default
        AnnounceServerData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI AnnounceServerData(::RakNetServerLocator::AnnounceServerData const& announceData);

        MCAPI AnnounceServerData(
            ::std::string const& playerName,
            ::std::string const& worldName,
            ::GameType           gameType,
            int                  numPlayers,
            int                  maxNumPlayers,
            bool                 isJoinableThroughServerScreen,
            bool                 isEditorWorld,
            bool                 isHardcore
        );

        MCAPI ::RakNetServerLocator::AnnounceServerData& operator=(::RakNetServerLocator::AnnounceServerData const&);

        MCAPI ~AnnounceServerData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::RakNetServerLocator::AnnounceServerData const& announceData);

        MCAPI void* $ctor(
            ::std::string const& playerName,
            ::std::string const& worldName,
            ::GameType           gameType,
            int                  numPlayers,
            int                  maxNumPlayers,
            bool                 isJoinableThroughServerScreen,
            bool                 isEditorWorld,
            bool                 isHardcore
        );
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct StateChangeRequestData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnkf1839a;
        ::ll::UntypedStorage<8, 80> mUnkaf330a;
        ::ll::UntypedStorage<4, 8>  mUnk315143;
        // NOLINTEND

    public:
        // prevent constructor by default
        StateChangeRequestData& operator=(StateChangeRequestData const&);
        StateChangeRequestData(StateChangeRequestData const&);
        StateChangeRequestData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~StateChangeRequestData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct SuspendStateData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 80> mUnke8e0f9;
        ::ll::UntypedStorage<4, 4>  mUnk5cca28;
        ::ll::UntypedStorage<4, 8>  mUnk163ab6;
        // NOLINTEND

    public:
        // prevent constructor by default
        SuspendStateData& operator=(SuspendStateData const&);
        SuspendStateData(SuspendStateData const&);
        SuspendStateData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~SuspendStateData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk89c4ef;
    ::ll::UntypedStorage<8, 64> mUnkf49aaa;
    ::ll::UntypedStorage<8, 64> mUnk51cf3f;
    ::ll::UntypedStorage<8, 8>  mUnk2218c2;
    ::ll::UntypedStorage<8, 16> mUnk5f4202;
    ::ll::UntypedStorage<8, 24> mUnkd55261;
    ::ll::UntypedStorage<8, 64> mUnk2876ef;
    ::ll::UntypedStorage<8, 24> mUnkaa5135;
    ::ll::UntypedStorage<1, 1>  mUnkfa3d98;
    ::ll::UntypedStorage<4, 4>  mUnk7ebf28;
    ::ll::UntypedStorage<4, 8>  mUnkc145b0;
    ::ll::UntypedStorage<4, 4>  mUnk3962a5;
    ::ll::UntypedStorage<4, 4>  mUnk3d87f2;
    ::ll::UntypedStorage<8, 24> mUnk5bfbd1;
    ::ll::UntypedStorage<8, 24> mUnk73f382;
    ::ll::UntypedStorage<8, 40> mUnk5a36d6;
    ::ll::UntypedStorage<1, 1>  mUnk2c445a;
    ::ll::UntypedStorage<8, 64> mUnkc78041;
    ::ll::UntypedStorage<8, 32> mUnkf39ac9;
    ::ll::UntypedStorage<4, 4>  mUnk8bcebb;
    ::ll::UntypedStorage<8, 80> mUnkd855a4;
    ::ll::UntypedStorage<8, 80> mUnk518100;
    ::ll::UntypedStorage<4, 4>  mUnk5542ff;
    ::ll::UntypedStorage<4, 4>  mUnkf403ed;
    ::ll::UntypedStorage<8, 96> mUnk8970d6;
    ::ll::UntypedStorage<4, 4>  mUnk8d92b1;
    ::ll::UntypedStorage<8, 40> mUnk2f8047;
    // NOLINTEND

public:
    // prevent constructor by default
    RakNetServerLocator& operator=(RakNetServerLocator const&);
    RakNetServerLocator(RakNetServerLocator const&);
    RakNetServerLocator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RakNetServerLocator() /*override*/;

    // vIndex: 3
    virtual void startAnnouncingServer(
        ::std::string const&                      playerName,
        ::std::string const&                      worldName,
        ::Bedrock::NonOwnerPointer<::AppPlatform> appPlatform,
        ::GameType                                gameType,
        int                                       numPlayers,
        int                                       maxNumPlayers,
        bool                                      isJoinableThroughServerScreen,
        bool                                      isEditorWorld,
        bool                                      isHardcore
    ) /*override*/;

    // vIndex: 4
    virtual void stopAnnouncingServer(::Bedrock::NonOwnerPointer<::AppPlatform> appPlatform) /*override*/;

    // vIndex: 5
    virtual void startServerDiscovery(::PortPair ports) /*override*/;

    // vIndex: 6
    virtual void stopServerDiscovery() /*override*/;

    // vIndex: 8
    virtual void addCustomServer(::AsynchronousIPResolver const& futureIP, int port) /*override*/;

    // vIndex: 7
    virtual void addCustomServer(::std::string const& address, int port) /*override*/;

    // vIndex: 9
    virtual ::std::vector<::PingedCompatibleServer> getServerList() const /*override*/;

    // vIndex: 10
    virtual void clearServerList() /*override*/;

    // vIndex: 11
    virtual void update() /*override*/;

    // vIndex: 12
    virtual float getPingTimeForGUID(::std::string const& guid) /*override*/;

    // vIndex: 13
    virtual void checkCanConnectToCustomServerAsync(
        ::std::string                                         hostIpAddress,
        int                                                   port,
        ::std::function<void(::ServerConnectivityTestResult)> callback
    ) /*override*/;

    // vIndex: 1
    virtual void _onDisable() /*override*/;

    // vIndex: 2
    virtual void _onEnable() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RakNetServerLocator(
        ::RakNetConnector&                               rakNetConnector,
        ::RakPeerHelper::IPSupportInterface&             ipInterface,
        ::std::vector<::std::string>                     overrideBroadcastAddresses,
        bool                                             isServer,
        ::RakNetServerLANVisibility                      serverLanVisibility,
        ::PermissionLAN                                  permissionLAN,
        ::PermissionIPv6                                 permissionIPv6,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform,
        ::std::function<::std::unique_ptr<::RakNet::RakPeerInterface, void (*)(::RakNet::RakPeerInterface*)>()>
            createUniqueRakPeerFunc
    );

    MCAPI void _activate();

    MCAPI void _addCustomServerFromIpResolver(::AsynchronousIPResolver const& futureIP, int port);

    MCAPI bool _addCustomServerV4(::AsynchronousIPResolver const& futureIP, int port);

    MCAPI bool _addCustomServerV6(::AsynchronousIPResolver const& futureIP, int port);

    MCAPI void _enqueueStateChangeRequest(
        ::LocatorStateChangeRequest               newState,
        ::RakNetServerLocator::AnnounceServerData newAnnounceData,
        ::PortPair                                newPorts
    );

    MCAPI ::std::string _getHostGuid(::std::string const& address, int port);

    MCAPI void _getServerOriginalAddress(::std::string& originalAddressToSet, ::std::string const& ip);

    MCAPI bool _handleUnconnectedPong(
        ::std::string const&    data,
        ::RakNet::Packet const* p,
        bool                    insertAtBeginning,
        uint64                  readTime
    );

    MCAPI void _initializeBroadcastAddresses();

    MCAPI bool
    _onPongReceive(float& latencyToSet, ::RakNet::RakNetGUID const& guid, uint const& receivedTime, int ipVersion);

    MCAPI void _setPingResponder(::RakNetServerLocator::AnnounceServerData const& serverData);

    MCAPI void _startAnnouncingServer(::RakNetServerLocator::AnnounceServerData const& announceData);

    MCAPI void _startServerDiscovery(::PortPair const& ports);

    MCAPI void _stopAnnouncingServer();

    MCAPI void _stopServerDiscovery();

    MCAPI void _updateNetwork();

    MCAPI bool _updateQueuedPings();

    MCAPI void _updateState();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool
    parseUnconnectedPongPacketData(::std::string const& data, ::std::vector<::std::string>& extraData);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::RakNetConnector&                               rakNetConnector,
        ::RakPeerHelper::IPSupportInterface&             ipInterface,
        ::std::vector<::std::string>                     overrideBroadcastAddresses,
        bool                                             isServer,
        ::RakNetServerLANVisibility                      serverLanVisibility,
        ::PermissionLAN                                  permissionLAN,
        ::PermissionIPv6                                 permissionIPv6,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const& appPlatform,
        ::std::function<::std::unique_ptr<::RakNet::RakPeerInterface, void (*)(::RakNet::RakPeerInterface*)>()>
            createUniqueRakPeerFunc
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $startAnnouncingServer(
        ::std::string const&                      playerName,
        ::std::string const&                      worldName,
        ::Bedrock::NonOwnerPointer<::AppPlatform> appPlatform,
        ::GameType                                gameType,
        int                                       numPlayers,
        int                                       maxNumPlayers,
        bool                                      isJoinableThroughServerScreen,
        bool                                      isEditorWorld,
        bool                                      isHardcore
    );

    MCAPI void $stopAnnouncingServer(::Bedrock::NonOwnerPointer<::AppPlatform> appPlatform);

    MCAPI void $startServerDiscovery(::PortPair ports);

    MCAPI void $stopServerDiscovery();

    MCAPI void $addCustomServer(::AsynchronousIPResolver const& futureIP, int port);

    MCAPI void $addCustomServer(::std::string const& address, int port);

    MCAPI ::std::vector<::PingedCompatibleServer> $getServerList() const;

    MCAPI void $clearServerList();

    MCAPI void $update();

    MCAPI float $getPingTimeForGUID(::std::string const& guid);

    MCAPI void $checkCanConnectToCustomServerAsync(
        ::std::string                                         hostIpAddress,
        int                                                   port,
        ::std::function<void(::ServerConnectivityTestResult)> callback
    );

    MCAPI void $_onDisable();

    MCAPI void $_onEnable();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
