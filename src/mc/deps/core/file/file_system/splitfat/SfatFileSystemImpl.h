#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/DirectoryIterationFlags.h"
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/FileType.h"
#include "mc/deps/core/file/file_system/CrossStorageCopyMode.h"
#include "mc/deps/core/file/file_system/FileSystemImpl.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class Path; }
namespace Core { class Result; }
namespace Core { struct DirectoryIterationItem; }
// clang-format on

namespace Core::SFAT {

class SfatFileSystemImpl : public ::Core::FileSystemImpl {
public:
    // prevent constructor by default
    SfatFileSystemImpl& operator=(SfatFileSystemImpl const&);
    SfatFileSystemImpl(SfatFileSystemImpl const&);
    SfatFileSystemImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SfatFileSystemImpl() /*override*/ = default;

    // vIndex: 5
    virtual ::Core::CrossStorageCopyMode getCrossStorageCopyMode() /*override*/;

    // vIndex: 7
    virtual ::Core::Result _openFile(
        ::std::unique_ptr<::Core::FileImpl>&,
        ::Core::Path const&,
        ::Core::FileOpenMode,
        ::Core::FileBufferingMode
    ) /*override*/;

    // vIndex: 8
    virtual bool _fileExists(::Core::Path const&) /*override*/;

    // vIndex: 9
    virtual ::Core::Result _deleteFile(::Core::Path const&) /*override*/;

    // vIndex: 11
    virtual ::Core::Result _renameFile(::Core::Path const&, ::Core::Path const&) /*override*/;

    // vIndex: 10
    virtual ::Core::Result _getFileSize(::Core::Path const&, uint64*) /*override*/;

    // vIndex: 16
    virtual ::Core::Result _createOneDirectory(::Core::Path const&) /*override*/;

    // vIndex: 17
    virtual ::Core::Result _createOneDirectoryIfNotExisting(::Core::Path const& directoryPath) /*override*/;

    // vIndex: 20
    virtual ::Core::Result _deleteEmptyDirectory(::Core::Path const&) /*override*/;

    // vIndex: 19
    virtual bool _directoryExists(::Core::Path const&) /*override*/;

    // vIndex: 24
    virtual ::Core::Result _renameDirectory(::Core::Path const&, ::Core::Path const&) /*override*/;

    // vIndex: 33
    virtual ::Core::Result _getEntryType(::Core::Path const&, ::Core::FileType&) /*override*/;

    // vIndex: 25
    virtual ::Core::Result
    _iterateOverDirectory(::Core::Path const&, ::Core::DirectoryIterationFlags, ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)>) /*override*/
        ;

    // vIndex: 31
    virtual bool _fileOrDirectoryExists(::Core::Path const&) /*override*/;

    // vIndex: 44
    virtual ::Core::Result _getLastModificationTime(::Core::Path const&, int64*) /*override*/;

    // vIndex: 45
    virtual ::Core::Result _copyTimeAndAccessRights(::Core::Path const&, ::Core::Path const&) /*override*/;
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
