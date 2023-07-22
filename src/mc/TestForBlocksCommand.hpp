/**
 * @file  TestForBlocksCommand.hpp
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
 * @brief MC class TestForBlocksCommand.
 *
 */
class TestForBlocksCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TESTFORBLOCKSCOMMAND
public:
    class TestForBlocksCommand& operator=(class TestForBlocksCommand const &) = delete;
    TestForBlocksCommand(class TestForBlocksCommand const &) = delete;
    TestForBlocksCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~TestForBlocksCommand();
    /**
     * @vftbl  1
     * @symbol  ?execute\@TestForBlocksCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?setup\@TestForBlocksCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};