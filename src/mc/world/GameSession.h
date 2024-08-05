#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtr.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/enums/SubClientId.h"

class GameSession {
public:
    // prevent constructor by default
    GameSession& operator=(GameSession const&);
    GameSession(GameSession const&);
    GameSession();

public:
    // NOLINTBEGIN
    MCAPI GameSession(
        class ServerNetworkSystem&                  network,
        std::unique_ptr<class ServerNetworkHandler> serverNetworkHandler,
        class LoopbackPacketSender&                 loopbackPacketSender,
        std::unique_ptr<class NetEventCallback>     clientNetworkHandler,
        std::pair<std::unique_ptr<class Level>, class OwnerPtr<class EntityContext>>,
        ::SubClientId subid
    );

    MCAPI class Bedrock::NonOwnerPointer<class ServerNetworkHandler> getServerNetworkHandler();

    MCAPI void setLevel(std::pair<std::unique_ptr<class Level>, class OwnerPtr<class EntityContext>>);

    // NOLINTEND
};
