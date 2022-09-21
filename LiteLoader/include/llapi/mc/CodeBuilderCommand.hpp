/**
 * @file  MC/CodeBuilderCommand.hpp
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
 * @brief MC class CodeBuilderCommand.
 *
 */
class CodeBuilderCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDERCOMMAND
public:
    class CodeBuilderCommand& operator=(class CodeBuilderCommand const &) = delete;
    CodeBuilderCommand(class CodeBuilderCommand const &) = delete;
    CodeBuilderCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~CodeBuilderCommand();
    /**
     * @hash   -645893562
     * @vftbl  1
     * @symbol ?execute@CodeBuilderCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @hash   -1950316452
     * @symbol ?setup@CodeBuilderCommand@@SAXAEAVCommandRegistry@@@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};