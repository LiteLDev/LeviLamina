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
    MCAPI static class Core::Result
    copyDirectory(class Core::FileSystemImpl*, class Core::Path const&, class Core::FileSystemImpl*, class Core::Path const&);

    // symbol: ?copyFile@BufferedFileOperations@Core@@SA?AVResult@2@PEAVFileSystemImpl@2@AEBVPath@2@01@Z
    MCAPI static class Core::Result
    copyFile(class Core::FileSystemImpl*, class Core::Path const&, class Core::FileSystemImpl*, class Core::Path const&);

    // symbol: ?moveFile@BufferedFileOperations@Core@@SA?AVResult@2@PEAVFileSystemImpl@2@AEBVPath@2@01@Z
    MCAPI static class Core::Result
    moveFile(class Core::FileSystemImpl*, class Core::Path const&, class Core::FileSystemImpl*, class Core::Path const&);

    // NOLINTEND
};

}; // namespace Core
