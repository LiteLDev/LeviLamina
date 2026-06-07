#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/file_system/memory_file_system/MemoryFileSystemEntry.h"

namespace Core {

class MemoryFileSystemEntryFile : public ::Core::MemoryFileSystemEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk822d93;
    ::ll::UntypedStorage<8, 24> mUnk1f225d;
    // NOLINTEND

public:
    // prevent constructor by default
    MemoryFileSystemEntryFile& operator=(MemoryFileSystemEntryFile const&);
    MemoryFileSystemEntryFile(MemoryFileSystemEntryFile const&);
    MemoryFileSystemEntryFile();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canRemove() const /*override*/;

    virtual uint64 getSize() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Core
