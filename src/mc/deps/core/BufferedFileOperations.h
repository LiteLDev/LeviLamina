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
    BufferedFileOperations& operator=(BufferedFileOperations const&) = delete;
    BufferedFileOperations(BufferedFileOperations const&)            = delete;
    BufferedFileOperations()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?copyFile\@BufferedFileOperations\@Core\@\@SA?AVResult\@2\@PEAVFileSystemImpl\@2\@AEBVPath\@2\@01\@Z
     */
    MCAPI static class Core::Result
    copyFile(class Core::FileSystemImpl*, class Core::Path const&, class Core::FileSystemImpl*, class Core::Path const&);
    /**
     * @symbol
     * ?copyFileWithLimit\@BufferedFileOperations\@Core\@\@SA?AVResult\@2\@PEAVFileSystemImpl\@2\@AEBVPath\@2\@01_KAEA_K3\@Z
     */
    MCAPI static class Core::Result
    copyFileWithLimit(class Core::FileSystemImpl*, class Core::Path const&, class Core::FileSystemImpl*, class Core::Path const&, uint64_t, uint64_t&, uint64_t&);
    // NOLINTEND
};

}; // namespace Core
