#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileSystemImpl; }
namespace Core { class PathView; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class BufferedFileOperations {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::Result _copyFileSection(
        ::Core::FileSystemImpl* pSourceTransaction,
        ::Core::PathView        sourceFilePath,
        ::Core::FileSystemImpl* pTargetTransaction,
        ::Core::PathView        targetFilePath,
        uint64 const            startPosition,
        uint64 const            sectionSize,
        uint64&                 outBytesWritten,
        uint64&                 outBytesRemaining
    );

    MCNAPI static ::Core::Result copyFile(
        ::Core::FileSystemImpl* pSourceTransaction,
        ::Core::PathView        sourceFilePath,
        ::Core::FileSystemImpl* pTargetTransaction,
        ::Core::PathView        targetFilePath
    );

    MCNAPI static ::Core::Result copyFileWithLimit(
        ::Core::FileSystemImpl* pSourceTransaction,
        ::Core::PathView        sourceFilePath,
        ::Core::FileSystemImpl* pTargetTransaction,
        ::Core::PathView        targetFilePath,
        uint64                  startPosition,
        uint64&                 outBytesWritten,
        uint64&                 outBytesRemaining
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
