/**
 * @file  Command.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol __unk_destructor_0
     */
    virtual ~Command();
    /**
     * @hash   1309234419
     * @vftbl  1
     * @symbol ?execute@XPCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const = 0;
    /**
     * @hash   -2072440073
     * @symbol ??0Command@@QEAA@XZ
     */
    MCAPI Command();
    /**
     * @hash   -1178335384
     * @symbol ?getCommandName@Command@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getCommandName() const;
    /**
     * @hash   1121813567
     * @symbol ?hasFlag@Command@@QEBA_NUCommandFlag@@@Z
     */
    MCAPI bool hasFlag(struct CommandFlag) const;
    /**
     * @hash   -1454333249
     * @symbol ?run@Command@@QEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    MCAPI void run(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -826739889
     * @symbol ?WILDCARD_TOKEN@Command@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const WILDCARD_TOKEN;
    /**
     * @hash   354079810
     * @symbol ?validRange@Command@@SA_NHHHAEAVCommandOutput@@@Z
     */
    MCAPI static bool validRange(int, int, int, class CommandOutput &);
    /**
     * @hash   245860324
     * @symbol ?validRange@Command@@SA_NMMMAEAVCommandOutput@@@Z
     */
    MCAPI static bool validRange(float, float, float, class CommandOutput &);

//protected:
    /**
     * @hash   -2080983583
     * @symbol ?getRegistry@Command@@IEBAAEBVCommandRegistry@@XZ
     */
    MCAPI class CommandRegistry const & getRegistry() const;
    /**
     * @hash   -2032834368
     * @symbol ?sendTelemetry@Command@@IEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    MCAPI void sendTelemetry(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -1012870713
     * @symbol ?shouldSendTelemetry@Command@@IEBA_NAEBVCommandOrigin@@@Z
     */
    MCAPI bool shouldSendTelemetry(class CommandOrigin const &) const;
    /**
     * @hash   488245468
     * @symbol ?getPlayerFromOrigin@Command@@KAPEAVPlayer@@AEBVCommandOrigin@@@Z
     */
    MCAPI static class Player * getPlayerFromOrigin(class CommandOrigin const &);
    /**
     * @hash   1977492162
     * @symbol ?isTemplateLockedAction@Command@@KA_NAEBVCommandOrigin@@@Z
     */
    MCAPI static bool isTemplateLockedAction(class CommandOrigin const &);
    /**
     * @hash   -30233656
     * @symbol ?isWildcard@Command@@KA_NAEBVCommandSelectorBase@@@Z
     */
    MCAPI static bool isWildcard(class CommandSelectorBase const &);
    /**
     * @hash   1783827796
     * @symbol ?validData@Command@@KA_NHAEAGAEAVCommandOutput@@@Z
     */
    MCAPI static bool validData(int, unsigned short &, class CommandOutput &);

protected:

};