#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer::modules {

struct UpscalingParameters {
public:
    // UpscalingParameters inner types define
    enum class Mode : int {
        Taau     = 0,
        Bilinear = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk79a5ec;
    ::ll::UntypedStorage<4, 4> mUnk47aa27;
    ::ll::UntypedStorage<1, 1> mUnk397fb4;
    ::ll::UntypedStorage<1, 1> mUnk33ee91;
    ::ll::UntypedStorage<4, 8> mUnk7dfdf7;
    // NOLINTEND

public:
    // prevent constructor by default
    UpscalingParameters& operator=(UpscalingParameters const&);
    UpscalingParameters(UpscalingParameters const&);
    UpscalingParameters();
};

} // namespace dragon::framerenderer::modules
