/**
 * @file  MC/DeOpCommand.hpp
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
 * @brief MC class DeOpCommand.
 *
 */
class DeOpCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEOPCOMMAND
public:
    class DeOpCommand& operator=(class DeOpCommand const &) = delete;
    DeOpCommand(class DeOpCommand const &) = delete;
    DeOpCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~DeOpCommand();
    /**
     * @hash   -1842870598
     * @vftbl  1
     * @symbol ?execute@DeOpCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -522464976
     * @symbol ?setup@DeOpCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};