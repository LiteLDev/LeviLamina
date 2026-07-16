#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/network/ClientOrServerNetworkSystemRef.h"

// auto generated forward declare list
// clang-format off
class ClientNetworkSystem;
class Level;
class LoopbackPacketSender;
class NetEventCallback;
class ServerNetworkHandler;
// clang-format on

class GameSession {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ClientOrServerNetworkSystemRef>         mNetwork;
    ::ll::TypedStorage<8, 32, ::OwnerPtr<::EntityContext>>              mLevelEntity;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Level>>      mLevel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ServerNetworkHandler>> mServerNetworkHandler;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::NetEventCallback>>     mLegacyClientNetworkHandler;
    ::ll::TypedStorage<8, 8, ::LoopbackPacketSender&>                   mLoopbackPacketSender;
    ::ll::TypedStorage<1, 1, ::SubClientId>                             mClientSubId;
    // NOLINTEND

public:
    // prevent constructor by default
    GameSession& operator=(GameSession const&);
    GameSession(GameSession const&);
    GameSession();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI GameSession(
        ::ClientNetworkSystem&                network,
        ::std::unique_ptr<::NetEventCallback> legacyClientNetworkHandler,
        ::LoopbackPacketSender&               loopbackPacketSender,
        ::SubClientId                         subid
    );

    MCAPI ::Bedrock::NonOwnerPointer<::NetEventCallback> getNetEventCallback();

    MCAPI void setLevel(::std::pair<::std::unique_ptr<::Level>, ::OwnerPtr<::EntityContext>> levelEntity);

    MCAPI ~GameSession();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::ClientNetworkSystem&                network,
        ::std::unique_ptr<::NetEventCallback> legacyClientNetworkHandler,
        ::LoopbackPacketSender&               loopbackPacketSender,
        ::SubClientId                         subid
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};
