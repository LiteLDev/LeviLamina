#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
class Vec3;
struct ActorDataFlagComponent;
struct ActorDataSeatOffsetComponent;
struct ActorRotationComponent;
struct HorseFlagComponent;
struct MobBodyRotationComponent;
struct MobFlagComponent;
struct RenderRotationComponent;
struct StandAnimationComponent;
struct StateVectorComponent;
// clang-format on

struct InterpolatedRidingPositionCalculationHelper {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Vec3 getHorseInterpolatedRidingOffset(
        ::StrictEntityContext const&                                                                            entity,
        ::ViewT<::StrictEntityContext, ::Include<::HorseFlagComponent>, ::StandAnimationComponent const> const& horses,
        ::ViewT<
            ::StrictEntityContext,
            ::ActorRotationComponent const,
            ::RenderRotationComponent const,
            ::StateVectorComponent const,
            ::ActorDataFlagComponent const,
            ::ActorDataSeatOffsetComponent const> const& commonData,
        float                                            alpha
    );

    MCAPI static float getInterpolatedBodyRot(
        ::StrictEntityContext const& entity,
        ::ViewT<
            ::StrictEntityContext,
            ::ActorRotationComponent const,
            ::RenderRotationComponent const,
            ::StateVectorComponent const,
            ::ActorDataFlagComponent const,
            ::ActorDataSeatOffsetComponent const> const& commonData,
        ::ViewT<::StrictEntityContext, ::Include<::MobFlagComponent>, ::MobBodyRotationComponent const> const& mobs,
        float                                                                                                  alpha
    );
    // NOLINTEND
};
