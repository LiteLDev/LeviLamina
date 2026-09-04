#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptLiveEventsUtilitiesDetail {

struct ScriptStoreInfoConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc0b7df;
    ::ll::UntypedStorage<8, 32> mUnk445052;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptStoreInfoConfig& operator=(ScriptStoreInfoConfig const&);
    ScriptStoreInfoConfig(ScriptStoreInfoConfig const&);
    ScriptStoreInfoConfig();
};

} // namespace ScriptLiveEventsUtilitiesDetail
