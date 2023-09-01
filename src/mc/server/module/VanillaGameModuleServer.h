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
    VanillaGameModuleServer& operator=(VanillaGameModuleServer const&) = delete;
    VanillaGameModuleServer(VanillaGameModuleServer const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?init@VanillaGameModuleServer@@UEAAXAEAVServerInstance@@AEBV?$not_null@V?$NonOwnerPointer@VLevel@@@Bedrock@@@gsl@@@Z
    virtual void init(class ServerInstance&, gsl::not_null<class Bedrock::NonOwnerPointer<class Level>> const&);

    // vIndex: 2, symbol:
    // ?initializeBehaviorStack@VanillaGameModuleServer@@UEAAXAEBVExperiments@@AEAVIResourcePackRepository@@AEAVResourcePackStack@@AEBVBaseGameVersion@@@Z
    virtual void
    initializeBehaviorStack(class Experiments const&, class IResourcePackRepository&, class ResourcePackStack&, class BaseGameVersion const&);

    // vIndex: 3, symbol:
    // ?configureLevel@VanillaGameModuleServer@@UEAAXAEBV?$not_null@V?$NonOwnerPointer@VLevel@@@Bedrock@@@gsl@@AEBVExperiments@@AEAVResourcePackManager@@AEBVBaseGameVersion@@@Z
    virtual void
    configureLevel(gsl::not_null<class Bedrock::NonOwnerPointer<class Level>> const&, class Experiments const&, class ResourcePackManager&, class BaseGameVersion const&);

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol:
    // ?configureDocumentation@VanillaGameModuleServer@@UEAAXAEAVIGameModuleDocumentation@@VItemRegistryRef@@@Z
    virtual void configureDocumentation(class IGameModuleDocumentation&, class ItemRegistryRef);

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol: ?setupCommands@VanillaGameModuleServer@@UEAAXAEAVCommandRegistry@@@Z
    virtual void setupCommands(class CommandRegistry&);

    // vIndex: 8, symbol:
    // ?configureServerNetworkHandler@VanillaGameModuleServer@@UEAAXAEAVServerInstance@@V?$not_null@V?$NonOwnerPointer@VServerNetworkHandler@@@Bedrock@@@gsl@@@Z
    virtual void
    configureServerNetworkHandler(class ServerInstance&, gsl::not_null<class Bedrock::NonOwnerPointer<class ServerNetworkHandler>>);

    // symbol: ?configureNewPlayer@VanillaGameModuleServer@@UEAAXAEAVPlayer@@@Z
    MCVAPI void configureNewPlayer(class Player&);

    // symbol: ?tick@VanillaGameModuleServer@@UEAAXXZ
    MCVAPI void tick();

    // symbol: ??0VanillaGameModuleServer@@QEAA@XZ
    MCAPI VanillaGameModuleServer();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_configureEntitySystems@VanillaGameModuleServer@@AEAAXAEBV?$not_null@V?$NonOwnerPointer@VLevel@@@Bedrock@@@gsl@@AEAVResourcePackManager@@AEBVExperiments@@AEBURegistrationOptions@VanillaSystemsRegistration@@@Z
    MCAPI void
    _configureEntitySystems(gsl::not_null<class Bedrock::NonOwnerPointer<class Level>> const&, class ResourcePackManager&, class Experiments const&, struct VanillaSystemsRegistration::RegistrationOptions const&);

    // symbol:
    // ?_configureWorldGen@VanillaGameModuleServer@@AEAAXAEAVIWorldRegistriesProvider@@AEBUSpawnSettings@@AEBVExperiments@@AEAVResourcePackManager@@AEBVBaseGameVersion@@@Z
    MCAPI void
    _configureWorldGen(class IWorldRegistriesProvider&, struct SpawnSettings const&, class Experiments const&, class ResourcePackManager&, class BaseGameVersion const&);

    // symbol:
    // ?_registerListeners@VanillaGameModuleServer@@AEAAXAEBV?$not_null@V?$NonOwnerPointer@VLevel@@@Bedrock@@@gsl@@_N@Z
    MCAPI void _registerListeners(gsl::not_null<class Bedrock::NonOwnerPointer<class Level>> const&, bool);

    // NOLINTEND
};
