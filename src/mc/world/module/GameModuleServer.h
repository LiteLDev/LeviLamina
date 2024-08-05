#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class GameModuleServer {
public:
    // prevent constructor by default
    GameModuleServer& operator=(GameModuleServer const&);
    GameModuleServer(GameModuleServer const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GameModuleServer();

    // vIndex: 1
    virtual void init(class ServerInstance& server, Bedrock::NotNullNonOwnerPtr<class Level> const& level) = 0;

    // vIndex: 2
    virtual void initializeBehaviorStack(
        class Experiments const&,
        Bedrock::NotNullNonOwnerPtr<class IResourcePackRepository> const&,
        class ResourcePackStack&,
        class BaseGameVersion const&,
        bool
    ) = 0;

    // vIndex: 3
    virtual void
    configureLevel(Bedrock::NotNullNonOwnerPtr<class Level> const&, class Experiments const&, class ResourcePackManager&, class BaseGameVersion const&, std::optional<gsl::not_null<class ServerScriptManager const*>>) = 0;

    // vIndex: 4
    virtual void configureNewPlayer(class Player& player) = 0;

    // vIndex: 5
    virtual void configureDocumentation(class IGameModuleDocumentation& moduleDocumentation, class ItemRegistryRef) = 0;

    // vIndex: 6
    virtual void tick() = 0;

    // vIndex: 7
    virtual void setupCommands(class CommandRegistry& commandRegistry) = 0;

    // vIndex: 8
    virtual void configureServerNetworkHandler(
        class ServerInstance&                                   server,
        Bedrock::NotNullNonOwnerPtr<class ServerNetworkHandler> handler
    ) = 0;

    MCAPI GameModuleServer();

    // NOLINTEND
};
