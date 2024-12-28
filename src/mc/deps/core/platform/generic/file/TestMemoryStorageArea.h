#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/file/file_system/memory_file_system/MemoryFileStorageArea.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileSystemImpl; }
namespace Core { class Result; }
// clang-format on

namespace Bedrock {

class TestMemoryStorageArea : public ::Core::MemoryFileStorageArea {
public:
    // prevent constructor by default
    TestMemoryStorageArea& operator=(TestMemoryStorageArea const&);
    TestMemoryStorageArea(TestMemoryStorageArea const&);
    TestMemoryStorageArea();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::std::unique_ptr<::Core::FileSystemImpl> createTransaction(::Core::FileAccessType) /*override*/;

    // vIndex: 3
    virtual bool supportsSizeQuery() const /*override*/;

    // vIndex: 5
    virtual ::Core::Result getUsedSize(uint64&) /*override*/;

    // vIndex: 4
    virtual uint64 getTotalSize() const /*override*/;

    // vIndex: 0
    virtual ~TestMemoryStorageArea() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::Core::FileSystemImpl> $createTransaction(::Core::FileAccessType);

    MCAPI bool $supportsSizeQuery() const;

    MCAPI ::Core::Result $getUsedSize(uint64&);

    MCAPI uint64 $getTotalSize() const;
    // NOLINTEND
};

} // namespace Bedrock
