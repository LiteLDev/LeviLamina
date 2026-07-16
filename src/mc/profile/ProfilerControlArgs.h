#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiling::Control {

struct ProfilerControlArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkfaa6db;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfilerControlArgs& operator=(ProfilerControlArgs const&);
    ProfilerControlArgs(ProfilerControlArgs const&);
    ProfilerControlArgs();
};

} // namespace Bedrock::Profiling::Control
