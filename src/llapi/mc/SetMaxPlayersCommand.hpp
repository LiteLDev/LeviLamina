/**
 * @file  SetMaxPlayersCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SetMaxPlayersCommand.
 *
 */
class SetMaxPlayersCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETMAXPLAYERSCOMMAND
public:
    class SetMaxPlayersCommand& operator=(class SetMaxPlayersCommand const &) = delete;
    SetMaxPlayersCommand(class SetMaxPlayersCommand const &) = delete;
    SetMaxPlayersCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SetMaxPlayersCommand();
    /**
     * @vftbl  1
     * @symbol  ?execute\@SetMaxPlayersCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?setup\@SetMaxPlayersCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};