#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandDispatcher {

public:
    // prevent constructor by default
    CommandDispatcher& operator=(CommandDispatcher const&) = delete;
    CommandDispatcher(CommandDispatcher const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?performCommand\@CommandDispatcher\@\@UEAAHAEBVCommandOrigin\@\@AEAVCommand\@\@\@Z
     */
    virtual int performCommand(class CommandOrigin const&, class Command&); // NOLINT
    /**
     * @symbol ??0CommandDispatcher\@\@QEAA\@XZ
     */
    MCAPI CommandDispatcher(); // NOLINT
};
