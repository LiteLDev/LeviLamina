#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/DirectoryIterationFlags.h"
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/FileSystem.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Core { class File; }
namespace Core { class FileOpenMode; }
namespace Core { class FileSizePresetToken; }
namespace Core { class FileSystemImpl; }
namespace Core { class Path; }
namespace Core { class Result; }
namespace Core { struct DirectoryIterationItem; }
namespace Core { struct ExcludedPath; }
// clang-format on

namespace Core {

class StandardFileSystem : public ::Core::FileSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk703cf7;
    // NOLINTEND

public:
    // prevent constructor by default
    StandardFileSystem& operator=(StandardFileSystem const&);
    StandardFileSystem(StandardFileSystem const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Core::Result openFile(
        ::Core::Path const&       filePath,
        ::Core::File&             fileOut,
        ::Core::FileOpenMode      openMode,
        ::Core::FileBufferingMode bufferingMode
    ) /*override*/;

    // vIndex: 2
    virtual bool fileExists(::Core::Path const& filePath) /*override*/;

    // vIndex: 3
    virtual ::Core::Result deleteFile(::Core::Path const& filePath) /*override*/;

    // vIndex: 4
    virtual ::Core::Result getFileSize(::Core::Path const& filePath, uint64* pFileSize) /*override*/;

    // vIndex: 5
    virtual ::Core::Result renameFile(::Core::Path const& sourceName, ::Core::Path const& targetName) /*override*/;

    // vIndex: 6
    virtual ::Core::Result createEmptyFile(::Core::Path const& filePath) /*override*/;

    // vIndex: 7
    virtual ::Core::Result
    copyFile(::Core::Path const& sourceFileName, ::Core::Path const& targetFileName) /*override*/;

    // vIndex: 8
    virtual ::Core::Result
    copyFileWithLimit(::Core::Path const& sourceFilePath, ::Core::Path const& targetFilePath) /*override*/;

    // vIndex: 9
    virtual ::Core::Result readFileData(::Core::Path const& filePath, ::std::vector<uchar>& data) /*override*/;

    // vIndex: 10
    virtual ::Core::Result createOneDirectory(::Core::Path const& directoryPath) /*override*/;

    // vIndex: 11
    virtual ::Core::Result createOneDirectoryIfNotExisting(::Core::Path const& dirName) /*override*/;

    // vIndex: 12
    virtual ::Core::Result createDirectoryRecursively(::Core::Path const& dirName) /*override*/;

    // vIndex: 13
    virtual bool directoryExists(::Core::Path const& dirName) /*override*/;

    // vIndex: 14
    virtual ::Core::Result deleteEmptyDirectory(::Core::Path const& dirPath) /*override*/;

    // vIndex: 15
    virtual ::Core::Result deleteDirectoryAndContentsRecursively(::Core::Path const& dirName) /*override*/;

    // vIndex: 16
    virtual ::Core::Result deleteDirectoryContentsRecursively(::Core::Path const& directoryName) /*override*/;

    // vIndex: 17
    virtual ::Core::Result
    renameDirectory(::Core::Path const& oldDirectoryName, ::Core::Path const& newDirectoryName) /*override*/;

    // vIndex: 18
    virtual ::Core::Result iterateOverDirectory(
        ::Core::Path const&                                                          dirName,
        ::Core::DirectoryIterationFlags                                              flags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)> callbackFunction
    ) /*override*/;

    // vIndex: 19
    virtual ::Core::Result
    getDirectoryFiles(::std::vector<::Core::PathBuffer<::std::string>>& files, ::Core::Path const& path) /*override*/;

    // vIndex: 20
    virtual ::Core::Result getDirectoryFilesAndSizes(
        ::std::vector<::Core::FileSystem::BasicFileData>& filesOut,
        ::Core::Path const&                               directoryPath
    ) /*override*/;

    // vIndex: 21
    virtual ::Core::Result getDirectoryFilesRecursively(
        ::std::vector<::Core::PathBuffer<::std::string>>& files,
        ::Core::Path const&                               directoryPath
    ) /*override*/;

    // vIndex: 22
    virtual ::Core::Result
    getDirectoryFilesSizeRecursively(uint64& totalSize, ::Core::Path const& directoryPath) /*override*/;

    // vIndex: 23
    virtual ::Core::Result getDirectoryFilesAllocatedSizeRecursively(
        uint64&             totalSize,
        uint64&             totalAllocatedSize,
        ::Core::Path const& directoryPath
    ) /*override*/;

    // vIndex: 24
    virtual ::Core::Result
    copyDirectoryAndContentsRecursively(::Core::Path const& from, ::Core::Path const& to) /*override*/;

    // vIndex: 25
    virtual ::Core::Result
    copyDirectoryAndContentsRecursivelyWithLimit(::Core::Path const& from, ::Core::Path const& to) /*override*/;

    // vIndex: 26
    virtual bool isDirectoryPartiallyCopied(::Core::Path const& directory) /*override*/;

    // vIndex: 27
    virtual bool fileOrDirectoryExists(::Core::Path const& fileOrDirectoryName) /*override*/;

    // vIndex: 28
    virtual ::Core::Result getFileOrDirectorySize(::Core::Path const& path, uint64* pFileSizeOut) /*override*/;

    // vIndex: 29
    virtual ::Core::Result addIgnoredThrottlePath(::Core::Path const& path) /*override*/;

    // vIndex: 30
    virtual ::Core::Result removeIgnoredThrottlePath(::Core::Path const& path) /*override*/;

    // vIndex: 31
    virtual ::Core::Result isValidPath(::Core::Path const& path) /*override*/;

    // vIndex: 32
    virtual ::Core::Result
    getLastModificationTime(::Core::Path const& filePath, int64* pLastModificationTime) /*override*/;

    // vIndex: 33
    virtual ::Core::Result
    copyTimeAndAccessRights(::Core::Path const& sourceFilePath, ::Core::Path const& targetFilePath) /*override*/;

    // vIndex: 34
    virtual ::Core::Result
    createFlatFile(::Core::Path const& sourceDirectoryPath, ::Core::Path const& targetDirectoryPath) /*override*/;

    // vIndex: 35
    virtual bool isDirectoryPathAFlatFile(::Core::Path const& directoryPath) /*override*/;

    // vIndex: 36
    virtual ::Core::Result copyFlatFile(
        ::Core::Path const&                        flatFileParentDirectory,
        ::Core::Path const&                        targetDirectory,
        ::std::vector<::Core::ExcludedPath> const& excludedDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
    ) /*override*/;

    // vIndex: 37
    virtual ::Core::Result createDirectoryForFile(::Core::Path const& filePath) /*override*/;

    // vIndex: 38
    virtual ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    getUniqueFilePathForFile(::Core::Path const& filePath) /*override*/;

    // vIndex: 39
    virtual ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    getUniqueFilePathForDirectory(::Core::Path const& directoryPath) /*override*/;

    // vIndex: 40
    virtual ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> createUniquePathFromSeed(
        ::Core::Path const&                 basePath,
        ::std::function<::std::string(int)> seedGenerator
    ) /*override*/;

    // vIndex: 41
    virtual ::std::vector<::Core::PathBuffer<::std::string>> splitPathIntoFullPathSegments(::Core::Path const& path
    ) /*override*/;

    // vIndex: 42
    virtual ::Core::Result readFileDataExt(
        ::Core::Path const&   filePath,
        uint64                filePosition,
        uint64                bufferSize,
        ::std::vector<uchar>& buffer,
        uint64&               bytesRead
    ) /*override*/;

    // vIndex: 43
    virtual ::Core::Result cleanPath_deprecated(
        ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>& pathBufferOut,
        ::Core::Path const&                                       pathIn
    ) /*override*/;

    // vIndex: 44
    virtual ::Core::Result cleanPathSeparators_deprecated(
        ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>& pathBufferOut,
        ::Core::Path const&                                       pathIn
    ) /*override*/;

    // vIndex: 45
    virtual bool checkStorageCorrupt(::Core::Path const& path) /*override*/;

    // vIndex: 46
    virtual ::std::unique_ptr<::Core::FileSizePresetToken>
    presetFileInitialSize(::Core::Path const& path, uint64 initialSize) /*override*/;

    // vIndex: 47
    virtual ::Core::Result _getDirectoriesAndFileSizesRecursively(
        ::Core::Path const&                               directoryPath,
        ::std::vector<::Core::PathBuffer<::std::string>>& directoriesOut,
        ::std::vector<::Core::FileSystem::BasicFileData>& filesOut
    ) /*override*/;

    // vIndex: 48
    virtual ::Core::Result _copyDirectoryStructure(
        ::Core::Path const&                                     from,
        ::Core::Path const&                                     to,
        ::std::vector<::Core::PathBuffer<::std::string>> const& directories,
        ::Core::FileSystemImpl*                                 transaction
    ) /*override*/;

    // vIndex: 49
    virtual ::Core::Result _copyFilesWithLimit(
        ::Core::Path const&                               from,
        ::Core::Path const&                               to,
        ::std::vector<::Core::FileSystem::BasicFileData>& files,
        uint64&                                           currentFileBytesWritten,
        uint64 const                                      transactionLimit,
        ::std::function<
            ::Core::Result(::Core::Path const&, ::Core::Path const&, ::Core::FileSystem::FileTransferProgress&)> const&
            fileTransferFunction
    ) /*override*/;

    // vIndex: 50
    virtual ::Core::Result _copyFlatFile(
        ::Core::Path const&                        flatFileParentDirectory,
        ::Core::Path const&                        targetDirectory,
        ::std::vector<::Core::ExcludedPath> const& excludedDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
    ) /*override*/;

    // vIndex: 51
    virtual ::std::optional<uint64> _checkFileInitialSize(::Core::Path const& path) /*override*/;

    // vIndex: 0
    virtual ~StandardFileSystem() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StandardFileSystem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Core::Result $openFile(
        ::Core::Path const&       filePath,
        ::Core::File&             fileOut,
        ::Core::FileOpenMode      openMode,
        ::Core::FileBufferingMode bufferingMode
    );

    MCAPI bool $fileExists(::Core::Path const& filePath);

    MCAPI ::Core::Result $deleteFile(::Core::Path const& filePath);

    MCAPI ::Core::Result $getFileSize(::Core::Path const& filePath, uint64* pFileSize);

    MCAPI ::Core::Result $renameFile(::Core::Path const& sourceName, ::Core::Path const& targetName);

    MCAPI ::Core::Result $createEmptyFile(::Core::Path const& filePath);

    MCAPI ::Core::Result $copyFile(::Core::Path const& sourceFileName, ::Core::Path const& targetFileName);

    MCAPI ::Core::Result $copyFileWithLimit(::Core::Path const& sourceFilePath, ::Core::Path const& targetFilePath);

    MCAPI ::Core::Result $readFileData(::Core::Path const& filePath, ::std::vector<uchar>& data);

    MCAPI ::Core::Result $createOneDirectory(::Core::Path const& directoryPath);

    MCAPI ::Core::Result $createOneDirectoryIfNotExisting(::Core::Path const& dirName);

    MCAPI ::Core::Result $createDirectoryRecursively(::Core::Path const& dirName);

    MCAPI bool $directoryExists(::Core::Path const& dirName);

    MCAPI ::Core::Result $deleteEmptyDirectory(::Core::Path const& dirPath);

    MCAPI ::Core::Result $deleteDirectoryAndContentsRecursively(::Core::Path const& dirName);

    MCAPI ::Core::Result $deleteDirectoryContentsRecursively(::Core::Path const& directoryName);

    MCAPI ::Core::Result $renameDirectory(::Core::Path const& oldDirectoryName, ::Core::Path const& newDirectoryName);

    MCAPI ::Core::Result $iterateOverDirectory(
        ::Core::Path const&                                                          dirName,
        ::Core::DirectoryIterationFlags                                              flags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)> callbackFunction
    );

    MCAPI ::Core::Result
    $getDirectoryFiles(::std::vector<::Core::PathBuffer<::std::string>>& files, ::Core::Path const& path);

    MCAPI ::Core::Result $getDirectoryFilesAndSizes(
        ::std::vector<::Core::FileSystem::BasicFileData>& filesOut,
        ::Core::Path const&                               directoryPath
    );

    MCAPI ::Core::Result $getDirectoryFilesRecursively(
        ::std::vector<::Core::PathBuffer<::std::string>>& files,
        ::Core::Path const&                               directoryPath
    );

    MCAPI ::Core::Result $getDirectoryFilesSizeRecursively(uint64& totalSize, ::Core::Path const& directoryPath);

    MCAPI ::Core::Result $getDirectoryFilesAllocatedSizeRecursively(
        uint64&             totalSize,
        uint64&             totalAllocatedSize,
        ::Core::Path const& directoryPath
    );

    MCAPI ::Core::Result $copyDirectoryAndContentsRecursively(::Core::Path const& from, ::Core::Path const& to);

    MCAPI ::Core::Result
    $copyDirectoryAndContentsRecursivelyWithLimit(::Core::Path const& from, ::Core::Path const& to);

    MCAPI bool $isDirectoryPartiallyCopied(::Core::Path const& directory);

    MCAPI bool $fileOrDirectoryExists(::Core::Path const& fileOrDirectoryName);

    MCAPI ::Core::Result $getFileOrDirectorySize(::Core::Path const& path, uint64* pFileSizeOut);

    MCAPI ::Core::Result $addIgnoredThrottlePath(::Core::Path const& path);

    MCAPI ::Core::Result $removeIgnoredThrottlePath(::Core::Path const& path);

    MCAPI ::Core::Result $isValidPath(::Core::Path const& path);

    MCAPI ::Core::Result $getLastModificationTime(::Core::Path const& filePath, int64* pLastModificationTime);

    MCAPI ::Core::Result
    $copyTimeAndAccessRights(::Core::Path const& sourceFilePath, ::Core::Path const& targetFilePath);

    MCAPI ::Core::Result
    $createFlatFile(::Core::Path const& sourceDirectoryPath, ::Core::Path const& targetDirectoryPath);

    MCAPI bool $isDirectoryPathAFlatFile(::Core::Path const& directoryPath);

    MCAPI ::Core::Result $copyFlatFile(
        ::Core::Path const&                        flatFileParentDirectory,
        ::Core::Path const&                        targetDirectory,
        ::std::vector<::Core::ExcludedPath> const& excludedDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
    );

    MCAPI ::Core::Result $createDirectoryForFile(::Core::Path const& filePath);

    MCAPI ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    $getUniqueFilePathForFile(::Core::Path const& filePath);

    MCAPI ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    $getUniqueFilePathForDirectory(::Core::Path const& directoryPath);

    MCAPI ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    $createUniquePathFromSeed(::Core::Path const& basePath, ::std::function<::std::string(int)> seedGenerator);

    MCAPI ::std::vector<::Core::PathBuffer<::std::string>> $splitPathIntoFullPathSegments(::Core::Path const& path);

    MCAPI ::Core::Result $readFileDataExt(
        ::Core::Path const&   filePath,
        uint64                filePosition,
        uint64                bufferSize,
        ::std::vector<uchar>& buffer,
        uint64&               bytesRead
    );

    MCAPI ::Core::Result $cleanPath_deprecated(
        ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>& pathBufferOut,
        ::Core::Path const&                                       pathIn
    );

    MCAPI ::Core::Result $cleanPathSeparators_deprecated(
        ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>& pathBufferOut,
        ::Core::Path const&                                       pathIn
    );

    MCAPI bool $checkStorageCorrupt(::Core::Path const& path);

    MCAPI ::std::unique_ptr<::Core::FileSizePresetToken>
    $presetFileInitialSize(::Core::Path const& path, uint64 initialSize);

    MCAPI ::Core::Result $_getDirectoriesAndFileSizesRecursively(
        ::Core::Path const&                               directoryPath,
        ::std::vector<::Core::PathBuffer<::std::string>>& directoriesOut,
        ::std::vector<::Core::FileSystem::BasicFileData>& filesOut
    );

    MCAPI ::Core::Result $_copyDirectoryStructure(
        ::Core::Path const&                                     from,
        ::Core::Path const&                                     to,
        ::std::vector<::Core::PathBuffer<::std::string>> const& directories,
        ::Core::FileSystemImpl*                                 transaction
    );

    MCAPI ::Core::Result $_copyFilesWithLimit(
        ::Core::Path const&                               from,
        ::Core::Path const&                               to,
        ::std::vector<::Core::FileSystem::BasicFileData>& files,
        uint64&                                           currentFileBytesWritten,
        uint64 const                                      transactionLimit,
        ::std::function<
            ::Core::Result(::Core::Path const&, ::Core::Path const&, ::Core::FileSystem::FileTransferProgress&)> const&
            fileTransferFunction
    );

    MCAPI ::Core::Result $_copyFlatFile(
        ::Core::Path const&                        flatFileParentDirectory,
        ::Core::Path const&                        targetDirectory,
        ::std::vector<::Core::ExcludedPath> const& excludedDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
    );

    MCAPI ::std::optional<uint64> $_checkFileInitialSize(::Core::Path const& path);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
