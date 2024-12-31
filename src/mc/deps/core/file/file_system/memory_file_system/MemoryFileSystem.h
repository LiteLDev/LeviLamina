#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/DirectoryIterationFlags.h"
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/FileType.h"
#include "mc/deps/core/file/file_system/FileSystemImpl.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class FileStorageArea; }
namespace Core { class MemoryFileSystemEntryFile; }
namespace Core { class Path; }
namespace Core { class Result; }
namespace Core { struct DirectoryIterationItem; }
// clang-format on

namespace Core {

class MemoryFileSystem : public ::Core::FileSystemImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk152713;
    // NOLINTEND

public:
    // prevent constructor by default
    MemoryFileSystem& operator=(MemoryFileSystem const&);
    MemoryFileSystem(MemoryFileSystem const&);
    MemoryFileSystem();

public:
    // virtual functions
    // NOLINTBEGIN
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

    // vIndex: 10
    virtual ::Core::Result _getFileSize(::Core::Path const&, uint64*) /*override*/;

    // vIndex: 11
    virtual ::Core::Result _renameFile(::Core::Path const&, ::Core::Path const&) /*override*/;

    // vIndex: 12
    virtual ::Core::Result _createEmptyFile(::Core::Path const& fileName) /*override*/;

    // vIndex: 16
    virtual ::Core::Result _createOneDirectory(::Core::Path const&) /*override*/;

    // vIndex: 19
    virtual bool _directoryExists(::Core::Path const&) /*override*/;

    // vIndex: 20
    virtual ::Core::Result _deleteEmptyDirectory(::Core::Path const&) /*override*/;

    // vIndex: 21
    virtual ::Core::Result _deleteDirectoryAndContentsRecursively(::Core::Path const& directoryPath) /*override*/;

    // vIndex: 22
    virtual ::Core::Result _deleteDirectoryContentsRecursively(::Core::Path const& directoryPath) /*override*/;

    // vIndex: 24
    virtual ::Core::Result _renameDirectory(::Core::Path const&, ::Core::Path const&) /*override*/;

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

    // vIndex: 33
    virtual ::Core::Result _getEntryType(::Core::Path const&, ::Core::FileType&) /*override*/;

    // vIndex: 48
    virtual void _initializeInternal() /*override*/;

    // vIndex: 47
    virtual ::Core::Result _writeOperation(
        ::Core::Path const&                             fullPath,
        ::Core::Result&&                                result,
        ::std::function<void(::Core::FileStorageArea*)> observerCallOrNull,
        uint64                                          numBytesWritten
    ) /*override*/;

    // vIndex: 49
    virtual ::std::unique_ptr<::Core::FileImpl>
    _createMemoryFileHandle(::Core::MemoryFileSystemEntryFile*, ::Core::FileOpenMode, uint64);

    // vIndex: 0
    virtual ~MemoryFileSystem() /*override*/ = default;
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
