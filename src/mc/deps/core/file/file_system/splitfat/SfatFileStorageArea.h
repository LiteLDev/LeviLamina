#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/BasicDirectoryStorageArea.h"
#include "mc/deps/core/file/FileAccessType.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileSystemImpl; }
namespace Core { class Result; }
namespace Core::SFAT { class SfatFileSystemImpl; }
// clang-format on

namespace Core::SFAT {

class SfatFileStorageArea : public ::Core::BasicDirectoryStorageArea<::Core::SFAT::SfatFileSystemImpl> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk437928;
    // NOLINTEND

public:
    // prevent constructor by default
    SfatFileStorageArea& operator=(SfatFileStorageArea const&);
    SfatFileStorageArea(SfatFileStorageArea const&);
    SfatFileStorageArea();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SfatFileStorageArea() /*override*/ = default;

    // vIndex: 5
    virtual ::Core::Result getUsedSize(uint64&) /*override*/;

    // vIndex: 2
    virtual ::std::unique_ptr<::Core::FileSystemImpl> createTransaction(::Core::FileAccessType) /*override*/;

    // vIndex: 31
    virtual ::Core::Result _commit() /*override*/;
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

} // namespace Core::SFAT
