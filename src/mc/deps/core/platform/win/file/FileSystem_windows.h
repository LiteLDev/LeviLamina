#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/DirectoryIterationFlags.h"
#include "mc/deps/core/file/FileAccessType.h"
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/FileType.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class FileStorageArea; }
namespace Core { class FlatFileManifestTracker; }
namespace Core { class Path; }
namespace Core { class Result; }
namespace Core { struct DirectoryIterationItem; }
namespace Core { struct ExcludedPath; }
// clang-format on

namespace Core {

class FileSystem_windows {
public:
    // prevent constructor by default
    FileSystem_windows& operator=(FileSystem_windows const&);
    FileSystem_windows(FileSystem_windows const&);
    FileSystem_windows();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FileSystem_windows() = default;

    // vIndex: 1
    virtual class Core::Result getLastModificationTime(class Core::Path const& entryPath, int64* lastModificationTime);

    // vIndex: 2
    virtual class Core::Result
    copyTimeAndAccessRights(class Core::Path const& sourceFilePath, class Core::Path const& targetFilePath);

    // vIndex: 3
    virtual void __unk_vfn_3();

    // vIndex: 4
    virtual void __unk_vfn_4();

    // vIndex: 5
    virtual void __unk_vfn_5();

    // vIndex: 6
    virtual void __unk_vfn_6();

    // vIndex: 7
    virtual class Core::Result _openFile(
        std::unique_ptr<class Core::FileImpl>&,
        class Core::Path const&,
        class Core::FileOpenMode,
        ::Core::FileBufferingMode
    );

    // vIndex: 8
    virtual bool _fileExists(class Core::Path const&);

    // vIndex: 9
    virtual class Core::Result _deleteFile(class Core::Path const&);

    // vIndex: 10
    virtual class Core::Result _getFileSize(class Core::Path const&, uint64*);

    // vIndex: 11
    virtual class Core::Result _renameFile(class Core::Path const&, class Core::Path const&);

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
    virtual class Core::Result _createOneDirectory(class Core::Path const&);

    // vIndex: 17
    virtual class Core::Result _createOneDirectoryIfNotExisting(class Core::Path const& directoryPath);

    // vIndex: 18
    virtual class Core::Result _createDirectoryRecursively(class Core::Path const& directoryPath);

    // vIndex: 19
    virtual bool _directoryExists(class Core::Path const&);

    // vIndex: 20
    virtual class Core::Result _deleteEmptyDirectory(class Core::Path const&);

    // vIndex: 21
    virtual class Core::Result _deleteDirectoryAndContentsRecursively(class Core::Path const& directoryPath);

    // vIndex: 22
    virtual class Core::Result _deleteDirectoryContentsRecursively(class Core::Path const& directoryPath);

    // vIndex: 23
    virtual class Core::Result
    _deleteRecursively(class Core::Path const& directoryPath, ::Core::FileType deleteFileType);

    // vIndex: 24
    virtual class Core::Result _renameDirectory(class Core::Path const&, class Core::Path const&);

    // vIndex: 25
    virtual class Core::Result
    _iterateOverDirectory(class Core::Path const&, ::Core::DirectoryIterationFlags, std::function<class Core::Result(struct Core::DirectoryIterationItem const&)>);

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
    virtual bool _fileOrDirectoryExists(class Core::Path const&);

    // vIndex: 32
    virtual class Core::Result _getFileOrDirectorySize(class Core::Path const& entryName, uint64* pFileSizeOut);

    // vIndex: 33
    virtual class Core::Result _getEntryType(class Core::Path const&, ::Core::FileType&);

    // vIndex: 34
    virtual void __unk_vfn_34();

    // vIndex: 35
    virtual void __unk_vfn_35();

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
    virtual class Core::Result _getLastModificationTime(class Core::Path const&, int64*);

    // vIndex: 45
    virtual class Core::Result _copyTimeAndAccessRights(class Core::Path const&, class Core::Path const&);

    // vIndex: 46
    virtual class Core::Result _endTransaction();

    // vIndex: 47
    virtual class Core::Result _writeOperation(
        class Core::Path const&                           fullPath,
        class Core::Result&&                              result,
        std::function<void(class Core::FileStorageArea*)> observerCallOrNull,
        uint64                                            numBytesWritten
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI
    FileSystem_windows(::Core::FileAccessType, std::shared_ptr<class Core::FileStorageArea>, std::shared_ptr<class Core::FlatFileManifestTracker>);

    MCAPI class Core::Result
    _iterateOverDirectoryWide(std::wstring const&, ::Core::DirectoryIterationFlags, std::function<class Core::Result(struct Core::DirectoryIterationItem const&)>);

    MCAPI class Core::Result _makeFailureFromFileSystemResult(std::error_code const&, char const*, char const*);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

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

    MCAPI class Core::Result _copyTimeAndAccessRights$(class Core::Path const&, class Core::Path const&);

    MCAPI class Core::Result _createDirectoryRecursively$(class Core::Path const& directoryPath);

    MCAPI class Core::Result _createEmptyFile$(class Core::Path const& fileName);

    MCAPI class Core::Result
    _createFlatFile$(class Core::Path const& sourceDirectoryPath, class Core::Path const& targetDirectoryPath);

    MCAPI class Core::Result _createOneDirectory$(class Core::Path const&);

    MCAPI class Core::Result _createOneDirectoryIfNotExisting$(class Core::Path const& directoryPath);

    MCAPI class Core::Result _deleteDirectoryAndContentsRecursively$(class Core::Path const& directoryPath);

    MCAPI class Core::Result _deleteDirectoryContentsRecursively$(class Core::Path const& directoryPath);

    MCAPI class Core::Result _deleteEmptyDirectory$(class Core::Path const&);

    MCAPI class Core::Result _deleteFile$(class Core::Path const&);

    MCAPI class Core::Result
    _deleteRecursively$(class Core::Path const& directoryPath, ::Core::FileType deleteFileType);

    MCAPI bool _directoryExists$(class Core::Path const&);

    MCAPI class Core::Result _endTransaction$();

    MCAPI bool _fileExists$(class Core::Path const&);

    MCAPI bool _fileOrDirectoryExists$(class Core::Path const&);

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

    MCAPI class Core::Result _getEntryType$(class Core::Path const&, ::Core::FileType&);

    MCAPI class Core::Result _getFileOrDirectorySize$(class Core::Path const& entryName, uint64* pFileSizeOut);

    MCAPI class Core::Result _getFileSize$(class Core::Path const&, uint64*);

    MCAPI class Core::Result _getLastModificationTime$(class Core::Path const&, int64*);

    MCAPI bool _isDirectoryPathAFlatFile$(class Core::Path const& directoryPath);

    MCAPI class Core::Result
    _iterateOverDirectory$(class Core::Path const&, ::Core::DirectoryIterationFlags, std::function<class Core::Result(struct Core::DirectoryIterationItem const&)>);

    MCAPI class Core::Result _openFile$(
        std::unique_ptr<class Core::FileImpl>&,
        class Core::Path const&,
        class Core::FileOpenMode,
        ::Core::FileBufferingMode
    );

    MCAPI class Core::Result _readFileData$(class Core::Path const& filePath, std::vector<uchar>& data);

    MCAPI class Core::Result _renameDirectory$(class Core::Path const&, class Core::Path const&);

    MCAPI class Core::Result _renameFile$(class Core::Path const&, class Core::Path const&);

    MCAPI class Core::Result _writeOperation$(
        class Core::Path const&                           fullPath,
        class Core::Result&&                              result,
        std::function<void(class Core::FileStorageArea*)> observerCallOrNull,
        uint64                                            numBytesWritten
    );

    MCAPI class Core::Result
    copyTimeAndAccessRights$(class Core::Path const& sourceFilePath, class Core::Path const& targetFilePath);

    MCAPI class Core::Result getLastModificationTime$(class Core::Path const& entryPath, int64* lastModificationTime);

    // NOLINTEND
};

}; // namespace Core
