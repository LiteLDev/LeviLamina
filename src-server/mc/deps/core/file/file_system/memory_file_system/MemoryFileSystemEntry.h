#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Result; }
// clang-format on

namespace Core {

class MemoryFileSystemEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk3818cf;
    ::ll::UntypedStorage<1, 1>  mUnk47bbac;
    ::ll::UntypedStorage<8, 8>  mUnk41bf05;
    ::ll::UntypedStorage<8, 8>  mUnk6df038;
    ::ll::UntypedStorage<8, 32> mUnk539b76;
    // NOLINTEND

public:
    // prevent constructor by default
    MemoryFileSystemEntry& operator=(MemoryFileSystemEntry const&);
    MemoryFileSystemEntry(MemoryFileSystemEntry const&);
    MemoryFileSystemEntry();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MemoryFileSystemEntry() = default;

    // vIndex: 1
    virtual ::Core::Result canRemove() = 0;

    // vIndex: 2
    virtual uint64 getSize() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Core
