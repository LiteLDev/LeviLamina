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
    virtual ::Core::Result deleteFilePriority(::Core::PathView filePath) /*override*/;

    // vIndex: 5
    virtual ::Core::Result getFileSize(::Core::PathView filePath, uint64* pFileSize) /*override*/;

    // vIndex: 6
    virtual ::Core::Result renameFile(::Core::PathView sourceName, ::Core::PathView targetName) /*override*/;

    // vIndex: 7
    virtual ::Core::Result createEmptyFile(::Core::PathView filePath) /*override*/;

    // vIndex: 8
    virtual ::Core::Result copyFile(::Core::PathView sourceFileName, ::Core::PathView targetFileName) /*override*/;

    // vIndex: 9
    virtual ::Core::Result
    copyFileWithLimit(::Core::PathView sourceFilePath, ::Core::PathView targetFilePath) /*override*/;

    // vIndex: 10
    virtual ::Core::Result readFileData(::Core::PathView filePath, ::std::vector<uchar>& data) /*override*/;

    // vIndex: 11
    virtual ::Core::Result createOneDirectory(::Core::PathView directoryPath) /*override*/;

    // vIndex: 12
    virtual ::Core::Result createOneDirectoryIfNotExisting(::Core::PathView dirName) /*override*/;

    // vIndex: 13
    virtual ::Core::Result createDirectoryRecursively(::Core::PathView dirName) /*override*/;

    // vIndex: 14
    virtual bool directoryExists(::Core::PathView dirName) /*override*/;

    // vIndex: 15
    virtual ::Core::Result deleteEmptyDirectory(::Core::PathView dirPath) /*override*/;

    // vIndex: 16
    virtual ::Core::Result deleteDirectoryAndContentsRecursively(::Core::PathView dirName) /*override*/;

    // vIndex: 17
    virtual ::Core::Result deleteDirectoryContentsRecursively(::Core::PathView directoryName) /*override*/;

    // vIndex: 18
    virtual ::Core::Result
    renameDirectory(::Core::PathView oldDirectoryName, ::Core::PathView newDirectoryName) /*override*/;

    // vIndex: 19
    virtual ::Core::Result iterateOverDirectory(
        ::Core::PathView                                                             dirName,
        ::Core::DirectoryIterationFlags                                              flags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)> callbackFunction
    ) /*override*/;

    // vIndex: 20
    virtual ::Core::Result
    getDirectoryFiles(::std::vector<::Core::PathBuffer<::std::string>>& files, ::Core::PathView path) /*override*/;

    // vIndex: 21
    virtual ::Core::Result getDirectoryFilesAndSizes(
        ::std::vector<::Core::FileSystem::BasicFileData>& filesOut,
        ::Core::PathView                                  directoryPath
    ) /*override*/;

    // vIndex: 22
    virtual ::Core::Result getDirectoryFilesRecursively(
        ::std::vector<::Core::PathBuffer<::std::string>>& files,
        ::Core::PathView                                  directoryPath
    ) /*override*/;

    // vIndex: 23
    virtual ::Core::Result
    getDirectoryFilesSizeRecursively(uint64& totalSize, ::Core::PathView directoryPath) /*override*/;

    // vIndex: 24
    virtual ::Core::Result getDirectoryFilesAllocatedSizeRecursively(
        uint64&          totalSize,
        uint64&          totalAllocatedSize,
        ::Core::PathView directoryPath
    ) /*override*/;

    // vIndex: 25
    virtual ::Core::Result copyDirectoryAndContentsRecursively(::Core::PathView from, ::Core::PathView to) /*override*/;

    // vIndex: 26
    virtual ::Core::Result
    copyDirectoryAndContentsRecursivelyWithLimit(::Core::PathView from, ::Core::PathView to) /*override*/;

    // vIndex: 27
    virtual bool isDirectoryPartiallyCopied(::Core::PathView directory) /*override*/;

    // vIndex: 28
    virtual bool fileOrDirectoryExists(::Core::PathView fileOrDirectoryName) /*override*/;

    // vIndex: 29
    virtual ::Core::Result getFileOrDirectorySize(::Core::PathView path, uint64* pFileSizeOut) /*override*/;

    // vIndex: 30
    virtual ::Core::Result addIgnoredThrottlePath(::Core::PathView path) /*override*/;

    // vIndex: 31
    virtual ::Core::Result removeIgnoredThrottlePath(::Core::PathView path) /*override*/;

    // vIndex: 32
    virtual ::Core::Result isValidPath(::Core::PathView path) /*override*/;

    // vIndex: 33
    virtual ::Core::Result
    getLastModificationTime(::Core::PathView filePath, int64* pLastModificationTime) /*override*/;

    // vIndex: 34
    virtual ::Core::Result
    copyTimeAndAccessRights(::Core::PathView sourceFilePath, ::Core::PathView targetFilePath) /*override*/;

    // vIndex: 35
    virtual ::Core::Result
    createFlatFile(::Core::PathView sourceDirectoryPath, ::Core::PathView targetDirectoryPath) /*override*/;

    // vIndex: 36
    virtual bool isDirectoryPathAFlatFile(::Core::PathView directoryPath) /*override*/;

    // vIndex: 37
    virtual ::Core::Result copyFlatFile(
        ::Core::PathView                           flatFileParentDirectory,
        ::Core::PathView                           targetDirectory,
        ::std::vector<::Core::ExcludedPath> const& excludedDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
    ) /*override*/;

    // vIndex: 38
    virtual ::Core::Result createDirectoryForFile(::Core::PathView filePath) /*override*/;

    // vIndex: 39
    virtual ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    getUniqueFilePathForFile(::Core::PathView filePath) /*override*/;

    // vIndex: 40
    virtual ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    getUniqueFilePathForDirectory(::Core::PathView directoryPath) /*override*/;

    // vIndex: 41
    virtual ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    createUniquePathFromSeed(::Core::PathView basePath, ::std::function<::std::string(int)> seedGenerator) /*override*/;

    // vIndex: 42
    virtual ::std::vector<::Core::PathBuffer<::std::string>>
    splitPathIntoFullPathSegments(::Core::PathView path) /*override*/;

    // vIndex: 43
    virtual ::Core::Result readFileDataExt(
        ::Core::PathView      filePath,
        uint64                filePosition,
        uint64                bufferSize,
        ::std::vector<uchar>& buffer,
        uint64&               bytesRead
    ) /*override*/;

    // vIndex: 44
    virtual ::Core::Result cleanPath_deprecated(
        ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>& pathBufferOut,
        ::Core::PathView                                          pathIn
    ) /*override*/;

    // vIndex: 45
    virtual ::Core::Result cleanPathSeparators_deprecated(
        ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>& pathBufferOut,
        ::Core::PathView                                          pathIn
    ) /*override*/;

    // vIndex: 46
    virtual bool checkStorageCorrupt(::Core::PathView path) /*override*/;

    // vIndex: 47
    virtual ::std::unique_ptr<::Core::FileSizePresetToken>
    presetFileInitialSize(::Core::PathView path, uint64 initialSize) /*override*/;

    // vIndex: 48
    virtual ::Core::Result _getDirectoriesAndFileSizesRecursively(
        ::Core::PathView                                  directoryPath,
        ::std::vector<::Core::PathBuffer<::std::string>>& directoriesOut,
        ::std::vector<::Core::FileSystem::BasicFileData>& filesOut
    ) /*override*/;

    // vIndex: 49
    virtual ::Core::Result _copyDirectoryStructure(
        ::Core::PathView                                        from,
        ::Core::PathView                                        to,
        ::std::vector<::Core::PathBuffer<::std::string>> const& directories,
        ::Core::FileSystemImpl*                                 transaction
    ) /*override*/;

    // vIndex: 50
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

    // vIndex: 51
    virtual ::Core::Result _copyFlatFile(
        ::Core::PathView                           flatFileParentDirectory,
        ::Core::PathView                           targetDirectory,
        ::std::vector<::Core::ExcludedPath> const& excludedDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
    ) /*override*/;

    // vIndex: 52
    virtual ::std::optional<uint64> _checkFileInitialSize(::Core::PathView path) /*override*/;

    // vIndex: 0
    virtual ~StandardFileSystem() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Core::Result $openFile(
        ::Core::PathView          filePath,
        ::Core::File&             fileOut,
        ::Core::FileOpenMode      openMode,
        ::Core::FileBufferingMode bufferingMode
    );

    MCNAPI bool $fileExists(::Core::PathView filePath);

    MCNAPI ::Core::Result $deleteFile(::Core::PathView filePath);

    MCNAPI ::Core::Result $deleteFilePriority(::Core::PathView filePath);

    MCNAPI ::Core::Result $getFileSize(::Core::PathView filePath, uint64* pFileSize);

    MCNAPI ::Core::Result $renameFile(::Core::PathView sourceName, ::Core::PathView targetName);

    MCNAPI ::Core::Result $createEmptyFile(::Core::PathView filePath);

    MCNAPI ::Core::Result $copyFile(::Core::PathView sourceFileName, ::Core::PathView targetFileName);

    MCNAPI ::Core::Result $copyFileWithLimit(::Core::PathView sourceFilePath, ::Core::PathView targetFilePath);

    MCNAPI ::Core::Result $readFileData(::Core::PathView filePath, ::std::vector<uchar>& data);

    MCNAPI ::Core::Result $createOneDirectory(::Core::PathView directoryPath);

    MCNAPI ::Core::Result $createOneDirectoryIfNotExisting(::Core::PathView dirName);

    MCNAPI ::Core::Result $createDirectoryRecursively(::Core::PathView dirName);

    MCNAPI bool $directoryExists(::Core::PathView dirName);

    MCNAPI ::Core::Result $deleteEmptyDirectory(::Core::PathView dirPath);

    MCNAPI ::Core::Result $deleteDirectoryAndContentsRecursively(::Core::PathView dirName);

    MCNAPI ::Core::Result $deleteDirectoryContentsRecursively(::Core::PathView directoryName);

    MCNAPI ::Core::Result $renameDirectory(::Core::PathView oldDirectoryName, ::Core::PathView newDirectoryName);

    MCNAPI ::Core::Result $iterateOverDirectory(
        ::Core::PathView                                                             dirName,
        ::Core::DirectoryIterationFlags                                              flags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)> callbackFunction
    );

    MCNAPI ::Core::Result
    $getDirectoryFiles(::std::vector<::Core::PathBuffer<::std::string>>& files, ::Core::PathView path);

    MCNAPI ::Core::Result $getDirectoryFilesAndSizes(
        ::std::vector<::Core::FileSystem::BasicFileData>& filesOut,
        ::Core::PathView                                  directoryPath
    );

    MCNAPI ::Core::Result $getDirectoryFilesRecursively(
        ::std::vector<::Core::PathBuffer<::std::string>>& files,
        ::Core::PathView                                  directoryPath
    );

    MCNAPI ::Core::Result $getDirectoryFilesSizeRecursively(uint64& totalSize, ::Core::PathView directoryPath);

    MCNAPI ::Core::Result $getDirectoryFilesAllocatedSizeRecursively(
        uint64&          totalSize,
        uint64&          totalAllocatedSize,
        ::Core::PathView directoryPath
    );

    MCNAPI ::Core::Result $copyDirectoryAndContentsRecursively(::Core::PathView from, ::Core::PathView to);

    MCNAPI ::Core::Result $copyDirectoryAndContentsRecursivelyWithLimit(::Core::PathView from, ::Core::PathView to);

    MCNAPI bool $isDirectoryPartiallyCopied(::Core::PathView directory);

    MCNAPI bool $fileOrDirectoryExists(::Core::PathView fileOrDirectoryName);

    MCNAPI ::Core::Result $getFileOrDirectorySize(::Core::PathView path, uint64* pFileSizeOut);

    MCNAPI ::Core::Result $addIgnoredThrottlePath(::Core::PathView path);

    MCNAPI ::Core::Result $removeIgnoredThrottlePath(::Core::PathView path);

    MCNAPI ::Core::Result $isValidPath(::Core::PathView path);

    MCNAPI ::Core::Result $getLastModificationTime(::Core::PathView filePath, int64* pLastModificationTime);

    MCNAPI ::Core::Result $copyTimeAndAccessRights(::Core::PathView sourceFilePath, ::Core::PathView targetFilePath);

    MCNAPI ::Core::Result $createFlatFile(::Core::PathView sourceDirectoryPath, ::Core::PathView targetDirectoryPath);

    MCNAPI bool $isDirectoryPathAFlatFile(::Core::PathView directoryPath);

    MCNAPI ::Core::Result $copyFlatFile(
        ::Core::PathView                           flatFileParentDirectory,
        ::Core::PathView                           targetDirectory,
        ::std::vector<::Core::ExcludedPath> const& excludedDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
    );

    MCNAPI ::Core::Result $createDirectoryForFile(::Core::PathView filePath);

    MCNAPI ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    $getUniqueFilePathForFile(::Core::PathView filePath);

    MCNAPI ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    $getUniqueFilePathForDirectory(::Core::PathView directoryPath);

    MCNAPI ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    $createUniquePathFromSeed(::Core::PathView basePath, ::std::function<::std::string(int)> seedGenerator);

    MCNAPI ::std::vector<::Core::PathBuffer<::std::string>> $splitPathIntoFullPathSegments(::Core::PathView path);

    MCNAPI ::Core::Result $readFileDataExt(
        ::Core::PathView      filePath,
        uint64                filePosition,
        uint64                bufferSize,
        ::std::vector<uchar>& buffer,
        uint64&               bytesRead
    );

    MCNAPI ::Core::Result $cleanPath_deprecated(
        ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>& pathBufferOut,
        ::Core::PathView                                          pathIn
    );

    MCNAPI ::Core::Result $cleanPathSeparators_deprecated(
        ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>& pathBufferOut,
        ::Core::PathView                                          pathIn
    );

    MCNAPI bool $checkStorageCorrupt(::Core::PathView path);

    MCNAPI ::std::unique_ptr<::Core::FileSizePresetToken>
    $presetFileInitialSize(::Core::PathView path, uint64 initialSize);

    MCNAPI ::Core::Result $_getDirectoriesAndFileSizesRecursively(
        ::Core::PathView                                  directoryPath,
        ::std::vector<::Core::PathBuffer<::std::string>>& directoriesOut,
        ::std::vector<::Core::FileSystem::BasicFileData>& filesOut
    );

    MCNAPI ::Core::Result $_copyDirectoryStructure(
        ::Core::PathView                                        from,
        ::Core::PathView                                        to,
        ::std::vector<::Core::PathBuffer<::std::string>> const& directories,
        ::Core::FileSystemImpl*                                 transaction
    );

    MCNAPI ::Core::Result $_copyFilesWithLimit(
        ::Core::PathView                                  from,
        ::Core::PathView                                  to,
        ::std::vector<::Core::FileSystem::BasicFileData>& files,
        uint64&                                           currentFileBytesWritten,
        uint64 const                                      transactionLimit,
        ::std::function<
            ::Core::Result(::Core::PathView, ::Core::PathView, ::Core::FileSystem::FileTransferProgress&)> const&
            fileTransferFunction
    );

    MCNAPI ::Core::Result $_copyFlatFile(
        ::Core::PathView                           flatFileParentDirectory,
        ::Core::PathView                           targetDirectory,
        ::std::vector<::Core::ExcludedPath> const& excludedDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
    );

    MCNAPI ::std::optional<uint64> $_checkFileInitialSize(::Core::PathView path);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Core
