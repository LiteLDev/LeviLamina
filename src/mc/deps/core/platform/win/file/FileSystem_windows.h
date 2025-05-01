#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/DirectoryIterationFlags.h"
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/FileType.h"
#include "mc/deps/core/file/file_system/FileSystemImpl.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class FileStorageArea; }
namespace Core { class FlatFileManifestTracker; }
namespace Core { class PathView; }
namespace Core { class Result; }
namespace Core { struct DirectoryIterationItem; }
// clang-format on

namespace Core {

class FileSystem_windows : public ::Core::FileSystemImpl {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual ::Core::Result _openFile(
        ::std::unique_ptr<::Core::FileImpl>& uptFileOut,
        ::Core::PathView                     filename,
        ::Core::FileOpenMode                 fileOpenMode,
        ::Core::FileBufferingMode            bufferingMode
    ) /*override*/;

    // vIndex: 8
    virtual bool _fileExists(::Core::PathView filePath) /*override*/;

    // vIndex: 9
    virtual ::Core::Result _deleteFile(::Core::PathView path) /*override*/;

    // vIndex: 11
    virtual ::Core::Result _getFileSize(::Core::PathView filePath, uint64* pFileSizeOut) /*override*/;

    // vIndex: 12
    virtual ::Core::Result _renameFile(::Core::PathView sourceFilePath, ::Core::PathView targetFilePath) /*override*/;

    // vIndex: 17
    virtual ::Core::Result _createOneDirectory(::Core::PathView directoryPath) /*override*/;

    // vIndex: 21
    virtual ::Core::Result _deleteEmptyDirectory(::Core::PathView directoryPath) /*override*/;

    // vIndex: 20
    virtual bool _directoryExists(::Core::PathView directoryPath) /*override*/;

    // vIndex: 25
    virtual ::Core::Result
    _renameDirectory(::Core::PathView sourceDirectoryPath, ::Core::PathView targetDirectoryPath) /*override*/;

    // vIndex: 26
    virtual ::Core::Result _iterateOverDirectory(
        ::Core::PathView                                                             directoryPath,
        ::Core::DirectoryIterationFlags                                              flags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)> fx
    ) /*override*/;

    // vIndex: 32
    virtual bool _fileOrDirectoryExists(::Core::PathView entryPath) /*override*/;

    // vIndex: 45
    virtual ::Core::Result _getLastModificationTime(::Core::PathView filePath, int64* pModificationTime) /*override*/;

    // vIndex: 34
    virtual ::Core::Result _getEntryType(::Core::PathView entryPath, ::Core::FileType& fileTypeOut) /*override*/;

    // vIndex: 46
    virtual ::Core::Result
    _copyTimeAndAccessRights(::Core::PathView sourceEntryPath, ::Core::PathView targetEntryPath) /*override*/;

    // vIndex: 0
    virtual ~FileSystem_windows() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FileSystem_windows(
        ::Core::FileAccessType                             accessType,
        ::std::shared_ptr<::Core::FileStorageArea>         storageArea,
        ::std::shared_ptr<::Core::FlatFileManifestTracker> manifestTracker
    );

    MCNAPI ::Core::Result _iterateOverDirectoryWide(
        ::std::wstring const&                                                        directoryPath,
        ::Core::DirectoryIterationFlags                                              flags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)> fx
    );

    MCNAPI ::Core::Result
    _makeFailureFromFileSystemResult(::std::error_code const& errorCode, char const* function, char const* fileContext);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Core::FileAccessType                             accessType,
        ::std::shared_ptr<::Core::FileStorageArea>         storageArea,
        ::std::shared_ptr<::Core::FlatFileManifestTracker> manifestTracker
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Core::Result $_openFile(
        ::std::unique_ptr<::Core::FileImpl>& uptFileOut,
        ::Core::PathView                     filename,
        ::Core::FileOpenMode                 fileOpenMode,
        ::Core::FileBufferingMode            bufferingMode
    );

    MCNAPI bool $_fileExists(::Core::PathView filePath);

    MCNAPI ::Core::Result $_deleteFile(::Core::PathView path);

    MCNAPI ::Core::Result $_getFileSize(::Core::PathView filePath, uint64* pFileSizeOut);

    MCNAPI ::Core::Result $_renameFile(::Core::PathView sourceFilePath, ::Core::PathView targetFilePath);

    MCNAPI ::Core::Result $_createOneDirectory(::Core::PathView directoryPath);

    MCNAPI ::Core::Result $_deleteEmptyDirectory(::Core::PathView directoryPath);

    MCNAPI bool $_directoryExists(::Core::PathView directoryPath);

    MCNAPI ::Core::Result $_renameDirectory(::Core::PathView sourceDirectoryPath, ::Core::PathView targetDirectoryPath);

    MCNAPI ::Core::Result $_iterateOverDirectory(
        ::Core::PathView                                                             directoryPath,
        ::Core::DirectoryIterationFlags                                              flags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)> fx
    );

    MCNAPI bool $_fileOrDirectoryExists(::Core::PathView entryPath);

    MCNAPI ::Core::Result $_getLastModificationTime(::Core::PathView filePath, int64* pModificationTime);

    MCNAPI ::Core::Result $_getEntryType(::Core::PathView entryPath, ::Core::FileType& fileTypeOut);

    MCNAPI ::Core::Result $_copyTimeAndAccessRights(::Core::PathView sourceEntryPath, ::Core::PathView targetEntryPath);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
