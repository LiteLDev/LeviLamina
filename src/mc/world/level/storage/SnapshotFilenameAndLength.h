#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SnapshotFilenameAndLength {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb4503f;
    ::ll::UntypedStorage<8, 8>  mUnk2eae88;
    // NOLINTEND

public:
    // prevent constructor by default
    SnapshotFilenameAndLength& operator=(SnapshotFilenameAndLength const&);
    SnapshotFilenameAndLength(SnapshotFilenameAndLength const&);
    SnapshotFilenameAndLength();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_S ::std::string toString();
    // NOLINTEND
};
