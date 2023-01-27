/**
 * @file  MeCommand.hpp
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
 * @brief MC class MeCommand.
 *
 */
class MeCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MECOMMAND
public:
    class MeCommand& operator=(class MeCommand const &) = delete;
    MeCommand(class MeCommand const &) = delete;
    MeCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MeCommand();
    /**
     * @hash   2106240800
     * @vftbl  1
     * @symbol  ?execute\@MeCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   1574285776
     * @symbol  ?setup\@MeCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &);

//private:
    /**
     * @hash   -1211698358
     * @symbol  ?_sendMessage\@MeCommand\@\@AEBAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUCommandOriginIdentity\@\@AEBVLevel\@\@\@Z
     */
    MCAPI void _sendMessage(std::string const &, struct CommandOriginIdentity const &, class Level const &) const;

private:

};