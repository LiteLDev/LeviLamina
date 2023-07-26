#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubChunkRequestManager {

public:
    // prevent constructor by default
    SubChunkRequestManager& operator=(SubChunkRequestManager const&) = delete;
    SubChunkRequestManager(SubChunkRequestManager const&)            = delete;
    SubChunkRequestManager()                                         = delete;
};
