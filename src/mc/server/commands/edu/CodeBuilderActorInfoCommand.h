#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class CodeBuilderActorInfoCommand : public ::Command {

public:
    // prevent constructor by default
    CodeBuilderActorInfoCommand& operator=(CodeBuilderActorInfoCommand const&) = delete;
    CodeBuilderActorInfoCommand(CodeBuilderActorInfoCommand const&)            = delete;
    CodeBuilderActorInfoCommand()                                              = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 2
     * @symbol ?execute\@CodeBuilderActorInfoCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@CodeBuilderActorInfoCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
    // NOLINTEND
};
