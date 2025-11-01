#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct PointLightShadowParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6f5276;
    ::ll::UntypedStorage<4, 4> mUnkdf2633;
    ::ll::UntypedStorage<4, 4> mUnk7cec04;
    ::ll::UntypedStorage<4, 4> mUnk5b68e2;
    ::ll::UntypedStorage<4, 4> mUnk966531;
    ::ll::UntypedStorage<4, 4> mUnkd27a2c;
    ::ll::UntypedStorage<1, 1> mUnk174d69;
    ::ll::UntypedStorage<1, 1> mUnka68b26;
    ::ll::UntypedStorage<4, 4> mUnkbf335c;
    ::ll::UntypedStorage<4, 4> mUnk1c4ac7;
    // NOLINTEND

public:
    // prevent constructor by default
    PointLightShadowParameters& operator=(PointLightShadowParameters const&);
    PointLightShadowParameters(PointLightShadowParameters const&);
    PointLightShadowParameters();

};

}
