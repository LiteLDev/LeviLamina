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
    // vIndex: 0, symbol: __gen_??1IFileReadAccess@@UEAA@XZ
    virtual ~IFileReadAccess() = default;

    // vIndex: 1, symbol: ?fread@FileSystemFileReadAccess@FileSystemFileAccess@@UEBA_KPEAX_K10@Z
    virtual uint64 fread(void*, uint64, uint64, void*) const = 0;

    // NOLINTEND
};
