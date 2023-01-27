/**
 * @file  PlayAnimationCommand.hpp
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
 * @brief MC class PlayAnimationCommand.
 *
 */
class PlayAnimationCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYANIMATIONCOMMAND
public:
    class PlayAnimationCommand& operator=(class PlayAnimationCommand const &) = delete;
    PlayAnimationCommand(class PlayAnimationCommand const &) = delete;
    PlayAnimationCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~PlayAnimationCommand();
    /**
     * @hash   1812509736
     * @vftbl  1
     * @symbol  ?execute\@PlayAnimationCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   1330561804
     * @symbol  ?setup\@PlayAnimationCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &);

//private:

private:
    /**
     * @hash   -1368837375
     * @symbol  ?mStopExpressionVersion\@PlayAnimationCommand\@\@0W4MolangVersion\@\@B
     */
    MCAPI static enum class MolangVersion const mStopExpressionVersion;

};