/**
 * @file  WSServerCommand.hpp
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
 * @brief MC class WSServerCommand.
 *
 */
class WSServerCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WSSERVERCOMMAND
public:
    class WSServerCommand& operator=(class WSServerCommand const &) = delete;
    WSServerCommand(class WSServerCommand const &) = delete;
    WSServerCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~WSServerCommand();
    /**
     * @hash   -1705632953
     * @vftbl  1
     * @symbol ?execute@WSServerCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -2131223376
     * @symbol ?setup@WSServerCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};