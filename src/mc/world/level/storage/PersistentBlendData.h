#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PersistentBlendData {

public:
    // prevent constructor by default
    PersistentBlendData& operator=(PersistentBlendData const&) = delete;
    PersistentBlendData(PersistentBlendData const&)            = delete;
    PersistentBlendData()                                      = delete;
};
