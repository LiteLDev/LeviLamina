#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileSystemImpl; }
namespace Core { class Path; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class FullCopyFileOperations {
public:
    // prevent constructor by default
    FullCopyFileOperations& operator=(FullCopyFileOperations const&);
    FullCopyFileOperations(FullCopyFileOperations const&);
    FullCopyFileOperations();

public:
    // NOLINTBEGIN
    MCAPI static class Core::Result copyDirectory(
        class Core::FileSystemImpl* pSourceTransaction,
        class Core::Path const&     sourceDirectoryPath,
        class Core::FileSystemImpl* pTargetTransaction,
        class Core::Path const&     targetDirectoryPath
    );

    MCAPI static class Core::Result copyFile(
        class Core::FileSystemImpl* pSourceTransaction,
        class Core::Path const&     sourceFilePath,
        class Core::FileSystemImpl* pTargetTransaction,
        class Core::Path const&     targetFilePath
    );

    MCAPI static class Core::Result moveFile(
        class Core::FileSystemImpl* pSourceTransaction,
        class Core::Path const&     sourceFilePath,
        class Core::FileSystemImpl* pTargetTransaction,
        class Core::Path const&     targetFilePath
    );

    // NOLINTEND
};

}; // namespace Core
