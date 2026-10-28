#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Exclude.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/entity/components/InsideBlockWithPosAndBlockComponent.h"
#include "mc/entity/components/InsideBlockWithPosComponent.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorGameTypeComponent;
struct ActorMovementTickNeededComponent;
struct BlockMovementSlowdownAppliedComponent;
struct BlockMovementSlowdownImmunityComponent;
struct BlockMovementSlowdownMultiplierComponent;
struct BoatFlagComponent;
struct CactusBlockFlag;
struct DepenetrationComponent;
struct DimensionTypeComponent;
struct EndPortalBlockFlag;
struct ExternalDataComponent;
struct FallDistanceComponent;
struct FreezingComponent;
struct FreezingImmuneComponent;
struct FreezingImmuneFromEquipmentComponent;
struct HoneyBlockFlag;
struct IgnoresEntityInsideFlagComponent;
struct InsideBlockComponent;
struct InsideBubbleColumnBlockComponent;
struct InsideGenericBlockComponent;
struct InsideOnewayBlockComponent;
struct InterpolateMovementNeededComponent;
struct IsDeadFlagComponent;
struct LocalConstBlockSourceFactoryComponent;
struct MobFlagComponent;
struct MovementAbilitiesComponent;
struct PlayerComponent;
struct PowderSnowBlockFlag;
struct StateVectorComponent;
struct SweetBerryBushBlockFlag;
struct WasInWaterFlagComponent;
struct WaterlilyBlockFlag;
struct WebBlockFlag;
// clang-format on

namespace EntityInsideSystemImpl {

struct EntityInsideViews {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::OptionalGlobal<::LocalConstBlockSourceFactoryComponent const>> mBlockSourceFactory;
    ::ll::TypedStorage<8, 8, ::OptionalGlobal<::ExternalDataComponent const>>                 mExternalData;
    ::ll::TypedStorage<
        8,
        104,
        ::EntityModifier<
            ::BlockMovementSlowdownAppliedComponent,
            ::FreezingComponent,
            ::IgnoresEntityInsideFlagComponent,
            ::InsideBubbleColumnBlockComponent,
            ::InsideBlockWithPosAndBlockComponent<::CactusBlockFlag>,
            ::InsideBlockWithPosAndBlockComponent<::EndPortalBlockFlag>,
            ::InsideGenericBlockComponent,
            ::InsideBlockWithPosAndBlockComponent<::HoneyBlockFlag>,
            ::InsideOnewayBlockComponent,
            ::InsideBlockWithPosAndBlockComponent<::PowderSnowBlockFlag>,
            ::InsideBlockWithPosAndBlockComponent<::SweetBerryBushBlockFlag>,
            ::InsideBlockWithPosComponent<::WaterlilyBlockFlag>,
            ::InsideBlockWithPosAndBlockComponent<::WebBlockFlag>>>
        mModifiers;
    ::ll::TypedStorage<
        8,
        56,
        ::ViewT<::StrictEntityContext, ::Include<::InterpolateMovementNeededComponent>, ::ActorGameTypeComponent const>>
        mSpectatorView;
    ::ll::TypedStorage<
        8,
        72,
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::InterpolateMovementNeededComponent>,
            ::Exclude<::IgnoresEntityInsideFlagComponent>,
            ::AABBShapeComponent const,
            ::DimensionTypeComponent const,
            ::InsideBlockComponent,
            ::Optional<::ActorMovementTickNeededComponent const>>>
        mSetInsideView;
    ::ll::TypedStorage<
        8,
        64,
        ::ViewT<
            ::StrictEntityContext,
            ::Exclude<::BoatFlagComponent>,
            ::InsideBubbleColumnBlockComponent const,
            ::FallDistanceComponent,
            ::StateVectorComponent,
            ::Optional<::MovementAbilitiesComponent const>>>
        mBubbleColumnView;
    ::ll::TypedStorage<
        8,
        80,
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::BoatFlagComponent>,
            ::InsideBubbleColumnBlockComponent const,
            ::FallDistanceComponent,
            ::StateVectorComponent,
            ::ActorOwnerComponent>>
        mBoatBubbleColumnView;
    ::ll::TypedStorage<
        8,
        72,
        ::ViewT<
            ::StrictEntityContext,
            ::Exclude<::WasInWaterFlagComponent>,
            ::InsideBlockWithPosAndBlockComponent<::HoneyBlockFlag> const,
            ::AABBShapeComponent const,
            ::StateVectorComponent,
            ::FallDistanceComponent>>
        mHoneyView;
    ::ll::TypedStorage<
        8,
        56,
        ::ViewT<
            ::StrictEntityContext,
            ::InsideBlockWithPosAndBlockComponent<::PowderSnowBlockFlag> const,
            ::BlockMovementSlowdownMultiplierComponent,
            ::Optional<::BlockMovementSlowdownImmunityComponent const>>>
        mSnowSlowdownView;
    ::ll::TypedStorage<
        8,
        56,
        ::ViewT<
            ::StrictEntityContext,
            ::InsideBlockWithPosAndBlockComponent<::WebBlockFlag> const,
            ::BlockMovementSlowdownMultiplierComponent,
            ::Optional<::BlockMovementSlowdownImmunityComponent const>>>
        mWebSlowdownView;
    ::ll::TypedStorage<
        8,
        64,
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::BoatFlagComponent>,
            ::InsideBlockWithPosComponent<::WaterlilyBlockFlag> const,
            ::StateVectorComponent>>
        mWaterLilyView;
    ::ll::TypedStorage<
        8,
        56,
        ::ViewT<
            ::StrictEntityContext,
            ::InsideBlockWithPosAndBlockComponent<::CactusBlockFlag> const,
            ::InsideBlockComponent>>
        mCactusView;
    ::ll::TypedStorage<
        8,
        56,
        ::ViewT<::StrictEntityContext, ::InsideOnewayBlockComponent const, ::DepenetrationComponent>>
        mOnewayView;
    ::ll::TypedStorage<
        8,
        80,
        ::ViewT<
            ::StrictEntityContext,
            ::Include<::InsideBlockWithPosAndBlockComponent<::PowderSnowBlockFlag>, ::MobFlagComponent>,
            ::Exclude<
                ::FreezingComponent,
                ::FreezingImmuneFromEquipmentComponent,
                ::FreezingImmuneComponent,
                ::IsDeadFlagComponent>>>
        mPowderSnowView;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityInsideViews();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit EntityInsideViews(
        ::StrictExecutionContext<
            ::Filter<
                ::InterpolateMovementNeededComponent,
                ::BoatFlagComponent,
                ::FreezingImmuneFromEquipmentComponent,
                ::IsDeadFlagComponent,
                ::PlayerComponent,
                ::WasInWaterFlagComponent>,
            ::Read<
                ::AABBShapeComponent,
                ::ActorMovementTickNeededComponent,
                ::ActorGameTypeComponent,
                ::BlockMovementSlowdownImmunityComponent,
                ::DimensionTypeComponent,
                ::MovementAbilitiesComponent>,
            ::Write<
                ::BlockMovementSlowdownMultiplierComponent,
                ::FallDistanceComponent,
                ::InsideBlockComponent,
                ::StateVectorComponent>,
            ::AddRemove<
                ::BlockMovementSlowdownAppliedComponent,
                ::FreezingComponent,
                ::IgnoresEntityInsideFlagComponent,
                ::InsideBubbleColumnBlockComponent,
                ::InsideBlockWithPosAndBlockComponent<::CactusBlockFlag>,
                ::InsideBlockWithPosAndBlockComponent<::EndPortalBlockFlag>,
                ::InsideGenericBlockComponent,
                ::InsideBlockWithPosAndBlockComponent<::HoneyBlockFlag>,
                ::InsideBlockWithPosAndBlockComponent<::PowderSnowBlockFlag>,
                ::InsideBlockWithPosAndBlockComponent<::SweetBerryBushBlockFlag>,
                ::InsideBlockWithPosComponent<::WaterlilyBlockFlag>,
                ::InsideBlockWithPosAndBlockComponent<::WebBlockFlag>>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::StrictExecutionContext<
            ::Filter<
                ::InterpolateMovementNeededComponent,
                ::BoatFlagComponent,
                ::FreezingImmuneFromEquipmentComponent,
                ::IsDeadFlagComponent,
                ::PlayerComponent,
                ::WasInWaterFlagComponent>,
            ::Read<
                ::AABBShapeComponent,
                ::ActorMovementTickNeededComponent,
                ::ActorGameTypeComponent,
                ::BlockMovementSlowdownImmunityComponent,
                ::DimensionTypeComponent,
                ::MovementAbilitiesComponent>,
            ::Write<
                ::BlockMovementSlowdownMultiplierComponent,
                ::FallDistanceComponent,
                ::InsideBlockComponent,
                ::StateVectorComponent>,
            ::AddRemove<
                ::BlockMovementSlowdownAppliedComponent,
                ::FreezingComponent,
                ::IgnoresEntityInsideFlagComponent,
                ::InsideBubbleColumnBlockComponent,
                ::InsideBlockWithPosAndBlockComponent<::CactusBlockFlag>,
                ::InsideBlockWithPosAndBlockComponent<::EndPortalBlockFlag>,
                ::InsideGenericBlockComponent,
                ::InsideBlockWithPosAndBlockComponent<::HoneyBlockFlag>,
                ::InsideBlockWithPosAndBlockComponent<::PowderSnowBlockFlag>,
                ::InsideBlockWithPosAndBlockComponent<::SweetBerryBushBlockFlag>,
                ::InsideBlockWithPosComponent<::WaterlilyBlockFlag>,
                ::InsideBlockWithPosAndBlockComponent<::WebBlockFlag>>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& context
    );
    // NOLINTEND
};

} // namespace EntityInsideSystemImpl
