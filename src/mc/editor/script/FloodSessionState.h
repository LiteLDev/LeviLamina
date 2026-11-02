#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::ScriptModule {

struct FloodSessionState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkac066f;
    ::ll::UntypedStorage<8, 48> mUnk12fc98;
    ::ll::UntypedStorage<4, 12> mUnk82353e;
    ::ll::UntypedStorage<8, 8>  mUnk2b0007;
    ::ll::UntypedStorage<8, 24> mUnk64496a;
    ::ll::UntypedStorage<1, 1>  mUnkabee2b;
    // NOLINTEND

public:
    // prevent constructor by default
    FloodSessionState& operator=(FloodSessionState const&);
    FloodSessionState(FloodSessionState const&);
    FloodSessionState();
};

} // namespace Editor::ScriptModule
