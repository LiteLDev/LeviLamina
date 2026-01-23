#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptWeatherChangedAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mDimension;
    ::ll::TypedStorage<1, 1, bool>           mWasRaining;
    ::ll::TypedStorage<1, 1, bool>           mWasLightning;
    ::ll::TypedStorage<1, 1, bool>           mIsRaining;
    ::ll::TypedStorage<1, 1, bool>           mIsLightning;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
