#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/StubServerLocator.h"
#include "mc/platform/Result.h"
#include "mc/platform/threading/UniqueLock.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class BinaryStream;
class ReadOnlyBinaryStream;
struct NetherNetConnector;
struct PingedCompatibleServer;
struct PortPair;
namespace Bedrock::Threading { class Mutex; }
namespace NetherNet { struct NetworkID; }
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
        ::ll::UntypedStorage<8, 32> mUnkb518a7;
        ::ll::UntypedStorage<8, 32> mUnk2d2ca2;
        ::ll::UntypedStorage<4, 4>  mUnkab0aac;
        ::ll::UntypedStorage<4, 4>  mUnk3ed176;
        ::ll::UntypedStorage<4, 4>  mUnkc83c1f;
        ::ll::UntypedStorage<1, 1>  mUnk91bac1;
        ::ll::UntypedStorage<1, 1>  mUnk1b4aaf;
        ::ll::UntypedStorage<4, 4>  mUnk21552f;
        // NOLINTEND

    public:
        // prevent constructor by default
        ServerData& operator=(ServerData const&);
        ServerData(ServerData const&);
        ServerData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::Bedrock::Result<void> read(::ReadOnlyBinaryStream& stream);

        MCNAPI void write(::BinaryStream& stream) const;

        MCNAPI ~ServerData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk6f15a6;
    ::ll::UntypedStorage<8, 24> mUnk7a26b6;
    ::ll::UntypedStorage<8, 32> mUnkcf0391;
    ::ll::UntypedStorage<1, 1>  mUnkfee0d4;
    ::ll::UntypedStorage<1, 1>  mUnk646852;
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
    // vIndex: 0
    virtual ~NetherNetServerLocator() /*override*/;

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

    // vIndex: 9
    virtual ::std::vector<::PingedCompatibleServer> getServerList() const /*override*/;

    // vIndex: 10
    virtual void clearServerList() /*override*/;

    // vIndex: 11
    virtual void update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _cacheDiscoveryResponseData(::NetherNetServerLocator::ServerData const& serverData);

    MCNAPI void _onDiscoveryResponse(::NetherNet::NetworkID const& networkID, ::gsl::span<char const> responseData);

    MCNAPI void _setIsAnnouncing(bool isAnnouncing);

    MCNAPI void setNetherNetConnector(::Bedrock::NonOwnerPointer<::NetherNetConnector>&& connector);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::PingedCompatibleServer
    _transformFrom(::NetherNet::NetworkID const& networkID, ::NetherNetServerLocator::ServerData&& serverData);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $startAnnouncingServer(
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

    MCNAPI void $stopAnnouncingServer(::Bedrock::NonOwnerPointer<::AppPlatform> appPlatform);

    MCNAPI void $startServerDiscovery(::PortPair ports);

    MCNAPI void $stopServerDiscovery();

    MCNAPI ::std::vector<::PingedCompatibleServer> $getServerList() const;

    MCNAPI void $clearServerList();

    MCNAPI void $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
