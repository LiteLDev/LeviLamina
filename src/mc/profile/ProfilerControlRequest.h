#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiling::Control {

struct ProfilerControlRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk5c6877;
    ::ll::UntypedStorage<4, 4> mUnke1c1e1;
    ::ll::UntypedStorage<4, 8> mUnk23db4e;
    ::ll::UntypedStorage<4, 4> mUnkfcd6bb;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfilerControlRequest& operator=(ProfilerControlRequest const&);
    ProfilerControlRequest(ProfilerControlRequest const&);
    ProfilerControlRequest();
};

} // namespace Bedrock::Profiling::Control
