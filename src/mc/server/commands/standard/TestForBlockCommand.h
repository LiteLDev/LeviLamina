#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/Command.h"

class TestForBlockCommand : public ::Command {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TESTFORBLOCKCOMMAND
public:
    TestForBlockCommand& operator=(TestForBlockCommand const&) = delete;
    TestForBlockCommand(TestForBlockCommand const&)            = delete;
    TestForBlockCommand()                                      = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@TestForBlockCommand\@\@UEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@TestForBlockCommand\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
};
