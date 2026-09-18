#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/IStrictTickingSystem.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/entity/components/InsideBlockWithPosAndBlockComponent.h"
#include "mc/entity/components/InsideBlockWithPosComponent.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorGameTypeComponent;
struct ActorMovementTickNeededComponent;
struct BlockMovementSlowdownAppliedComponent;
struct BlockMovementSlowdownImmunityComponent;
struct BlockMovementSlowdownMultiplierComponent;
struct BoatFlagComponent;
struct CactusBlockFlag;
struct DimensionTypeComponent;
struct EndPortalBlockFlag;
struct ExternalDataComponent;
struct FallDistanceComponent;
struct FreezingComponent;
struct FreezingImmuneFromEquipmentComponent;
struct HoneyBlockFlag;
struct IgnoresEntityInsideFlagComponent;
struct InsideBlockComponent;
struct InsideBubbleColumnBlockComponent;
struct InsideGenericBlockComponent;
struct InterpolateMovementNeededComponent;
struct IsDeadFlagComponent;
struct LocalConstBlockSourceFactoryComponent;
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

struct EntityInside : public ::IStrictTickingSystem<::StrictExecutionContext<
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
                          ::EntityFactoryT<>>> {
public:
    // EntityInside inner types define
    using Base = ::IStrictTickingSystem<::StrictExecutionContext<
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
        ::EntityFactoryT<>>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const> mIsClientSide;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(
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
            ::EntityFactoryT<>>& executionContext
    ) /*override*/;

    virtual void singleTick(
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
            ::EntityFactoryT<>>& executionContext,
        ::StrictEntityContext&   entityContext
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(
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
            ::EntityFactoryT<>>& executionContext
    );

    MCAPI void $singleTick(
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
            ::EntityFactoryT<>>& executionContext,
        ::StrictEntityContext&   entityContext
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace EntityInsideSystemImpl
