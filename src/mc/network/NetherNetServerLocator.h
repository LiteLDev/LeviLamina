#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/StubServerLocator.h"
#include "mc/platform/threading/UniqueLock.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class SignalingService;
struct NetherNetConnector;
struct PingedCompatibleServer;
struct PortPair;
struct ServerSupportedAuthenticationTypes;
namespace Bedrock::Threading { class Mutex; }
// clang-format on

class NetherNetServerLocator : public ::StubServerLocator {
public:
    // NetherNetServerLocator inner types declare
    // clang-format off
    struct ServerData;
    // clang-format on

    // NetherNetServerLocator inner types define
    struct ServerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnke25e40;
        ::ll::UntypedStorage<8, 32> mUnk7d9cc2;
        ::ll::UntypedStorage<4, 4>  mUnkab0aac;
        ::ll::UntypedStorage<4, 4>  mUnk3ed176;
        ::ll::UntypedStorage<4, 4>  mUnkc83c1f;
        ::ll::UntypedStorage<1, 1>  mUnk91bac1;
        ::ll::UntypedStorage<1, 1>  mUnk1b4aaf;
        ::ll::UntypedStorage<1, 2>  mUnkd722a4;
        ::ll::UntypedStorage<4, 4>  mUnk21552f;
        ::ll::UntypedStorage<2, 2>  mUnkb17aa9;
        // NOLINTEND

    public:
        // prevent constructor by default
        ServerData& operator=(ServerData const&);
        ServerData(ServerData const&);
        ServerData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk8d94d4;
    ::ll::UntypedStorage<8, 24> mUnka0ecad;
    ::ll::UntypedStorage<8, 32> mUnk86854a;
    ::ll::UntypedStorage<8, 16> mUnkeab7f7;
    ::ll::UntypedStorage<1, 1>  mUnkfee0d4;
    ::ll::UntypedStorage<1, 1>  mUnk646852;
    ::ll::UntypedStorage<8, 88> mUnk330682;
    ::ll::UntypedStorage<8, 80> mUnk1547c8;
    // NOLINTEND

public:
    // prevent constructor by default
    NetherNetServerLocator& operator=(NetherNetServerLocator const&);
    NetherNetServerLocator(NetherNetServerLocator const&);
    NetherNetServerLocator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetherNetServerLocator() /*override*/ = default;

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

    virtual ::std::vector<::PingedCompatibleServer> getServerList() const /*override*/;

    virtual void clearServerList() /*override*/;

    virtual void update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetherNetServerLocator(
        ::Bedrock::NotNullNonOwnerPtr<::NetherNetConnector>&& connector,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const&      appPlatform,
        ::Bedrock::NonOwnerPointer<::SignalingService>        signalingService
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::NetherNetConnector>&& connector,
        ::Bedrock::NonOwnerPointer<::AppPlatform> const&      appPlatform,
        ::Bedrock::NonOwnerPointer<::SignalingService>        signalingService
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
