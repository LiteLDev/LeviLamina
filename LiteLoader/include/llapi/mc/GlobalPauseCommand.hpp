/**
 * @file  GlobalPauseCommand.hpp
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
 * @brief MC class GlobalPauseCommand.
 *
 */
class GlobalPauseCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GLOBALPAUSECOMMAND
public:
    class GlobalPauseCommand& operator=(class GlobalPauseCommand const &) = delete;
    GlobalPauseCommand(class GlobalPauseCommand const &) = delete;
    GlobalPauseCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~GlobalPauseCommand();
    /**
     * @vftbl  1
     * @symbol  ?execute\@GlobalPauseCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?setup\@GlobalPauseCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};