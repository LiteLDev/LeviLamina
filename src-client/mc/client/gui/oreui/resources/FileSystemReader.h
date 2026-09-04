#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/external/gameface/cohtml/IFileSystemReader.h"
#include "mc/external/gameface/cohtml/ISyncStreamReader.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
namespace Core { class FileSystem; }
namespace Core { class Path; }
namespace Gameface { class ISyncStreamReader; }
// clang-format on

namespace OreUI {

class FileSystemReader : public ::cohtml::IFileSystemReader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Core::FileSystem>>   mFileSystem;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IFileAccess>>        mFileAccess;
    ::ll::TypedStorage<8, 24, ::std::vector<::Core::PathBuffer<::std::string>>> mCurrentFolderFiles;
    ::ll::TypedStorage<8, 32, ::std::string>                                    mCurrentFileName;
    ::ll::TypedStorage<8, 64, ::std::function<::Gameface::ISyncStreamReader*(::IFileAccess&, ::Core::Path)>>
        mSyncStreamReaderFactory;
    // NOLINTEND

public:
    // prevent constructor by default
    FileSystemReader();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FileSystemReader() /*override*/ = default;

    virtual bool EnumerateFolder(char const* path) /*override*/;

    virtual char const* NextFile() /*override*/;

    virtual ::cohtml::ISyncStreamReader* OpenFile(char const* path) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FileSystemReader(
        ::Bedrock::NotNullNonOwnerPtr<::Core::FileSystem> const&                             fileSystem,
        ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> const&                                  fileAccess,
        ::std::function<::Gameface::ISyncStreamReader*(::IFileAccess&, ::Core::Path)> const& syncStreamReaderFactory
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::Core::FileSystem> const&                             fileSystem,
        ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> const&                                  fileAccess,
        ::std::function<::Gameface::ISyncStreamReader*(::IFileAccess&, ::Core::Path)> const& syncStreamReaderFactory
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $EnumerateFolder(char const* path);

    MCAPI char const* $NextFile();

    MCAPI ::cohtml::ISyncStreamReader* $OpenFile(char const* path);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
