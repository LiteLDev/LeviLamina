#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/file_system/memory_file_system/MemoryFileSystemEntry.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Result; }
// clang-format on

namespace Core {

class MemoryFileSystemEntryDir : public ::Core::MemoryFileSystemEntry {
public:
    // MemoryFileSystemEntryDir inner types declare
    // clang-format off
    struct MemoryFileSystemEntryItem;
    // clang-format on

    // MemoryFileSystemEntryDir inner types define
    struct MemoryFileSystemEntryItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk8d6ff9;
        ::ll::UntypedStorage<8, 8> mUnk9befd9;
        // NOLINTEND

    public:
        // prevent constructor by default
        MemoryFileSystemEntryItem& operator=(MemoryFileSystemEntryItem const&);
        MemoryFileSystemEntryItem(MemoryFileSystemEntryItem const&);
        MemoryFileSystemEntryItem();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk909f86;
    // NOLINTEND

public:
    // prevent constructor by default
    MemoryFileSystemEntryDir& operator=(MemoryFileSystemEntryDir const&);
    MemoryFileSystemEntryDir(MemoryFileSystemEntryDir const&);
    MemoryFileSystemEntryDir();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual uint64 getSize() const /*override*/;

    virtual ::Core::Result canRemove() /*override*/;

    virtual ~MemoryFileSystemEntryDir() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Core
