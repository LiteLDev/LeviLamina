#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    FolderSizeAndModifyDateSnapshot& operator=(FolderSizeAndModifyDateSnapshot const&);
    FolderSizeAndModifyDateSnapshot(FolderSizeAndModifyDateSnapshot const&);
    FolderSizeAndModifyDateSnapshot();
};
