#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/OwnerPtr.h"

class GameSession {
public:
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

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
