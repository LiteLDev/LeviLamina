#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SyncWorkResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk7a3ec9;
    ::ll::UntypedStorage<4, 4> mUnk3b1ff2;
    // NOLINTEND

public:
    // prevent constructor by default
    SyncWorkResult& operator=(SyncWorkResult const&);
    SyncWorkResult(SyncWorkResult const&);
    SyncWorkResult();
};
