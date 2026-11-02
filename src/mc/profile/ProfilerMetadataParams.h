#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiling::Orchestrator {

struct ProfilerMetadataParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkffd737;
    ::ll::UntypedStorage<8, 16> mUnked4547;
    ::ll::UntypedStorage<8, 16> mUnk18e0a6;
    ::ll::UntypedStorage<8, 24> mUnk987d88;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfilerMetadataParams& operator=(ProfilerMetadataParams const&);
    ProfilerMetadataParams(ProfilerMetadataParams const&);
    ProfilerMetadataParams();
};

} // namespace Bedrock::Profiling::Orchestrator
