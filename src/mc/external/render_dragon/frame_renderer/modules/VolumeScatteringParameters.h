#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer::modules {

struct VolumeScatteringParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk44e79c;
    ::ll::UntypedStorage<4, 4>  mUnk410efd;
    ::ll::UntypedStorage<4, 4>  mUnka13605;
    ::ll::UntypedStorage<4, 4>  mUnkbf3fa1;
    ::ll::UntypedStorage<4, 4>  mUnke4bf31;
    ::ll::UntypedStorage<4, 4>  mUnk603ff5;
    ::ll::UntypedStorage<1, 1>  mUnkfbbd93;
    ::ll::UntypedStorage<1, 1>  mUnkab7fc9;
    ::ll::UntypedStorage<4, 4>  mUnkdc9b95;
    ::ll::UntypedStorage<4, 4>  mUnk885e72;
    ::ll::UntypedStorage<1, 1>  mUnk819eff;
    ::ll::UntypedStorage<4, 12> mUnkf5df47;
    ::ll::UntypedStorage<4, 4>  mUnkf505be;
    ::ll::UntypedStorage<4, 4>  mUnk5cdac0;
    ::ll::UntypedStorage<4, 4>  mUnk98d567;
    // NOLINTEND

public:
    // prevent constructor by default
    VolumeScatteringParameters& operator=(VolumeScatteringParameters const&);
    VolumeScatteringParameters(VolumeScatteringParameters const&);
    VolumeScatteringParameters();
};

} // namespace dragon::framerenderer::modules
