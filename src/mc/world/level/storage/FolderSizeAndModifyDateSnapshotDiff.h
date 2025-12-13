#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class FolderSizeAndModifyDateSnapshot;
// clang-format on

class FolderSizeAndModifyDateSnapshotDiff {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkcb0011;
    ::ll::UntypedStorage<8, 8> mUnka0b677;
    ::ll::UntypedStorage<8, 8> mUnk6230b1;
    ::ll::UntypedStorage<8, 8> mUnked6311;
    ::ll::UntypedStorage<8, 8> mUnkdcb150;
    ::ll::UntypedStorage<8, 8> mUnk613e08;
    // NOLINTEND

public:
    // prevent constructor by default
    FolderSizeAndModifyDateSnapshotDiff& operator=(FolderSizeAndModifyDateSnapshotDiff const&);
    FolderSizeAndModifyDateSnapshotDiff(FolderSizeAndModifyDateSnapshotDiff const&);
    FolderSizeAndModifyDateSnapshotDiff();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C FolderSizeAndModifyDateSnapshotDiff(
        ::FolderSizeAndModifyDateSnapshot const& older,
        ::FolderSizeAndModifyDateSnapshot const& newer
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void*
    $ctor(::FolderSizeAndModifyDateSnapshot const& older, ::FolderSizeAndModifyDateSnapshot const& newer);
    // NOLINTEND
};
