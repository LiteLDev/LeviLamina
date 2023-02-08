/**
 * @file  MinecraftCommands.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "CommandContext.hpp"
#include "MCRESULT.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class MinecraftCommands.
 *
 */
class MinecraftCommands {

#define AFTER_EXTRA
// Add Member There
public:
    [[deprecated]]
    static MCRESULT _runcmd(void* origin, const std::string& cmd) {
        if (!Global<MinecraftCommands>)
            return {0};
        try
        {
            CommandContext context = CommandContext(cmd, std::unique_ptr<CommandOrigin>((CommandOrigin*)origin));
            return Global<MinecraftCommands>->executeCommand(context, false);
        }
        catch (...)
        {
        }
        return {0};
    }
    static MCRESULT _runcmd(std::unique_ptr<CommandOrigin> origin, const std::string& cmd)
    {
        if (!Global<MinecraftCommands>)
            return {0};
        try
        {
            CommandContext context = CommandContext(cmd, std::move(origin));
            return Global<MinecraftCommands>->executeCommand(context, false);
        }
        catch (...)
        {
        }
        return {0};
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECRAFTCOMMANDS
public:
    class MinecraftCommands& operator=(class MinecraftCommands const &) = delete;
    MinecraftCommands(class MinecraftCommands const &) = delete;
    MinecraftCommands() = delete;
#endif

public:
    /**
     * @hash   856032526
     * @symbol  ??0MinecraftCommands\@\@QEAA\@AEAVMinecraft\@\@\@Z
     */
    MCAPI MinecraftCommands(class Minecraft &);
    /**
     * @hash   -1985313780
     * @symbol  ?compileCommand\@MinecraftCommands\@\@QEAAPEAVCommand\@\@AEBVHashedString\@\@AEAVCommandOrigin\@\@W4CurrentCmdVersion\@\@V?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Command * compileCommand(class HashedString const &, class CommandOrigin &, enum class CurrentCmdVersion, class std::function<void (std::string const &)>);
    /**
     * @hash   -1277220069
     * @symbol  ?enqueueDeferredCommand\@MinecraftCommands\@\@QEAAXV?$unique_ptr\@VCommandContext\@\@U?$default_delete\@VCommandContext\@\@\@std\@\@\@std\@\@_N1V?$function\@$$A6AXUMCRESULT\@\@\@Z\@3\@\@Z
     */
    MCAPI void enqueueDeferredCommand(std::unique_ptr<class CommandContext>, bool, bool, class std::function<void (struct MCRESULT)>);
    /**
     * @hash   -639938651
     * @symbol  ?enqueueDeferredCommandBlockCommand\@MinecraftCommands\@\@QEAAXVBlockPos\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI void enqueueDeferredCommandBlockCommand(class BlockPos, class BlockSource &);
    /**
     * @hash   -621061855
     * @symbol  ?enqueueDeferredScriptCommand\@MinecraftCommands\@\@QEAA_NV?$unique_ptr\@VDeferredScriptCommand\@\@U?$default_delete\@VDeferredScriptCommand\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI bool enqueueDeferredScriptCommand(std::unique_ptr<class DeferredScriptCommand>);
    /**
     * @hash   298560890
     * @symbol  ?executeCommand\@MinecraftCommands\@\@QEBA?AUMCRESULT\@\@AEAVCommandContext\@\@_N\@Z
     */
    MCAPI struct MCRESULT executeCommand(class CommandContext &, bool) const;
    /**
     * @hash   395205998
     * @symbol  ?getRegistry\@MinecraftCommands\@\@QEAAAEAVCommandRegistry\@\@XZ
     */
    MCAPI class CommandRegistry & getRegistry();
    /**
     * @hash   1839315733
     * @symbol  ?handleOutput\@MinecraftCommands\@\@QEBAXAEBVCommandOrigin\@\@AEBVCommandOutput\@\@\@Z
     */
    MCAPI void handleOutput(class CommandOrigin const &, class CommandOutput const &) const;
    /**
     * @hash   1843992814
     * @symbol  ?initCoreEnums\@MinecraftCommands\@\@QEAAXVItemRegistryRef\@\@AEBVIWorldRegistriesProvider\@\@AEBVActorFactory\@\@AEBVExperiments\@\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI void initCoreEnums(class ItemRegistryRef, class IWorldRegistriesProvider const &, class ActorFactory const &, class Experiments const &, class BaseGameVersion const &);
    /**
     * @hash   897705174
     * @symbol  ?initCoreEnumsServer\@MinecraftCommands\@\@QEAAXAEBVActorDefinitionGroup\@\@\@Z
     */
    MCAPI void initCoreEnumsServer(class ActorDefinitionGroup const &);
    /**
     * @hash   1970388666
     * @symbol  ?requestCommandExecution\@MinecraftCommands\@\@QEAA?AUMCRESULT\@\@AEAVCommandContext\@\@_N\@Z
     */
    MCAPI struct MCRESULT requestCommandExecution(class CommandContext &, bool);
    /**
     * @hash   1022025343
     * @symbol  ?runCommand\@MinecraftCommands\@\@QEAAXAEAVCommand\@\@AEAVCommandOrigin\@\@\@Z
     */
    MCAPI void runCommand(class Command &, class CommandOrigin &);
    /**
     * @hash   -259980676
     * @symbol  ?runCommand\@MinecraftCommands\@\@QEAAXAEBVHashedString\@\@AEAVCommandOrigin\@\@W4CurrentCmdVersion\@\@\@Z
     */
    MCAPI void runCommand(class HashedString const &, class CommandOrigin &, enum class CurrentCmdVersion);
    /**
     * @hash   2086667422
     * @symbol  ?runOrDeferCommand\@MinecraftCommands\@\@QEAAXAEBVHashedString\@\@AEAVCommandOrigin\@\@W4CurrentCmdVersion\@\@\@Z
     */
    MCAPI void runOrDeferCommand(class HashedString const &, class CommandOrigin &, enum class CurrentCmdVersion);
    /**
     * @hash   359668497
     * @symbol  ?runOrDeferCommand\@MinecraftCommands\@\@QEAAXV?$not_null\@PEAVCommand\@\@\@gsl\@\@AEAVCommandOrigin\@\@W4CurrentCmdVersion\@\@\@Z
     */
    MCAPI void runOrDeferCommand(class gsl::not_null<class Command *>, class CommandOrigin &, enum class CurrentCmdVersion);
    /**
     * @hash   1725237249
     * @symbol  ?setRegistryNetworkUpdateCallback\@MinecraftCommands\@\@QEBAXV?$function\@$$A6AXAEBVPacket\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void setRegistryNetworkUpdateCallback(class std::function<void (class Packet const &)>) const;
    /**
     * @hash   -26916699
     * @symbol  ?shouldDeferCommand\@MinecraftCommands\@\@QEBA_NW4CurrentCmdVersion\@\@\@Z
     */
    MCAPI bool shouldDeferCommand(enum class CurrentCmdVersion) const;
    /**
     * @hash   2115606973
     * @symbol  ?tick\@MinecraftCommands\@\@QEAAXXZ
     */
    MCAPI void tick();
    /**
     * @hash   -1310912393
     * @symbol  ?getOutputType\@MinecraftCommands\@\@SA?AW4CommandOutputType\@\@AEBVCommandOrigin\@\@\@Z
     */
    MCAPI static enum class CommandOutputType getOutputType(class CommandOrigin const &);
    /**
     * @hash   -319090823
     * @symbol  ?initBlockEnum\@MinecraftCommands\@\@SAXAEAVCommandRegistry\@\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI static void initBlockEnum(class CommandRegistry &, class BaseGameVersion const &);
    /**
     * @hash   -1972785828
     * @symbol  ?initEntityEnum\@MinecraftCommands\@\@SAXAEAVCommandRegistry\@\@AEBVActorFactory\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI static void initEntityEnum(class CommandRegistry &, class ActorFactory const &, class Experiments const &);
    /**
     * @hash   191728752
     * @symbol  ?initItemEnum\@MinecraftCommands\@\@SAXVItemRegistryRef\@\@AEAVCommandRegistry\@\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI static void initItemEnum(class ItemRegistryRef, class CommandRegistry &, class BaseGameVersion const &);
    /**
     * @symbol  ?initItemTagEnum\@MinecraftCommands\@\@SAXVItemRegistryRef\@\@AEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void initItemTagEnum(class ItemRegistryRef, class CommandRegistry &);
    /**
     * @hash   -1489748844
     * @symbol  ?initStructureFeatureEnum\@MinecraftCommands\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void initStructureFeatureEnum(class CommandRegistry &);
    /**
     * @hash   40347250
     * @symbol  ?registerSharedClientServerEnums\@MinecraftCommands\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void registerSharedClientServerEnums(class CommandRegistry &);

};