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
namespace Core { class Path; }
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
    virtual ~FileSystemImpl();

    // vIndex: 1
    virtual ::Core::Result getLastModificationTime(::Core::Path const& entryPath, int64* lastModificationTime);

    // vIndex: 2
    virtual ::Core::Result
    copyTimeAndAccessRights(::Core::Path const& sourceFilePath, ::Core::Path const& targetFilePath);

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
        ::Core::Path const&,
        ::Core::FileOpenMode,
        ::Core::FileBufferingMode
    ) = 0;

    // vIndex: 8
    virtual bool _fileExists(::Core::Path const&) = 0;

    // vIndex: 9
    virtual ::Core::Result _deleteFile(::Core::Path const&) = 0;

    // vIndex: 10
    virtual ::Core::Result _getFileSize(::Core::Path const&, uint64*) = 0;

    // vIndex: 11
    virtual ::Core::Result _renameFile(::Core::Path const&, ::Core::Path const&) = 0;

    // vIndex: 12
    virtual ::Core::Result _createEmptyFile(::Core::Path const& fileName);

    // vIndex: 13
    virtual ::Core::Result _copyFile(::Core::Path const& sourceFileName, ::Core::Path const& targetFileName);

    // vIndex: 14
    virtual ::Core::Result _copyFileWithLimit(
        ::Core::Path const& sourceFileName,
        ::Core::Path const& targetFileName,
        uint64              startPosition,
        uint64&             outBytesWritten,
        uint64&             outBytesRemaining
    );

    // vIndex: 15
    virtual ::Core::Result _readFileData(::Core::Path const& filePath, ::std::vector<uchar>& data);

    // vIndex: 16
    virtual ::Core::Result _createOneDirectory(::Core::Path const&) = 0;

    // vIndex: 17
    virtual ::Core::Result _createOneDirectoryIfNotExisting(::Core::Path const& directoryPath);

    // vIndex: 18
    virtual ::Core::Result _createDirectoryRecursively(::Core::Path const& directoryPath);

    // vIndex: 19
    virtual bool _directoryExists(::Core::Path const&) = 0;

    // vIndex: 20
    virtual ::Core::Result _deleteEmptyDirectory(::Core::Path const&) = 0;

    // vIndex: 21
    virtual ::Core::Result _deleteDirectoryAndContentsRecursively(::Core::Path const& directoryPath);

    // vIndex: 22
    virtual ::Core::Result _deleteDirectoryContentsRecursively(::Core::Path const& directoryPath);

    // vIndex: 23
    virtual ::Core::Result _deleteRecursively(::Core::Path const& directoryPath, ::Core::FileType deleteFileType);

    // vIndex: 24
    virtual ::Core::Result _renameDirectory(::Core::Path const&, ::Core::Path const&) = 0;

    // vIndex: 25
    virtual ::Core::Result
    _iterateOverDirectory(::Core::Path const&, ::Core::DirectoryIterationFlags, ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)>) = 0;

    // vIndex: 26
    virtual ::Core::Result
    _getDirectoryFiles(::std::vector<::Core::PathBuffer<::std::string>>& files, ::Core::Path const& directoryPath);

    // vIndex: 27
    virtual ::Core::Result _getDirectoryFilesRecursively(
        ::std::vector<::Core::PathBuffer<::std::string>>& filesOut,
        ::Core::Path const&                               directoryPath
    );

    // vIndex: 28
    virtual ::Core::Result _getDirectoryFilesSizeRecursively(uint64& totalSize, ::Core::Path const& directoryPath);

    // vIndex: 29
    virtual ::Core::Result _getDirectoryFilesAllocatedSizeRecursively(
        uint64&             totalSize,
        uint64&             totalSizeAllocated,
        ::Core::Path const& directoryPath
    );

    // vIndex: 30
    virtual ::Core::Result _copyDirectoryAndContentsRecursively(
        ::Core::Path const& sourceDirectoryPath,
        ::Core::Path const& targetDirectoryPath
    );

    // vIndex: 31
    virtual bool _fileOrDirectoryExists(::Core::Path const&) = 0;

    // vIndex: 32
    virtual ::Core::Result _getFileOrDirectorySize(::Core::Path const& entryName, uint64* pFileSizeOut);

    // vIndex: 33
    virtual ::Core::Result _getEntryType(::Core::Path const&, ::Core::FileType&) = 0;

    // vIndex: 34
    virtual ::Core::Result _addIgnoredThrottlePath(::Core::Path const&);

    // vIndex: 35
    virtual ::Core::Result _removeIgnoredThrottlePath(::Core::Path const&);

    // vIndex: 36
    virtual ::Core::Result
    _createFlatFile(::Core::Path const& sourceDirectoryPath, ::Core::Path const& targetDirectoryPath);

    // vIndex: 37
    virtual bool _flatFileFileExists(::Core::Path const& filePath, ::Core::Path const& manifestPath);

    // vIndex: 38
    virtual bool _flatFileDirectoryExists(::Core::Path const& directoryPath, ::Core::Path const& manifestPath);

    // vIndex: 39
    virtual ::Core::Result _flatFileIterateOverDirectory(
        ::Core::Path const&                                                          directoryPath,
        ::Core::Path const&                                                          manifestPath,
        ::Core::DirectoryIterationFlags                                              flags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)> callbackFunction
    );

    // vIndex: 40
    virtual bool _isDirectoryPathAFlatFile(::Core::Path const& directoryPath);

    // vIndex: 41
    virtual ::Core::Result _copyFlatFile(
        ::Core::Path const&                        sourceDirectoryPath,
        ::Core::Path const&                        targetDirectoryPath,
        ::std::vector<::Core::ExcludedPath> const& excludedDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
    );

    // vIndex: 42
    virtual ::Core::Result _flatFileDeleteFileOrDirectory(
        ::Core::Path const& fileOrDirectoryPath,
        ::Core::Path const& manifestPath,
        bool                directoryDeleteEnabled,
        bool                deleteRecursively
    );

    // vIndex: 43
    virtual ::Core::Result
    _flatFileGetFileSize(::Core::Path const& filePath, ::Core::Path const& manifestPath, uint64* pFileSize);

    // vIndex: 44
    virtual ::Core::Result _getLastModificationTime(::Core::Path const&, int64*) = 0;

    // vIndex: 45
    virtual ::Core::Result _copyTimeAndAccessRights(::Core::Path const&, ::Core::Path const&) = 0;

    // vIndex: 46
    virtual ::Core::Result _endTransaction();

    // vIndex: 47
    virtual ::Core::Result _writeOperation(
        ::Core::Path const&                             fullPath,
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
        ::Core::TransactionFlags                           transactionFlags,
        ::std::shared_ptr<::Core::FlatFileManifestTracker> manifestTracker
    );

    MCAPI ::Core::Result _flatFileOpenFlatFile(
        ::std::unique_ptr<::Core::FileImpl>& fileOut,
        ::Core::Path const&                  filePath,
        ::Core::Path const&                  manifestPath,
        ::Core::FileOpenMode                 openMode,
        ::Core::FileBufferingMode            fileBufferingMode
    );

    MCAPI ::Core::Result _flatFileUnloadManifest(::Core::Path const& filePath);

    MCAPI void _initialize();

    MCAPI ::Core::Result _readOperation(::Core::Result&& result, uint64 numBytesRead);

    MCAPI ::Core::Result _readWriteOperation(
        ::Core::Result&&                                result,
        ::std::function<void(::Core::FileStorageArea*)> observerCallOrNull,
        uint64                                          numBytesRead,
        uint64                                          numBytesWritten
    );

    MCAPI ::Core::Result addIgnoredThrottlePath(::Core::Path const& path);

    MCAPI ::Core::Result commit();

    MCAPI ::Core::Result copyDirectoryAndContentsRecursively(
        ::Core::Path const& sourceDirectoryPath,
        ::Core::Path const& targetDirectoryPath
    );

    MCAPI ::Core::Result copyFile(::Core::Path const& sourceFilePath, ::Core::Path const& targetFilePath);

    MCAPI ::Core::Result copyFileWithLimit(
        ::Core::Path const& sourceFileName,
        ::Core::Path const& targetFileName,
        uint64              startPosition,
        uint64&             outBytesWritten,
        uint64&             outBytesRemaining
    );

    MCAPI ::Core::Result copyFlatFile(
        ::Core::Path const&                        flatFileParentDirectory,
        ::Core::Path const&                        targetDirectory,
        ::std::vector<::Core::ExcludedPath> const& excludedDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
    );

    MCAPI ::Core::Result createDirectoryRecursively(::Core::Path const& directoryPath);

    MCAPI ::Core::Result createEmptyFile(::Core::Path const& filePath);

    MCAPI ::Core::Result
    createFlatFile(::Core::Path const& sourceDirectoryPath, ::Core::Path const& targetDirectoryPath);

    MCAPI ::Core::Result createOneDirectory(::Core::Path const& directoryPath);

    MCAPI ::Core::Result createOneDirectoryIfNotExisting(::Core::Path const& directoryPath);

    MCAPI ::Core::Result deleteDirectoryAndContentsRecursively(::Core::Path const& directoryPath);

    MCAPI ::Core::Result deleteDirectoryContentsRecursively(::Core::Path const& directoryPath);

    MCAPI ::Core::Result deleteEmptyDirectory(::Core::Path const& directoryPath);

    MCAPI ::Core::Result deleteFile(::Core::Path const& filePath);

    MCAPI bool directoryExists(::Core::Path const& directoryPath);

    MCAPI void enumerateFiles(::std::function<void(::Core::FileImpl*)> const& fx);

    MCAPI bool fileExists(::Core::Path const& filePath);

    MCAPI bool fileOrDirectoryExists(::Core::Path const& entryPath);

    MCFOLD ::Core::FileAccessType getAccessType() const;

    MCAPI ::Core::Result
    getDirectoryFiles(::std::vector<::Core::PathBuffer<::std::string>>& files, ::Core::Path const& directoryPath);

    MCAPI ::Core::Result getDirectoryFilesAllocatedSizeRecursively(
        uint64&             totalSize,
        uint64&             totalAllocatedSize,
        ::Core::Path const& directoryPath
    );

    MCAPI ::Core::Result getDirectoryFilesRecursively(
        ::std::vector<::Core::PathBuffer<::std::string>>& files,
        ::Core::Path const&                               directoryPath
    );

    MCAPI ::Core::Result getDirectoryFilesSizeRecursively(uint64& totalSize, ::Core::Path const& directoryPath);

    MCAPI ::Core::Result getFileOrDirectorySize(::Core::Path const& entryPath, uint64* pFileSizeOut);

    MCAPI ::Core::Result getFileSize(::Core::Path const& filePath, uint64* pFileSize);

    MCAPI ::std::shared_ptr<::Core::FileStorageArea> getStorageArea();

    MCAPI bool isDirectoryPathAFlatFile(::Core::Path const& directoryPath);

    MCAPI ::Core::Result iterateOverDirectory(
        ::Core::Path const&                                                          directoryPath,
        ::Core::DirectoryIterationFlags                                              flags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)> callbackFunction
    );

    MCAPI ::Core::Result openFile(
        ::std::unique_ptr<::Core::FileImpl>& fileOut,
        ::Core::Path const&                  filePath,
        ::Core::FileOpenMode                 openMode,
        ::Core::FileBufferingMode            fileBufferingMode
    );

    MCAPI ::Core::Result readFileData(::Core::Path const& filePath, ::std::vector<uchar>& data);

    MCAPI ::Core::Result removeIgnoredThrottlePath(::Core::Path const& path);

    MCAPI ::Core::Result
    renameDirectory(::Core::Path const& sourceDirectoryPath, ::Core::Path const& targetDirectoryPath);

    MCAPI ::Core::Result renameFile(::Core::Path const& sourceFilePath, ::Core::Path const& targetFilePath);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Core::Result isValidPath(::Core::Path const& path);
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
        ::Core::TransactionFlags                           transactionFlags,
        ::std::shared_ptr<::Core::FlatFileManifestTracker> manifestTracker
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Core::Result $getLastModificationTime(::Core::Path const& entryPath, int64* lastModificationTime);

    MCAPI ::Core::Result
    $copyTimeAndAccessRights(::Core::Path const& sourceFilePath, ::Core::Path const& targetFilePath);

    MCFOLD void $requestFlush(::std::vector<::Core::PendingWrite> const& writeRequests);

    MCFOLD bool $shouldCommit();

    MCFOLD ::Core::CrossStorageCopyMode $getCrossStorageCopyMode();

    MCFOLD uint64 $getTransactionWriteSizeLimit() const;

    MCAPI ::Core::Result $_createEmptyFile(::Core::Path const& fileName);

    MCAPI ::Core::Result $_copyFile(::Core::Path const& sourceFileName, ::Core::Path const& targetFileName);

    MCAPI ::Core::Result $_copyFileWithLimit(
        ::Core::Path const& sourceFileName,
        ::Core::Path const& targetFileName,
        uint64              startPosition,
        uint64&             outBytesWritten,
        uint64&             outBytesRemaining
    );

    MCAPI ::Core::Result $_readFileData(::Core::Path const& filePath, ::std::vector<uchar>& data);

    MCAPI ::Core::Result $_createOneDirectoryIfNotExisting(::Core::Path const& directoryPath);

    MCAPI ::Core::Result $_createDirectoryRecursively(::Core::Path const& directoryPath);

    MCAPI ::Core::Result $_deleteDirectoryAndContentsRecursively(::Core::Path const& directoryPath);

    MCAPI ::Core::Result $_deleteDirectoryContentsRecursively(::Core::Path const& directoryPath);

    MCAPI ::Core::Result $_deleteRecursively(::Core::Path const& directoryPath, ::Core::FileType deleteFileType);

    MCAPI ::Core::Result
    $_getDirectoryFiles(::std::vector<::Core::PathBuffer<::std::string>>& files, ::Core::Path const& directoryPath);

    MCAPI ::Core::Result $_getDirectoryFilesRecursively(
        ::std::vector<::Core::PathBuffer<::std::string>>& filesOut,
        ::Core::Path const&                               directoryPath
    );

    MCAPI ::Core::Result $_getDirectoryFilesSizeRecursively(uint64& totalSize, ::Core::Path const& directoryPath);

    MCAPI ::Core::Result $_getDirectoryFilesAllocatedSizeRecursively(
        uint64&             totalSize,
        uint64&             totalSizeAllocated,
        ::Core::Path const& directoryPath
    );

    MCAPI ::Core::Result $_copyDirectoryAndContentsRecursively(
        ::Core::Path const& sourceDirectoryPath,
        ::Core::Path const& targetDirectoryPath
    );

    MCAPI ::Core::Result $_getFileOrDirectorySize(::Core::Path const& entryName, uint64* pFileSizeOut);

    MCFOLD ::Core::Result $_addIgnoredThrottlePath(::Core::Path const&);

    MCFOLD ::Core::Result $_removeIgnoredThrottlePath(::Core::Path const&);

    MCAPI ::Core::Result
    $_createFlatFile(::Core::Path const& sourceDirectoryPath, ::Core::Path const& targetDirectoryPath);

    MCAPI bool $_flatFileFileExists(::Core::Path const& filePath, ::Core::Path const& manifestPath);

    MCAPI bool $_flatFileDirectoryExists(::Core::Path const& directoryPath, ::Core::Path const& manifestPath);

    MCAPI ::Core::Result $_flatFileIterateOverDirectory(
        ::Core::Path const&                                                          directoryPath,
        ::Core::Path const&                                                          manifestPath,
        ::Core::DirectoryIterationFlags                                              flags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)> callbackFunction
    );

    MCAPI bool $_isDirectoryPathAFlatFile(::Core::Path const& directoryPath);

    MCAPI ::Core::Result $_copyFlatFile(
        ::Core::Path const&                        sourceDirectoryPath,
        ::Core::Path const&                        targetDirectoryPath,
        ::std::vector<::Core::ExcludedPath> const& excludedDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
    );

    MCAPI ::Core::Result $_flatFileDeleteFileOrDirectory(
        ::Core::Path const& fileOrDirectoryPath,
        ::Core::Path const& manifestPath,
        bool                directoryDeleteEnabled,
        bool                deleteRecursively
    );

    MCAPI ::Core::Result
    $_flatFileGetFileSize(::Core::Path const& filePath, ::Core::Path const& manifestPath, uint64* pFileSize);

    MCAPI ::Core::Result $_endTransaction();

    MCAPI ::Core::Result $_writeOperation(
        ::Core::Path const&                             fullPath,
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
