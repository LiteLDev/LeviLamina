#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/DirectoryIterationFlags.h"
#include "mc/deps/core/file/FileBufferingMode.h"
#include "mc/deps/core/file/FileType.h"
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

class FileSystem_generic : public ::Core::FileSystemImpl {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Core::Result _openFile(
        ::std::unique_ptr<::Core::FileImpl>&,
        ::Core::PathView,
        ::Core::FileOpenMode,
        ::Core::FileBufferingMode
    ) /*override*/;

    virtual bool _fileExists(::Core::PathView) /*override*/;

    virtual ::Core::Result _deleteFile(::Core::PathView) /*override*/;

    virtual ::Core::Result _renameFile(::Core::PathView, ::Core::PathView) /*override*/;

    virtual ::Core::Result _getFileSize(::Core::PathView, uint64*) /*override*/;

    virtual ::Core::Result _createOneDirectory(::Core::PathView) /*override*/;

    virtual ::Core::Result _deleteEmptyDirectory(::Core::PathView) /*override*/;

    virtual bool _directoryExists(::Core::PathView) /*override*/;

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

    virtual ~FileSystem_generic() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Core
