#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IFileReadAccess {
public:
    // prevent constructor by default
    IFileReadAccess& operator=(IFileReadAccess const&);
    IFileReadAccess(IFileReadAccess const&);
    IFileReadAccess();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?fread@MemoryMappedFileReadAccess@MemoryMappedFileAccess@@UEBA_KPEAX_K10@Z
    virtual uint64 fread(void*, uint64, uint64, void*) const = 0;

    // NOLINTEND
};
