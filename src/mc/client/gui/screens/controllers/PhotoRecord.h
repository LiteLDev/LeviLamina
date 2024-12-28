#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PhotoRecord {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd07491;
    ::ll::UntypedStorage<8, 32> mUnk6fd8a5;
    ::ll::UntypedStorage<8, 32> mUnkf65448;
    ::ll::UntypedStorage<4, 4>  mUnkb4d7a9;
    // NOLINTEND

public:
    // prevent constructor by default
    PhotoRecord& operator=(PhotoRecord const&);
    PhotoRecord(PhotoRecord const&);
    PhotoRecord();
};
