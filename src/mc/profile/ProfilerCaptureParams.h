#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiling::Orchestrator {

struct ProfilerCaptureParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk46e250;
    ::ll::UntypedStorage<8, 32>  mUnk55ad5a;
    ::ll::UntypedStorage<8, 24>  mUnkaf925b;
    ::ll::UntypedStorage<8, 24>  mUnkca7140;
    ::ll::UntypedStorage<8, 24>  mUnk8da7dd;
    ::ll::UntypedStorage<8, 56>  mUnk2f2732;
    ::ll::UntypedStorage<8, 256> mUnkcd00a4;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfilerCaptureParams& operator=(ProfilerCaptureParams const&);
    ProfilerCaptureParams(ProfilerCaptureParams const&);
    ProfilerCaptureParams();
};

} // namespace Bedrock::Profiling::Orchestrator
