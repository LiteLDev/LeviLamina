/**
 * @file  TellCommand.hpp
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
 * @brief MC class TellCommand.
 *
 */
class TellCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TELLCOMMAND
public:
    class TellCommand& operator=(class TellCommand const &) = delete;
    TellCommand(class TellCommand const &) = delete;
    TellCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~TellCommand();
    /**
     * @vftbl  1
     * @symbol  ?execute\@TellCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?setup\@TellCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @symbol  ?_sendMessageToPlayers\@TellCommand\@\@AEBAXAEBV?$CommandSelectorResults\@VPlayer\@\@\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1AEBUCommandOriginIdentity\@\@AEAVLevel\@\@\@Z
     */
    MCAPI void _sendMessageToPlayers(class CommandSelectorResults<class Player> const &, std::string const &, std::string const &, struct CommandOriginIdentity const &, class Level &) const;

private:

};