#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentCommands {

class Interact {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTCOMMANDS_INTERACT
public:
    Interact& operator=(Interact const&) = delete;
    Interact(Interact const&)            = delete;
    Interact()                           = delete;
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
     * @symbol ?execute\@Interact\@AgentCommands\@\@EEBAXAEBVCommandOrigin\@\@AEAVCommandOutput\@\@\@Z
     */
    virtual void execute(class CommandOrigin const&, class CommandOutput&) const;
    /**
     * @symbol ?setup\@Interact\@AgentCommands\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void setup(class CommandRegistry&);
};

}; // namespace AgentCommands
