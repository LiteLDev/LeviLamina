#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/DirectoryIterationFlags.h"
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/FileType.h"
#include "mc/deps/core/file/file_system/CrossStorageCopyMode.h"
#include "mc/deps/core/file/file_system/FileSystemImpl.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileImpl; }
namespace Core { class FileOpenMode; }
namespace Core { class PathView; }
namespace Core { class Result; }
namespace Core { struct DirectoryIterationItem; }
// clang-format on

namespace Core {

class LruCacheFileSystem : public ::Core::FileSystemImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnka33e58;
    // NOLINTEND

public:
    // prevent constructor by default
    LruCacheFileSystem& operator=(LruCacheFileSystem const&);
    LruCacheFileSystem(LruCacheFileSystem const&);
    LruCacheFileSystem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LruCacheFileSystem() /*override*/ = default;

    virtual ::Core::CrossStorageCopyMode getCrossStorageCopyMode() /*override*/;

    virtual ::Core::Result _openFile(
        ::std::unique_ptr<::Core::FileImpl>&,
        ::Core::PathView,
        ::Core::FileOpenMode,
        ::Core::FileBufferingMode
    ) /*override*/;

    virtual bool _fileExists(::Core::PathView) /*override*/;

    virtual ::Core::Result _deleteFile(::Core::PathView) /*override*/;

    virtual ::Core::Result _getFileSize(::Core::PathView, uint64*) /*override*/;

    virtual ::Core::Result _renameFile(::Core::PathView, ::Core::PathView) /*override*/;

    virtual ::Core::Result _createOneDirectory(::Core::PathView) /*override*/;

    virtual bool _directoryExists(::Core::PathView) /*override*/;

    virtual ::Core::Result _deleteEmptyDirectory(::Core::PathView) /*override*/;

    virtual ::Core::Result
    _deleteRecursively(::Core::PathView directoryPath, ::Core::FileType deleteFileType) /*override*/;

    virtual ::Core::Result _renameDirectory(::Core::PathView, ::Core::PathView) /*override*/;

    virtual ::Core::Result _iterateOverDirectory(
        ::Core::PathView,
        ::Core::DirectoryIterationFlags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)>
    ) /*override*/;

    virtual bool _fileOrDirectoryExists(::Core::PathView) /*override*/;

    virtual ::Core::Result _getEntryType(::Core::PathView, ::Core::FileType&) /*override*/;

    virtual ::Core::Result _getLastModificationTime(::Core::PathView, int64*) /*override*/;

    virtual ::Core::Result _copyTimeAndAccessRights(::Core::PathView, ::Core::PathView) /*override*/;

    virtual ::Core::Result _endTransaction() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Core
