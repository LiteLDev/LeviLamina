/**
 * @file  TellRawCommand.hpp
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
 * @brief MC class TellRawCommand.
 *
 */
class TellRawCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TELLRAWCOMMAND
public:
    class TellRawCommand& operator=(class TellRawCommand const &) = delete;
    TellRawCommand(class TellRawCommand const &) = delete;
    TellRawCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~TellRawCommand();
    /**
     * @hash   924664671
     * @vftbl  1
     * @symbol ?execute@TellRawCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -1399271876
     * @symbol ?setup@TellRawCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};