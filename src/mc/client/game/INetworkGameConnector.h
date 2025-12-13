#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/events/NetworkType.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct World; }
namespace Social { class GameConnectionInfo; }
namespace Social { struct MultiplayerGameInfo; }
// clang-format on

class INetworkGameConnector {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~INetworkGameConnector() = default;

    virtual void joinRealmsGame(::Realms::World const&, ::Social::GameConnectionInfo const&) = 0;

    virtual void joinRemoteServerWithAddress(
        ::Social::GameConnectionInfo,
        ::std::string const&,
        ::std::string const&,
        ::NetworkType
    ) = 0;

    virtual ::Bedrock::Threading::Async<void> joinMultiplayerGame(::Social::MultiplayerGameInfo const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
