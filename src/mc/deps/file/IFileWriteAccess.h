#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFileWriteAccess {

public:
    // prevent constructor by default
    IFileWriteAccess& operator=(IFileWriteAccess const&) = delete;
    IFileWriteAccess(IFileWriteAccess const&)            = delete;
    IFileWriteAccess()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?fwrite\@MemoryMappedFileWriteAccess\@MemoryMappedFileAccess\@\@UEAA_KPEBX_K1PEAX\@Z
     */
    virtual uint64_t fwrite(void const*, uint64_t, uint64_t, void*) = 0;
    // NOLINTEND
};
