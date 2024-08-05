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
    MCAPI class Core::Result deleteFileOrDirectory(
        class Core::Path const& fileOrDirectoryPath,
        class Core::Path const& manifestPath,
        bool                    directoryDeleteEnabled,
        bool                    deleteRecursively
    );

    MCAPI bool fileOrDirectoryExists(class Core::Path const& path, class Core::Path const& manifestPath);

    MCAPI bool isDirectoryPathAFlatFile(class Core::Path const& directoryPath);

    MCAPI class Core::Result iterateOverDirectory(
        class Core::Path const&                                                       directoryPath,
        class Core::Path const&                                                       manifestPath,
        ::Core::DirectoryIterationFlags                                               flags,
        std::function<class Core::Result(struct Core::DirectoryIterationItem const&)> callbackFunction
    );

    MCAPI class Core::Result openFlatFile(
        std::unique_ptr<class Core::FileImpl>& fileOut,
        class Core::Path const&                filePath,
        class Core::Path const&                manifestPath,
        class Core::FileOpenMode               openMode,
        ::Core::FileBufferingMode              fileBufferingMode
    );

    MCAPI bool shouldAccessFlatFile(
        class Core::Path const&              path,
        class Core::PathBuffer<std::string>& manifestFilePath,
        bool                                 shouldIncludeParentDir
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Core::FlatFileSearchResult
    _findFileOrDirectoryEntry(class Core::Path const& filePath, class Core::Path const& manifestPath, bool skipDeleted);

    MCAPI class Core::Result _getSeekPositionAndSize(
        class Core::Path const& filePath,
        class Core::Path const& manifestPath,
        uint64&                 seekPositionOut,
        uint64&                 fileSizeOut
    );

    // NOLINTEND
};

}; // namespace Core
