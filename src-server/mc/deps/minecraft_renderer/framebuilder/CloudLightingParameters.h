#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct CloudLightingParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6e0dc6;
    ::ll::UntypedStorage<4, 4> mUnk1f2e3a;
    ::ll::UntypedStorage<4, 4> mUnkd3e9a9;
    ::ll::UntypedStorage<4, 4> mUnk614eb7;
    ::ll::UntypedStorage<1, 1> mUnka623cd;
    ::ll::UntypedStorage<1, 1> mUnkf5aa65;
    ::ll::UntypedStorage<1, 1> mUnk86599d;
    // NOLINTEND

public:
    // prevent constructor by default
    CloudLightingParameters& operator=(CloudLightingParameters const&);
    CloudLightingParameters(CloudLightingParameters const&);
    CloudLightingParameters();

};

}
