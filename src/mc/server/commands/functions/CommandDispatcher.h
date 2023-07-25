#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandDispatcher {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDDISPATCHER
public:
    CommandDispatcher& operator=(CommandDispatcher const&) = delete;
    CommandDispatcher(CommandDispatcher const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?performCommand\@CommandDispatcher\@\@UEAAHAEBVCommandOrigin\@\@AEAVCommand\@\@\@Z
     */
    virtual int performCommand(class CommandOrigin const&, class Command&);
    /**
     * @symbol ??0CommandDispatcher\@\@QEAA\@XZ
     */
    MCAPI CommandDispatcher();
};
