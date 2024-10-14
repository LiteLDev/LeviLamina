#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

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
        class Experiments const&                                          experiments,
        Bedrock::NotNullNonOwnerPtr<class IResourcePackRepository> const& repo,
        class ResourcePackStack&                                          stack,
        class BaseGameVersion const&                                      baseGameVersion,
        bool                                                              includeEditorPacks
    ) = 0;

    // vIndex: 3
    virtual void configureLevel(
        Bedrock::NotNullNonOwnerPtr<class Level> const&                level,
        class Experiments const&                                       experiments,
        class ResourcePackManager&                                     resourcePackManager,
        class BaseGameVersion const&                                   baseGameVersion,
        std::optional<gsl::not_null<class ServerScriptManager const*>> scriptManager
    ) = 0;

    // vIndex: 4
    virtual void configureNewPlayer(class Player& player) = 0;

    // vIndex: 5
    virtual void configureDocumentation(
        class IGameModuleDocumentation& moduleDocumentation,
        class ItemRegistryRef           docItemRegistry
    ) = 0;

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
