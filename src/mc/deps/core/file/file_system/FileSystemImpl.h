#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/DirectoryIterationFlags.h"
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/FileType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/file/file_system/CrossStorageCopyMode.h"
#include "mc/deps/core/file/file_system/TransactionFlags.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class FileStats; }
namespace Core { class FileStorageArea; }
namespace Core { class FlatFileManifestTracker; }
namespace Core { class PathView; }
namespace Core { class Result; }
namespace Core { struct DirectoryIterationItem; }
namespace Core { struct ExcludedPath; }
namespace Core { struct PendingWrite; }
// clang-format on

namespace Core {

class FileSystemImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkc9bc1f;
    ::ll::UntypedStorage<1, 1>  mUnk26049b;
    ::ll::UntypedStorage<1, 1>  mUnkf94830;
    ::ll::UntypedStorage<1, 1>  mUnk9bcf95;
    ::ll::UntypedStorage<4, 4>  mUnka1996d;
    ::ll::UntypedStorage<4, 4>  mUnk906cc5;
    ::ll::UntypedStorage<8, 64> mUnkdc96a2;
    ::ll::UntypedStorage<8, 80> mUnk3b13c8;
    ::ll::UntypedStorage<8, 24> mUnkb8342b;
    ::ll::UntypedStorage<8, 24> mUnkaaf50d;
    // NOLINTEND

public:
    // prevent constructor by default
    FileSystemImpl& operator=(FileSystemImpl const&);
    FileSystemImpl(FileSystemImpl const&);
    FileSystemImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileSystemImpl() = default;

    // vIndex: 1
    virtual ::Core::Result getLastModificationTime(::Core::PathView entryPath, int64* lastModificationTime);

    // vIndex: 2
    virtual ::Core::Result copyTimeAndAccessRights(::Core::PathView sourceFilePath, ::Core::PathView targetFilePath);

    // vIndex: 3
    virtual void requestFlush(::std::vector<::Core::PendingWrite> const& writeRequests);

    // vIndex: 4
    virtual bool shouldCommit();

    // vIndex: 5
    virtual ::Core::CrossStorageCopyMode getCrossStorageCopyMode();

    // vIndex: 6
    virtual uint64 getTransactionWriteSizeLimit() const;

    // vIndex: 7
    virtual ::Core::Result _openFile(
        ::std::unique_ptr<::Core::FileImpl>&,
        ::Core::PathView,
        ::Core::FileOpenMode,
        ::Core::FileBufferingMode
    ) = 0;

    // vIndex: 8
    virtual bool _fileExists(::Core::PathView) = 0;

    // vIndex: 9
    virtual ::Core::Result _deleteFile(::Core::PathView) = 0;

    // vIndex: 10
    virtual ::Core::Result _getFileSize(::Core::PathView, uint64*) = 0;

    // vIndex: 11
    virtual ::Core::Result _renameFile(::Core::PathView, ::Core::PathView) = 0;

    // vIndex: 12
    virtual ::Core::Result _createEmptyFile(::Core::PathView fileName);

    // vIndex: 13
    virtual ::Core::Result _copyFile(::Core::PathView sourceFileName, ::Core::PathView targetFileName);

    // vIndex: 14
    virtual ::Core::Result _copyFileWithLimit(
        ::Core::PathView sourceFileName,
        ::Core::PathView targetFileName,
        uint64           startPosition,
        uint64&          outBytesWritten,
        uint64&          outBytesRemaining
    );

    // vIndex: 15
    virtual ::Core::Result _readFileData(::Core::PathView filePath, ::std::vector<uchar>& data);

    // vIndex: 16
    virtual ::Core::Result _createOneDirectory(::Core::PathView) = 0;

    // vIndex: 17
    virtual ::Core::Result _createOneDirectoryIfNotExisting(::Core::PathView directoryPath);

    // vIndex: 18
    virtual ::Core::Result _createDirectoryRecursively(::Core::PathView directoryPath);

    // vIndex: 19
    virtual bool _directoryExists(::Core::PathView) = 0;

    // vIndex: 20
    virtual ::Core::Result _deleteEmptyDirectory(::Core::PathView) = 0;

    // vIndex: 21
    virtual ::Core::Result _deleteDirectoryAndContentsRecursively(::Core::PathView directoryPath);

    // vIndex: 22
    virtual ::Core::Result _deleteDirectoryContentsRecursively(::Core::PathView directoryPath);

    // vIndex: 23
    virtual ::Core::Result _deleteRecursively(::Core::PathView directoryPath, ::Core::FileType deleteFileType);

    // vIndex: 24
    virtual ::Core::Result _renameDirectory(::Core::PathView, ::Core::PathView) = 0;

    // vIndex: 25
    virtual ::Core::Result
        _iterateOverDirectory(::Core::PathView, ::Core::DirectoryIterationFlags, ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)>) = 0;

    // vIndex: 26
    virtual ::Core::Result
    _getDirectoryFiles(::std::vector<::Core::PathBuffer<::std::string>>& files, ::Core::PathView directoryPath);

    // vIndex: 27
    virtual ::Core::Result _getDirectoryFilesRecursively(
        ::std::vector<::Core::PathBuffer<::std::string>>& filesOut,
        ::Core::PathView                                  directoryPath
    );

    // vIndex: 28
    virtual ::Core::Result _getDirectoryFilesSizeRecursively(uint64& totalSize, ::Core::PathView directoryPath);

    // vIndex: 29
    virtual ::Core::Result _getDirectoryFilesAllocatedSizeRecursively(
        uint64&          totalSize,
        uint64&          totalSizeAllocated,
        ::Core::PathView directoryPath
    );

    // vIndex: 30
    virtual ::Core::Result
    _copyDirectoryAndContentsRecursively(::Core::PathView sourceDirectoryPath, ::Core::PathView targetDirectoryPath);

    // vIndex: 31
    virtual bool _fileOrDirectoryExists(::Core::PathView) = 0;

    // vIndex: 32
    virtual ::Core::Result _getFileOrDirectorySize(::Core::PathView entryName, uint64* pFileSizeOut);

    // vIndex: 33
    virtual ::Core::Result _getEntryType(::Core::PathView, ::Core::FileType&) = 0;

    // vIndex: 34
    virtual ::Core::Result _addIgnoredThrottlePath(::Core::PathView);

    // vIndex: 35
    virtual ::Core::Result _removeIgnoredThrottlePath(::Core::PathView);

    // vIndex: 36
    virtual ::Core::Result _createFlatFile(::Core::PathView sourceDirectoryPath, ::Core::PathView targetDirectoryPath);

    // vIndex: 37
    virtual bool _flatFileFileExists(::Core::PathView filePath, ::Core::PathView manifestPath);

    // vIndex: 38
    virtual bool _flatFileDirectoryExists(::Core::PathView directoryPath, ::Core::PathView manifestPath);

    // vIndex: 39
    virtual ::Core::Result _flatFileIterateOverDirectory(
        ::Core::PathView                                                             directoryPath,
        ::Core::PathView                                                             manifestPath,
        ::Core::DirectoryIterationFlags                                              flags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)> callbackFunction
    );

    // vIndex: 40
    virtual bool _isDirectoryPathAFlatFile(::Core::PathView directoryPath);

    // vIndex: 41
    virtual ::Core::Result _copyFlatFile(
        ::Core::PathView                           sourceDirectoryPath,
        ::Core::PathView                           targetDirectoryPath,
        ::std::vector<::Core::ExcludedPath> const& excludedDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
    );

    // vIndex: 42
    virtual ::Core::Result _flatFileDeleteFileOrDirectory(
        ::Core::PathView fileOrDirectoryPath,
        ::Core::PathView manifestPath,
        bool             directoryDeleteEnabled,
        bool             deleteRecursively
    );

    // vIndex: 43
    virtual ::Core::Result
    _flatFileGetFileSize(::Core::PathView filePath, ::Core::PathView manifestPath, uint64* pFileSize);

    // vIndex: 44
    virtual ::Core::Result _getLastModificationTime(::Core::PathView, int64*) = 0;

    // vIndex: 45
    virtual ::Core::Result _copyTimeAndAccessRights(::Core::PathView, ::Core::PathView) = 0;

    // vIndex: 46
    virtual ::Core::Result _endTransaction();

    // vIndex: 47
    virtual ::Core::Result _writeOperation(
        ::Core::PathView                                fullPath,
        ::Core::Result&&                                result,
        ::std::function<void(::Core::FileStorageArea*)> observerCallOrNull,
        uint64                                          numBytesWritten
    );

    // vIndex: 48
    virtual void _initializeInternal();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FileSystemImpl(
        ::Core::FileAccessType                             accessType,
        ::std::shared_ptr<::Core::FileStorageArea>         storageArea,
        ::Core::TransactionFlags                           manifestTracker,
        ::std::shared_ptr<::Core::FlatFileManifestTracker> transactionFlags
    );

    MCAPI ::Core::Result _flatFileOpenFlatFile(
        ::std::unique_ptr<::Core::FileImpl>& fileOut,
        ::Core::PathView                     filePath,
        ::Core::PathView                     manifestPath,
        ::Core::FileOpenMode                 openMode,
        ::Core::FileBufferingMode            fileBufferingMode
    );

    MCAPI ::Core::Result _flatFileUnloadManifest(::Core::PathView filePath);

    MCAPI ::Core::Result _readOperation(::Core::Result&& result, uint64 numBytesRead);

    MCAPI ::Core::Result _readWriteOperation(
        ::Core::Result&&                                result,
        ::std::function<void(::Core::FileStorageArea*)> observerCallOrNull,
        uint64                                          numBytesRead,
        uint64                                          numBytesWritten
    );

    MCAPI ::Core::Result commit();

    MCAPI ::Core::Result
    copyDirectoryAndContentsRecursively(::Core::PathView sourceDirectoryPath, ::Core::PathView targetDirectoryPath);

    MCAPI ::Core::Result copyFile(::Core::PathView sourceFilePath, ::Core::PathView targetFilePath);

    MCAPI ::Core::Result copyFileWithLimit(
        ::Core::PathView sourceFileName,
        ::Core::PathView targetFileName,
        uint64           startPosition,
        uint64&          outBytesWritten,
        uint64&          outBytesRemaining
    );

    MCAPI ::Core::Result createDirectoryRecursively(::Core::PathView directoryPath);

    MCAPI ::Core::Result createEmptyFile(::Core::PathView filePath);

    MCAPI ::Core::Result createFlatFile(::Core::PathView sourceDirectoryPath, ::Core::PathView targetDirectoryPath);

    MCAPI ::Core::Result createOneDirectory(::Core::PathView directoryPath);

    MCAPI ::Core::Result createOneDirectoryIfNotExisting(::Core::PathView directoryPath);

    MCAPI ::Core::Result deleteDirectoryAndContentsRecursively(::Core::PathView directoryPath);

    MCAPI ::Core::Result deleteDirectoryContentsRecursively(::Core::PathView directoryPath);

    MCAPI ::Core::Result deleteEmptyDirectory(::Core::PathView directoryPath);

    MCAPI ::Core::Result deleteFile(::Core::PathView filePath);

    MCAPI bool directoryExists(::Core::PathView directoryPath);

    MCAPI bool fileExists(::Core::PathView filePath);

    MCAPI bool fileOrDirectoryExists(::Core::PathView entryPath);

    MCAPI ::Core::Result getFileSize(::Core::PathView filePath, uint64* pFileSize);

    MCAPI bool isDirectoryPathAFlatFile(::Core::PathView directoryPath);

    MCAPI ::Core::Result iterateOverDirectory(
        ::Core::PathView                                                             directoryPath,
        ::Core::DirectoryIterationFlags                                              flags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)> callbackFunction
    );

    MCAPI ::Core::Result openFile(
        ::std::unique_ptr<::Core::FileImpl>& fileOut,
        ::Core::PathView                     filePath,
        ::Core::FileOpenMode                 openMode,
        ::Core::FileBufferingMode            fileBufferingMode
    );

    MCAPI ::Core::Result renameDirectory(::Core::PathView sourceDirectoryPath, ::Core::PathView targetDirectoryPath);

    MCAPI ::Core::Result renameFile(::Core::PathView sourceFilePath, ::Core::PathView targetFilePath);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Core::Result isValidPath(::Core::PathView path);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Core::FileStats& sStats();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Core::FileAccessType                             accessType,
        ::std::shared_ptr<::Core::FileStorageArea>         storageArea,
        ::Core::TransactionFlags                           manifestTracker,
        ::std::shared_ptr<::Core::FlatFileManifestTracker> transactionFlags
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Core::Result $getLastModificationTime(::Core::PathView entryPath, int64* lastModificationTime);

    MCAPI ::Core::Result $copyTimeAndAccessRights(::Core::PathView sourceFilePath, ::Core::PathView targetFilePath);

    MCFOLD void $requestFlush(::std::vector<::Core::PendingWrite> const& writeRequests);

    MCFOLD bool $shouldCommit();

    MCFOLD ::Core::CrossStorageCopyMode $getCrossStorageCopyMode();

    MCAPI uint64 $getTransactionWriteSizeLimit() const;

    MCAPI ::Core::Result $_createEmptyFile(::Core::PathView fileName);

    MCAPI ::Core::Result $_copyFile(::Core::PathView sourceFileName, ::Core::PathView targetFileName);

    MCAPI ::Core::Result $_copyFileWithLimit(
        ::Core::PathView sourceFileName,
        ::Core::PathView targetFileName,
        uint64           startPosition,
        uint64&          outBytesWritten,
        uint64&          outBytesRemaining
    );

    MCAPI ::Core::Result $_readFileData(::Core::PathView filePath, ::std::vector<uchar>& data);

    MCAPI ::Core::Result $_createOneDirectoryIfNotExisting(::Core::PathView directoryPath);

    MCAPI ::Core::Result $_createDirectoryRecursively(::Core::PathView directoryPath);

    MCAPI ::Core::Result $_deleteDirectoryAndContentsRecursively(::Core::PathView directoryPath);

    MCAPI ::Core::Result $_deleteDirectoryContentsRecursively(::Core::PathView directoryPath);

    MCAPI ::Core::Result $_deleteRecursively(::Core::PathView directoryPath, ::Core::FileType deleteFileType);

    MCAPI ::Core::Result
    $_getDirectoryFiles(::std::vector<::Core::PathBuffer<::std::string>>& files, ::Core::PathView directoryPath);

    MCAPI ::Core::Result $_getDirectoryFilesRecursively(
        ::std::vector<::Core::PathBuffer<::std::string>>& filesOut,
        ::Core::PathView                                  directoryPath
    );

    MCAPI ::Core::Result $_getDirectoryFilesSizeRecursively(uint64& totalSize, ::Core::PathView directoryPath);

    MCAPI ::Core::Result $_getDirectoryFilesAllocatedSizeRecursively(
        uint64&          totalSize,
        uint64&          totalSizeAllocated,
        ::Core::PathView directoryPath
    );

    MCAPI ::Core::Result
    $_copyDirectoryAndContentsRecursively(::Core::PathView sourceDirectoryPath, ::Core::PathView targetDirectoryPath);

    MCAPI ::Core::Result $_getFileOrDirectorySize(::Core::PathView entryName, uint64* pFileSizeOut);

    MCFOLD ::Core::Result $_addIgnoredThrottlePath(::Core::PathView);

    MCFOLD ::Core::Result $_removeIgnoredThrottlePath(::Core::PathView);

    MCAPI ::Core::Result $_createFlatFile(::Core::PathView sourceDirectoryPath, ::Core::PathView targetDirectoryPath);

    MCAPI bool $_flatFileFileExists(::Core::PathView filePath, ::Core::PathView manifestPath);

    MCAPI bool $_flatFileDirectoryExists(::Core::PathView directoryPath, ::Core::PathView manifestPath);

    MCAPI ::Core::Result $_flatFileIterateOverDirectory(
        ::Core::PathView                                                             directoryPath,
        ::Core::PathView                                                             manifestPath,
        ::Core::DirectoryIterationFlags                                              flags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)> callbackFunction
    );

    MCAPI bool $_isDirectoryPathAFlatFile(::Core::PathView directoryPath);

    MCAPI ::Core::Result $_copyFlatFile(
        ::Core::PathView                           sourceDirectoryPath,
        ::Core::PathView                           targetDirectoryPath,
        ::std::vector<::Core::ExcludedPath> const& excludedDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
    );

    MCAPI ::Core::Result $_flatFileDeleteFileOrDirectory(
        ::Core::PathView fileOrDirectoryPath,
        ::Core::PathView manifestPath,
        bool             directoryDeleteEnabled,
        bool             deleteRecursively
    );

    MCAPI ::Core::Result
    $_flatFileGetFileSize(::Core::PathView filePath, ::Core::PathView manifestPath, uint64* pFileSize);

    MCAPI ::Core::Result $_endTransaction();

    MCAPI ::Core::Result $_writeOperation(
        ::Core::PathView                                fullPath,
        ::Core::Result&&                                result,
        ::std::function<void(::Core::FileStorageArea*)> observerCallOrNull,
        uint64                                          numBytesWritten
    );

    MCFOLD void $_initializeInternal();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
