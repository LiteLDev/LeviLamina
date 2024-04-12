#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/codebuilder/MCRESULT.h"
#include "mc/server/commands/CommandContext.h"

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
    MCAPI explicit MinecraftCommands(class Minecraft& minecraft);

    // symbol:
    // ?compileCommand@MinecraftCommands@@QEAAPEAVCommand@@AEBVHashedString@@AEAVCommandOrigin@@W4CurrentCmdVersion@@V?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@std@@@Z
    MCAPI class Command* compileCommand(
        class HashedString const&               commandStr,
        class CommandOrigin&                    origin,
        ::CurrentCmdVersion                     commandVersion,
        std::function<void(std::string const&)> onParserError
    );

    // symbol:
    // ?enqueueDeferredCommand@MinecraftCommands@@QEAAXV?$unique_ptr@VCommandContext@@U?$default_delete@VCommandContext@@@std@@@std@@_N1V?$function@$$A6AXUMCRESULT@@@Z@3@@Z
    MCAPI void enqueueDeferredCommand(
        std::unique_ptr<class CommandContext> context,
        bool                                  suppressOutput,
        bool                                  isRequest,
        std::function<void(struct MCRESULT)>  callback
    );

    // symbol:
    // ?enqueueDeferredCompiledCommand@MinecraftCommands@@QEAAXV?$not_null@PEAVCommand@@@gsl@@V?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@@Z
    MCAPI void
    enqueueDeferredCompiledCommand(gsl::not_null<class Command*> command, std::unique_ptr<class CommandOrigin> origin);

    // symbol:
    // ?enqueueDeferredScriptCommand@MinecraftCommands@@QEAA_NV?$unique_ptr@VDeferredScriptCommand@@U?$default_delete@VDeferredScriptCommand@@@std@@@std@@@Z
    MCAPI bool enqueueDeferredScriptCommand(std::unique_ptr<class DeferredScriptCommand>);

    // symbol: ?executeCommand@MinecraftCommands@@QEBA?AUMCRESULT@@AEAVCommandContext@@_N@Z
    MCAPI struct MCRESULT executeCommand(class CommandContext& context, bool suppressOutput = false) const;

    // symbol: ?getRegistry@MinecraftCommands@@QEAAAEAVCommandRegistry@@XZ
    MCAPI class CommandRegistry& getRegistry();

    // symbol: ?handleOutput@MinecraftCommands@@QEBAXAEBVCommandOrigin@@AEBVCommandOutput@@@Z
    MCAPI void handleOutput(class CommandOrigin const& origin, class CommandOutput const& output) const;

    // symbol:
    // ?initCoreEnums@MinecraftCommands@@QEAAXVItemRegistryRef@@AEBVLevel@@AEBVActorFactory@@AEBVExperiments@@AEBVBaseGameVersion@@@Z
    MCAPI void initCoreEnums(
        class ItemRegistryRef,
        class Level const&           registries,
        class ActorFactory const&    actorFactory,
        class Experiments const&     experiments,
        class BaseGameVersion const& worldBaseGameVersion
    );

    // symbol: ?initCoreEnumsServer@MinecraftCommands@@QEAAXAEBVActorDefinitionGroup@@AEBVCameraPresets@@AEBVRecipes@@@Z
    MCAPI void initCoreEnumsServer(class ActorDefinitionGroup const&, class CameraPresets const&, class Recipes const&);

    // symbol: ?requestCommandExecution@MinecraftCommands@@QEAA?AUMCRESULT@@AEAVCommandContext@@_N@Z
    MCAPI struct MCRESULT requestCommandExecution(class CommandContext& context, bool suppressOutput);

    // symbol: ?runCommand@MinecraftCommands@@QEAAXAEAVCommand@@AEAVCommandOrigin@@@Z
    MCAPI void runCommand(class Command& command, class CommandOrigin& origin);

    // symbol: ?runCommand@MinecraftCommands@@QEAAXAEBVHashedString@@AEAVCommandOrigin@@W4CurrentCmdVersion@@@Z
    MCAPI void
    runCommand(class HashedString const& commandStr, class CommandOrigin& origin, ::CurrentCmdVersion commandVersion);

    // symbol: ?setRegistryNetworkUpdateCallback@MinecraftCommands@@QEBAXV?$function@$$A6AXAEBVPacket@@@Z@std@@@Z
    MCAPI void setRegistryNetworkUpdateCallback(std::function<void(class Packet const&)> callback) const;

    // symbol: ?tick@MinecraftCommands@@QEAAXXZ
    MCAPI void tick();

    // symbol: ?getOutputType@MinecraftCommands@@SA?AW4CommandOutputType@@AEBVCommandOrigin@@@Z
    MCAPI static ::CommandOutputType getOutputType(class CommandOrigin const& origin);

    // symbol: ?initBlockEnum@MinecraftCommands@@SAXAEAVCommandRegistry@@AEBVBaseGameVersion@@@Z
    MCAPI static void initBlockEnum(class CommandRegistry& registry, class BaseGameVersion const& worldBaseGameVersion);

    // symbol: ?initEntityEnum@MinecraftCommands@@SAXAEAVCommandRegistry@@AEBVActorFactory@@AEBVExperiments@@@Z
    MCAPI static void initEntityEnum(
        class CommandRegistry&    registry,
        class ActorFactory const& actorFactory,
        class Experiments const&  experiments
    );

    // symbol: ?initEntityPropertyEnum@MinecraftCommands@@SAXAEAVCommandRegistry@@AEBVLevel@@@Z
    MCAPI static void initEntityPropertyEnum(class CommandRegistry&, class Level const&);

    // symbol: ?initItemEnum@MinecraftCommands@@SAXVItemRegistryRef@@AEAVCommandRegistry@@AEBVBaseGameVersion@@@Z
    MCAPI static void initItemEnum(
        class ItemRegistryRef,
        class CommandRegistry&       registry,
        class BaseGameVersion const& worldBaseGameVersion
    );

    // symbol: ?initItemTagEnum@MinecraftCommands@@SAXVItemRegistryRef@@AEAVCommandRegistry@@@Z
    MCAPI static void initItemTagEnum(class ItemRegistryRef, class CommandRegistry& registry);

    // symbol: ?initStructureFeatureEnum@MinecraftCommands@@SAXAEAVCommandRegistry@@AEBVExperiments@@@Z
    MCAPI static void initStructureFeatureEnum(class CommandRegistry&, class Experiments const&);

    // symbol: ?initUnlockableRecipesEnum@MinecraftCommands@@SAXAEAVCommandRegistry@@AEBVRecipes@@@Z
    MCAPI static void initUnlockableRecipesEnum(class CommandRegistry&, class Recipes const&);

    // symbol: ?registerSharedClientServerEnums@MinecraftCommands@@SAXAEAVCommandRegistry@@@Z
    MCAPI static void registerSharedClientServerEnums(class CommandRegistry& registry);

    // NOLINTEND
};
