#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer::modules {

struct UpscalingParameters {
public:
    // UpscalingParameters inner types define
    enum class Mode : int {
        Taau = 0,
        Bilinear = 1,
        Fsr1 = 2,
        Fsr1DebugBilinear = 3,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk79a5ec;
    ::ll::UntypedStorage<4, 4> mUnk47aa27;
    ::ll::UntypedStorage<1, 1> mUnk2410d0;
    ::ll::UntypedStorage<1, 1> mUnk98991c;
    ::ll::UntypedStorage<4, 4> mUnkc0cbb9;
    ::ll::UntypedStorage<4, 4> mUnk826c35;
    ::ll::UntypedStorage<4, 4> mUnkf853fa;
    ::ll::UntypedStorage<4, 4> mUnkedd543;
    ::ll::UntypedStorage<4, 4> mUnk12dd6c;
    ::ll::UntypedStorage<4, 4> mUnk1c46ca;
    ::ll::UntypedStorage<4, 4> mUnk906528;
    ::ll::UntypedStorage<1, 1> mUnkc593bc;
    ::ll::UntypedStorage<1, 1> mUnk4e7154;
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

}
