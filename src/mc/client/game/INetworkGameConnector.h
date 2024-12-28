#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/deps/core/threading/IAsyncResult.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct World; }
namespace Social { class GameConnectionInfo; }
// clang-format on

class INetworkGameConnector {
public:
    // prevent constructor by default
    INetworkGameConnector& operator=(INetworkGameConnector const&);
    INetworkGameConnector(INetworkGameConnector const&);
    INetworkGameConnector();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~INetworkGameConnector();

    // vIndex: 1
    virtual void joinRealmsGame(::Realms::World const&, ::Social::GameConnectionInfo const&, bool) = 0;

    // vIndex: 2
    virtual void joinRemoteServerWithAddress(::Social::GameConnectionInfo, int const) = 0;

    // vIndex: 3
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>>
    joinMultiplayerWithService(::std::string const&, ::Social::MultiplayerServiceIdentifier const) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
