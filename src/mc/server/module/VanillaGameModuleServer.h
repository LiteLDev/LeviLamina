#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/module/GameModuleServer.h"

// auto generated forward declare list
// clang-format off
namespace VanillaSystemsRegistration { struct RegistrationOptions; }
// clang-format on

class VanillaGameModuleServer : public ::GameModuleServer {
public:
    // prevent constructor by default
    VanillaGameModuleServer& operator=(VanillaGameModuleServer const&);
    VanillaGameModuleServer(VanillaGameModuleServer const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1VanillaGameModuleServer@@UEAA@XZ
    virtual ~VanillaGameModuleServer() = default;

    // vIndex: 1, symbol:
    // ?init@VanillaGameModuleServer@@UEAAXAEAVServerInstance@@AEBV?$not_null@V?$NonOwnerPointer@VLevel@@@Bedrock@@@gsl@@@Z
    virtual void init(class ServerInstance& server, Bedrock::NotNullNonOwnerPtr<class Level> const& level);

    // vIndex: 2, symbol:
    // ?initializeBehaviorStack@VanillaGameModuleServer@@UEAAXAEBVExperiments@@AEBV?$not_null@V?$NonOwnerPointer@VIResourcePackRepository@@@Bedrock@@@gsl@@AEAVResourcePackStack@@AEBVBaseGameVersion@@_N@Z
    virtual void initializeBehaviorStack(
        class Experiments const&,
        Bedrock::NotNullNonOwnerPtr<class IResourcePackRepository> const&,
        class ResourcePackStack&,
        class BaseGameVersion const&,
        bool
    );

    // vIndex: 3, symbol:
    // ?configureLevel@VanillaGameModuleServer@@UEAAXAEBV?$not_null@V?$NonOwnerPointer@VLevel@@@Bedrock@@@gsl@@AEBVExperiments@@AEAVResourcePackManager@@AEBVBaseGameVersion@@V?$optional@V?$not_null@PEBVServerScriptManager@@@gsl@@@std@@@Z
    virtual void
    configureLevel(Bedrock::NotNullNonOwnerPtr<class Level> const&, class Experiments const&, class ResourcePackManager&, class BaseGameVersion const&, std::optional<gsl::not_null<class ServerScriptManager const*>>);

    // vIndex: 4, symbol: ?configureNewPlayer@VanillaGameModuleServer@@UEAAXAEAVPlayer@@@Z
    virtual void configureNewPlayer(class Player& player);

    // vIndex: 5, symbol:
    // ?configureDocumentation@VanillaGameModuleServer@@UEAAXAEAVIGameModuleDocumentation@@VItemRegistryRef@@@Z
    virtual void configureDocumentation(class IGameModuleDocumentation& moduleDocumentation, class ItemRegistryRef);

    // vIndex: 6, symbol: ?tick@VanillaGameModuleServer@@UEAAXXZ
    virtual void tick();

    // vIndex: 7, symbol: ?setupCommands@VanillaGameModuleServer@@UEAAXAEAVCommandRegistry@@@Z
    virtual void setupCommands(class CommandRegistry& commandRegistry);

    // vIndex: 8, symbol:
    // ?configureServerNetworkHandler@VanillaGameModuleServer@@UEAAXAEAVServerInstance@@V?$not_null@V?$NonOwnerPointer@VServerNetworkHandler@@@Bedrock@@@gsl@@@Z
    virtual void configureServerNetworkHandler(
        class ServerInstance&                                   server,
        Bedrock::NotNullNonOwnerPtr<class ServerNetworkHandler> handler
    );

    // symbol: ??0VanillaGameModuleServer@@QEAA@XZ
    MCAPI VanillaGameModuleServer();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_configureEntitySystems@VanillaGameModuleServer@@AEAAXAEBV?$not_null@V?$NonOwnerPointer@VLevel@@@Bedrock@@@gsl@@AEAVResourcePackManager@@AEBVExperiments@@AEBURegistrationOptions@VanillaSystemsRegistration@@@Z
    MCAPI void
    _configureEntitySystems(Bedrock::NotNullNonOwnerPtr<class Level> const& level, class ResourcePackManager& resourcePackManager, class Experiments const&, struct VanillaSystemsRegistration::RegistrationOptions const&);

    // symbol:
    // ?_configureWorldGen@VanillaGameModuleServer@@AEAAXAEAVIWorldRegistriesProvider@@AEBUSpawnSettings@@AEBVExperiments@@AEAVResourcePackManager@@AEBVBaseGameVersion@@@Z
    MCAPI void _configureWorldGen(
        class IWorldRegistriesProvider& worldRegistries,
        struct SpawnSettings const&     spawnSettings,
        class Experiments const&        experiments,
        class ResourcePackManager&      resourcePackManager,
        class BaseGameVersion const&    baseGameVersion
    );

    // symbol:
    // ?_registerListeners@VanillaGameModuleServer@@AEAAXAEBV?$not_null@V?$NonOwnerPointer@VLevel@@@Bedrock@@@gsl@@_N@Z
    MCAPI void _registerListeners(Bedrock::NotNullNonOwnerPtr<class Level> const&, bool);

    // NOLINTEND
};
