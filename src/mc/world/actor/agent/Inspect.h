#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentCommands {

class Inspect {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTCOMMANDS_INSPECT
public:
    Inspect& operator=(Inspect const&) = delete;
    Inspect(Inspect const&)            = delete;
    Inspect()                          = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?execute\@Inspect\@AgentCommands\@\@EEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@Inspect\@AgentCommands\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
};

}; // namespace AgentCommands
