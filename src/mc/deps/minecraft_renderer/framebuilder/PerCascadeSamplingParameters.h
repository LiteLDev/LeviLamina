#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct PerCascadeSamplingParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk96fd6e;
    ::ll::UntypedStorage<4, 4> mUnk7fb9a8;
    ::ll::UntypedStorage<4, 4> mUnk989e85;
    ::ll::UntypedStorage<4, 4> mUnke27b09;
    ::ll::UntypedStorage<4, 4> mUnkf617de;
    // NOLINTEND

public:
    // prevent constructor by default
    PerCascadeSamplingParameters& operator=(PerCascadeSamplingParameters const&);
    PerCascadeSamplingParameters(PerCascadeSamplingParameters const&);
    PerCascadeSamplingParameters();
};

} // namespace mce::framebuilder
