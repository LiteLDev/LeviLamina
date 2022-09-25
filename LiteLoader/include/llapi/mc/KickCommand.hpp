/**
 * @file  KickCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class KickCommand.
 *
 */
class KickCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_KICKCOMMAND
public:
    class KickCommand& operator=(class KickCommand const &) = delete;
    KickCommand(class KickCommand const &) = delete;
    KickCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~KickCommand();
    /**
     * @hash   1704522046
     * @vftbl  1
     * @symbol ?execute@KickCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -70943136
     * @symbol ?setup@KickCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @hash   -2020006103
     * @symbol ?_findTarget@KickCommand@@AEBAPEBVPlayer@@AEBVCommandOrigin@@AEAVCommandOutput@@PEAVLevel@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@33@Z
     */
    MCAPI class Player const * _findTarget(class CommandOrigin const &, class CommandOutput &, class Level *, std::string const &, std::string const &, std::string const &) const;
    /**
     * @hash   675002928
     * @symbol ?_kickPlayer@KickCommand@@AEBAXAEBVCommandOrigin@@AEAVCommandOutput@@AEBVPlayer@@PEAVLevel@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@4@Z
     */
    MCAPI void _kickPlayer(class CommandOrigin const &, class CommandOutput &, class Player const &, class Level *, std::string const &, std::string const &) const;
    /**
     * @hash   -1271381736
     * @symbol ?_loopPlayers@KickCommand@@AEBAPEBVPlayer@@AEBVCommandOrigin@@AEAVCommandOutput@@PEAVLevel@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@3V?$function@$$A6A_NPEBVPlayer@@@Z@7@@Z
     */
    MCAPI class Player const * _loopPlayers(class CommandOrigin const &, class CommandOutput &, class Level *, std::string const &, std::string const &, class std::function<bool (class Player const *)>) const;

private:

};