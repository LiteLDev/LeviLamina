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
    // vIndex: 0, symbol: ??1GameModuleServer@@UEAA@XZ
    virtual ~GameModuleServer();

    // vIndex: 1, symbol:
    // ?init@VanillaGameModuleServer@@UEAAXAEAVServerInstance@@AEBV?$not_null@V?$NonOwnerPointer@VLevel@@@Bedrock@@@gsl@@@Z
    virtual void init(class ServerInstance& server, Bedrock::NotNullNonOwnerPtr<class Level> const& level) = 0;

    // vIndex: 2, symbol:
    // ?initializeBehaviorStack@VanillaGameModuleServer@@UEAAXAEBVExperiments@@AEBV?$not_null@V?$NonOwnerPointer@VIResourcePackRepository@@@Bedrock@@@gsl@@AEAVResourcePackStack@@AEBVBaseGameVersion@@_N@Z
    virtual void initializeBehaviorStack(
        class Experiments const&,
        Bedrock::NotNullNonOwnerPtr<class IResourcePackRepository> const&,
        class ResourcePackStack&,
        class BaseGameVersion const&,
        bool
    ) = 0;

    // vIndex: 3, symbol:
    // ?configureLevel@VanillaGameModuleServer@@UEAAXAEBV?$not_null@V?$NonOwnerPointer@VLevel@@@Bedrock@@@gsl@@AEBVExperiments@@AEAVResourcePackManager@@AEBVBaseGameVersion@@V?$optional@V?$not_null@PEBVServerScriptManager@@@gsl@@@std@@@Z
    virtual void
    configureLevel(Bedrock::NotNullNonOwnerPtr<class Level> const&, class Experiments const&, class ResourcePackManager&, class BaseGameVersion const&, std::optional<gsl::not_null<class ServerScriptManager const*>>) = 0;

    // vIndex: 4, symbol: ?configureNewPlayer@VanillaGameModuleServer@@UEAAXAEAVPlayer@@@Z
    virtual void configureNewPlayer(class Player& player) = 0;

    // vIndex: 5, symbol:
    // ?configureDocumentation@VanillaGameModuleServer@@UEAAXAEAVIGameModuleDocumentation@@VItemRegistryRef@@@Z
    virtual void configureDocumentation(class IGameModuleDocumentation& moduleDocumentation, class ItemRegistryRef) = 0;

    // vIndex: 6, symbol: ?tick@VanillaGameModuleServer@@UEAAXXZ
    virtual void tick() = 0;

    // vIndex: 7, symbol: ?setupCommands@VanillaGameModuleServer@@UEAAXAEAVCommandRegistry@@@Z
    virtual void setupCommands(class CommandRegistry& commandRegistry) = 0;

    // vIndex: 8, symbol:
    // ?configureServerNetworkHandler@VanillaGameModuleServer@@UEAAXAEAVServerInstance@@V?$not_null@V?$NonOwnerPointer@VServerNetworkHandler@@@Bedrock@@@gsl@@@Z
    virtual void configureServerNetworkHandler(
        class ServerInstance&                                   server,
        Bedrock::NotNullNonOwnerPtr<class ServerNetworkHandler> handler
    ) = 0;

    // symbol: ??0GameModuleServer@@QEAA@XZ
    MCAPI GameModuleServer();

    // NOLINTEND
};
