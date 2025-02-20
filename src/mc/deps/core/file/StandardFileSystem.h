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
namespace Core { class PathView; }
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
    StandardFileSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Core::Result openFile(
        ::Core::PathView          filePath,
        ::Core::File&             fileOut,
        ::Core::FileOpenMode      openMode,
        ::Core::FileBufferingMode bufferingMode
    ) /*override*/;

    // vIndex: 2
    virtual bool fileExists(::Core::PathView filePath) /*override*/;

    // vIndex: 3
    virtual ::Core::Result deleteFile(::Core::PathView filePath) /*override*/;

    // vIndex: 4
    virtual ::Core::Result getFileSize(::Core::PathView filePath, uint64* pFileSize) /*override*/;

    // vIndex: 5
    virtual ::Core::Result renameFile(::Core::PathView sourceName, ::Core::PathView targetName) /*override*/;

    // vIndex: 6
    virtual ::Core::Result createEmptyFile(::Core::PathView filePath) /*override*/;

    // vIndex: 7
    virtual ::Core::Result copyFile(::Core::PathView sourceFileName, ::Core::PathView targetFileName) /*override*/;

    // vIndex: 8
    virtual ::Core::Result
    copyFileWithLimit(::Core::PathView sourceFilePath, ::Core::PathView targetFilePath) /*override*/;

    // vIndex: 9
    virtual ::Core::Result readFileData(::Core::PathView filePath, ::std::vector<uchar>& data) /*override*/;

    // vIndex: 10
    virtual ::Core::Result createOneDirectory(::Core::PathView directoryPath) /*override*/;

    // vIndex: 11
    virtual ::Core::Result createOneDirectoryIfNotExisting(::Core::PathView dirName) /*override*/;

    // vIndex: 12
    virtual ::Core::Result createDirectoryRecursively(::Core::PathView dirName) /*override*/;

    // vIndex: 13
    virtual bool directoryExists(::Core::PathView dirName) /*override*/;

    // vIndex: 14
    virtual ::Core::Result deleteEmptyDirectory(::Core::PathView dirPath) /*override*/;

    // vIndex: 15
    virtual ::Core::Result deleteDirectoryAndContentsRecursively(::Core::PathView dirName) /*override*/;

    // vIndex: 16
    virtual ::Core::Result deleteDirectoryContentsRecursively(::Core::PathView directoryName) /*override*/;

    // vIndex: 17
    virtual ::Core::Result
    renameDirectory(::Core::PathView oldDirectoryName, ::Core::PathView newDirectoryName) /*override*/;

    // vIndex: 18
    virtual ::Core::Result iterateOverDirectory(
        ::Core::PathView                                                             dirName,
        ::Core::DirectoryIterationFlags                                              flags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)> callbackFunction
    ) /*override*/;

    // vIndex: 19
    virtual ::Core::Result
    getDirectoryFiles(::std::vector<::Core::PathBuffer<::std::string>>& files, ::Core::PathView path) /*override*/;

    // vIndex: 20
    virtual ::Core::Result getDirectoryFilesAndSizes(
        ::std::vector<::Core::FileSystem::BasicFileData>& filesOut,
        ::Core::PathView                                  directoryPath
    ) /*override*/;

    // vIndex: 21
    virtual ::Core::Result getDirectoryFilesRecursively(
        ::std::vector<::Core::PathBuffer<::std::string>>& files,
        ::Core::PathView                                  directoryPath
    ) /*override*/;

    // vIndex: 22
    virtual ::Core::Result
    getDirectoryFilesSizeRecursively(uint64& totalSize, ::Core::PathView directoryPath) /*override*/;

    // vIndex: 23
    virtual ::Core::Result getDirectoryFilesAllocatedSizeRecursively(
        uint64&          totalSize,
        uint64&          totalAllocatedSize,
        ::Core::PathView directoryPath
    ) /*override*/;

    // vIndex: 24
    virtual ::Core::Result copyDirectoryAndContentsRecursively(::Core::PathView from, ::Core::PathView to) /*override*/;

    // vIndex: 25
    virtual ::Core::Result
    copyDirectoryAndContentsRecursivelyWithLimit(::Core::PathView from, ::Core::PathView to) /*override*/;

    // vIndex: 26
    virtual bool isDirectoryPartiallyCopied(::Core::PathView directory) /*override*/;

    // vIndex: 27
    virtual bool fileOrDirectoryExists(::Core::PathView fileOrDirectoryName) /*override*/;

    // vIndex: 28
    virtual ::Core::Result getFileOrDirectorySize(::Core::PathView path, uint64* pFileSizeOut) /*override*/;

    // vIndex: 29
    virtual ::Core::Result addIgnoredThrottlePath(::Core::PathView path) /*override*/;

    // vIndex: 30
    virtual ::Core::Result removeIgnoredThrottlePath(::Core::PathView path) /*override*/;

    // vIndex: 31
    virtual ::Core::Result isValidPath(::Core::PathView path) /*override*/;

    // vIndex: 32
    virtual ::Core::Result
    getLastModificationTime(::Core::PathView filePath, int64* pLastModificationTime) /*override*/;

    // vIndex: 33
    virtual ::Core::Result
    copyTimeAndAccessRights(::Core::PathView sourceFilePath, ::Core::PathView targetFilePath) /*override*/;

    // vIndex: 34
    virtual ::Core::Result
    createFlatFile(::Core::PathView sourceDirectoryPath, ::Core::PathView targetDirectoryPath) /*override*/;

    // vIndex: 35
    virtual bool isDirectoryPathAFlatFile(::Core::PathView directoryPath) /*override*/;

    // vIndex: 36
    virtual ::Core::Result copyFlatFile(
        ::Core::PathView                           flatFileParentDirectory,
        ::Core::PathView                           targetDirectory,
        ::std::vector<::Core::ExcludedPath> const& excludedDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
    ) /*override*/;

    // vIndex: 37
    virtual ::Core::Result createDirectoryForFile(::Core::PathView filePath) /*override*/;

    // vIndex: 38
    virtual ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> getUniqueFilePathForFile(::Core::PathView filePath
    ) /*override*/;

    // vIndex: 39
    virtual ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    getUniqueFilePathForDirectory(::Core::PathView directoryPath) /*override*/;

    // vIndex: 40
    virtual ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    createUniquePathFromSeed(::Core::PathView basePath, ::std::function<::std::string(int)> seedGenerator) /*override*/;

    // vIndex: 41
    virtual ::std::vector<::Core::PathBuffer<::std::string>> splitPathIntoFullPathSegments(::Core::PathView path
    ) /*override*/;

    // vIndex: 42
    virtual ::Core::Result readFileDataExt(
        ::Core::PathView      filePath,
        uint64                filePosition,
        uint64                bufferSize,
        ::std::vector<uchar>& buffer,
        uint64&               bytesRead
    ) /*override*/;

    // vIndex: 43
    virtual ::Core::Result cleanPath_deprecated(
        ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>& pathBufferOut,
        ::Core::PathView                                          pathIn
    ) /*override*/;

    // vIndex: 44
    virtual ::Core::Result cleanPathSeparators_deprecated(
        ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>& pathBufferOut,
        ::Core::PathView                                          pathIn
    ) /*override*/;

    // vIndex: 45
    virtual bool checkStorageCorrupt(::Core::PathView path) /*override*/;

    // vIndex: 46
    virtual ::std::unique_ptr<::Core::FileSizePresetToken>
    presetFileInitialSize(::Core::PathView path, uint64 initialSize) /*override*/;

    // vIndex: 47
    virtual ::Core::Result _getDirectoriesAndFileSizesRecursively(
        ::Core::PathView                                  directoryPath,
        ::std::vector<::Core::PathBuffer<::std::string>>& directoriesOut,
        ::std::vector<::Core::FileSystem::BasicFileData>& filesOut
    ) /*override*/;

    // vIndex: 48
    virtual ::Core::Result _copyDirectoryStructure(
        ::Core::PathView                                        from,
        ::Core::PathView                                        to,
        ::std::vector<::Core::PathBuffer<::std::string>> const& directories,
        ::Core::FileSystemImpl*                                 transaction
    ) /*override*/;

    // vIndex: 49
    virtual ::Core::Result _copyFilesWithLimit(
        ::Core::PathView                                  from,
        ::Core::PathView                                  to,
        ::std::vector<::Core::FileSystem::BasicFileData>& files,
        uint64&                                           currentFileBytesWritten,
        uint64 const                                      transactionLimit,
        ::std::function<
            ::Core::Result(::Core::PathView, ::Core::PathView, ::Core::FileSystem::FileTransferProgress&)> const&
            fileTransferFunction
    ) /*override*/;

    // vIndex: 50
    virtual ::Core::Result _copyFlatFile(
        ::Core::PathView                           flatFileParentDirectory,
        ::Core::PathView                           targetDirectory,
        ::std::vector<::Core::ExcludedPath> const& excludedDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
    ) /*override*/;

    // vIndex: 51
    virtual ::std::optional<uint64> _checkFileInitialSize(::Core::PathView path) /*override*/;

    // vIndex: 0
    virtual ~StandardFileSystem() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Core::Result $openFile(
        ::Core::PathView          filePath,
        ::Core::File&             fileOut,
        ::Core::FileOpenMode      openMode,
        ::Core::FileBufferingMode bufferingMode
    );

    MCAPI bool $fileExists(::Core::PathView filePath);

    MCAPI ::Core::Result $deleteFile(::Core::PathView filePath);

    MCAPI ::Core::Result $getFileSize(::Core::PathView filePath, uint64* pFileSize);

    MCAPI ::Core::Result $renameFile(::Core::PathView sourceName, ::Core::PathView targetName);

    MCAPI ::Core::Result $createEmptyFile(::Core::PathView filePath);

    MCAPI ::Core::Result $copyFile(::Core::PathView sourceFileName, ::Core::PathView targetFileName);

    MCAPI ::Core::Result $copyFileWithLimit(::Core::PathView sourceFilePath, ::Core::PathView targetFilePath);

    MCAPI ::Core::Result $readFileData(::Core::PathView filePath, ::std::vector<uchar>& data);

    MCAPI ::Core::Result $createOneDirectory(::Core::PathView directoryPath);

    MCAPI ::Core::Result $createOneDirectoryIfNotExisting(::Core::PathView dirName);

    MCAPI ::Core::Result $createDirectoryRecursively(::Core::PathView dirName);

    MCAPI bool $directoryExists(::Core::PathView dirName);

    MCAPI ::Core::Result $deleteEmptyDirectory(::Core::PathView dirPath);

    MCAPI ::Core::Result $deleteDirectoryAndContentsRecursively(::Core::PathView dirName);

    MCAPI ::Core::Result $deleteDirectoryContentsRecursively(::Core::PathView directoryName);

    MCAPI ::Core::Result $renameDirectory(::Core::PathView oldDirectoryName, ::Core::PathView newDirectoryName);

    MCAPI ::Core::Result $iterateOverDirectory(
        ::Core::PathView                                                             dirName,
        ::Core::DirectoryIterationFlags                                              flags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)> callbackFunction
    );

    MCAPI ::Core::Result
    $getDirectoryFiles(::std::vector<::Core::PathBuffer<::std::string>>& files, ::Core::PathView path);

    MCAPI ::Core::Result $getDirectoryFilesAndSizes(
        ::std::vector<::Core::FileSystem::BasicFileData>& filesOut,
        ::Core::PathView                                  directoryPath
    );

    MCAPI ::Core::Result $getDirectoryFilesRecursively(
        ::std::vector<::Core::PathBuffer<::std::string>>& files,
        ::Core::PathView                                  directoryPath
    );

    MCAPI ::Core::Result $getDirectoryFilesSizeRecursively(uint64& totalSize, ::Core::PathView directoryPath);

    MCAPI ::Core::Result $getDirectoryFilesAllocatedSizeRecursively(
        uint64&          totalSize,
        uint64&          totalAllocatedSize,
        ::Core::PathView directoryPath
    );

    MCAPI ::Core::Result $copyDirectoryAndContentsRecursively(::Core::PathView from, ::Core::PathView to);

    MCAPI ::Core::Result $copyDirectoryAndContentsRecursivelyWithLimit(::Core::PathView from, ::Core::PathView to);

    MCAPI bool $isDirectoryPartiallyCopied(::Core::PathView directory);

    MCAPI bool $fileOrDirectoryExists(::Core::PathView fileOrDirectoryName);

    MCAPI ::Core::Result $getFileOrDirectorySize(::Core::PathView path, uint64* pFileSizeOut);

    MCAPI ::Core::Result $addIgnoredThrottlePath(::Core::PathView path);

    MCAPI ::Core::Result $removeIgnoredThrottlePath(::Core::PathView path);

    MCAPI ::Core::Result $isValidPath(::Core::PathView path);

    MCAPI ::Core::Result $getLastModificationTime(::Core::PathView filePath, int64* pLastModificationTime);

    MCAPI ::Core::Result $copyTimeAndAccessRights(::Core::PathView sourceFilePath, ::Core::PathView targetFilePath);

    MCAPI ::Core::Result $createFlatFile(::Core::PathView sourceDirectoryPath, ::Core::PathView targetDirectoryPath);

    MCAPI bool $isDirectoryPathAFlatFile(::Core::PathView directoryPath);

    MCAPI ::Core::Result $copyFlatFile(
        ::Core::PathView                           flatFileParentDirectory,
        ::Core::PathView                           targetDirectory,
        ::std::vector<::Core::ExcludedPath> const& excludedDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
    );

    MCAPI ::Core::Result $createDirectoryForFile(::Core::PathView filePath);

    MCAPI ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> $getUniqueFilePathForFile(::Core::PathView filePath);

    MCAPI ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    $getUniqueFilePathForDirectory(::Core::PathView directoryPath);

    MCAPI ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    $createUniquePathFromSeed(::Core::PathView basePath, ::std::function<::std::string(int)> seedGenerator);

    MCAPI ::std::vector<::Core::PathBuffer<::std::string>> $splitPathIntoFullPathSegments(::Core::PathView path);

    MCAPI ::Core::Result $readFileDataExt(
        ::Core::PathView      filePath,
        uint64                filePosition,
        uint64                bufferSize,
        ::std::vector<uchar>& buffer,
        uint64&               bytesRead
    );

    MCAPI ::Core::Result $cleanPath_deprecated(
        ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>& pathBufferOut,
        ::Core::PathView                                          pathIn
    );

    MCAPI ::Core::Result $cleanPathSeparators_deprecated(
        ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>& pathBufferOut,
        ::Core::PathView                                          pathIn
    );

    MCAPI bool $checkStorageCorrupt(::Core::PathView path);

    MCAPI ::std::unique_ptr<::Core::FileSizePresetToken>
    $presetFileInitialSize(::Core::PathView path, uint64 initialSize);

    MCAPI ::Core::Result $_getDirectoriesAndFileSizesRecursively(
        ::Core::PathView                                  directoryPath,
        ::std::vector<::Core::PathBuffer<::std::string>>& directoriesOut,
        ::std::vector<::Core::FileSystem::BasicFileData>& filesOut
    );

    MCAPI ::Core::Result $_copyDirectoryStructure(
        ::Core::PathView                                        from,
        ::Core::PathView                                        to,
        ::std::vector<::Core::PathBuffer<::std::string>> const& directories,
        ::Core::FileSystemImpl*                                 transaction
    );

    MCAPI ::Core::Result $_copyFilesWithLimit(
        ::Core::PathView                                  from,
        ::Core::PathView                                  to,
        ::std::vector<::Core::FileSystem::BasicFileData>& files,
        uint64&                                           currentFileBytesWritten,
        uint64 const                                      transactionLimit,
        ::std::function<
            ::Core::Result(::Core::PathView, ::Core::PathView, ::Core::FileSystem::FileTransferProgress&)> const&
            fileTransferFunction
    );

    MCAPI ::Core::Result $_copyFlatFile(
        ::Core::PathView                           flatFileParentDirectory,
        ::Core::PathView                           targetDirectory,
        ::std::vector<::Core::ExcludedPath> const& excludedDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
    );

    MCAPI ::std::optional<uint64> $_checkFileInitialSize(::Core::PathView path);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
