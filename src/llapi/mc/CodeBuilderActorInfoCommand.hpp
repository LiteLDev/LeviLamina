/**
 * @file  CodeBuilderActorInfoCommand.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CodeBuilderActorInfoCommand.
 *
 */
class CodeBuilderActorInfoCommand : public Command {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDERACTORINFOCOMMAND
public:
    class CodeBuilderActorInfoCommand& operator=(class CodeBuilderActorInfoCommand const &) = delete;
    CodeBuilderActorInfoCommand(class CodeBuilderActorInfoCommand const &) = delete;
    CodeBuilderActorInfoCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~CodeBuilderActorInfoCommand();
    /**
     * @vftbl  1
     * @symbol  ?execute\@CodeBuilderActorInfoCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol  ?setup\@CodeBuilderActorInfoCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry &);

};