#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FunctionEntry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FUNCTIONENTRY
public:
    FunctionEntry& operator=(FunctionEntry const&) = delete;
    FunctionEntry(FunctionEntry const&)            = delete;
    FunctionEntry()                                = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?execute\@FunctionEntry\@\@UEAAXAEAVFunctionManager\@\@AEBVCommandOrigin\@\@W4FunctionQueueOrder\@\@\@Z
     */
    virtual void execute(class FunctionManager&, class CommandOrigin const&, enum class FunctionQueueOrder);
    /**
     * @symbol ?getErrorState\@FunctionEntry\@\@QEBA?AW4FunctionState\@\@XZ
     */
    MCAPI enum class FunctionState getErrorState() const;
};
