#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandFunctionEntry {

public:
    // prevent constructor by default
    CommandFunctionEntry& operator=(CommandFunctionEntry const&) = delete;
    CommandFunctionEntry(CommandFunctionEntry const&)            = delete;
    CommandFunctionEntry()                                       = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?execute\@CommandFunctionEntry\@\@UEAAXAEAVFunctionManager\@\@AEBVCommandOrigin\@\@W4FunctionQueueOrder\@\@\@Z
     */
    virtual void execute(class FunctionManager&, class CommandOrigin const&, enum class FunctionQueueOrder); // NOLINT
};
