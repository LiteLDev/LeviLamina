#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GlobalRead.h"
#include "mc/common/GlobalWrite.h"
#include "mc/common/StrictExecutionContext.h"
#include "mc/common/wrapper/AddRemove.h"
#include "mc/deps/core/data/Filter.h"
#include "mc/deps/core/data/Read.h"
#include "mc/deps/core/data/Write.h"
#include "mc/entity/EntityFactoryT.h"
#include "mc/world/components/FlagComponent.h"
#include "mc/world/level/block/components/InsideBlockWithPosAndBlockComponent.h"
#include "mc/world/level/block/components/InsideBlockWithPosComponent.h"

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
    // vIndex: 0, symbol: __gen_??1EntityInside@EntityInsideSystemImpl@@UEAA@XZ
    virtual ~EntityInside() = default;

    // vIndex: 1, symbol: ?registerEvents@ISystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol:
    // ?tick@EntityInside@EntityInsideSystemImpl@@UEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UBoatFlag@@@@V?$FlagComponent@UFreezeImmuneFlag@@@@V?$FlagComponent@UIsDeadFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UInWaterFlag@@@@@@U?$Read@UAABBShapeComponent@@UMovementAbilitiesComponent@@UActorGameTypeComponent@@UDimensionTypeComponent@@@@U?$Write@UBlockMovementSlowdownMultiplierComponent@@UFallDistanceComponent@@UInsideBlockComponent@@UStateVectorComponent@@@@U?$AddRemove@UBlockMovementSlowdownAppliedComponent@@VFreezingComponent@@UIgnoresEntityInsideFlagComponent@@UInsideBubbleColumnBlockComponent@@U?$InsideBlockWithPosAndBlockComponent@UCactusBlockFlag@@@@U?$InsideBlockWithPosAndBlockComponent@UEndPortalBlockFlag@@@@UInsideGenericBlockComponent@@U?$InsideBlockWithPosAndBlockComponent@UHoneyBlockFlag@@@@U?$InsideBlockWithPosAndBlockComponent@UPowderSnowBlockFlag@@@@U?$InsideBlockWithPosAndBlockComponent@USweetBerryBushBlockFlag@@@@U?$InsideBlockWithPosComponent@UWaterlilyBlockFlag@@@@V?$FlagComponent@UWebBlockTag@@@@@@U?$GlobalRead@UExternalDataComponent@@ULocalConstBlockSourceFactoryComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@Z
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
                      struct EntityFactoryT<>>&);

    // vIndex: 6, symbol:
    // ?singleTick@EntityInside@EntityInsideSystemImpl@@UEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UBoatFlag@@@@V?$FlagComponent@UFreezeImmuneFlag@@@@V?$FlagComponent@UIsDeadFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UInWaterFlag@@@@@@U?$Read@UAABBShapeComponent@@UMovementAbilitiesComponent@@UActorGameTypeComponent@@UDimensionTypeComponent@@@@U?$Write@UBlockMovementSlowdownMultiplierComponent@@UFallDistanceComponent@@UInsideBlockComponent@@UStateVectorComponent@@@@U?$AddRemove@UBlockMovementSlowdownAppliedComponent@@VFreezingComponent@@UIgnoresEntityInsideFlagComponent@@UInsideBubbleColumnBlockComponent@@U?$InsideBlockWithPosAndBlockComponent@UCactusBlockFlag@@@@U?$InsideBlockWithPosAndBlockComponent@UEndPortalBlockFlag@@@@UInsideGenericBlockComponent@@U?$InsideBlockWithPosAndBlockComponent@UHoneyBlockFlag@@@@U?$InsideBlockWithPosAndBlockComponent@UPowderSnowBlockFlag@@@@U?$InsideBlockWithPosAndBlockComponent@USweetBerryBushBlockFlag@@@@U?$InsideBlockWithPosComponent@UWaterlilyBlockFlag@@@@V?$FlagComponent@UWebBlockTag@@@@@@U?$GlobalRead@UExternalDataComponent@@ULocalConstBlockSourceFactoryComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@AEAVStrictEntityContext@@@Z
    virtual void singleTick(class StrictExecutionContext<struct Filter<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct BoatFlag>, class FlagComponent<struct FreezeImmuneFlag>, class FlagComponent<struct IsDeadFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct InWaterFlag>>, struct Read<struct AABBShapeComponent, struct MovementAbilitiesComponent, struct ActorGameTypeComponent, struct DimensionTypeComponent>, struct Write<struct BlockMovementSlowdownMultiplierComponent, struct FallDistanceComponent, struct InsideBlockComponent, struct StateVectorComponent>, struct AddRemove<struct BlockMovementSlowdownAppliedComponent, class FreezingComponent, struct IgnoresEntityInsideFlagComponent, struct InsideBubbleColumnBlockComponent, struct InsideBlockWithPosAndBlockComponent<struct CactusBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct EndPortalBlockFlag>, struct InsideGenericBlockComponent, struct InsideBlockWithPosAndBlockComponent<struct HoneyBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct PowderSnowBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct SweetBerryBushBlockFlag>, struct InsideBlockWithPosComponent<struct WaterlilyBlockFlag>, class FlagComponent<struct WebBlockTag>>, struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>>&, class StrictEntityContext&);

    // symbol:
    // ?createContextObjects@EntityInside@EntityInsideSystemImpl@@SA@AEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UBoatFlag@@@@V?$FlagComponent@UFreezeImmuneFlag@@@@V?$FlagComponent@UIsDeadFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UInWaterFlag@@@@@@U?$Read@UAABBShapeComponent@@UMovementAbilitiesComponent@@UActorGameTypeComponent@@UDimensionTypeComponent@@@@U?$Write@UBlockMovementSlowdownMultiplierComponent@@UFallDistanceComponent@@UInsideBlockComponent@@UStateVectorComponent@@@@U?$AddRemove@UBlockMovementSlowdownAppliedComponent@@VFreezingComponent@@UIgnoresEntityInsideFlagComponent@@UInsideBubbleColumnBlockComponent@@U?$InsideBlockWithPosAndBlockComponent@UCactusBlockFlag@@@@U?$InsideBlockWithPosAndBlockComponent@UEndPortalBlockFlag@@@@UInsideGenericBlockComponent@@U?$InsideBlockWithPosAndBlockComponent@UHoneyBlockFlag@@@@U?$InsideBlockWithPosAndBlockComponent@UPowderSnowBlockFlag@@@@U?$InsideBlockWithPosAndBlockComponent@USweetBerryBushBlockFlag@@@@U?$InsideBlockWithPosComponent@UWaterlilyBlockFlag@@@@V?$FlagComponent@UWebBlockTag@@@@@@U?$GlobalRead@UExternalDataComponent@@ULocalConstBlockSourceFactoryComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@Z
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

    // symbol:
    // ?createServerSideContextObjects@EntityInside@EntityInsideSystemImpl@@SA@AEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UActorMovementTickNeededFlag@@@@V?$FlagComponent@UBoatFlag@@@@V?$FlagComponent@UFreezeImmuneFlag@@@@V?$FlagComponent@UIsDeadFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UInWaterFlag@@@@@@U?$Read@UAABBShapeComponent@@UMovementAbilitiesComponent@@UActorGameTypeComponent@@UDimensionTypeComponent@@@@U?$Write@UBlockMovementSlowdownMultiplierComponent@@UFallDistanceComponent@@UInsideBlockComponent@@UStateVectorComponent@@@@U?$AddRemove@UBlockMovementSlowdownAppliedComponent@@VFreezingComponent@@UIgnoresEntityInsideFlagComponent@@UInsideBubbleColumnBlockComponent@@U?$InsideBlockWithPosAndBlockComponent@UCactusBlockFlag@@@@U?$InsideBlockWithPosAndBlockComponent@UEndPortalBlockFlag@@@@UInsideGenericBlockComponent@@U?$InsideBlockWithPosAndBlockComponent@UHoneyBlockFlag@@@@U?$InsideBlockWithPosAndBlockComponent@UPowderSnowBlockFlag@@@@U?$InsideBlockWithPosAndBlockComponent@USweetBerryBushBlockFlag@@@@U?$InsideBlockWithPosComponent@UWaterlilyBlockFlag@@@@V?$FlagComponent@UWebBlockTag@@@@@@U?$GlobalRead@UExternalDataComponent@@ULocalConstBlockSourceFactoryComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@Z
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
};

}; // namespace EntityInsideSystemImpl
