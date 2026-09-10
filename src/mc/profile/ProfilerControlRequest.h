#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiling::Control {

struct ProfilerControlRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk5c6877;
    ::ll::UntypedStorage<4, 4>  mUnke1c1e1;
    ::ll::UntypedStorage<8, 32> mUnk23db4e;
    ::ll::UntypedStorage<4, 4>  mUnkfcd6bb;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfilerControlRequest& operator=(ProfilerControlRequest const&);
    ProfilerControlRequest(ProfilerControlRequest const&);
    ProfilerControlRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ProfilerControlRequest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Profiling::Control
