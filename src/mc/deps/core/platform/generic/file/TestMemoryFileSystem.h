#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/file_system/memory_file_system/MemoryFileSystem.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class MemoryFileSystemEntryFile; }
// clang-format on

namespace Bedrock {

class TestMemoryFileSystem : public ::Core::MemoryFileSystem {
public:
    // prevent constructor by default
    TestMemoryFileSystem& operator=(TestMemoryFileSystem const&);
    TestMemoryFileSystem(TestMemoryFileSystem const&);
    TestMemoryFileSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 49
    virtual ::std::unique_ptr<::Core::FileImpl>
    _createMemoryFileHandle(::Core::MemoryFileSystemEntryFile*, ::Core::FileOpenMode, uint64) /*override*/;

    // vIndex: 0
    virtual ~TestMemoryFileSystem() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::Core::FileImpl>
    $_createMemoryFileHandle(::Core::MemoryFileSystemEntryFile*, ::Core::FileOpenMode, uint64);
    // NOLINTEND
};

} // namespace Bedrock
