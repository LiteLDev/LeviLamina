#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class MemoryFileSystemEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk3818cf;
    ::ll::UntypedStorage<1, 1>  mUnk47bbac;
    ::ll::UntypedStorage<8, 8>  mUnk41bf05;
    ::ll::UntypedStorage<8, 8>  mUnk6df038;
    ::ll::UntypedStorage<8, 64> mUnk905541;
    ::ll::UntypedStorage<8, 8>  mUnka2d20b;
    ::ll::UntypedStorage<8, 32> mUnk132bae;
    // NOLINTEND

public:
    // prevent constructor by default
    MemoryFileSystemEntry& operator=(MemoryFileSystemEntry const&);
    MemoryFileSystemEntry(MemoryFileSystemEntry const&);
    MemoryFileSystemEntry();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MemoryFileSystemEntry() = default;

    virtual bool canRemove() const = 0;

    virtual uint64 getSize() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Core
