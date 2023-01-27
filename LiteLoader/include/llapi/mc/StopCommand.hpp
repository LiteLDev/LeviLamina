/**
 * @file  StopCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StopCommand.
 *
 */
class StopCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STOPCOMMAND
public:
    class StopCommand& operator=(class StopCommand const &) = delete;
    StopCommand(class StopCommand const &) = delete;
    StopCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~StopCommand();
    /**
     * @hash   -1156779974
     * @vftbl  1
     * @symbol  ?execute\@StopCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   1036310737
     * @symbol  ?setup\@StopCommand\@\@SAXAEAVCommandRegistry\@\@AEAVDedicatedServer\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &, class DedicatedServer &);

//private:

private:
    /**
     * @hash   1542410333
     * @symbol  ?mServer\@StopCommand\@\@0PEAVDedicatedServer\@\@EA
     */
    MCAPI static class DedicatedServer * mServer;

};