#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer::modules {

struct ScreenSpaceReflectionsParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk19d896;
    ::ll::UntypedStorage<4, 4> mUnk37d9bc;
    ::ll::UntypedStorage<4, 4> mUnkdd7534;
    ::ll::UntypedStorage<4, 4> mUnk2ee34a;
    ::ll::UntypedStorage<4, 4> mUnkf0628f;
    ::ll::UntypedStorage<4, 4> mUnk2e0325;
    ::ll::UntypedStorage<4, 4> mUnk1ade35;
    ::ll::UntypedStorage<4, 4> mUnkd9b197;
    ::ll::UntypedStorage<4, 4> mUnk6f0ff4;
    ::ll::UntypedStorage<4, 4> mUnk1666e8;
    ::ll::UntypedStorage<1, 1> mUnk1c1beb;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenSpaceReflectionsParameters& operator=(ScreenSpaceReflectionsParameters const&);
    ScreenSpaceReflectionsParameters(ScreenSpaceReflectionsParameters const&);
    ScreenSpaceReflectionsParameters();
};

} // namespace dragon::framerenderer::modules
