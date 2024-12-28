#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"

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
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Core::Result copyFlatFile(
        ::Core::FileSystemImpl*                    sourceTransaction,
        ::Core::Path const&                        sourceDirectoryPath,
        ::Core::FileSystemImpl*                    targetTransaction,
        ::Core::Path const&                        targetDirectoryPath,
        ::std::vector<::Core::ExcludedPath> const& exclusionDirectories,
        ::std::vector<::Core::ExcludedPath> const& excludedFiles
    );

    MCAPI static ::Core::Result createFlatFile(
        ::Core::FileSystemImpl*                    sourceTransaction,
        ::Core::Path const&                        sourceDirectoryPath,
        ::Core::FileSystemImpl*                    targetTransaction,
        ::Core::Path const&                        targetDirectoryPath,
        ::std::vector<::Core::ExcludedPath> const& exclusionPaths,
        bool                                       deleteSourceDirectory
    );

    MCAPI static ::Core::Result replaceFlatFileManifest(
        ::Core::FileSystemImpl&                            transaction,
        ::Core::Path const&                                flatFileManifestPath,
        ::std::vector<::Core::FlatFileManifestInfo> const& manifestInfoVector,
        bool                                               keepCached
    );

    MCAPI static ::Core::Result transferFlatFileDirectory(
        ::Core::FileSystemImpl* sourceTransaction,
        ::Core::Path const&     sourceDirectoryPath,
        ::Core::FileSystemImpl* targetTransaction,
        ::Core::Path const&     targetDirectoryPath
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static uint64 const& FLAT_FILE_CURRENT_VERSION();

    MCAPI static ::std::string const& FLAT_FILE_EMPTY_MANIFEST_FILE();

    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& FLAT_FILE_EXTENSION();

    MCAPI static uint64 const& FLAT_FILE_INVALID_VERSION();

    MCAPI static ::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& FLAT_FILE_MANIFEST_EXTENSION();

    MCAPI static uint64 const& FLAT_FILE_WRITE_CHUNK_SIZE();
    // NOLINTEND
};

} // namespace Core
