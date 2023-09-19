#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PersistentBlendData {
public:
    // prevent constructor by default
    PersistentBlendData& operator=(PersistentBlendData const&);
    PersistentBlendData(PersistentBlendData const&);
    PersistentBlendData();
};
