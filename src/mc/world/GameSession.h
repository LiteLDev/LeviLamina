#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/network/ClientOrServerNetworkSystemRef.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"

class GameSession {
public:
    // from https://github.com/EndstoneMC/endstone/blob/main/include/bedrock/world/game_session.h
    ClientOrServerNetworkSystemRef              mNetwork;                    // this+0x0
    OwnerPtr<class EntityContext>               mLevelEntity;                // this+0x10
    Bedrock::NonOwnerPointer<class Level>       mLevel;                      // this+0x28
    std::unique_ptr<class ServerNetworkHandler> mServerNetworkHandler;       // this+0x38
    std::unique_ptr<class NetEventCallback>     mLegacyClientNetworkHandler; // this+0x40
    std::unique_ptr<class NetEventCallback>     mClientNetworkHandler;       // this+0x48
    class LoopbackPacketSender&                 mLoopbackPacketSender;       // this+0x50
    SubClientId                                 mClientSubId;                // this+0x58

    // prevent constructor by default
    GameSession& operator=(GameSession const&);
    GameSession(GameSession const&);
    GameSession();

public:
    // NOLINTBEGIN
    MCAPI GameSession(
        class ServerNetworkSystem&                                                   network,
        std::unique_ptr<class ServerNetworkHandler>                                  serverNetworkHandler,
        class LoopbackPacketSender&                                                  loopbackPacketSender,
        std::unique_ptr<class NetEventCallback>                                      clientNetworkHandler,
        std::pair<std::unique_ptr<class Level>, class OwnerPtr<class EntityContext>> levelEntity,
        ::SubClientId                                                                subid
    );

    MCAPI class Bedrock::NonOwnerPointer<class ServerNetworkHandler> getServerNetworkHandler();

    MCAPI void setLevel(std::pair<std::unique_ptr<class Level>, class OwnerPtr<class EntityContext>> levelEntity);

    // NOLINTEND
};
