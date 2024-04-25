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
    // symbol:
    // ?cleanPathSeparators_deprecated@FileSystem@Core@@SA?AVResult@2@AEAV?$PathBuffer@V?$StackString@D$0EAA@@Core@@@2@AEBVPath@2@@Z
    MCAPI static class Core::Result cleanPathSeparators_deprecated(
        class Core::PathBuffer<class Core::StackString<char, 1024>>& pathBufferOut,
        class Core::Path const&                                      pathIn
    );

    // symbol:
    // ?cleanPath_deprecated@FileSystem@Core@@SA?AVResult@2@AEAV?$PathBuffer@V?$StackString@D$0EAA@@Core@@@2@AEBVPath@2@@Z
    MCAPI static class Core::Result cleanPath_deprecated(
        class Core::PathBuffer<class Core::StackString<char, 1024>>& pathBufferOut,
        class Core::Path const&                                      pathIn
    );

    // symbol: ?copyDirectoryAndContentsRecursively@FileSystem@Core@@SA?AVResult@2@AEBVPath@2@0@Z
    MCAPI static class Core::Result
    copyDirectoryAndContentsRecursively(class Core::Path const& from, class Core::Path const& to);

    // symbol: ?copyFile@FileSystem@Core@@SA?AVResult@2@AEBVPath@2@0@Z
    MCAPI static class Core::Result
    copyFile(class Core::Path const& sourceFileName, class Core::Path const& targetFileName);

    // symbol: ?createDirectoryForFile@FileSystem@Core@@SA?AVResult@2@AEBVPath@2@@Z
    MCAPI static class Core::Result createDirectoryForFile(class Core::Path const& filePath);

    // symbol: ?createDirectoryRecursively@FileSystem@Core@@SA?AVResult@2@AEBVPath@2@@Z
    MCAPI static class Core::Result createDirectoryRecursively(class Core::Path const& dirName);

    // symbol: ?deleteDirectoryAndContentsRecursively@FileSystem@Core@@SA?AVResult@2@AEBVPath@2@@Z
    MCAPI static class Core::Result deleteDirectoryAndContentsRecursively(class Core::Path const& dirName);

    // symbol: ?deleteEmptyDirectory@FileSystem@Core@@SA?AVResult@2@AEBVPath@2@@Z
    MCAPI static class Core::Result deleteEmptyDirectory(class Core::Path const& dirPath);

    // symbol: ?deleteFile@FileSystem@Core@@SA?AVResult@2@AEBVPath@2@@Z
    MCAPI static class Core::Result deleteFile(class Core::Path const& filePath);

    // symbol: ?directoryExists@FileSystem@Core@@SA_NAEBVPath@2@@Z
    MCAPI static bool directoryExists(class Core::Path const& dirName);

    // symbol: ?fileExists@FileSystem@Core@@SA_NAEBVPath@2@@Z
    MCAPI static bool fileExists(class Core::Path const& filePath);

    // symbol: ?fileOrDirectoryExists@FileSystem@Core@@SA_NAEBVPath@2@@Z
    MCAPI static bool fileOrDirectoryExists(class Core::Path const& fileOrDirectoryName);

    // symbol:
    // ?getDirectoryFiles@FileSystem@Core@@SA?AVResult@2@AEAV?$vector@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V?$allocator@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@@std@@AEBVPath@2@@Z
    MCAPI static class Core::Result
    getDirectoryFiles(std::vector<class Core::PathBuffer<std::string>>& files, class Core::Path const& path);

    // symbol:
    // ?getDirectoryFilesRecursively@FileSystem@Core@@SA?AVResult@2@AEAV?$vector@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V?$allocator@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@@std@@AEBVPath@2@@Z
    MCAPI static class Core::Result getDirectoryFilesRecursively(
        std::vector<class Core::PathBuffer<std::string>>& files,
        class Core::Path const&                           directoryPath
    );

    // symbol: ?getFileOrDirectorySize@FileSystem@Core@@SA?AVResult@2@AEBVPath@2@PEA_K@Z
    MCAPI static class Core::Result getFileOrDirectorySize(class Core::Path const& path, uint64* pFileSizeOut);

    // symbol: ?getFileSize@FileSystem@Core@@SA?AVResult@2@AEBVPath@2@PEA_K@Z
    MCAPI static class Core::Result getFileSize(class Core::Path const& filePath, uint64* pFileSize);

    // symbol: ?getLastModificationTime@FileSystem@Core@@SA?AVResult@2@AEBVPath@2@PEA_J@Z
    MCAPI static class Core::Result
    getLastModificationTime(class Core::Path const& filePath, int64* pLastModificationTime);

    // symbol:
    // ?getUniqueFilePathForDirectory@FileSystem@Core@@SA?AV?$PathBuffer@V?$StackString@D$0EAA@@Core@@@2@AEBVPath@2@@Z
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>>
    getUniqueFilePathForDirectory(class Core::Path const& directoryPath);

    // symbol:
    // ?iterateOverDirectory@FileSystem@Core@@SA?AVResult@2@AEBVPath@2@W4DirectoryIterationFlags@2@V?$function@$$A6A?AVResult@Core@@AEBUDirectoryIterationItem@2@@Z@std@@@Z
    MCAPI static class Core::Result iterateOverDirectory(
        class Core::Path const&                                                       dirName,
        ::Core::DirectoryIterationFlags                                               flags,
        std::function<class Core::Result(struct Core::DirectoryIterationItem const&)> callbackFunction
    );

    // symbol: ?openFile@FileSystem@Core@@SA?AVResult@2@AEBVPath@2@AEAVFile@2@VFileOpenMode@2@W4FileBufferingMode@2@@Z
    MCAPI static class Core::Result openFile(
        class Core::Path const&   filePath,
        class Core::File&         fileOut,
        class Core::FileOpenMode  openMode,
        ::Core::FileBufferingMode bufferingMode
    );

    // symbol:
    // ?presetFileInitialSize@FileSystem@Core@@SA?AV?$unique_ptr@VFileSizePresetToken@Core@@U?$default_delete@VFileSizePresetToken@Core@@@std@@@std@@AEBVPath@2@_K@Z
    MCAPI static std::unique_ptr<class Core::FileSizePresetToken>
    presetFileInitialSize(class Core::Path const&, uint64);

    // symbol: ?readFileData@FileSystem@Core@@SA?AVResult@2@AEBVPath@2@AEAV?$vector@EV?$allocator@E@std@@@std@@@Z
    MCAPI static class Core::Result readFileData(class Core::Path const& filePath, std::vector<uchar>& data);

    // symbol:
    // ?readFileData@FileSystem@Core@@SA?AVResult@2@AEBVPath@2@_K1AEAV?$vector@EV?$allocator@E@std@@@std@@AEA_K@Z
    MCAPI static class Core::Result readFileData(
        class Core::Path const& filePath,
        uint64                  filePosition,
        uint64                  bufferSize,
        std::vector<uchar>&     buffer,
        uint64&                 bytesRead
    );

    // symbol: ?removeIgnoredThrottlePath@FileSystem@Core@@SA?AVResult@2@AEBVPath@2@@Z
    MCAPI static class Core::Result removeIgnoredThrottlePath(class Core::Path const& path);

    // symbol: ?renameFile@FileSystem@Core@@SA?AVResult@2@AEBVPath@2@0@Z
    MCAPI static class Core::Result renameFile(class Core::Path const& sourceName, class Core::Path const& targetName);

    // symbol:
    // ?splitPathIntoFullPathSegments@FileSystem@Core@@SA?AV?$vector@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V?$allocator@V?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@std@@@std@@AEBVPath@2@@Z
    MCAPI static std::vector<class Core::PathBuffer<std::string>>
    splitPathIntoFullPathSegments(class Core::Path const&);

    // symbol:
    // ?COPY_FOLDER_SENTINEL_FILE@FileSystem@Core@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const COPY_FOLDER_SENTINEL_FILE;

    // NOLINTEND
};

}; // namespace Core
