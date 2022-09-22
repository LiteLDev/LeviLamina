/**
 * @file  SetWorldSpawnCommand.hpp
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
 * @brief MC class SetWorldSpawnCommand.
 *
 */
class SetWorldSpawnCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETWORLDSPAWNCOMMAND
public:
    class SetWorldSpawnCommand& operator=(class SetWorldSpawnCommand const &) = delete;
    SetWorldSpawnCommand(class SetWorldSpawnCommand const &) = delete;
    SetWorldSpawnCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SetWorldSpawnCommand();
    /**
     * @hash   -964475133
     * @vftbl  1
     * @symbol ?execute@SetWorldSpawnCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -1450439412
     * @symbol ?setup@SetWorldSpawnCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};