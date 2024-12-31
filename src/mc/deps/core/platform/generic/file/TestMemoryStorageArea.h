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
    virtual ~TestMemoryStorageArea() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock
