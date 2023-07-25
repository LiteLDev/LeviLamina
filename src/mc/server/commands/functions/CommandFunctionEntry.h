#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandFunctionEntry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDFUNCTIONENTRY
public:
    CommandFunctionEntry& operator=(CommandFunctionEntry const&) = delete;
    CommandFunctionEntry(CommandFunctionEntry const&)            = delete;
    CommandFunctionEntry()                                       = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?execute\@CommandFunctionEntry\@\@UEAAXAEAVFunctionManager\@\@AEBVCommandOrigin\@\@W4FunctionQueueOrder\@\@\@Z
     */
    virtual void execute(class FunctionManager&, class CommandOrigin const&, enum class FunctionQueueOrder);
};
