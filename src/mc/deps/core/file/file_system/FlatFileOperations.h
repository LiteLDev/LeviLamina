#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/StackString.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileSystemImpl; }
namespace Core { class FlatFileManifestInfo; }
namespace Core { class Path; }
namespace Core { class Result; }
namespace Core { struct ExcludedPath; }
// clang-format on

namespace Core {

class FlatFileOperations {
public:
    // prevent constructor by default
    FlatFileOperations& operator=(FlatFileOperations const&);
    FlatFileOperations(FlatFileOperations const&);
    FlatFileOperations();

public:
    // NOLINTBEGIN
    MCAPI static class Core::Result copyFlatFile(
        class Core::FileSystemImpl*                   sourceTransaction,
        class Core::Path const&                       sourceDirectoryPath,
        class Core::FileSystemImpl*                   targetTransaction,
        class Core::Path const&                       targetDirectoryPath,
        std::vector<struct Core::ExcludedPath> const& exclusionDirectories,
        std::vector<struct Core::ExcludedPath> const& excludedFiles
    );

    MCAPI static class Core::Result createFlatFile(
        class Core::FileSystemImpl*                   sourceTransaction,
        class Core::Path const&                       sourceDirectoryPath,
        class Core::FileSystemImpl*                   targetTransaction,
        class Core::Path const&                       targetDirectoryPath,
        std::vector<struct Core::ExcludedPath> const& exclusionPaths,
        bool                                          deleteSourceDirectory
    );

    MCAPI static class Core::Result replaceFlatFileManifest(
        class Core::FileSystemImpl&                          transaction,
        class Core::Path const&                              flatFileManifestPath,
        std::vector<class Core::FlatFileManifestInfo> const& manifestInfoVector,
        bool                                                 keepCached
    );

    MCAPI static class Core::Result transferFlatFileDirectory(
        class Core::FileSystemImpl* sourceTransaction,
        class Core::Path const&     sourceDirectoryPath,
        class Core::FileSystemImpl* targetTransaction,
        class Core::Path const&     targetDirectoryPath
    );

    MCAPI static uint64 const FLAT_FILE_CURRENT_VERSION;

    MCAPI static std::string const FLAT_FILE_EMPTY_MANIFEST_FILE;

    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const FLAT_FILE_EXTENSION;

    MCAPI static uint64 const FLAT_FILE_INVALID_VERSION;

    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const FLAT_FILE_MANIFEST_EXTENSION;

    MCAPI static uint64 const FLAT_FILE_WRITE_CHUNK_SIZE;

    // NOLINTEND
};

}; // namespace Core
