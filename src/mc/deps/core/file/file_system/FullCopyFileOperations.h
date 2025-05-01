#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileSystemImpl; }
namespace Core { class PathView; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class FullCopyFileOperations {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::Result copyFile(
        ::Core::FileSystemImpl* pSourceTransaction,
        ::Core::PathView        sourceFilePath,
        ::Core::FileSystemImpl* pTargetTransaction,
        ::Core::PathView        targetFilePath
    );

    MCNAPI static ::Core::Result moveDirectory(
        ::Core::FileSystemImpl* pSourceTransaction,
        ::Core::PathView        sourceDirectoryPath,
        ::Core::FileSystemImpl* pTargetTransaction,
        ::Core::PathView        targetDirectoryPath
    );

    MCNAPI static ::Core::Result moveFile(
        ::Core::FileSystemImpl* pSourceTransaction,
        ::Core::PathView        sourceFilePath,
        ::Core::FileSystemImpl* pTargetTransaction,
        ::Core::PathView        targetFilePath
    );
    // NOLINTEND
};

} // namespace Core
