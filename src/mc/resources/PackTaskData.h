#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PackTaskData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkffc8a8;
    ::ll::UntypedStorage<8, 24> mUnk7976dc;
    ::ll::UntypedStorage<8, 8>  mUnke4ad54;
    ::ll::UntypedStorage<8, 8>  mUnk12a533;
    // NOLINTEND

public:
    // prevent constructor by default
    PackTaskData& operator=(PackTaskData const&);
    PackTaskData(PackTaskData const&);
    PackTaskData();
};
