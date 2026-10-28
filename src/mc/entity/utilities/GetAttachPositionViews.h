#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
class StrictExecutionContextBase;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct ActorDataSeatOffsetComponent;
struct ActorHeadRotationComponent;
struct ActorRotationComponent;
struct CamelFlagComponent;
struct HorseFlagComponent;
struct MobBodyRotationComponent;
struct MobFlagComponent;
struct OffsetsComponent;
struct ParrotFlagComponent;
struct PassengerComponent;
struct PassengerRenderingRidingOffsetComponent;
struct PlayerComponent;
struct RenderRotationComponent;
struct StandAnimationComponent;
struct StateVectorComponent;
struct VanillaOffsetComponent;
struct VehicleComponent;
// clang-format on

struct GetAttachPositionViews {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        80,
        ::ViewT<
            ::StrictEntityContext,
            ::ActorRotationComponent const,
            ::RenderRotationComponent const,
            ::StateVectorComponent const,
            ::ActorDataFlagComponent const,
            ::ActorDataSeatOffsetComponent const>>
                                                                                                mCommonData;
    ::ll::TypedStorage<8, 24, ::ViewT<::StrictEntityContext, ::PassengerComponent const>>       mPassengers;
    ::ll::TypedStorage<8, 24, ::ViewT<::StrictEntityContext, ::Include<::ParrotFlagComponent>>> mParrots;
    ::ll::TypedStorage<8, 24, ::ViewT<::StrictEntityContext, ::Include<::VehicleComponent>>>    mVehicles;
    ::ll::TypedStorage<
        8,
        56,
        ::ViewT<::StrictEntityContext, ::Include<::HorseFlagComponent>, ::StandAnimationComponent const>>
        mHorses;
    ::ll::TypedStorage<
        8,
        56,
        ::ViewT<::StrictEntityContext, ::Include<::MobFlagComponent>, ::MobBodyRotationComponent const>>
        mMobs;
    ::ll::TypedStorage<
        8,
        56,
        ::ViewT<::StrictEntityContext, ::Include<::CamelFlagComponent>, ::ActorDataFlagComponent const>>
                                                                                            mCamels;
    ::ll::TypedStorage<8, 24, ::ViewT<::StrictEntityContext, ::Include<::PlayerComponent>>> mPlayers;
    ::ll::TypedStorage<
        8,
        64,
        ::ViewT<
            ::StrictEntityContext,
            ::AABBShapeComponent const,
            ::ActorRotationComponent const,
            ::OffsetsComponent const>>
        mMainAttachView;
    ::ll::TypedStorage<8, 24, ::ViewT<::StrictEntityContext, ::PassengerRenderingRidingOffsetComponent const>>
                                                                                              mPassengerRenderingView;
    ::ll::TypedStorage<8, 24, ::ViewT<::StrictEntityContext, ::VanillaOffsetComponent const>> mVanillaOffsetView;
    ::ll::TypedStorage<8, 24, ::ViewT<::StrictEntityContext, ::ActorHeadRotationComponent const>> mRotationsView;
    // NOLINTEND

public:
    // prevent constructor by default
    GetAttachPositionViews();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit GetAttachPositionViews(::StrictExecutionContextBase& c);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::StrictExecutionContextBase& c);
    // NOLINTEND
};
