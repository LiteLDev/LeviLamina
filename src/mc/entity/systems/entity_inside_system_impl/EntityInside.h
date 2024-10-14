#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/entity/components/FlagComponent.h"
#include "mc/entity/components/InsideBlockWithPosAndBlockComponent.h"
#include "mc/entity/components/InsideBlockWithPosComponent.h"

// auto generated forward declare list
// clang-format off
class FreezingComponent;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorGameTypeComponent;
struct ActorMovementTickNeededFlag;
struct BlockMovementSlowdownAppliedComponent;
struct BlockMovementSlowdownMultiplierComponent;
struct BoatFlag;
struct CactusBlockFlag;
struct DimensionTypeComponent;
struct EndPortalBlockFlag;
struct ExternalDataComponent;
struct FallDistanceComponent;
struct FreezeImmuneFlag;
struct HoneyBlockFlag;
struct IgnoresEntityInsideFlagComponent;
struct InWaterFlag;
struct InsideBlockComponent;
struct InsideBubbleColumnBlockComponent;
struct InsideGenericBlockComponent;
struct IsDeadFlag;
struct LocalConstBlockSourceFactoryComponent;
struct MovementAbilitiesComponent;
struct PlayerComponentFlag;
struct PowderSnowBlockFlag;
struct StateVectorComponent;
struct SweetBerryBushBlockFlag;
struct WaterlilyBlockFlag;
struct WebBlockTag;
// clang-format on

namespace EntityInsideSystemImpl {

struct EntityInside {
public:
    // prevent constructor by default
    EntityInside& operator=(EntityInside const&);
    EntityInside(EntityInside const&);
    EntityInside();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EntityInside() = default;

    // vIndex: 1
    virtual void registerEvents(entt::dispatcher& dispatcher);

    // vIndex: 2
    virtual void __unk_vfn_2();

    // vIndex: 3
    virtual void __unk_vfn_3();

    // vIndex: 4
    virtual void __unk_vfn_4();

    // vIndex: 5
    virtual void tick(class StrictExecutionContext<
                      struct Filter<
                          class FlagComponent<struct ActorMovementTickNeededFlag>,
                          class FlagComponent<struct BoatFlag>,
                          class FlagComponent<struct FreezeImmuneFlag>,
                          class FlagComponent<struct IsDeadFlag>,
                          class FlagComponent<struct PlayerComponentFlag>,
                          class FlagComponent<struct InWaterFlag>>,
                      struct Read<
                          struct AABBShapeComponent,
                          struct MovementAbilitiesComponent,
                          struct ActorGameTypeComponent,
                          struct DimensionTypeComponent>,
                      struct Write<
                          struct BlockMovementSlowdownMultiplierComponent,
                          struct FallDistanceComponent,
                          struct InsideBlockComponent,
                          struct StateVectorComponent>,
                      struct AddRemove<
                          struct BlockMovementSlowdownAppliedComponent,
                          class FreezingComponent,
                          struct IgnoresEntityInsideFlagComponent,
                          struct InsideBubbleColumnBlockComponent,
                          struct InsideBlockWithPosAndBlockComponent<struct CactusBlockFlag>,
                          struct InsideBlockWithPosAndBlockComponent<struct EndPortalBlockFlag>,
                          struct InsideGenericBlockComponent,
                          struct InsideBlockWithPosAndBlockComponent<struct HoneyBlockFlag>,
                          struct InsideBlockWithPosAndBlockComponent<struct PowderSnowBlockFlag>,
                          struct InsideBlockWithPosAndBlockComponent<struct SweetBerryBushBlockFlag>,
                          struct InsideBlockWithPosComponent<struct WaterlilyBlockFlag>,
                          class FlagComponent<struct WebBlockTag>>,
                      struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>& executionContext);

    // vIndex: 6
    virtual void singleTick(
        class StrictExecutionContext<
            struct Filter<
                class FlagComponent<struct ActorMovementTickNeededFlag>,
                class FlagComponent<struct BoatFlag>,
                class FlagComponent<struct FreezeImmuneFlag>,
                class FlagComponent<struct IsDeadFlag>,
                class FlagComponent<struct PlayerComponentFlag>,
                class FlagComponent<struct InWaterFlag>>,
            struct Read<
                struct AABBShapeComponent,
                struct MovementAbilitiesComponent,
                struct ActorGameTypeComponent,
                struct DimensionTypeComponent>,
            struct Write<
                struct BlockMovementSlowdownMultiplierComponent,
                struct FallDistanceComponent,
                struct InsideBlockComponent,
                struct StateVectorComponent>,
            struct AddRemove<
                struct BlockMovementSlowdownAppliedComponent,
                class FreezingComponent,
                struct IgnoresEntityInsideFlagComponent,
                struct InsideBubbleColumnBlockComponent,
                struct InsideBlockWithPosAndBlockComponent<struct CactusBlockFlag>,
                struct InsideBlockWithPosAndBlockComponent<struct EndPortalBlockFlag>,
                struct InsideGenericBlockComponent,
                struct InsideBlockWithPosAndBlockComponent<struct HoneyBlockFlag>,
                struct InsideBlockWithPosAndBlockComponent<struct PowderSnowBlockFlag>,
                struct InsideBlockWithPosAndBlockComponent<struct SweetBerryBushBlockFlag>,
                struct InsideBlockWithPosComponent<struct WaterlilyBlockFlag>,
                class FlagComponent<struct WebBlockTag>>,
            struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
            struct GlobalWrite<>,
            struct EntityFactoryT<>>& executionContext,
        class StrictEntityContext&    entityContext
    );

    MCAPI static auto
    createContextObjects(class StrictExecutionContext<
                         struct Filter<
                             class FlagComponent<struct ActorMovementTickNeededFlag>,
                             class FlagComponent<struct BoatFlag>,
                             class FlagComponent<struct FreezeImmuneFlag>,
                             class FlagComponent<struct IsDeadFlag>,
                             class FlagComponent<struct PlayerComponentFlag>,
                             class FlagComponent<struct InWaterFlag>>,
                         struct Read<
                             struct AABBShapeComponent,
                             struct MovementAbilitiesComponent,
                             struct ActorGameTypeComponent,
                             struct DimensionTypeComponent>,
                         struct Write<
                             struct BlockMovementSlowdownMultiplierComponent,
                             struct FallDistanceComponent,
                             struct InsideBlockComponent,
                             struct StateVectorComponent>,
                         struct AddRemove<
                             struct BlockMovementSlowdownAppliedComponent,
                             class FreezingComponent,
                             struct IgnoresEntityInsideFlagComponent,
                             struct InsideBubbleColumnBlockComponent,
                             struct InsideBlockWithPosAndBlockComponent<struct CactusBlockFlag>,
                             struct InsideBlockWithPosAndBlockComponent<struct EndPortalBlockFlag>,
                             struct InsideGenericBlockComponent,
                             struct InsideBlockWithPosAndBlockComponent<struct HoneyBlockFlag>,
                             struct InsideBlockWithPosAndBlockComponent<struct PowderSnowBlockFlag>,
                             struct InsideBlockWithPosAndBlockComponent<struct SweetBerryBushBlockFlag>,
                             struct InsideBlockWithPosComponent<struct WaterlilyBlockFlag>,
                             class FlagComponent<struct WebBlockTag>>,
                         struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
                         struct GlobalWrite<>,
                         struct EntityFactoryT<>>&);

    MCAPI static auto
    createServerSideContextObjects(class StrictExecutionContext<
                                   struct Filter<
                                       class FlagComponent<struct ActorMovementTickNeededFlag>,
                                       class FlagComponent<struct BoatFlag>,
                                       class FlagComponent<struct FreezeImmuneFlag>,
                                       class FlagComponent<struct IsDeadFlag>,
                                       class FlagComponent<struct PlayerComponentFlag>,
                                       class FlagComponent<struct InWaterFlag>>,
                                   struct Read<
                                       struct AABBShapeComponent,
                                       struct MovementAbilitiesComponent,
                                       struct ActorGameTypeComponent,
                                       struct DimensionTypeComponent>,
                                   struct Write<
                                       struct BlockMovementSlowdownMultiplierComponent,
                                       struct FallDistanceComponent,
                                       struct InsideBlockComponent,
                                       struct StateVectorComponent>,
                                   struct AddRemove<
                                       struct BlockMovementSlowdownAppliedComponent,
                                       class FreezingComponent,
                                       struct IgnoresEntityInsideFlagComponent,
                                       struct InsideBubbleColumnBlockComponent,
                                       struct InsideBlockWithPosAndBlockComponent<struct CactusBlockFlag>,
                                       struct InsideBlockWithPosAndBlockComponent<struct EndPortalBlockFlag>,
                                       struct InsideGenericBlockComponent,
                                       struct InsideBlockWithPosAndBlockComponent<struct HoneyBlockFlag>,
                                       struct InsideBlockWithPosAndBlockComponent<struct PowderSnowBlockFlag>,
                                       struct InsideBlockWithPosAndBlockComponent<struct SweetBerryBushBlockFlag>,
                                       struct InsideBlockWithPosComponent<struct WaterlilyBlockFlag>,
                                       class FlagComponent<struct WebBlockTag>>,
                                   struct GlobalRead<
                                       struct ExternalDataComponent,
                                       struct LocalConstBlockSourceFactoryComponent>,
                                   struct GlobalWrite<>,
                                   struct EntityFactoryT<>>&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void registerEvents$(entt::dispatcher& dispatcher);

    MCAPI void singleTick$(
        class StrictExecutionContext<
            struct Filter<
                class FlagComponent<struct ActorMovementTickNeededFlag>,
                class FlagComponent<struct BoatFlag>,
                class FlagComponent<struct FreezeImmuneFlag>,
                class FlagComponent<struct IsDeadFlag>,
                class FlagComponent<struct PlayerComponentFlag>,
                class FlagComponent<struct InWaterFlag>>,
            struct Read<
                struct AABBShapeComponent,
                struct MovementAbilitiesComponent,
                struct ActorGameTypeComponent,
                struct DimensionTypeComponent>,
            struct Write<
                struct BlockMovementSlowdownMultiplierComponent,
                struct FallDistanceComponent,
                struct InsideBlockComponent,
                struct StateVectorComponent>,
            struct AddRemove<
                struct BlockMovementSlowdownAppliedComponent,
                class FreezingComponent,
                struct IgnoresEntityInsideFlagComponent,
                struct InsideBubbleColumnBlockComponent,
                struct InsideBlockWithPosAndBlockComponent<struct CactusBlockFlag>,
                struct InsideBlockWithPosAndBlockComponent<struct EndPortalBlockFlag>,
                struct InsideGenericBlockComponent,
                struct InsideBlockWithPosAndBlockComponent<struct HoneyBlockFlag>,
                struct InsideBlockWithPosAndBlockComponent<struct PowderSnowBlockFlag>,
                struct InsideBlockWithPosAndBlockComponent<struct SweetBerryBushBlockFlag>,
                struct InsideBlockWithPosComponent<struct WaterlilyBlockFlag>,
                class FlagComponent<struct WebBlockTag>>,
            struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
            struct GlobalWrite<>,
            struct EntityFactoryT<>>& executionContext,
        class StrictEntityContext&    entityContext
    );

    MCAPI void tick$(class StrictExecutionContext<
                     struct Filter<
                         class FlagComponent<struct ActorMovementTickNeededFlag>,
                         class FlagComponent<struct BoatFlag>,
                         class FlagComponent<struct FreezeImmuneFlag>,
                         class FlagComponent<struct IsDeadFlag>,
                         class FlagComponent<struct PlayerComponentFlag>,
                         class FlagComponent<struct InWaterFlag>>,
                     struct Read<
                         struct AABBShapeComponent,
                         struct MovementAbilitiesComponent,
                         struct ActorGameTypeComponent,
                         struct DimensionTypeComponent>,
                     struct Write<
                         struct BlockMovementSlowdownMultiplierComponent,
                         struct FallDistanceComponent,
                         struct InsideBlockComponent,
                         struct StateVectorComponent>,
                     struct AddRemove<
                         struct BlockMovementSlowdownAppliedComponent,
                         class FreezingComponent,
                         struct IgnoresEntityInsideFlagComponent,
                         struct InsideBubbleColumnBlockComponent,
                         struct InsideBlockWithPosAndBlockComponent<struct CactusBlockFlag>,
                         struct InsideBlockWithPosAndBlockComponent<struct EndPortalBlockFlag>,
                         struct InsideGenericBlockComponent,
                         struct InsideBlockWithPosAndBlockComponent<struct HoneyBlockFlag>,
                         struct InsideBlockWithPosAndBlockComponent<struct PowderSnowBlockFlag>,
                         struct InsideBlockWithPosAndBlockComponent<struct SweetBerryBushBlockFlag>,
                         struct InsideBlockWithPosComponent<struct WaterlilyBlockFlag>,
                         class FlagComponent<struct WebBlockTag>>,
                     struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>,
                     struct GlobalWrite<>,
                     struct EntityFactoryT<>>& executionContext);

    // NOLINTEND
};

}; // namespace EntityInsideSystemImpl
