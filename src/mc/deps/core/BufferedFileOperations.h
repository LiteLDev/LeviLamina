#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileSystemImpl; }
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class BufferedFileOperations {
public:
    // prevent constructor by default
    BufferedFileOperations& operator=(BufferedFileOperations const&);
    BufferedFileOperations(BufferedFileOperations const&);
    BufferedFileOperations();

public:
    // NOLINTBEGIN
    // symbol: ?copyDirectory@BufferedFileOperations@Core@@SA?AVResult@2@PEAVFileSystemImpl@2@AEBVPath@2@01@Z
    MCAPI static class Core::Result copyDirectory(
        class Core::FileSystemImpl* pSourceTransaction,
        class Core::Path const&     sourceDirectoryPath,
        class Core::FileSystemImpl* pTargetTransaction,
        class Core::Path const&     targetDirectoryPath
    );

    // symbol: ?copyFile@BufferedFileOperations@Core@@SA?AVResult@2@PEAVFileSystemImpl@2@AEBVPath@2@01@Z
    MCAPI static class Core::Result copyFile(
        class Core::FileSystemImpl* pSourceTransaction,
        class Core::Path const&     sourceFilePath,
        class Core::FileSystemImpl* pTargetTransaction,
        class Core::Path const&     targetFilePath
    );

    // symbol: ?moveFile@BufferedFileOperations@Core@@SA?AVResult@2@PEAVFileSystemImpl@2@AEBVPath@2@01@Z
    MCAPI static class Core::Result moveFile(
        class Core::FileSystemImpl* pSourceTransaction,
        class Core::Path const&     sourceFilePath,
        class Core::FileSystemImpl* pTargetTransaction,
        class Core::Path const&     targetFilePath
    );

    // NOLINTEND
};

}; // namespace Core
