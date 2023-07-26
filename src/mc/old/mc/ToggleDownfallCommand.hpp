/**
 * @file  ToggleDownfallCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ToggleDownfallCommand.
 *
 */
class ToggleDownfallCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TOGGLEDOWNFALLCOMMAND
public:
    class ToggleDownfallCommand& operator=(class ToggleDownfallCommand const &) = delete;
    ToggleDownfallCommand(class ToggleDownfallCommand const &) = delete;
    ToggleDownfallCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ToggleDownfallCommand();
    /**
     * @vftbl  1
     * @symbol  ?execute\@ToggleDownfallCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?setup\@ToggleDownfallCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};