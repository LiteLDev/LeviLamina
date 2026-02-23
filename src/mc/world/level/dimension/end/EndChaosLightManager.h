#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ILevel;
// clang-format on

class EndChaosLightManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ILevel&> mLevel;
    ::ll::TypedStorage<4, 4, float>     mEndChaosIntensityMultipler;
    ::ll::TypedStorage<4, 4, float>     mEndChaosPerpendicularAngle;
    ::ll::TypedStorage<4, 4, float>     mEndChaosAngle;
    ::ll::TypedStorage<4, 4, float>     mCurrentFlashDurationInTicks;
    ::ll::TypedStorage<4, 4, float>     mFlashDuration;
    ::ll::TypedStorage<4, 4, float>     mMinFlashDuration;
    ::ll::TypedStorage<4, 4, float>     mMaxFlashDuration;
    ::ll::TypedStorage<4, 4, float>     mCurrentFlashCooldownInTicks;
    ::ll::TypedStorage<4, 4, float>     mFlashCooldown;
    ::ll::TypedStorage<4, 4, float>     mMinFlashCooldown;
    ::ll::TypedStorage<4, 4, float>     mMaxFlashCooldown;
    // NOLINTEND

public:
    // prevent constructor by default
    EndChaosLightManager& operator=(EndChaosLightManager const&);
    EndChaosLightManager(EndChaosLightManager const&);
    EndChaosLightManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C void tick();
    // NOLINTEND
};
