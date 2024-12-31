#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/BasicDirectoryStorageArea.h"
#include "mc/deps/core/file/FileAccessType.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileSystemImpl; }
namespace Core { class MemoryFileSystem; }
// clang-format on

namespace Core {

class MemoryFileStorageArea : public ::Core::BasicDirectoryStorageArea<::Core::MemoryFileSystem> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk39293d;
    // NOLINTEND

public:
    // prevent constructor by default
    MemoryFileStorageArea& operator=(MemoryFileStorageArea const&);
    MemoryFileStorageArea(MemoryFileStorageArea const&);
    MemoryFileStorageArea();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::std::unique_ptr<::Core::FileSystemImpl> createTransaction(::Core::FileAccessType) /*override*/;

    // vIndex: 0
    virtual ~MemoryFileStorageArea() /*override*/ = default;
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

} // namespace Core
