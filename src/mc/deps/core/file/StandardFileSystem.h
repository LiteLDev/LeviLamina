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
    virtual ::Core::Result openFile(
        ::Core::PathView          filePath,
        ::Core::File&             fileOut,
        ::Core::FileOpenMode      openMode,
        ::Core::FileBufferingMode bufferingMode
    ) /*override*/;

    virtual bool fileExists(::Core::PathView filePath) /*override*/;

    virtual ::Core::Result deleteFile(::Core::PathView filePath) /*override*/;

    virtual ::Core::Result deleteFilePriority(::Core::PathView filePath) /*override*/;

    virtual ::Core::Result getFileSize(::Core::PathView filePath, uint64* pFileSize) /*override*/;

    virtual ::Core::Result renameFile(::Core::PathView sourceName, ::Core::PathView targetName) /*override*/;

    virtual ::Core::Result createEmptyFile(::Core::PathView filePath) /*override*/;

    virtual ::Core::Result copyFile(::Core::PathView sourceFileName, ::Core::PathView targetFileName) /*override*/;

    virtual ::Core::Result
    copyFileWithLimit(::Core::PathView sourceFilePath, ::Core::PathView targetFilePath) /*override*/;

    virtual ::Core::Result readFileData(::Core::PathView filePath, ::std::vector<uchar>& data) /*override*/;

    virtual ::Core::Result createOneDirectory(::Core::PathView directoryPath) /*override*/;

    virtual ::Core::Result createOneDirectoryIfNotExisting(::Core::PathView dirName) /*override*/;

    virtual ::Core::Result createDirectoryRecursively(::Core::PathView dirName) /*override*/;

    virtual bool directoryExists(::Core::PathView dirName) /*override*/;

    virtual ::Core::Result deleteEmptyDirectory(::Core::PathView dirPath) /*override*/;

    virtual ::Core::Result deleteDirectoryAndContentsRecursively(::Core::PathView dirName) /*override*/;

    virtual ::Core::Result deleteDirectoryContentsRecursively(::Core::PathView directoryName) /*override*/;

    virtual ::Core::Result
    renameDirectory(::Core::PathView oldDirectoryName, ::Core::PathView newDirectoryName) /*override*/;

    virtual ::Core::Result iterateOverDirectory(
        ::Core::PathView                                                             dirName,
        ::Core::DirectoryIterationFlags                                              flags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)> callbackFunction
    ) /*override*/;

    virtual ::Core::Result
    getDirectoryFiles(::std::vector<::Core::PathBuffer<::std::string>>& files, ::Core::PathView path) /*override*/;

    virtual ::Core::Result getDirectoryFilesAndSizes(
        ::std::vector<::Core::FileSystem::BasicFileData>& filesOut,
        ::Core::PathView                                  directoryPath
    ) /*override*/;

    virtual ::Core::Result getDirectoryFilesRecursively(
        ::std::vector<::Core::PathBuffer<::std::string>>& files,
        ::Core::PathView                                  directoryPath
    ) /*override*/;

    virtual ::Core::Result
    getDirectoryFilesSizeRecursively(uint64& totalSize, ::Core::PathView directoryPath) /*override*/;

    virtual ::Core::Result getDirectoryFilesAllocatedSizeRecursively(
        uint64&          totalSize,
        uint64&          totalAllocatedSize,
        ::Core::PathView directoryPath
    ) /*override*/;

    virtual ::Core::Result copyDirectoryAndContentsRecursively(::Core::PathView from, ::Core::PathView to) /*override*/;

    virtual ::Core::Result
    copyDirectoryAndContentsRecursivelyWithLimit(::Core::PathView from, ::Core::PathView to) /*override*/;

    virtual bool isDirectoryPartiallyCopied(::Core::PathView directory) /*override*/;

    virtual bool fileOrDirectoryExists(::Core::PathView fileOrDirectoryName) /*override*/;

    virtual ::Core::Result getFileOrDirectorySize(::Core::PathView path, uint64* pFileSizeOut) /*override*/;

    virtual ::Core::Result addIgnoredThrottlePath(::Core::PathView path) /*override*/;

    virtual ::Core::Result removeIgnoredThrottlePath(::Core::PathView path) /*override*/;

    virtual ::Core::Result isValidPath(::Core::PathView path) /*override*/;

    virtual ::Core::Result
    getLastModificationTime(::Core::PathView filePath, int64* pLastModificationTime) /*override*/;

    virtual ::Core::Result
    copyTimeAndAccessRights(::Core::PathView sourceFilePath, ::Core::PathView targetFilePath) /*override*/;

    virtual ::Core::Result
    createFlatFile(::Core::PathView sourceDirectoryPath, ::Core::PathView targetDirectoryPath) /*override*/;

    virtual bool isDirectoryPathAFlatFile(::Core::PathView directoryPath) /*override*/;

    virtual ::Core::Result copyFlatFile(
        ::Core::PathView                           flatFileParentDirectory,
        ::Core::PathView                           targetDirectory,
        ::std::vector<::Core::ExcludedPath> const& excludedDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
    ) /*override*/;

    virtual ::Core::Result createDirectoryForFile(::Core::PathView filePath) /*override*/;

    virtual ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    getUniqueFilePathForFile(::Core::PathView filePath) /*override*/;

    virtual ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    getUniqueFilePathForDirectory(::Core::PathView directoryPath) /*override*/;

    virtual ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    createUniquePathFromSeed(::Core::PathView basePath, ::std::function<::std::string(int)> seedGenerator) /*override*/;

    virtual ::std::vector<::Core::PathBuffer<::std::string>>
    splitPathIntoFullPathSegments(::Core::PathView path) /*override*/;

    virtual ::Core::Result readFileDataExt(
        ::Core::PathView      filePath,
        uint64                filePosition,
        uint64                bufferSize,
        ::std::vector<uchar>& buffer,
        uint64&               bytesRead
    ) /*override*/;

    virtual ::Core::Result cleanPath_deprecated(
        ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>& pathBufferOut,
        ::Core::PathView                                          pathIn
    ) /*override*/;

    virtual ::Core::Result cleanPathSeparators_deprecated(
        ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>& pathBufferOut,
        ::Core::PathView                                          pathIn
    ) /*override*/;

    virtual bool checkStorageCorrupt(::Core::PathView path) /*override*/;

    virtual ::std::unique_ptr<::Core::FileSizePresetToken>
    presetFileInitialSize(::Core::PathView path, uint64 initialSize) /*override*/;

    virtual ::Core::Result _getDirectoriesAndFileSizesRecursively(
        ::Core::PathView                                  directoryPath,
        ::std::vector<::Core::PathBuffer<::std::string>>& directoriesOut,
        ::std::vector<::Core::FileSystem::BasicFileData>& filesOut
    ) /*override*/;

    virtual ::Core::Result _copyDirectoryStructure(
        ::Core::PathView                                        from,
        ::Core::PathView                                        to,
        ::std::vector<::Core::PathBuffer<::std::string>> const& directories,
        ::Core::FileSystemImpl*                                 transaction
    ) /*override*/;

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

    virtual ::Core::Result _copyFlatFile(
        ::Core::PathView                           flatFileParentDirectory,
        ::Core::PathView                           targetDirectory,
        ::std::vector<::Core::ExcludedPath> const& excludedDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
    ) /*override*/;

    virtual ::std::optional<uint64> _checkFileInitialSize(::Core::PathView path) /*override*/;

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
