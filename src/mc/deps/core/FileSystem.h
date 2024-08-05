#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/DirectoryIterationFlags.h"
#include "mc/deps/core/FileBufferingMode.h"
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/StackString.h"

// auto generated forward declare list
// clang-format off
namespace Core { class File; }
namespace Core { class FileOpenMode; }
namespace Core { class FileSizePresetToken; }
namespace Core { class Path; }
namespace Core { class Result; }
namespace Core { struct DirectoryIterationItem; }
// clang-format on

namespace Core {

class FileSystem {
public:
    // prevent constructor by default
    FileSystem& operator=(FileSystem const&);
    FileSystem(FileSystem const&);
    FileSystem();

public:
    // NOLINTBEGIN
    MCAPI static class Core::Result cleanPathSeparators_deprecated(
        class Core::PathBuffer<class Core::StackString<char, 1024>>& pathBufferOut,
        class Core::Path const&                                      pathIn
    );

    MCAPI static class Core::Result cleanPath_deprecated(
        class Core::PathBuffer<class Core::StackString<char, 1024>>& pathBufferOut,
        class Core::Path const&                                      pathIn
    );

    MCAPI static class Core::Result
    copyDirectoryAndContentsRecursively(class Core::Path const& from, class Core::Path const& to);

    MCAPI static class Core::Result
    copyFile(class Core::Path const& sourceFileName, class Core::Path const& targetFileName);

    MCAPI static class Core::Result createDirectoryForFile(class Core::Path const& filePath);

    MCAPI static class Core::Result createDirectoryRecursively(class Core::Path const& dirName);

    MCAPI static class Core::Result deleteDirectoryAndContentsRecursively(class Core::Path const& dirName);

    MCAPI static class Core::Result deleteEmptyDirectory(class Core::Path const& dirPath);

    MCAPI static class Core::Result deleteFile(class Core::Path const& filePath);

    MCAPI static bool directoryExists(class Core::Path const& dirName);

    MCAPI static bool fileExists(class Core::Path const& filePath);

    MCAPI static bool fileOrDirectoryExists(class Core::Path const& fileOrDirectoryName);

    MCAPI static class Core::Result
    getDirectoryFiles(std::vector<class Core::PathBuffer<std::string>>& files, class Core::Path const& path);

    MCAPI static class Core::Result getDirectoryFilesRecursively(
        std::vector<class Core::PathBuffer<std::string>>& files,
        class Core::Path const&                           directoryPath
    );

    MCAPI static class Core::Result getFileOrDirectorySize(class Core::Path const& path, uint64* pFileSizeOut);

    MCAPI static class Core::Result getFileSize(class Core::Path const& filePath, uint64* pFileSize);

    MCAPI static class Core::Result
    getLastModificationTime(class Core::Path const& filePath, int64* pLastModificationTime);

    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>>
    getUniqueFilePathForDirectory(class Core::Path const& directoryPath);

    MCAPI static class Core::Result iterateOverDirectory(
        class Core::Path const&                                                       dirName,
        ::Core::DirectoryIterationFlags                                               flags,
        std::function<class Core::Result(struct Core::DirectoryIterationItem const&)> callbackFunction
    );

    MCAPI static class Core::Result openFile(
        class Core::Path const&   filePath,
        class Core::File&         fileOut,
        class Core::FileOpenMode  openMode,
        ::Core::FileBufferingMode bufferingMode
    );

    MCAPI static std::unique_ptr<class Core::FileSizePresetToken>
    presetFileInitialSize(class Core::Path const&, uint64);

    MCAPI static class Core::Result readFileData(class Core::Path const& filePath, std::vector<uchar>& data);

    MCAPI static class Core::Result readFileData(
        class Core::Path const& filePath,
        uint64                  filePosition,
        uint64                  bufferSize,
        std::vector<uchar>&     buffer,
        uint64&                 bytesRead
    );

    MCAPI static class Core::Result removeIgnoredThrottlePath(class Core::Path const& path);

    MCAPI static class Core::Result renameFile(class Core::Path const& sourceName, class Core::Path const& targetName);

    MCAPI static std::vector<class Core::PathBuffer<std::string>>
    splitPathIntoFullPathSegments(class Core::Path const&);

    MCAPI static std::string const COPY_FOLDER_SENTINEL_FILE;

    // NOLINTEND
};

}; // namespace Core
