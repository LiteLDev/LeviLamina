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
    // prevent constructor by default
    FileSystemImpl& operator=(FileSystemImpl const&);
    FileSystemImpl(FileSystemImpl const&);
    FileSystemImpl();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileSystemImpl();

    // vIndex: 1
    virtual class Core::Result getLastModificationTime(class Core::Path const& entryPath, int64* lastModificationTime);

    // vIndex: 2
    virtual class Core::Result
    copyTimeAndAccessRights(class Core::Path const& sourceFilePath, class Core::Path const& targetFilePath);

    // vIndex: 3
    virtual void requestFlush(std::vector<struct Core::PendingWrite> const& writeRequests);

    // vIndex: 4
    virtual bool shouldCommit();

    // vIndex: 5
    virtual ::Core::CrossStorageCopyMode getCrossStorageCopyMode();

    // vIndex: 6
    virtual uint64 getTransactionWriteSizeLimit() const;

    // vIndex: 7
    virtual void __unk_vfn_7() = 0;

    // vIndex: 8
    virtual void __unk_vfn_8() = 0;

    // vIndex: 9
    virtual void __unk_vfn_9() = 0;

    // vIndex: 10
    virtual void __unk_vfn_10() = 0;

    // vIndex: 11
    virtual void __unk_vfn_11() = 0;

    // vIndex: 12
    virtual class Core::Result _createEmptyFile(class Core::Path const& fileName);

    // vIndex: 13
    virtual class Core::Result
    _copyFile(class Core::Path const& sourceFileName, class Core::Path const& targetFileName);

    // vIndex: 14
    virtual class Core::Result _copyFileWithLimit(
        class Core::Path const& sourceFileName,
        class Core::Path const& targetFileName,
        uint64                  startPosition,
        uint64&                 outBytesWritten,
        uint64&                 outBytesRemaining
    );

    // vIndex: 15
    virtual class Core::Result _readFileData(class Core::Path const& filePath, std::vector<uchar>& data);

    // vIndex: 16
    virtual void __unk_vfn_16() = 0;

    // vIndex: 17
    virtual class Core::Result _createOneDirectoryIfNotExisting(class Core::Path const& directoryPath);

    // vIndex: 18
    virtual class Core::Result _createDirectoryRecursively(class Core::Path const& directoryPath);

    // vIndex: 19
    virtual void __unk_vfn_19() = 0;

    // vIndex: 20
    virtual void __unk_vfn_20() = 0;

    // vIndex: 21
    virtual class Core::Result _deleteDirectoryAndContentsRecursively(class Core::Path const& directoryPath);

    // vIndex: 22
    virtual class Core::Result _deleteDirectoryContentsRecursively(class Core::Path const& directoryPath);

    // vIndex: 23
    virtual class Core::Result
    _deleteRecursively(class Core::Path const& directoryPath, ::Core::FileType deleteFileType);

    // vIndex: 24
    virtual void __unk_vfn_24() = 0;

    // vIndex: 25
    virtual void __unk_vfn_25() = 0;

    // vIndex: 26
    virtual class Core::Result
    _getDirectoryFiles(std::vector<class Core::PathBuffer<std::string>>& files, class Core::Path const& directoryPath);

    // vIndex: 27
    virtual class Core::Result _getDirectoryFilesRecursively(
        std::vector<class Core::PathBuffer<std::string>>& filesOut,
        class Core::Path const&                           directoryPath
    );

    // vIndex: 28
    virtual class Core::Result
    _getDirectoryFilesSizeRecursively(uint64& totalSize, class Core::Path const& directoryPath);

    // vIndex: 29
    virtual class Core::Result _getDirectoryFilesAllocatedSizeRecursively(
        uint64&                 totalSize,
        uint64&                 totalSizeAllocated,
        class Core::Path const& directoryPath
    );

    // vIndex: 30
    virtual class Core::Result _copyDirectoryAndContentsRecursively(
        class Core::Path const& sourceDirectoryPath,
        class Core::Path const& targetDirectoryPath
    );

    // vIndex: 31
    virtual void __unk_vfn_31() = 0;

    // vIndex: 32
    virtual class Core::Result _getFileOrDirectorySize(class Core::Path const& entryName, uint64* pFileSizeOut);

    // vIndex: 33
    virtual void __unk_vfn_33() = 0;

    // vIndex: 34
    virtual class Core::Result _addIgnoredThrottlePath(class Core::Path const&);

    // vIndex: 35
    virtual class Core::Result _removeIgnoredThrottlePath(class Core::Path const&);

    // vIndex: 36
    virtual class Core::Result
    _createFlatFile(class Core::Path const& sourceDirectoryPath, class Core::Path const& targetDirectoryPath);

    // vIndex: 37
    virtual bool _flatFileFileExists(class Core::Path const& filePath, class Core::Path const& manifestPath);

    // vIndex: 38
    virtual bool _flatFileDirectoryExists(class Core::Path const& directoryPath, class Core::Path const& manifestPath);

    // vIndex: 39
    virtual class Core::Result _flatFileIterateOverDirectory(
        class Core::Path const&                                                       directoryPath,
        class Core::Path const&                                                       manifestPath,
        ::Core::DirectoryIterationFlags                                               flags,
        std::function<class Core::Result(struct Core::DirectoryIterationItem const&)> callbackFunction
    );

    // vIndex: 40
    virtual bool _isDirectoryPathAFlatFile(class Core::Path const& directoryPath);

    // vIndex: 41
    virtual class Core::Result _copyFlatFile(
        class Core::Path const&                       sourceDirectoryPath,
        class Core::Path const&                       targetDirectoryPath,
        std::vector<struct Core::ExcludedPath> const& excludedDirectories,
        std::vector<struct Core::ExcludedPath> const& excludedFiles
    );

    // vIndex: 42
    virtual class Core::Result _flatFileDeleteFileOrDirectory(
        class Core::Path const& fileOrDirectoryPath,
        class Core::Path const& manifestPath,
        bool                    directoryDeleteEnabled,
        bool                    deleteRecursively
    );

    // vIndex: 43
    virtual class Core::Result
    _flatFileGetFileSize(class Core::Path const& filePath, class Core::Path const& manifestPath, uint64* pFileSize);

    // vIndex: 44
    virtual void __unk_vfn_44() = 0;

    // vIndex: 45
    virtual void __unk_vfn_45() = 0;

    // vIndex: 46
    virtual class Core::Result _endTransaction();

    // vIndex: 47
    virtual class Core::Result _writeOperation(
        class Core::Path const&                           fullPath,
        class Core::Result&&                              result,
        std::function<void(class Core::FileStorageArea*)> observerCallOrNull,
        uint64                                            numBytesWritten
    );

    // vIndex: 48
    virtual void _initializeInternal();

    MCAPI FileSystemImpl(
        ::Core::FileAccessType                               accessType,
        std::shared_ptr<class Core::FileStorageArea>         storageArea,
        ::Core::TransactionFlags                             transactionFlags,
        std::shared_ptr<class Core::FlatFileManifestTracker> manifestTracker
    );

    MCAPI class Core::Result commit();

    MCAPI class Core::Result copyDirectoryAndContentsRecursively(
        class Core::Path const& sourceDirectoryPath,
        class Core::Path const& targetDirectoryPath
    );

    MCAPI class Core::Result copyFile(class Core::Path const& sourceFilePath, class Core::Path const& targetFilePath);

    MCAPI class Core::Result createDirectoryRecursively(class Core::Path const& directoryPath);

    MCAPI class Core::Result createOneDirectory(class Core::Path const& directoryPath);

    MCAPI class Core::Result deleteDirectoryAndContentsRecursively(class Core::Path const& directoryPath);

    MCAPI class Core::Result deleteDirectoryContentsRecursively(class Core::Path const& directoryPath);

    MCAPI class Core::Result deleteEmptyDirectory(class Core::Path const& directoryPath);

    MCAPI class Core::Result deleteFile(class Core::Path const& filePath);

    MCAPI bool directoryExists(class Core::Path const& directoryPath);

    MCAPI void enumerateFiles(std::function<void(class Core::FileImpl*)> const& fx);

    MCAPI bool fileExists(class Core::Path const& filePath);

    MCAPI bool fileOrDirectoryExists(class Core::Path const& entryPath);

    MCAPI ::Core::FileAccessType getAccessType() const;

    MCAPI class Core::Result
    getDirectoryFiles(std::vector<class Core::PathBuffer<std::string>>& files, class Core::Path const& directoryPath);

    MCAPI class Core::Result getDirectoryFilesRecursively(
        std::vector<class Core::PathBuffer<std::string>>& files,
        class Core::Path const&                           directoryPath
    );

    MCAPI class Core::Result getFileOrDirectorySize(class Core::Path const& entryPath, uint64* pFileSizeOut);

    MCAPI class Core::Result getFileSize(class Core::Path const& filePath, uint64* pFileSize);

    MCAPI std::shared_ptr<class Core::FileStorageArea> getStorageArea();

    MCAPI bool isDirectoryPathAFlatFile(class Core::Path const& directoryPath);

    MCAPI class Core::Result iterateOverDirectory(
        class Core::Path const&                                                       directoryPath,
        ::Core::DirectoryIterationFlags                                               flags,
        std::function<class Core::Result(struct Core::DirectoryIterationItem const&)> callbackFunction
    );

    MCAPI class Core::Result openFile(
        std::unique_ptr<class Core::FileImpl>& fileOut,
        class Core::Path const&                filePath,
        class Core::FileOpenMode               openMode,
        ::Core::FileBufferingMode              fileBufferingMode
    );

    MCAPI class Core::Result readFileData(class Core::Path const& filePath, std::vector<uchar>& data);

    MCAPI class Core::Result removeIgnoredThrottlePath(class Core::Path const& path);

    MCAPI class Core::Result renameFile(class Core::Path const& sourceFilePath, class Core::Path const& targetFilePath);

    MCAPI static class Core::Result isValidPath(class Core::Path const& path);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI class Core::Result _flatFileUnloadManifest(class Core::Path const& filePath);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Core::Result _flatFileOpenFlatFile(
        std::unique_ptr<class Core::FileImpl>& fileOut,
        class Core::Path const&                filePath,
        class Core::Path const&                manifestPath,
        class Core::FileOpenMode               openMode,
        ::Core::FileBufferingMode              fileBufferingMode
    );

    MCAPI void _initialize();

    MCAPI class Core::Result _readOperation(class Core::Result&& result, uint64 numBytesRead);

    MCAPI class Core::Result _readWriteOperation(
        class Core::Result&&                              result,
        std::function<void(class Core::FileStorageArea*)> observerCallOrNull,
        uint64                                            numBytesRead,
        uint64                                            numBytesWritten
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        ::Core::FileAccessType                               accessType,
        std::shared_ptr<class Core::FileStorageArea>         storageArea,
        ::Core::TransactionFlags                             transactionFlags,
        std::shared_ptr<class Core::FlatFileManifestTracker> manifestTracker
    );

    MCAPI void dtor$();

    MCAPI class Core::Result _addIgnoredThrottlePath$(class Core::Path const&);

    MCAPI class Core::Result _copyDirectoryAndContentsRecursively$(
        class Core::Path const& sourceDirectoryPath,
        class Core::Path const& targetDirectoryPath
    );

    MCAPI class Core::Result _copyFile$(class Core::Path const& sourceFileName, class Core::Path const& targetFileName);

    MCAPI class Core::Result _copyFileWithLimit$(
        class Core::Path const& sourceFileName,
        class Core::Path const& targetFileName,
        uint64                  startPosition,
        uint64&                 outBytesWritten,
        uint64&                 outBytesRemaining
    );

    MCAPI class Core::Result _copyFlatFile$(
        class Core::Path const&                       sourceDirectoryPath,
        class Core::Path const&                       targetDirectoryPath,
        std::vector<struct Core::ExcludedPath> const& excludedDirectories,
        std::vector<struct Core::ExcludedPath> const& excludedFiles
    );

    MCAPI class Core::Result _createDirectoryRecursively$(class Core::Path const& directoryPath);

    MCAPI class Core::Result _createEmptyFile$(class Core::Path const& fileName);

    MCAPI class Core::Result
    _createFlatFile$(class Core::Path const& sourceDirectoryPath, class Core::Path const& targetDirectoryPath);

    MCAPI class Core::Result _createOneDirectoryIfNotExisting$(class Core::Path const& directoryPath);

    MCAPI class Core::Result _deleteDirectoryAndContentsRecursively$(class Core::Path const& directoryPath);

    MCAPI class Core::Result _deleteDirectoryContentsRecursively$(class Core::Path const& directoryPath);

    MCAPI class Core::Result
    _deleteRecursively$(class Core::Path const& directoryPath, ::Core::FileType deleteFileType);

    MCAPI class Core::Result _endTransaction$();

    MCAPI class Core::Result _flatFileDeleteFileOrDirectory$(
        class Core::Path const& fileOrDirectoryPath,
        class Core::Path const& manifestPath,
        bool                    directoryDeleteEnabled,
        bool                    deleteRecursively
    );

    MCAPI bool _flatFileDirectoryExists$(class Core::Path const& directoryPath, class Core::Path const& manifestPath);

    MCAPI bool _flatFileFileExists$(class Core::Path const& filePath, class Core::Path const& manifestPath);

    MCAPI class Core::Result
    _flatFileGetFileSize$(class Core::Path const& filePath, class Core::Path const& manifestPath, uint64* pFileSize);

    MCAPI class Core::Result _flatFileIterateOverDirectory$(
        class Core::Path const&                                                       directoryPath,
        class Core::Path const&                                                       manifestPath,
        ::Core::DirectoryIterationFlags                                               flags,
        std::function<class Core::Result(struct Core::DirectoryIterationItem const&)> callbackFunction
    );

    MCAPI class Core::Result
    _getDirectoryFiles$(std::vector<class Core::PathBuffer<std::string>>& files, class Core::Path const& directoryPath);

    MCAPI class Core::Result _getDirectoryFilesAllocatedSizeRecursively$(
        uint64&                 totalSize,
        uint64&                 totalSizeAllocated,
        class Core::Path const& directoryPath
    );

    MCAPI class Core::Result _getDirectoryFilesRecursively$(
        std::vector<class Core::PathBuffer<std::string>>& filesOut,
        class Core::Path const&                           directoryPath
    );

    MCAPI class Core::Result
    _getDirectoryFilesSizeRecursively$(uint64& totalSize, class Core::Path const& directoryPath);

    MCAPI class Core::Result _getFileOrDirectorySize$(class Core::Path const& entryName, uint64* pFileSizeOut);

    MCAPI void _initializeInternal$();

    MCAPI bool _isDirectoryPathAFlatFile$(class Core::Path const& directoryPath);

    MCAPI class Core::Result _readFileData$(class Core::Path const& filePath, std::vector<uchar>& data);

    MCAPI class Core::Result _removeIgnoredThrottlePath$(class Core::Path const&);

    MCAPI class Core::Result _writeOperation$(
        class Core::Path const&                           fullPath,
        class Core::Result&&                              result,
        std::function<void(class Core::FileStorageArea*)> observerCallOrNull,
        uint64                                            numBytesWritten
    );

    MCAPI class Core::Result
    copyTimeAndAccessRights$(class Core::Path const& sourceFilePath, class Core::Path const& targetFilePath);

    MCAPI ::Core::CrossStorageCopyMode getCrossStorageCopyMode$();

    MCAPI class Core::Result getLastModificationTime$(class Core::Path const& entryPath, int64* lastModificationTime);

    MCAPI uint64 getTransactionWriteSizeLimit$() const;

    MCAPI void requestFlush$(std::vector<struct Core::PendingWrite> const& writeRequests);

    MCAPI bool shouldCommit$();

    MCAPI static class Core::FileStats& sStats();

    // NOLINTEND
};

}; // namespace Core
