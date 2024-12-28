#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubChunkRequestManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk4d8fd6;
    ::ll::UntypedStorage<8, 64> mUnkf1d155;
    ::ll::UntypedStorage<8, 64> mUnk6d0ea0;
    ::ll::UntypedStorage<8, 80> mUnk169d22;
    ::ll::UntypedStorage<8, 80> mUnk83e740;
    // NOLINTEND

public:
    // prevent constructor by default
    SubChunkRequestManager& operator=(SubChunkRequestManager const&);
    SubChunkRequestManager(SubChunkRequestManager const&);
    SubChunkRequestManager();
};
