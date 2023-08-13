#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/functions/IFunctionEntry.h"

class FunctionEntry : public ::IFunctionEntry {

public:
    // prevent constructor by default
    FunctionEntry& operator=(FunctionEntry const&) = delete;
    FunctionEntry(FunctionEntry const&)            = delete;
    FunctionEntry()                                = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
