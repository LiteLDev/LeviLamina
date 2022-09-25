/**
 * @file  XPCommand.hpp
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
 * @brief MC class XPCommand.
 *
 */
class XPCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_XPCOMMAND
public:
    class XPCommand& operator=(class XPCommand const &) = delete;
    XPCommand(class XPCommand const &) = delete;
    XPCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~XPCommand();
    /**
     * @hash   351645552
     * @vftbl  1
     * @symbol ?execute@XPCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   1555515216
     * @symbol ?setup@XPCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};