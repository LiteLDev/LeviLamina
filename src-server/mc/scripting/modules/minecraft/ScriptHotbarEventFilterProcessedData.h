#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft::EventFilters {

struct ScriptHotbarEventFilterProcessedData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk545658;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptHotbarEventFilterProcessedData& operator=(ScriptHotbarEventFilterProcessedData const&);
    ScriptHotbarEventFilterProcessedData(ScriptHotbarEventFilterProcessedData const&);
    ScriptHotbarEventFilterProcessedData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptHotbarEventFilterProcessedData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
