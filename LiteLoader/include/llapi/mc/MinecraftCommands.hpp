/**
 * @file  MinecraftCommands.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
            return Global<MinecraftCommands>->executeCommand(std::make_shared<CommandContext>(cmd, std::unique_ptr<CommandOrigin>((CommandOrigin*)origin)), false);
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
            return Global<MinecraftCommands>->executeCommand(std::make_shared<CommandContext>(cmd, std::move(origin)), false);
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
     * @hash   1444887198
     * @symbol ??0MinecraftCommands@@QEAA@AEAVMinecraft@@@Z
     */
    MCAPI MinecraftCommands(class Minecraft &);
    /**
     * @hash   -1394490980
     * @symbol ?compileCommand@MinecraftCommands@@QEAAPEAVCommand@@AEBVHashedString@@AEAVCommandOrigin@@W4CurrentCmdVersion@@V?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@std@@@Z
     */
    MCAPI class Command * compileCommand(class HashedString const &, class CommandOrigin &, enum class CurrentCmdVersion, class std::function<void (std::string const &)>);
    /**
     * @hash   -1027422929
     * @symbol ?executeCommand@MinecraftCommands@@QEBA?AUMCRESULT@@V?$shared_ptr@VCommandContext@@@std@@_N@Z
     */
    MCAPI struct MCRESULT executeCommand(class std::shared_ptr<class CommandContext>, bool) const;
    /**
     * @hash   291433374
     * @symbol ?getRegistry@MinecraftCommands@@QEAAAEAVCommandRegistry@@XZ
     */
    MCAPI class CommandRegistry & getRegistry();
    /**
     * @hash   -1866212603
     * @symbol ?handleOutput@MinecraftCommands@@QEBAXAEBVCommandOrigin@@AEBVCommandOutput@@@Z
     */
    MCAPI void handleOutput(class CommandOrigin const &, class CommandOutput const &) const;
    /**
     * @hash   -1861627778
     * @symbol ?initCoreEnums@MinecraftCommands@@QEAAXVItemRegistryRef@@AEBVIWorldRegistriesProvider@@AEBVActorFactory@@AEBVExperiments@@AEBVBaseGameVersion@@@Z
     */
    MCAPI void initCoreEnums(class ItemRegistryRef, class IWorldRegistriesProvider const &, class ActorFactory const &, class Experiments const &, class BaseGameVersion const &);
    /**
     * @hash   1487943686
     * @symbol ?initCoreEnumsServer@MinecraftCommands@@QEAAXAEBVActorDefinitionGroup@@@Z
     */
    MCAPI void initCoreEnumsServer(class ActorDefinitionGroup const &);
    /**
     * @hash   2019705297
     * @symbol ?requestCommandExecution@MinecraftCommands@@QEBA?AUMCRESULT@@V?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@H_N@Z
     */
    MCAPI struct MCRESULT requestCommandExecution(std::unique_ptr<class CommandOrigin>, std::string const &, int, bool) const;
    /**
     * @hash   1610188095
     * @symbol ?runCommand@MinecraftCommands@@QEAAXAEAVCommand@@AEAVCommandOrigin@@@Z
     */
    MCAPI void runCommand(class Command &, class CommandOrigin &);
    /**
     * @hash   328182076
     * @symbol ?runCommand@MinecraftCommands@@QEAAXAEBVHashedString@@AEAVCommandOrigin@@W4CurrentCmdVersion@@@Z
     */
    MCAPI void runCommand(class HashedString const &, class CommandOrigin &, enum class CurrentCmdVersion);
    /**
     * @hash   -1982428351
     * @symbol ?setRegistryNetworkUpdateCallback@MinecraftCommands@@QEBAXV?$function@$$A6AXAEBVPacket@@@Z@std@@@Z
     */
    MCAPI void setRegistryNetworkUpdateCallback(class std::function<void (class Packet const &)>) const;
    /**
     * @hash   -721427305
     * @symbol ?getOutputType@MinecraftCommands@@SA?AW4CommandOutputType@@AEBVCommandOrigin@@@Z
     */
    MCAPI static enum class CommandOutputType getOutputType(class CommandOrigin const &);
    /**
     * @hash   270286633
     * @symbol ?initBlockEnum@MinecraftCommands@@SAXAEAVCommandRegistry@@AEBVBaseGameVersion@@@Z
     */
    MCAPI static void initBlockEnum(class CommandRegistry &, class BaseGameVersion const &);
    /**
     * @hash   780967824
     * @symbol ?initItemEnum@MinecraftCommands@@SAXVItemRegistryRef@@AEAVCommandRegistry@@AEBVBaseGameVersion@@@Z
     */
    MCAPI static void initItemEnum(class ItemRegistryRef, class CommandRegistry &, class BaseGameVersion const &);
    /**
     * @hash   -482922790
     * @symbol ?initItemTagEnum@MinecraftCommands@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void initItemTagEnum(class CommandRegistry &);
    /**
     * @symbol ?initStructureFeatureEnum@MinecraftCommands@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void initStructureFeatureEnum(class CommandRegistry &);

//private:
    /**
     * @hash   -304657980
     * @symbol ?_registerSharedClientServerEnums@MinecraftCommands@@AEAAXXZ
     */
    MCAPI void _registerSharedClientServerEnums();

private:

};