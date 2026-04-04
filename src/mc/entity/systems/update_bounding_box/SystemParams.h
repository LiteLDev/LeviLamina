#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"

// auto generated forward declare list
// clang-format off
class CollisionBoxComponent;
class StrictEntityContext;
struct AABBRelativeSizeUpdateComponent;
struct AABBShapeComponent;
struct AbsoluteSizeUpdateComponent;
struct ActorDataBoundingBoxComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct CustomSizeUpdateComponent;
struct DepenetrationComponent;
struct IsHorizontalPoseFlagComponent;
struct MinecartFlagComponent;
struct NeverChangesSizeFlagComponent;
struct OffsetsComponent;
struct PlayerComponent;
struct ShouldUpdateBoundingBoxRequestComponent;
struct ShulkerFlagComponent;
struct StateVectorComponent;
struct SynchedActorDataComponent;
// clang-format on

namespace UpdateBoundingBox {

struct SystemParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::ViewT<::StrictEntityContext, ::Include<::ShouldUpdateBoundingBoxRequestComponent>>>
        mAnyView;
    ::ll::TypedStorage<
        8,
        56,
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ShouldUpdateBoundingBoxRequestComponent, ::NeverChangesSizeFlagComponent>>>
        mExcludeView;
    ::ll::TypedStorage<
        8,
        72,
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::PlayerComponent>,
            ::ShouldUpdateBoundingBoxRequestComponent,
            ::CollisionBoxComponent const,
            ::Optional<::IsHorizontalPoseFlagComponent const>,
            ::ActorDataFlagComponent const>>
        mPlayerView;
    ::ll::TypedStorage<
        8,
        88,
        ::ViewT<
            ::StrictEntityContext,
            ::ShouldUpdateBoundingBoxRequestComponent const,
            ::StateVectorComponent const,
            ::ActorDataDirtyFlagsComponent,
            ::ActorDataBoundingBoxComponent,
            ::AABBShapeComponent,
            ::DepenetrationComponent,
            ::Optional<::CollisionBoxComponent const>>>
        mAllView;
    ::ll::TypedStorage<
        8,
        72,
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ShouldUpdateBoundingBoxRequestComponent>,
            ::AABBRelativeSizeUpdateComponent const,
            ::AABBShapeComponent const,
            ::OffsetsComponent>>
        mAabbRelativeView;
    ::ll::TypedStorage<
        8,
        64,
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ShouldUpdateBoundingBoxRequestComponent>,
            ::AbsoluteSizeUpdateComponent const,
            ::OffsetsComponent>>
        mAbsoluteView;
    ::ll::TypedStorage<
        8,
        80,
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ShouldUpdateBoundingBoxRequestComponent, ::ShulkerFlagComponent>,
            ::SynchedActorDataComponent const,
            ::AABBShapeComponent const,
            ::OffsetsComponent>>
        mShulkerView;
    ::ll::TypedStorage<
        8,
        80,
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ShouldUpdateBoundingBoxRequestComponent, ::MinecartFlagComponent>,
            ::StateVectorComponent const,
            ::AABBShapeComponent,
            ::OffsetsComponent>>
        mMinecartsView;
    ::ll::TypedStorage<
        8,
        72,
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::ShouldUpdateBoundingBoxRequestComponent>,
            ::CustomSizeUpdateComponent const,
            ::AABBShapeComponent const,
            ::OffsetsComponent>>
                                                                                          mCustomView;
    ::ll::TypedStorage<8, 8, ::EntityModifier<::ShouldUpdateBoundingBoxRequestComponent>> mModifier;
    ::ll::TypedStorage<4, 4, float>                                                       mSneakHeight;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsClientSide;
    // NOLINTEND

public:
    // prevent constructor by default
    SystemParams();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SystemParams(
        ::StrictExecutionContext<
            ::Filter<::PlayerComponent, ::MinecartFlagComponent, ::ShulkerFlagComponent>,
            ::Read<>,
            ::Write<
                ::AABBShapeComponent,
                ::ActorDataBoundingBoxComponent,
                ::ActorDataDirtyFlagsComponent,
                ::DepenetrationComponent,
                ::OffsetsComponent>,
            ::AddRemove<::ShouldUpdateBoundingBoxRequestComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& c,
        float                    sneakHeight,
        bool                     isClientSide
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::StrictExecutionContext<
            ::Filter<::PlayerComponent, ::MinecartFlagComponent, ::ShulkerFlagComponent>,
            ::Read<>,
            ::Write<
                ::AABBShapeComponent,
                ::ActorDataBoundingBoxComponent,
                ::ActorDataDirtyFlagsComponent,
                ::DepenetrationComponent,
                ::OffsetsComponent>,
            ::AddRemove<::ShouldUpdateBoundingBoxRequestComponent>,
            ::GlobalRead<>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& c,
        float                    sneakHeight,
        bool                     isClientSide
    );
    // NOLINTEND
};

} // namespace UpdateBoundingBox
