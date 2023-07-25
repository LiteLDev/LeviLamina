#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class CodeBuilderCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDERCOMMAND
public:
    CodeBuilderCommand& operator=(CodeBuilderCommand const&) = delete;
    CodeBuilderCommand(CodeBuilderCommand const&)            = delete;
    CodeBuilderCommand()                                     = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@CodeBuilderCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@CodeBuilderCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
};
