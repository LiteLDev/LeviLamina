#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
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
struct ServerSupportedAuthenticationTypes;
namespace RakNet { class RakPeerInterface; }
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

    struct AnnounceServerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk700306;
        ::ll::UntypedStorage<8, 32> mUnke0450c;
        ::ll::UntypedStorage<4, 4>  mUnka30b10;
        ::ll::UntypedStorage<4, 4>  mUnk7f5665;
        ::ll::UntypedStorage<4, 4>  mUnk9c0fab;
        ::ll::UntypedStorage<1, 1>  mUnk8d0484;
        ::ll::UntypedStorage<1, 1>  mUnk43329d;
        ::ll::UntypedStorage<1, 1>  mUnka62802;
        ::ll::UntypedStorage<1, 2>  mUnkc9d2fb;
        // NOLINTEND

    public:
        // prevent constructor by default
        AnnounceServerData& operator=(AnnounceServerData const&);
        AnnounceServerData(AnnounceServerData const&);
        AnnounceServerData();
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

    class PingRateRecorder {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk47b2d8;
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

    struct StateChangeRequestData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnkf1839a;
        ::ll::UntypedStorage<8, 88> mUnkaf330a;
        ::ll::UntypedStorage<4, 8>  mUnk315143;
        // NOLINTEND

    public:
        // prevent constructor by default
        StateChangeRequestData& operator=(StateChangeRequestData const&);
        StateChangeRequestData(StateChangeRequestData const&);
        StateChangeRequestData();
    };

    struct SuspendStateData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 88> mUnke8e0f9;
        ::ll::UntypedStorage<4, 4>  mUnk5cca28;
        ::ll::UntypedStorage<4, 8>  mUnk163ab6;
        // NOLINTEND

    public:
        // prevent constructor by default
        SuspendStateData& operator=(SuspendStateData const&);
        SuspendStateData(SuspendStateData const&);
        SuspendStateData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>  mUnk471f4b;
    ::ll::UntypedStorage<8, 64>  mUnkde3b17;
    ::ll::UntypedStorage<8, 64>  mUnkf988f6;
    ::ll::UntypedStorage<8, 8>   mUnk2218c2;
    ::ll::UntypedStorage<8, 16>  mUnk5f4202;
    ::ll::UntypedStorage<8, 24>  mUnkd55261;
    ::ll::UntypedStorage<8, 64>  mUnk2876ef;
    ::ll::UntypedStorage<8, 24>  mUnkb30369;
    ::ll::UntypedStorage<1, 1>   mUnkfa3d98;
    ::ll::UntypedStorage<4, 4>   mUnk7ebf28;
    ::ll::UntypedStorage<4, 8>   mUnkc145b0;
    ::ll::UntypedStorage<4, 4>   mUnk3962a5;
    ::ll::UntypedStorage<4, 4>   mUnk3d87f2;
    ::ll::UntypedStorage<8, 24>  mUnk3bbb85;
    ::ll::UntypedStorage<8, 24>  mUnk87606a;
    ::ll::UntypedStorage<8, 40>  mUnk26b996;
    ::ll::UntypedStorage<1, 1>   mUnk2c445a;
    ::ll::UntypedStorage<8, 64>  mUnkc78041;
    ::ll::UntypedStorage<8, 32>  mUnkc98a78;
    ::ll::UntypedStorage<4, 4>   mUnk8bcebb;
    ::ll::UntypedStorage<8, 80>  mUnkd855a4;
    ::ll::UntypedStorage<8, 80>  mUnk518100;
    ::ll::UntypedStorage<4, 4>   mUnk5542ff;
    ::ll::UntypedStorage<4, 4>   mUnkf403ed;
    ::ll::UntypedStorage<8, 104> mUnk8970d6;
    ::ll::UntypedStorage<4, 4>   mUnk8d92b1;
    ::ll::UntypedStorage<8, 40>  mUnk7ba1da;
    // NOLINTEND

public:
    // prevent constructor by default
    RakNetServerLocator& operator=(RakNetServerLocator const&);
    RakNetServerLocator(RakNetServerLocator const&);
    RakNetServerLocator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RakNetServerLocator() /*override*/ = default;

    virtual void startAnnouncingServer(
        ::std::string const&,
        ::std::string const&,
        ::GameType,
        int,
        int,
        bool,
        bool,
        bool,
        ::ServerSupportedAuthenticationTypes
    ) /*override*/;

    virtual void stopAnnouncingServer() /*override*/;

    virtual void startServerDiscovery(::PortPair) /*override*/;

    virtual void stopServerDiscovery() /*override*/;

    virtual void addCustomServer(::AsynchronousIPResolver const&, int) /*override*/;

    virtual void addCustomServer(::std::string const&, int) /*override*/;

    virtual ::std::vector<::PingedCompatibleServer> getServerList() const /*override*/;

    virtual void clearServerList() /*override*/;

    virtual void update() /*override*/;

    virtual float getPingTimeForGUID(::std::string const&) /*override*/;

    virtual void checkCanConnectToCustomServerAsync(
        ::std::string,
        int,
        ::std::function<void(::ServerConnectivityTestResult)>
    ) /*override*/;

    virtual void _onDisable() /*override*/;

    virtual void _onEnable() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RakNetServerLocator(
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
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
