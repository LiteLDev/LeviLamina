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

class WriteBufferedTransaction : public ::Core::FileSystemImpl {
public:
    // WriteBufferedTransaction inner types declare
    // clang-format off
    struct DirectoryItem;
    // clang-format on

    // WriteBufferedTransaction inner types define
    struct DirectoryItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 1032> mUnk57ae0e;
        ::ll::UntypedStorage<8, 8>    mUnk4e123c;
        ::ll::UntypedStorage<4, 4>    mUnk79eb3b;
        ::ll::UntypedStorage<8, 1032> mUnkae7371;
        // NOLINTEND

    public:
        // prevent constructor by default
        DirectoryItem& operator=(DirectoryItem const&);
        DirectoryItem(DirectoryItem const&);
        DirectoryItem();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk322229;
    ::ll::UntypedStorage<8, 8>  mUnk17068e;
    ::ll::UntypedStorage<8, 24> mUnk97857d;
    ::ll::UntypedStorage<8, 16> mUnkf9ece4;
    // NOLINTEND

public:
    // prevent constructor by default
    WriteBufferedTransaction& operator=(WriteBufferedTransaction const&);
    WriteBufferedTransaction(WriteBufferedTransaction const&);
    WriteBufferedTransaction();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual ::Core::CrossStorageCopyMode getCrossStorageCopyMode() /*override*/;

    // vIndex: 6
    virtual ::Core::Result _openFile(
        ::std::unique_ptr<::Core::FileImpl>&,
        ::Core::PathView,
        ::Core::FileOpenMode,
        ::Core::FileBufferingMode
    ) /*override*/;

    // vIndex: 7
    virtual bool _fileExists(::Core::PathView) /*override*/;

    // vIndex: 8
    virtual ::Core::Result _deleteFile(::Core::PathView) /*override*/;

    // vIndex: 10
    virtual ::Core::Result _getFileSize(::Core::PathView, uint64*) /*override*/;

    // vIndex: 11
    virtual ::Core::Result _renameFile(::Core::PathView, ::Core::PathView) /*override*/;

    // vIndex: 16
    virtual ::Core::Result _createOneDirectory(::Core::PathView) /*override*/;

    // vIndex: 19
    virtual bool _directoryExists(::Core::PathView) /*override*/;

    // vIndex: 20
    virtual ::Core::Result _deleteEmptyDirectory(::Core::PathView) /*override*/;

    // vIndex: 21
    virtual ::Core::Result _deleteDirectoryAndContentsRecursively(::Core::PathView directoryPath) /*override*/;

    // vIndex: 32
    virtual ::Core::Result _getFileOrDirectorySize(::Core::PathView entryName, uint64* pFileSizeOut) /*override*/;

    // vIndex: 24
    virtual ::Core::Result _renameDirectory(::Core::PathView, ::Core::PathView) /*override*/;

    // vIndex: 25
    virtual ::Core::Result _iterateOverDirectory(
        ::Core::PathView,
        ::Core::DirectoryIterationFlags,
        ::brstd::function_ref<::Core::Result(::Core::DirectoryIterationItem const&)>
    ) /*override*/;

    // vIndex: 31
    virtual bool _fileOrDirectoryExists(::Core::PathView) /*override*/;

    // vIndex: 33
    virtual ::Core::Result _getEntryType(::Core::PathView, ::Core::FileType&) /*override*/;

    // vIndex: 44
    virtual ::Core::Result _getLastModificationTime(::Core::PathView, int64*) /*override*/;

    // vIndex: 45
    virtual ::Core::Result _copyTimeAndAccessRights(::Core::PathView, ::Core::PathView) /*override*/;

    // vIndex: 46
    virtual ::Core::Result _endTransaction() /*override*/;

    // vIndex: 0
    virtual ~WriteBufferedTransaction() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Core
