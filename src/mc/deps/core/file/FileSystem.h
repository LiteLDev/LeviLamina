#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/DirectoryIterationFlags.h"
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/platform/Result.h"
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

class FileSystem : public ::Bedrock::EnableNonOwnerReferences {
public:
    // FileSystem inner types declare
    // clang-format off
    struct BasicFileData;
    struct FileTransferProgress;
    // clang-format on

    // FileSystem inner types define
    struct BasicFileData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnka2f01d;
        ::ll::UntypedStorage<8, 8>  mUnk7ec39a;
        // NOLINTEND

    public:
        // prevent constructor by default
        BasicFileData& operator=(BasicFileData const&);
        BasicFileData(BasicFileData const&);
        BasicFileData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~BasicFileData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct FileTransferProgress {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk1ae043;
        ::ll::UntypedStorage<8, 8> mUnkd6dcba;
        ::ll::UntypedStorage<8, 8> mUnke8d3af;
        // NOLINTEND

    public:
        // prevent constructor by default
        FileTransferProgress& operator=(FileTransferProgress const&);
        FileTransferProgress(FileTransferProgress const&);
        FileTransferProgress();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Core::Result openFile(
        ::Core::PathView          filePath,
        ::Core::File&             fileOut,
        ::Core::FileOpenMode      openMode,
        ::Core::FileBufferingMode bufferingMode
    ) = 0;

    virtual bool fileExists(::Core::PathView filePath) = 0;

    virtual ::Core::Result deleteFile(::Core::PathView filePath) = 0;

    virtual ::Core::Result deleteFilePriority(::Core::PathView filePath) = 0;

    virtual ::Core::Result getFileSize(::Core::PathView filePath, uint64* pFileSize) = 0;

    virtual ::Core::Result renameFile(::Core::PathView sourceName, ::Core::PathView targetName) = 0;

    virtual ::Core::Result createEmptyFile(::Core::PathView filePath) = 0;

    virtual ::Core::Result copyFile(::Core::PathView sourceFileName, ::Core::PathView targetFileName) = 0;

    virtual ::Core::Result copyFileWithLimit(::Core::PathView sourceFilePath, ::Core::PathView targetFilePath) = 0;

    virtual ::Core::Result readFileData(::Core::PathView filePath, ::std::vector<uchar>& data) = 0;

    virtual ::Bedrock::Result<::std::string> readFile(::Core::PathView filePath) = 0;

    virtual ::Bedrock::Result<void> writeFile(::Core::PathView filePath, ::std::string_view data) = 0;

    virtual ::Core::Result createOneDirectory(::Core::PathView directoryPath) = 0;

    virtual ::Core::Result createOneDirectoryIfNotExisting(::Core::PathView dirName) = 0;

    virtual ::Core::Result createDirectoryRecursively(::Core::PathView dirName) = 0;

    virtual bool directoryExists(::Core::PathView dirName) = 0;

    virtual ::Core::Result deleteEmptyDirectory(::Core::PathView dirPath) = 0;

    virtual ::Core::Result deleteDirectoryAndContentsRecursively(::Core::PathView dirName) = 0;

    virtual ::Core::Result deleteDirectoryContentsRecursively(::Core::PathView directoryName) = 0;

    virtual ::Core::Result renameDirectory(::Core::PathView oldDirectoryName, ::Core::PathView newDirectoryName) = 0;

    virtual ::Core::Result iterateOverDirectory(
        ::Core::PathView                                                             dirName,
        ::Core::DirectoryIterationFlags                                              flags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)> callbackFunction
    ) = 0;

    virtual ::Core::Result
    getDirectoryFiles(::std::vector<::Core::PathBuffer<::std::string>>& files, ::Core::PathView path) = 0;

    virtual ::Core::Result getDirectoryFilesAndSizes(
        ::std::vector<::Core::FileSystem::BasicFileData>& filesOut,
        ::Core::PathView                                  directoryPath
    ) = 0;

    virtual ::Core::Result getDirectoryFilesRecursively(
        ::std::vector<::Core::PathBuffer<::std::string>>& files,
        ::Core::PathView                                  directoryPath
    ) = 0;

    virtual ::Core::Result getDirectoryFilesSizeRecursively(uint64& totalSize, ::Core::PathView directoryPath) = 0;

    virtual ::Core::Result getDirectoryFilesAllocatedSizeRecursively(
        uint64&          totalSize,
        uint64&          totalAllocatedSize,
        ::Core::PathView directoryPath
    ) = 0;

    virtual ::Core::Result copyDirectoryAndContentsRecursively(::Core::PathView from, ::Core::PathView to) = 0;

    virtual ::Core::Result copyDirectoryAndContentsRecursivelyWithLimit(::Core::PathView from, ::Core::PathView to) = 0;

    virtual bool isDirectoryPartiallyCopied(::Core::PathView directory) = 0;

    virtual bool fileOrDirectoryExists(::Core::PathView fileOrDirectoryName) = 0;

    virtual ::Core::Result getFileOrDirectorySize(::Core::PathView path, uint64* pFileSizeOut) = 0;

    virtual ::Core::Result addIgnoredThrottlePath(::Core::PathView path) = 0;

    virtual ::Core::Result removeIgnoredThrottlePath(::Core::PathView path) = 0;

    virtual ::Core::Result isValidPath(::Core::PathView path) = 0;

    virtual ::Core::Result getLastModificationTime(::Core::PathView filePath, int64* pLastModificationTime) = 0;

    virtual ::Core::Result
    copyTimeAndAccessRights(::Core::PathView sourceFilePath, ::Core::PathView targetFilePath) = 0;

    virtual ::Core::Result
    createFlatFile(::Core::PathView sourceDirectoryPath, ::Core::PathView targetDirectoryPath) = 0;

    virtual bool isDirectoryPathAFlatFile(::Core::PathView directoryPath) = 0;

    virtual ::Core::Result copyFlatFile(
        ::Core::PathView                           flatFileParentDirectory,
        ::Core::PathView                           targetDirectory,
        ::std::vector<::Core::ExcludedPath> const& excludedDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
    ) = 0;

    virtual ::Core::Result createDirectoryForFile(::Core::PathView filePath) = 0;

    virtual ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    getUniqueFilePathForFile(::Core::PathView filePath) = 0;

    virtual ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    getUniqueFilePathForDirectory(::Core::PathView directoryPath) = 0;

    virtual ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    createUniquePathFromSeed(::Core::PathView basePath, ::std::function<::std::string(int)> seedGenerator) = 0;

    virtual ::std::vector<::Core::PathBuffer<::std::string>> splitPathIntoFullPathSegments(::Core::PathView path) = 0;

    virtual ::Core::Result readFileDataExt(
        ::Core::PathView      filePath,
        uint64                filePosition,
        uint64                bufferSize,
        ::std::vector<uchar>& buffer,
        uint64&               bytesRead
    ) = 0;

    virtual ::Core::Result cleanPath_deprecated(
        ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>& pathBufferOut,
        ::Core::PathView                                          pathIn
    ) = 0;

    virtual ::Core::Result cleanPathSeparators_deprecated(
        ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>& pathBufferOut,
        ::Core::PathView                                          pathIn
    ) = 0;

    virtual bool checkStorageCorrupt(::Core::PathView path) = 0;

    virtual ::std::unique_ptr<::Core::FileSizePresetToken>
    presetFileInitialSize(::Core::PathView path, uint64 initialSize) = 0;

    virtual ::Core::Result _getDirectoriesAndFileSizesRecursively(
        ::Core::PathView                                  directoryPath,
        ::std::vector<::Core::PathBuffer<::std::string>>& directoriesOut,
        ::std::vector<::Core::FileSystem::BasicFileData>& filesOut
    ) = 0;

    virtual ::Core::Result _copyDirectoryStructure(
        ::Core::PathView                                        from,
        ::Core::PathView                                        to,
        ::std::vector<::Core::PathBuffer<::std::string>> const& directories,
        ::Core::FileSystemImpl*                                 transaction
    ) = 0;

    virtual ::Core::Result _copyFilesWithLimit(
        ::Core::PathView                                  from,
        ::Core::PathView                                  to,
        ::std::vector<::Core::FileSystem::BasicFileData>& files,
        uint64&                                           currentFileBytesWritten,
        uint64 const                                      transactionLimit,
        ::std::function<
            ::Core::Result(::Core::PathView, ::Core::PathView, ::Core::FileSystem::FileTransferProgress&)> const&
            fileTransferFunction
    ) = 0;

    virtual ::Core::Result _copyFlatFile(
        ::Core::PathView                           flatFileParentDirectory,
        ::Core::PathView                           targetDirectory,
        ::std::vector<::Core::ExcludedPath> const& excludedDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
    ) = 0;

    virtual ::std::optional<uint64> _checkFileInitialSize(::Core::PathView path) = 0;

    virtual ~FileSystem() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::FileSystem& get();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Core
