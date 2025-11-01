#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SkinAdjustments {
public:
    // SkinAdjustments inner types define
    enum class AnimBits : int {
        ArmsDown = 0,
        ArmsOutFront = 1,
        NoLegAnim = 2,
        SingleLegs = 3,
        SingleArms = 4,
        StatueOfLiberty = 5,
        DontRenderArmour = 6,
        NoBobbing = 7,
        UpsideDown = 8,
        InvertedCrouch = 9,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkb6f038;
    // NOLINTEND

public:
    // prevent constructor by default
    SkinAdjustments& operator=(SkinAdjustments const&);
    SkinAdjustments(SkinAdjustments const&);
    SkinAdjustments();

};
