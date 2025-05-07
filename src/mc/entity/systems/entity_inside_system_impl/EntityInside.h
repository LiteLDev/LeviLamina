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
class FreezingComponent;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorGameTypeComponent;
struct ActorMovementTickNeededComponent;
struct BlockMovementSlowdownAppliedComponent;
struct BlockMovementSlowdownMultiplierComponent;
struct BoatFlagComponent;
struct CactusBlockFlag;
struct DimensionTypeComponent;
struct EndPortalBlockFlag;
struct ExternalDataComponent;
struct FallDistanceComponent;
struct FreezeImmuneFlagComponent;
struct HoneyBlockFlag;
struct IgnoresEntityInsideFlagComponent;
struct InsideBlockComponent;
struct InsideBubbleColumnBlockComponent;
struct InsideGenericBlockComponent;
struct InsideWebBlockComponent;
struct IsDeadFlagComponent;
struct LocalConstBlockSourceFactoryComponent;
struct MovementAbilitiesComponent;
struct PlayerComponent;
struct PowderSnowBlockFlag;
struct StateVectorComponent;
struct SweetBerryBushBlockFlag;
struct WasInWaterFlagComponent;
struct WaterlilyBlockFlag;
// clang-format on

namespace EntityInsideSystemImpl {

struct EntityInside
: public ::IStrictTickingSystem<::StrictExecutionContext<
      ::Filter<
          ::ActorMovementTickNeededComponent,
          ::BoatFlagComponent,
          ::FreezeImmuneFlagComponent,
          ::IsDeadFlagComponent,
          ::PlayerComponent,
          ::WasInWaterFlagComponent>,
      ::Read<::AABBShapeComponent, ::MovementAbilitiesComponent, ::ActorGameTypeComponent, ::DimensionTypeComponent>,
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
          ::InsideWebBlockComponent>,
      ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
      ::GlobalWrite<>,
      ::EntityFactoryT<>>> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkead05d;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityInside& operator=(EntityInside const&);
    EntityInside(EntityInside const&);
    EntityInside();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual void
    tick(::StrictExecutionContext<
         ::Filter<
             ::ActorMovementTickNeededComponent,
             ::BoatFlagComponent,
             ::FreezeImmuneFlagComponent,
             ::IsDeadFlagComponent,
             ::PlayerComponent,
             ::WasInWaterFlagComponent>,
         ::Read<::AABBShapeComponent, ::MovementAbilitiesComponent, ::ActorGameTypeComponent, ::DimensionTypeComponent>,
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
             ::InsideWebBlockComponent>,
         ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
         ::GlobalWrite<>,
         ::EntityFactoryT<>>& executionContext) /*override*/;

    // vIndex: 6
    virtual void singleTick(
        ::StrictExecutionContext<
            ::Filter<
                ::ActorMovementTickNeededComponent,
                ::BoatFlagComponent,
                ::FreezeImmuneFlagComponent,
                ::IsDeadFlagComponent,
                ::PlayerComponent,
                ::WasInWaterFlagComponent>,
            ::Read<
                ::AABBShapeComponent,
                ::MovementAbilitiesComponent,
                ::ActorGameTypeComponent,
                ::DimensionTypeComponent>,
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
                ::InsideWebBlockComponent>,
            ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
            ::GlobalWrite<>,
            ::EntityFactoryT<>>& executionContext,
        ::StrictEntityContext&   entityContext
    ) /*override*/;

    // vIndex: 0
    virtual ~EntityInside() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static auto
    createContextObjects(::StrictExecutionContext<
                         ::Filter<
                             ::ActorMovementTickNeededComponent,
                             ::BoatFlagComponent,
                             ::FreezeImmuneFlagComponent,
                             ::IsDeadFlagComponent,
                             ::PlayerComponent,
                             ::WasInWaterFlagComponent>,
                         ::Read<
                             ::AABBShapeComponent,
                             ::MovementAbilitiesComponent,
                             ::ActorGameTypeComponent,
                             ::DimensionTypeComponent>,
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
                             ::InsideWebBlockComponent>,
                         ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
                         ::GlobalWrite<>,
                         ::EntityFactoryT<>>& executionContext);

    MCNAPI static auto
    createServerSideContextObjects(::StrictExecutionContext<
                                   ::Filter<
                                       ::ActorMovementTickNeededComponent,
                                       ::BoatFlagComponent,
                                       ::FreezeImmuneFlagComponent,
                                       ::IsDeadFlagComponent,
                                       ::PlayerComponent,
                                       ::WasInWaterFlagComponent>,
                                   ::Read<
                                       ::AABBShapeComponent,
                                       ::MovementAbilitiesComponent,
                                       ::ActorGameTypeComponent,
                                       ::DimensionTypeComponent>,
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
                                       ::InsideWebBlockComponent>,
                                   ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
                                   ::GlobalWrite<>,
                                   ::EntityFactoryT<>>& executionContext);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::StrictExecutionContext<
                      ::Filter<
                          ::ActorMovementTickNeededComponent,
                          ::BoatFlagComponent,
                          ::FreezeImmuneFlagComponent,
                          ::IsDeadFlagComponent,
                          ::PlayerComponent,
                          ::WasInWaterFlagComponent>,
                      ::Read<
                          ::AABBShapeComponent,
                          ::MovementAbilitiesComponent,
                          ::ActorGameTypeComponent,
                          ::DimensionTypeComponent>,
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
                          ::InsideWebBlockComponent>,
                      ::GlobalRead<::ExternalDataComponent, ::LocalConstBlockSourceFactoryComponent>,
                      ::GlobalWrite<>,
                      ::EntityFactoryT<>>& executionContext);

    MCNAPI void $singleTick(
        ::StrictExecutionContext<
            ::Filter<
                ::ActorMovementTickNeededComponent,
                ::BoatFlagComponent,
                ::FreezeImmuneFlagComponent,
                ::IsDeadFlagComponent,
                ::PlayerComponent,
                ::WasInWaterFlagComponent>,
            ::Read<
                ::AABBShapeComponent,
                ::MovementAbilitiesComponent,
                ::ActorGameTypeComponent,
                ::DimensionTypeComponent>,
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
                ::InsideWebBlockComponent>,
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
