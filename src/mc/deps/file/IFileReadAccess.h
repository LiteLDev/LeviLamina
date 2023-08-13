#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFileReadAccess {

public:
    // prevent constructor by default
    IFileReadAccess& operator=(IFileReadAccess const&) = delete;
    IFileReadAccess(IFileReadAccess const&)            = delete;
    IFileReadAccess()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?fread\@MemoryMappedFileReadAccess\@MemoryMappedFileAccess\@\@UEBA_KPEAX_K10\@Z
     */
    virtual uint64_t fread(void*, uint64_t, uint64_t, void*) const = 0;
    // NOLINTEND
};
