/**
 * @file  Command.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "CommandRegistry.hpp"
#include "CommandParameterData.hpp"
#include "CommandFlag.hpp"
class CommandRegistry;

class CommandOutput;

#undef BEFORE_EXTRA

/**
 * @brief MC class Command.
 *
 */
class Command {

#define AFTER_EXTRA
    // Add Member There

protected:
    int version;                       // 8
    CommandRegistry* registry;         // 16
    CommandRegistry::Symbol symbol;    // 24,
    CommandPermissionLevel permission; // 28
    CommandFlag flag;                  // 30

public:
    template <typename T>
    static bool checkHasTargets(CommandSelectorResults<T> const& a, CommandOutput& b) {
        bool (*sym)(CommandSelectorResults<T> const& a, CommandOutput& b);
        if constexpr (std::is_same<T, class Actor>()) {
            sym = (decltype(sym))dlsym("??$checkHasTargets@VActor@@@Command@@KA_NAEBV?$CommandSelectorResults@VActor@@@@AEAVCommandOutput@@@Z");
        } else {
            sym = (decltype(sym))dlsym("??$checkHasTargets@VPlayer@@@Command@@KA_NAEBV?$CommandSelectorResults@VPlayer@@@@AEAVCommandOutput@@@Z");
        }
        return sym(a, b);
    }
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMAND
public:
    class Command& operator=(class Command const &) = delete;
    Command(class Command const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~Command();
    /**
     * @hash   1309234419
     * @vftbl  1
     * @symbol  ?execute\@XPCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const = 0;
    /**
     * @hash   1642452247
     * @symbol  ??0Command\@\@QEAA\@XZ
     */
    MCAPI Command();
    /**
     * @hash   -1757810696
     * @symbol  ?getCommandName\@Command\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getCommandName() const;
    /**
     * @hash   -839069622
     * @symbol  ?getVersion\@Command\@\@QEBAHXZ
     */
    MCAPI int getVersion() const;
    /**
     * @hash   542753407
     * @symbol  ?hasFlag\@Command\@\@QEBA_NUCommandFlag\@\@\@Z
     */
    MCAPI bool hasFlag(struct CommandFlag) const;
    /**
     * @hash   -2032101825
     * @symbol  ?run\@Command\@\@QEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void run(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   852380815
     * @symbol  ?WILDCARD_TOKEN\@Command\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const WILDCARD_TOKEN;
    /**
     * @hash   -223596510
     * @symbol  ?validRange\@Command\@\@SA_NHHHAEAVCommandOutput\@\@\@Z
     */
    MCAPI static bool validRange(int, int, int, class CommandOutput &);
    /**
     * @hash   -331708364
     * @symbol  ?validRange\@Command\@\@SA_NMMMAEAVCommandOutput\@\@\@Z
     */
    MCAPI static bool validRange(float, float, float, class CommandOutput &);

//protected:
    /**
     * @hash   -1977210959
     * @symbol  ?getRegistry\@Command\@\@IEBAAEBVCommandRegistry\@\@XZ
     */
    MCAPI class CommandRegistry const & getRegistry() const;
    /**
     * @hash   1684395104
     * @symbol  ?sendTelemetry\@Command\@\@IEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    MCAPI void sendTelemetry(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -1590562409
     * @symbol  ?shouldSendTelemetry\@Command\@\@IEBA_NAEBVCommandOrigin\@\@\@Z
     */
    MCAPI bool shouldSendTelemetry(class CommandOrigin const &) const;
    /**
     * @hash   -90953076
     * @symbol  ?getPlayerFromOrigin\@Command\@\@KAPEAVPlayer\@\@AEBVCommandOrigin\@\@\@Z
     */
    MCAPI static class Player * getPlayerFromOrigin(class CommandOrigin const &);
    /**
     * @hash   1398585762
     * @symbol  ?isTemplateLockedAction\@Command\@\@KA_NAEBVCommandOrigin\@\@\@Z
     */
    MCAPI static bool isTemplateLockedAction(class CommandOrigin const &);
    /**
     * @hash   -609093928
     * @symbol  ?isWildcard\@Command\@\@KA_NAEBVCommandSelectorBase\@\@\@Z
     */
    MCAPI static bool isWildcard(class CommandSelectorBase const &);
    /**
     * @hash   1206151476
     * @symbol  ?validData\@Command\@\@KA_NHAEAGAEAVCommandOutput\@\@\@Z
     */
    MCAPI static bool validData(int, unsigned short &, class CommandOutput &);

protected:

};