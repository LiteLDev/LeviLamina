/**
 * @file  TestForBlockCommand.hpp
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
 * @brief MC class TestForBlockCommand.
 *
 */
class TestForBlockCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TESTFORBLOCKCOMMAND
public:
    class TestForBlockCommand& operator=(class TestForBlockCommand const &) = delete;
    TestForBlockCommand(class TestForBlockCommand const &) = delete;
    TestForBlockCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~TestForBlockCommand();
    /**
     * @hash   583974526
     * @vftbl  1
     * @symbol ?execute@TestForBlockCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   47874224
     * @symbol ?setup@TestForBlockCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};