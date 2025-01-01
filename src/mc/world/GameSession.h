#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
class ClientOrServerNetworkSystemRef;
class EntityContext;
class Level;
class LoopbackPacketSender;
class NetEventCallback;
class ServerNetworkHandler;
class ServerNetworkSystem;
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
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::NetEventCallback>>     mClientNetworkHandler;
    ::ll::TypedStorage<8, 8, ::LoopbackPacketSender&>                   mLoopbackPacketSender;
    ::ll::TypedStorage<1, 1, ::SubClientId>                             mClientSubId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GameSession(
        ::ServerNetworkSystem&                                               network,
        ::std::unique_ptr<::ServerNetworkHandler>                            serverNetworkHandler,
        ::LoopbackPacketSender&                                              loopbackPacketSender,
        ::std::unique_ptr<::NetEventCallback>                                clientNetworkHandler,
        ::std::pair<::std::unique_ptr<::Level>, ::OwnerPtr<::EntityContext>> levelEntity,
        ::SubClientId                                                        subid
    );

    MCAPI void setLevel(::std::pair<::std::unique_ptr<::Level>, ::OwnerPtr<::EntityContext>> levelEntity);

    MCAPI ~GameSession();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ServerNetworkSystem&                                               network,
        ::std::unique_ptr<::ServerNetworkHandler>                            serverNetworkHandler,
        ::LoopbackPacketSender&                                              loopbackPacketSender,
        ::std::unique_ptr<::NetEventCallback>                                clientNetworkHandler,
        ::std::pair<::std::unique_ptr<::Level>, ::OwnerPtr<::EntityContext>> levelEntity,
        ::SubClientId                                                        subid
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
