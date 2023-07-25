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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CORE_FULLCOPYFILEOPERATIONS
public:
    FullCopyFileOperations& operator=(FullCopyFileOperations const&) = delete;
    FullCopyFileOperations(FullCopyFileOperations const&)            = delete;
    FullCopyFileOperations()                                         = delete;
#endif

public:
    /**
     * @symbol ?copyDirectory\@FullCopyFileOperations\@Core\@\@SA?AVResult\@2\@PEAVFileSystemImpl\@2\@AEBVPath\@2\@01\@Z
     */
    MCAPI static class Core::Result
    copyDirectory(class Core::FileSystemImpl*, class Core::Path const&, class Core::FileSystemImpl*, class Core::Path const&);
    /**
     * @symbol ?copyFile\@FullCopyFileOperations\@Core\@\@SA?AVResult\@2\@PEAVFileSystemImpl\@2\@AEBVPath\@2\@01\@Z
     */
    MCAPI static class Core::Result
    copyFile(class Core::FileSystemImpl*, class Core::Path const&, class Core::FileSystemImpl*, class Core::Path const&);
    /**
     * @symbol ?moveFile\@FullCopyFileOperations\@Core\@\@SA?AVResult\@2\@PEAVFileSystemImpl\@2\@AEBVPath\@2\@01\@Z
     */
    MCAPI static class Core::Result
    moveFile(class Core::FileSystemImpl*, class Core::Path const&, class Core::FileSystemImpl*, class Core::Path const&);
};

}; // namespace Core
