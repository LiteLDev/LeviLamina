#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct DeferredLightingUpscaleParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkb0a2ef;
    ::ll::UntypedStorage<1, 1> mUnkf71199;
    ::ll::UntypedStorage<4, 4> mUnk934841;
    ::ll::UntypedStorage<4, 4> mUnk551045;
    ::ll::UntypedStorage<2, 2> mUnk62e881;
    ::ll::UntypedStorage<1, 1> mUnk68eff8;
    // NOLINTEND

public:
    // prevent constructor by default
    DeferredLightingUpscaleParameters& operator=(DeferredLightingUpscaleParameters const&);
    DeferredLightingUpscaleParameters(DeferredLightingUpscaleParameters const&);
    DeferredLightingUpscaleParameters();

};

}
