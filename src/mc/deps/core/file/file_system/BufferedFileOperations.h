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
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Core::Result copyDirectory(
        ::Core::FileSystemImpl* pSourceTransaction,
        ::Core::Path const&     sourceDirectoryPath,
        ::Core::FileSystemImpl* pTargetTransaction,
        ::Core::Path const&     targetDirectoryPath
    );

    MCAPI static ::Core::Result copyFile(
        ::Core::FileSystemImpl* pSourceTransaction,
        ::Core::Path const&     sourceFilePath,
        ::Core::FileSystemImpl* pTargetTransaction,
        ::Core::Path const&     targetFilePath
    );

    MCAPI static ::Core::Result copyFileWithLimit(
        ::Core::FileSystemImpl* pSourceTransaction,
        ::Core::Path const&     sourceFilePath,
        ::Core::FileSystemImpl* pTargetTransaction,
        ::Core::Path const&     targetFilePath,
        uint64                  startPosition,
        uint64&                 outBytesWritten,
        uint64&                 outBytesRemaining
    );

    MCAPI static ::Core::Result moveDirectory(
        ::Core::FileSystemImpl* pSourceTransaction,
        ::Core::Path const&     sourceDirectoryPath,
        ::Core::FileSystemImpl* pTargetTransaction,
        ::Core::Path const&     targetDirectoryPath
    );

    MCAPI static ::Core::Result moveFile(
        ::Core::FileSystemImpl* pSourceTransaction,
        ::Core::Path const&     sourceFilePath,
        ::Core::FileSystemImpl* pTargetTransaction,
        ::Core::Path const&     targetFilePath
    );
    // NOLINTEND
};

} // namespace Core
