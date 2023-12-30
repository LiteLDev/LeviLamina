#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/StackString.h"

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
    // symbol:
    // ?copyFlatFile@FlatFileOperations@Core@@SA?AVResult@2@PEAVFileSystemImpl@2@AEBVPath@2@01AEBV?$vector@UExcludedPath@Core@@V?$allocator@UExcludedPath@Core@@@std@@@std@@2@Z
    MCAPI static class Core::Result copyFlatFile(
        class Core::FileSystemImpl*                   sourceTransaction,
        class Core::Path const&                       sourceDirectoryPath,
        class Core::FileSystemImpl*                   targetTransaction,
        class Core::Path const&                       targetDirectoryPath,
        std::vector<struct Core::ExcludedPath> const& exclusionDirectories,
        std::vector<struct Core::ExcludedPath> const& excludedFiles
    );

    // symbol:
    // ?createFlatFile@FlatFileOperations@Core@@SA?AVResult@2@PEAVFileSystemImpl@2@AEBVPath@2@01AEBV?$vector@UExcludedPath@Core@@V?$allocator@UExcludedPath@Core@@@std@@@std@@_N@Z
    MCAPI static class Core::Result createFlatFile(
        class Core::FileSystemImpl*                   sourceTransaction,
        class Core::Path const&                       sourceDirectoryPath,
        class Core::FileSystemImpl*                   targetTransaction,
        class Core::Path const&                       targetDirectoryPath,
        std::vector<struct Core::ExcludedPath> const& exclusionPaths,
        bool                                          deleteSourceDirectory
    );

    // symbol:
    // ?replaceFlatFileManifest@FlatFileOperations@Core@@SA?AVResult@2@AEAVFileSystemImpl@2@AEBVPath@2@AEBV?$vector@VFlatFileManifestInfo@Core@@V?$allocator@VFlatFileManifestInfo@Core@@@std@@@std@@_N@Z
    MCAPI static class Core::Result replaceFlatFileManifest(
        class Core::FileSystemImpl&                          transaction,
        class Core::Path const&                              flatFileManifestPath,
        std::vector<class Core::FlatFileManifestInfo> const& manifestInfoVector,
        bool                                                 keepCached
    );

    // symbol: ?transferFlatFileDirectory@FlatFileOperations@Core@@SA?AVResult@2@PEAVFileSystemImpl@2@AEBVPath@2@01@Z
    MCAPI static class Core::Result transferFlatFileDirectory(
        class Core::FileSystemImpl* sourceTransaction,
        class Core::Path const&     sourceDirectoryPath,
        class Core::FileSystemImpl* targetTransaction,
        class Core::Path const&     targetDirectoryPath
    );

    // symbol: ?FLAT_FILE_CURRENT_VERSION@FlatFileOperations@Core@@2_KB
    MCAPI static uint64 const FLAT_FILE_CURRENT_VERSION;

    // symbol:
    // ?FLAT_FILE_EMPTY_MANIFEST_FILE@FlatFileOperations@Core@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const FLAT_FILE_EMPTY_MANIFEST_FILE;

    // symbol: ?FLAT_FILE_EXTENSION@FlatFileOperations@Core@@2V?$PathBuffer@V?$StackString@D$0EAA@@Core@@@2@B
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const FLAT_FILE_EXTENSION;

    // symbol: ?FLAT_FILE_INVALID_VERSION@FlatFileOperations@Core@@2_KB
    MCAPI static uint64 const FLAT_FILE_INVALID_VERSION;

    // symbol: ?FLAT_FILE_MANIFEST_EXTENSION@FlatFileOperations@Core@@2V?$PathBuffer@V?$StackString@D$0EAA@@Core@@@2@B
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const FLAT_FILE_MANIFEST_EXTENSION;

    // symbol: ?FLAT_FILE_WRITE_CHUNK_SIZE@FlatFileOperations@Core@@2_KB
    MCAPI static uint64 const FLAT_FILE_WRITE_CHUNK_SIZE;

    // NOLINTEND
};

}; // namespace Core
