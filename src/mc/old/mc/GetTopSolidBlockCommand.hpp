/**
 * @file  GetTopSolidBlockCommand.hpp
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
 * @brief MC class GetTopSolidBlockCommand.
 *
 */
class GetTopSolidBlockCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GETTOPSOLIDBLOCKCOMMAND
public:
    class GetTopSolidBlockCommand& operator=(class GetTopSolidBlockCommand const &) = delete;
    GetTopSolidBlockCommand(class GetTopSolidBlockCommand const &) = delete;
    GetTopSolidBlockCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~GetTopSolidBlockCommand();
    /**
     * @vftbl  1
     * @symbol  ?execute\@GetTopSolidBlockCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?setup\@GetTopSolidBlockCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};