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
namespace Core { class Path; }
namespace Core { class Result; }
namespace Core { struct DirectoryIterationItem; }
// clang-format on

namespace Core {

class FileSystem_windows : public ::Core::FileSystemImpl {
public:
    // prevent constructor by default
    FileSystem_windows& operator=(FileSystem_windows const&);
    FileSystem_windows(FileSystem_windows const&);
    FileSystem_windows();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 7
    virtual ::Core::Result _openFile(
        ::std::unique_ptr<::Core::FileImpl>& uptFileOut,
        ::Core::Path const&                  filename,
        ::Core::FileOpenMode                 fileOpenMode,
        ::Core::FileBufferingMode            bufferingMode
    ) /*override*/;

    // vIndex: 8
    virtual bool _fileExists(::Core::Path const& filePath) /*override*/;

    // vIndex: 9
    virtual ::Core::Result _deleteFile(::Core::Path const& path) /*override*/;

    // vIndex: 10
    virtual ::Core::Result _getFileSize(::Core::Path const& filePath, uint64* pFileSizeOut) /*override*/;

    // vIndex: 11
    virtual ::Core::Result
    _renameFile(::Core::Path const& sourceFilePath, ::Core::Path const& targetFilePath) /*override*/;

    // vIndex: 16
    virtual ::Core::Result _createOneDirectory(::Core::Path const& directoryPath) /*override*/;

    // vIndex: 20
    virtual ::Core::Result _deleteEmptyDirectory(::Core::Path const& directoryPath) /*override*/;

    // vIndex: 19
    virtual bool _directoryExists(::Core::Path const& directoryPath) /*override*/;

    // vIndex: 24
    virtual ::Core::Result
    _renameDirectory(::Core::Path const& sourceDirectoryPath, ::Core::Path const& targetDirectoryPath) /*override*/;

    // vIndex: 25
    virtual ::Core::Result _iterateOverDirectory(
        ::Core::Path const&                                                          directoryPath,
        ::Core::DirectoryIterationFlags                                              flags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)> fx
    ) /*override*/;

    // vIndex: 31
    virtual bool _fileOrDirectoryExists(::Core::Path const& entryPath) /*override*/;

    // vIndex: 44
    virtual ::Core::Result
    _getLastModificationTime(::Core::Path const& filePath, int64* pModificationTime) /*override*/;

    // vIndex: 33
    virtual ::Core::Result _getEntryType(::Core::Path const& entryPath, ::Core::FileType& fileTypeOut) /*override*/;

    // vIndex: 45
    virtual ::Core::Result
    _copyTimeAndAccessRights(::Core::Path const& sourceEntryPath, ::Core::Path const& targetEntryPath) /*override*/;

    // vIndex: 0
    virtual ~FileSystem_windows() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FileSystem_windows(
        ::Core::FileAccessType                             accessType,
        ::std::shared_ptr<::Core::FileStorageArea>         storageArea,
        ::std::shared_ptr<::Core::FlatFileManifestTracker> manifestTracker
    );

    MCAPI ::Core::Result _iterateOverDirectoryWide(
        ::std::wstring const&                                                        directoryPath,
        ::Core::DirectoryIterationFlags                                              flags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)> fx
    );

    MCAPI ::Core::Result
    _makeFailureFromFileSystemResult(::std::error_code const& errorCode, char const* function, char const* fileContext);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
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
    MCAPI ::Core::Result $_openFile(
        ::std::unique_ptr<::Core::FileImpl>& uptFileOut,
        ::Core::Path const&                  filename,
        ::Core::FileOpenMode                 fileOpenMode,
        ::Core::FileBufferingMode            bufferingMode
    );

    MCAPI bool $_fileExists(::Core::Path const& filePath);

    MCAPI ::Core::Result $_deleteFile(::Core::Path const& path);

    MCAPI ::Core::Result $_getFileSize(::Core::Path const& filePath, uint64* pFileSizeOut);

    MCAPI ::Core::Result $_renameFile(::Core::Path const& sourceFilePath, ::Core::Path const& targetFilePath);

    MCAPI ::Core::Result $_createOneDirectory(::Core::Path const& directoryPath);

    MCAPI ::Core::Result $_deleteEmptyDirectory(::Core::Path const& directoryPath);

    MCAPI bool $_directoryExists(::Core::Path const& directoryPath);

    MCAPI ::Core::Result
    $_renameDirectory(::Core::Path const& sourceDirectoryPath, ::Core::Path const& targetDirectoryPath);

    MCAPI ::Core::Result $_iterateOverDirectory(
        ::Core::Path const&                                                          directoryPath,
        ::Core::DirectoryIterationFlags                                              flags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)> fx
    );

    MCAPI bool $_fileOrDirectoryExists(::Core::Path const& entryPath);

    MCAPI ::Core::Result $_getLastModificationTime(::Core::Path const& filePath, int64* pModificationTime);

    MCAPI ::Core::Result $_getEntryType(::Core::Path const& entryPath, ::Core::FileType& fileTypeOut);

    MCAPI ::Core::Result
    $_copyTimeAndAccessRights(::Core::Path const& sourceEntryPath, ::Core::Path const& targetEntryPath);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
