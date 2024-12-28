#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/file_system/memory_file_system/MemoryFileSystemEntry.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Result; }
// clang-format on

namespace Core {

class MemoryFileSystemEntryFile : public ::Core::MemoryFileSystemEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk1869c1;
    ::ll::UntypedStorage<8, 24> mUnk38561b;
    // NOLINTEND

public:
    // prevent constructor by default
    MemoryFileSystemEntryFile& operator=(MemoryFileSystemEntryFile const&);
    MemoryFileSystemEntryFile(MemoryFileSystemEntryFile const&);
    MemoryFileSystemEntryFile();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Core::Result canRemove() /*override*/;

    // vIndex: 2
    virtual uint64 getSize() const /*override*/;

    // vIndex: 0
    virtual ~MemoryFileSystemEntryFile() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Core::Result $canRemove();

    MCAPI uint64 $getSize() const;
    // NOLINTEND
};

} // namespace Core
