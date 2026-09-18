#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiling::Control {

struct ProfilerControlResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk855340;
    ::ll::UntypedStorage<4, 4>  mUnk12fb42;
    ::ll::UntypedStorage<8, 32> mUnkc4c336;
    ::ll::UntypedStorage<8, 80> mUnkce4471;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfilerControlResult& operator=(ProfilerControlResult const&);
    ProfilerControlResult(ProfilerControlResult const&);
    ProfilerControlResult();
};

} // namespace Bedrock::Profiling::Control
