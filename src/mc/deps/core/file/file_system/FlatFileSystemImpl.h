#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/DirectoryIterationFlags.h"
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/platform/brstd/function_ref.h"

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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke799e3;
    ::ll::UntypedStorage<8, 16> mUnkf2e326;
    // NOLINTEND

public:
    // prevent constructor by default
    FlatFileSystemImpl& operator=(FlatFileSystemImpl const&);
    FlatFileSystemImpl(FlatFileSystemImpl const&);
    FlatFileSystemImpl();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Core::FlatFileSearchResult
    _findFileOrDirectoryEntry(::Core::Path const& filePath, ::Core::Path const& manifestPath, bool skipDeleted);

    MCAPI ::Core::Result _getSeekPositionAndSize(
        ::Core::Path const& filePath,
        ::Core::Path const& manifestPath,
        uint64&             seekPositionOut,
        uint64&             fileSizeOut
    );

    MCAPI ::Core::Result deleteFileOrDirectory(
        ::Core::Path const& fileOrDirectoryPath,
        ::Core::Path const& manifestPath,
        bool                directoryDeleteEnabled,
        bool                deleteRecursively
    );

    MCAPI bool fileOrDirectoryExists(::Core::Path const& path, ::Core::Path const& manifestPath);

    MCAPI bool isDirectoryPathAFlatFile(::Core::Path const& directoryPath);

    MCAPI ::Core::Result iterateOverDirectory(
        ::Core::Path const&                                                          directoryPath,
        ::Core::Path const&                                                          manifestPath,
        ::Core::DirectoryIterationFlags                                              flags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)> callbackFunction
    );

    MCAPI ::Core::Result openFlatFile(
        ::std::unique_ptr<::Core::FileImpl>& fileOut,
        ::Core::Path const&                  filePath,
        ::Core::Path const&                  manifestPath,
        ::Core::FileOpenMode                 openMode,
        ::Core::FileBufferingMode            fileBufferingMode
    );

    MCAPI bool shouldAccessFlatFile(
        ::Core::Path const&                path,
        ::Core::PathBuffer<::std::string>& manifestFilePath,
        bool                               shouldIncludeParentDir
    );
    // NOLINTEND
};

} // namespace Core
