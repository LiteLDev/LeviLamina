#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/CurrentCmdVersion.h"
#include "mc/server/commands/CommandOutputType.h"

class MinecraftCommands {
public:
    // prevent constructor by default
    MinecraftCommands& operator=(MinecraftCommands const&);
    MinecraftCommands(MinecraftCommands const&);
    MinecraftCommands();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MinecraftCommands@@UEAA@XZ
    virtual ~MinecraftCommands() = default;

    // symbol: ??0MinecraftCommands@@QEAA@AEAVMinecraft@@@Z
    MCAPI explicit MinecraftCommands(class Minecraft&);

    // symbol:
    // ?compileCommand@MinecraftCommands@@QEAAPEAVCommand@@AEBVHashedString@@AEAVCommandOrigin@@W4CurrentCmdVersion@@V?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@std@@@Z
    MCAPI class Command*
    compileCommand(class HashedString const&, class CommandOrigin&, ::CurrentCmdVersion, std::function<void(std::string const&)>);

    // symbol:
    // ?enqueueDeferredCommand@MinecraftCommands@@QEAAXV?$unique_ptr@VCommandContext@@U?$default_delete@VCommandContext@@@std@@@std@@_N1V?$function@$$A6AXUMCRESULT@@@Z@3@@Z
    MCAPI void
    enqueueDeferredCommand(std::unique_ptr<class CommandContext>, bool, bool, std::function<void(struct MCRESULT)>);

    // symbol: ?enqueueDeferredCommandBlockCommand@MinecraftCommands@@QEAAXVBlockPos@@AEAVBlockSource@@@Z
    MCAPI void enqueueDeferredCommandBlockCommand(class BlockPos, class BlockSource&);

    // symbol:
    // ?enqueueDeferredScriptCommand@MinecraftCommands@@QEAA_NV?$unique_ptr@VDeferredScriptCommand@@U?$default_delete@VDeferredScriptCommand@@@std@@@std@@@Z
    MCAPI bool enqueueDeferredScriptCommand(std::unique_ptr<class DeferredScriptCommand>);

    // symbol: ?executeCommand@MinecraftCommands@@QEBA?AUMCRESULT@@AEAVCommandContext@@_N@Z
    MCAPI struct MCRESULT executeCommand(class CommandContext&, bool) const;

    // symbol: ?getRegistry@MinecraftCommands@@QEAAAEAVCommandRegistry@@XZ
    MCAPI class CommandRegistry& getRegistry();

    // symbol: ?handleOutput@MinecraftCommands@@QEBAXAEBVCommandOrigin@@AEBVCommandOutput@@@Z
    MCAPI void handleOutput(class CommandOrigin const& origin, class CommandOutput const& output) const;

    // symbol:
    // ?initCoreEnums@MinecraftCommands@@QEAAXVItemRegistryRef@@AEBVIWorldRegistriesProvider@@AEBVActorFactory@@AEBVExperiments@@AEBVBaseGameVersion@@@Z
    MCAPI void
    initCoreEnums(class ItemRegistryRef, class IWorldRegistriesProvider const&, class ActorFactory const&, class Experiments const&, class BaseGameVersion const&);

    // symbol: ?initCoreEnumsServer@MinecraftCommands@@QEAAXAEBVActorDefinitionGroup@@AEBVCameraPresets@@AEBVRecipes@@@Z
    MCAPI void initCoreEnumsServer(class ActorDefinitionGroup const&, class CameraPresets const&, class Recipes const&);

    // symbol: ?requestCommandExecution@MinecraftCommands@@QEAA?AUMCRESULT@@AEAVCommandContext@@_N@Z
    MCAPI struct MCRESULT requestCommandExecution(class CommandContext&, bool);

    // symbol: ?runCommand@MinecraftCommands@@QEAAXAEAVCommand@@AEAVCommandOrigin@@@Z
    MCAPI void runCommand(class Command&, class CommandOrigin&);

    // symbol: ?runCommand@MinecraftCommands@@QEAAXAEBVHashedString@@AEAVCommandOrigin@@W4CurrentCmdVersion@@@Z
    MCAPI void runCommand(
        class HashedString const& commandStr,
        class CommandOrigin&      origin,
        enum CurrentCmdVersion    commandVersion
    );

    // symbol: ?runOrDeferCommand@MinecraftCommands@@QEAAXAEBVHashedString@@AEAVCommandOrigin@@W4CurrentCmdVersion@@@Z
    MCAPI void runOrDeferCommand(class HashedString const&, class CommandOrigin&, ::CurrentCmdVersion);

    // symbol:
    // ?runOrDeferCommand@MinecraftCommands@@QEAAXV?$not_null@PEAVCommand@@@gsl@@AEAVCommandOrigin@@W4CurrentCmdVersion@@@Z
    MCAPI void runOrDeferCommand(gsl::not_null<class Command*>, class CommandOrigin&, ::CurrentCmdVersion);

    // symbol: ?setRegistryNetworkUpdateCallback@MinecraftCommands@@QEBAXV?$function@$$A6AXAEBVPacket@@@Z@std@@@Z
    MCAPI void setRegistryNetworkUpdateCallback(std::function<void(class Packet const&)> callback) const;

    // symbol: ?shouldDeferCommand@MinecraftCommands@@QEBA_NW4CurrentCmdVersion@@@Z
    MCAPI bool shouldDeferCommand(::CurrentCmdVersion) const;

    // symbol: ?tick@MinecraftCommands@@QEAAXXZ
    MCAPI void tick();

    // symbol: ?getOutputType@MinecraftCommands@@SA?AW4CommandOutputType@@AEBVCommandOrigin@@@Z
    MCAPI static ::CommandOutputType getOutputType(class CommandOrigin const& origin);

    // symbol: ?initBlockEnum@MinecraftCommands@@SAXAEAVCommandRegistry@@AEBVBaseGameVersion@@@Z
    MCAPI static void initBlockEnum(class CommandRegistry&, class BaseGameVersion const&);

    // symbol: ?initEntityEnum@MinecraftCommands@@SAXAEAVCommandRegistry@@AEBVActorFactory@@AEBVExperiments@@@Z
    MCAPI static void initEntityEnum(class CommandRegistry&, class ActorFactory const&, class Experiments const&);

    // symbol: ?initItemEnum@MinecraftCommands@@SAXVItemRegistryRef@@AEAVCommandRegistry@@AEBVBaseGameVersion@@@Z
    MCAPI static void initItemEnum(class ItemRegistryRef, class CommandRegistry&, class BaseGameVersion const&);

    // symbol: ?initItemTagEnum@MinecraftCommands@@SAXVItemRegistryRef@@AEAVCommandRegistry@@@Z
    MCAPI static void initItemTagEnum(class ItemRegistryRef, class CommandRegistry&);

    // symbol: ?initStructureFeatureEnum@MinecraftCommands@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void initStructureFeatureEnum(class CommandRegistry&);

    // symbol: ?initUnlockableRecipesEnum@MinecraftCommands@@SAXAEAVCommandRegistry@@AEBVRecipes@@@Z
    MCAPI static void initUnlockableRecipesEnum(class CommandRegistry&, class Recipes const&);

    // symbol: ?registerSharedClientServerEnums@MinecraftCommands@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void registerSharedClientServerEnums(class CommandRegistry&);

    // NOLINTEND
};
