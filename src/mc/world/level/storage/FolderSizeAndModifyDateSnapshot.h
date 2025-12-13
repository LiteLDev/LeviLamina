#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class FolderSizeAndModifyDateSnapshot {
public:
    // FolderSizeAndModifyDateSnapshot inner types declare
    // clang-format off
    class FileSnapshot;
    // clang-format on

    // FolderSizeAndModifyDateSnapshot inner types define
    class FileSnapshot {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk4b0190;
        ::ll::UntypedStorage<8, 8> mUnk6eba40;
        // NOLINTEND

    public:
        // prevent constructor by default
        FileSnapshot& operator=(FileSnapshot const&);
        FileSnapshot(FileSnapshot const&);
        FileSnapshot();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk4ecdc8;
    ::ll::UntypedStorage<8, 8>  mUnkb46dbd;
    // NOLINTEND

public:
    // prevent constructor by default
    FolderSizeAndModifyDateSnapshot(FolderSizeAndModifyDateSnapshot const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FolderSizeAndModifyDateSnapshot();

    MCNAPI ::FolderSizeAndModifyDateSnapshot& operator=(::FolderSizeAndModifyDateSnapshot const&);

    MCNAPI ::FolderSizeAndModifyDateSnapshot& operator=(::FolderSizeAndModifyDateSnapshot&&);

    MCNAPI ~FolderSizeAndModifyDateSnapshot();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::FolderSizeAndModifyDateSnapshot> CaptureSnapshot(::Core::Path const& path);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
