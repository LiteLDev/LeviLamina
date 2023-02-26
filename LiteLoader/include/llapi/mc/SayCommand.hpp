/**
 * @file  SayCommand.hpp
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
 * @brief MC class SayCommand.
 *
 */
class SayCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SAYCOMMAND
public:
    class SayCommand& operator=(class SayCommand const &) = delete;
    SayCommand(class SayCommand const &) = delete;
    SayCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SayCommand();
    /**
     * @vftbl  1
     * @symbol  ?execute\@SayCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?setup\@SayCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @symbol  ?_sendMessage\@SayCommand\@\@AEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0AEBUCommandOriginIdentity\@\@AEAVLevel\@\@\@Z
     */
    MCAPI void _sendMessage(std::string const &, std::string const &, struct CommandOriginIdentity const &, class Level &) const;
    /**
     * @symbol  ?_trySendSayCommandEvent\@SayCommand\@\@AEBA_NAEBVPlayer\@\@AEAVLevel\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool _trySendSayCommandEvent(class Player const &, class Level &, std::string const &) const;

private:

};