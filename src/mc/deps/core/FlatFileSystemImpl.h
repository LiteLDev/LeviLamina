#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/DirectoryIterationFlags.h"
#include "mc/deps/core/FileBufferingMode.h"
#include "mc/deps/core/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class FlatFileSearchResult; }
namespace Core { class Path; }
namespace Core { class Result; }
namespace Core { struct DirectoryIterationItem; }
// clang-format on

namespace Core {

class FlatFileSystemImpl {
public:
    // prevent constructor by default
    FlatFileSystemImpl& operator=(FlatFileSystemImpl const&);
    FlatFileSystemImpl(FlatFileSystemImpl const&);
    FlatFileSystemImpl();

public:
    // NOLINTBEGIN
    // symbol: ?deleteFileOrDirectory@FlatFileSystemImpl@Core@@QEAA?AVResult@2@AEBVPath@2@0_N1@Z
    MCAPI class Core::Result deleteFileOrDirectory(
        class Core::Path const& fileOrDirectoryPath,
        class Core::Path const& manifestPath,
        bool                    directoryDeleteEnabled,
        bool                    deleteRecursively
    );

    // symbol: ?fileOrDirectoryExists@FlatFileSystemImpl@Core@@QEAA_NAEBVPath@2@0@Z
    MCAPI bool fileOrDirectoryExists(class Core::Path const& path, class Core::Path const& manifestPath);

    // symbol: ?isDirectoryPathAFlatFile@FlatFileSystemImpl@Core@@QEAA_NAEBVPath@2@@Z
    MCAPI bool isDirectoryPathAFlatFile(class Core::Path const& directoryPath);

    // symbol:
    // ?iterateOverDirectory@FlatFileSystemImpl@Core@@QEAA?AVResult@2@AEBVPath@2@0W4DirectoryIterationFlags@2@V?$function@$$A6A?AVResult@Core@@AEBUDirectoryIterationItem@2@@Z@std@@@Z
    MCAPI class Core::Result iterateOverDirectory(
        class Core::Path const&                                                       directoryPath,
        class Core::Path const&                                                       manifestPath,
        ::Core::DirectoryIterationFlags                                               flags,
        std::function<class Core::Result(struct Core::DirectoryIterationItem const&)> callbackFunction
    );

    // symbol:
    // ?openFlatFile@FlatFileSystemImpl@Core@@QEAA?AVResult@2@AEAV?$unique_ptr@VFileImpl@Core@@U?$default_delete@VFileImpl@Core@@@std@@@std@@AEBVPath@2@1VFileOpenMode@2@W4FileBufferingMode@2@@Z
    MCAPI class Core::Result openFlatFile(
        std::unique_ptr<class Core::FileImpl>& fileOut,
        class Core::Path const&                filePath,
        class Core::Path const&                manifestPath,
        class Core::FileOpenMode               openMode,
        ::Core::FileBufferingMode              fileBufferingMode
    );

    // symbol:
    // ?shouldAccessFlatFile@FlatFileSystemImpl@Core@@QEAA_NAEBVPath@2@AEAV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@_N@Z
    MCAPI bool shouldAccessFlatFile(
        class Core::Path const&              path,
        class Core::PathBuffer<std::string>& manifestFilePath,
        bool                                 shouldIncludeParentDir
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_findFileOrDirectoryEntry@FlatFileSystemImpl@Core@@AEAA?AVFlatFileSearchResult@2@AEBVPath@2@0_N@Z
    MCAPI class Core::FlatFileSearchResult
    _findFileOrDirectoryEntry(class Core::Path const& filePath, class Core::Path const& manifestPath, bool skipDeleted);

    // symbol: ?_getSeekPositionAndSize@FlatFileSystemImpl@Core@@AEAA?AVResult@2@AEBVPath@2@0AEA_K1@Z
    MCAPI class Core::Result _getSeekPositionAndSize(
        class Core::Path const& filePath,
        class Core::Path const& manifestPath,
        uint64&                 seekPositionOut,
        uint64&                 fileSizeOut
    );

    // NOLINTEND
};

}; // namespace Core
