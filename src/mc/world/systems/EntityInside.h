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
#include "mc/world/components/InsideBlockWithPosAndBlockComponent.h"
#include "mc/world/components/InsideBlockWithPosComponent.h"

namespace EntityInsideSystemImpl {

struct EntityInside {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYINSIDESYSTEMIMPL_ENTITYINSIDE
public:
    EntityInside& operator=(EntityInside const&) = delete;
    EntityInside(EntityInside const&)            = delete;
    EntityInside()                               = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol
     * ?tick\@EntityInside\@EntityInsideSystemImpl\@\@UEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UBoatFlag\@\@\@\@V?$FlagComponent\@UFreezeImmuneFlag\@\@\@\@V?$FlagComponent\@UIsDeadFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@USkipEntityInsideFlag\@\@\@\@V?$FlagComponent\@UInWaterFlag\@\@\@\@\@\@U?$Read\@UAABBShapeComponent\@\@UAbilitiesComponent\@\@UActorGameTypeComponent\@\@UDimensionTypeComponent\@\@\@\@U?$Write\@UBlockMovementSlowdownMultiplierComponent\@\@UFallDistanceComponent\@\@UInsideBlockComponent\@\@UStateVectorComponent\@\@\@\@U?$AddRemove\@UBlockMovementSlowdownAppliedComponent\@\@VFreezingComponent\@\@UIgnoresEntityInsideFlagComponent\@\@UInsideBubbleColumnBlockComponent\@\@U?$InsideBlockWithPosAndBlockComponent\@UCactusBlockFlag\@\@\@\@U?$InsideBlockWithPosAndBlockComponent\@UEndPortalBlockFlag\@\@\@\@UInsideGenericBlockComponent\@\@U?$InsideBlockWithPosAndBlockComponent\@UHoneyBlockFlag\@\@\@\@U?$InsideBlockWithPosAndBlockComponent\@UPowderSnowBlockFlag\@\@\@\@U?$InsideBlockWithPosAndBlockComponent\@USweetBerryBushBlockFlag\@\@\@\@U?$InsideBlockWithPosComponent\@UWaterlilyBlockFlag\@\@\@\@V?$FlagComponent\@UWebBlockTag\@\@\@\@\@\@U?$GlobalRead\@UExternalDataComponent\@\@ULocalConstBlockSourceFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
     */
    virtual void tick(class StrictExecutionContext<
                      struct Filter<
                          class FlagComponent<struct ActorMovementTickNeededFlag>,
                          class FlagComponent<struct BoatFlag>,
                          class FlagComponent<struct FreezeImmuneFlag>,
                          class FlagComponent<struct IsDeadFlag>,
                          class FlagComponent<struct PlayerComponentFlag>,
                          class FlagComponent<struct SkipEntityInsideFlag>,
                          class FlagComponent<struct InWaterFlag>>,
                      struct Read<
                          struct AABBShapeComponent,
                          struct AbilitiesComponent,
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
    /**
     * @vftbl 5
     * @symbol
     * ?singleTick\@EntityInside\@EntityInsideSystemImpl\@\@UEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UBoatFlag\@\@\@\@V?$FlagComponent\@UFreezeImmuneFlag\@\@\@\@V?$FlagComponent\@UIsDeadFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@USkipEntityInsideFlag\@\@\@\@V?$FlagComponent\@UInWaterFlag\@\@\@\@\@\@U?$Read\@UAABBShapeComponent\@\@UAbilitiesComponent\@\@UActorGameTypeComponent\@\@UDimensionTypeComponent\@\@\@\@U?$Write\@UBlockMovementSlowdownMultiplierComponent\@\@UFallDistanceComponent\@\@UInsideBlockComponent\@\@UStateVectorComponent\@\@\@\@U?$AddRemove\@UBlockMovementSlowdownAppliedComponent\@\@VFreezingComponent\@\@UIgnoresEntityInsideFlagComponent\@\@UInsideBubbleColumnBlockComponent\@\@U?$InsideBlockWithPosAndBlockComponent\@UCactusBlockFlag\@\@\@\@U?$InsideBlockWithPosAndBlockComponent\@UEndPortalBlockFlag\@\@\@\@UInsideGenericBlockComponent\@\@U?$InsideBlockWithPosAndBlockComponent\@UHoneyBlockFlag\@\@\@\@U?$InsideBlockWithPosAndBlockComponent\@UPowderSnowBlockFlag\@\@\@\@U?$InsideBlockWithPosAndBlockComponent\@USweetBerryBushBlockFlag\@\@\@\@U?$InsideBlockWithPosComponent\@UWaterlilyBlockFlag\@\@\@\@V?$FlagComponent\@UWebBlockTag\@\@\@\@\@\@U?$GlobalRead\@UExternalDataComponent\@\@ULocalConstBlockSourceFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@AEAVStrictEntityContext\@\@\@Z
     */
    virtual void singleTick(class StrictExecutionContext<struct Filter<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct BoatFlag>, class FlagComponent<struct FreezeImmuneFlag>, class FlagComponent<struct IsDeadFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct SkipEntityInsideFlag>, class FlagComponent<struct InWaterFlag>>, struct Read<struct AABBShapeComponent, struct AbilitiesComponent, struct ActorGameTypeComponent, struct DimensionTypeComponent>, struct Write<struct BlockMovementSlowdownMultiplierComponent, struct FallDistanceComponent, struct InsideBlockComponent, struct StateVectorComponent>, struct AddRemove<struct BlockMovementSlowdownAppliedComponent, class FreezingComponent, struct IgnoresEntityInsideFlagComponent, struct InsideBubbleColumnBlockComponent, struct InsideBlockWithPosAndBlockComponent<struct CactusBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct EndPortalBlockFlag>, struct InsideGenericBlockComponent, struct InsideBlockWithPosAndBlockComponent<struct HoneyBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct PowderSnowBlockFlag>, struct InsideBlockWithPosAndBlockComponent<struct SweetBerryBushBlockFlag>, struct InsideBlockWithPosComponent<struct WaterlilyBlockFlag>, class FlagComponent<struct WebBlockTag>>, struct GlobalRead<struct ExternalDataComponent, struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>>&, class StrictEntityContext&);
    /**
     * @symbol
     * ?createContextObjects\@EntityInside\@EntityInsideSystemImpl\@\@SA\@AEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UBoatFlag\@\@\@\@V?$FlagComponent\@UFreezeImmuneFlag\@\@\@\@V?$FlagComponent\@UIsDeadFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@USkipEntityInsideFlag\@\@\@\@V?$FlagComponent\@UInWaterFlag\@\@\@\@\@\@U?$Read\@UAABBShapeComponent\@\@UAbilitiesComponent\@\@UActorGameTypeComponent\@\@UDimensionTypeComponent\@\@\@\@U?$Write\@UBlockMovementSlowdownMultiplierComponent\@\@UFallDistanceComponent\@\@UInsideBlockComponent\@\@UStateVectorComponent\@\@\@\@U?$AddRemove\@UBlockMovementSlowdownAppliedComponent\@\@VFreezingComponent\@\@UIgnoresEntityInsideFlagComponent\@\@UInsideBubbleColumnBlockComponent\@\@U?$InsideBlockWithPosAndBlockComponent\@UCactusBlockFlag\@\@\@\@U?$InsideBlockWithPosAndBlockComponent\@UEndPortalBlockFlag\@\@\@\@UInsideGenericBlockComponent\@\@U?$InsideBlockWithPosAndBlockComponent\@UHoneyBlockFlag\@\@\@\@U?$InsideBlockWithPosAndBlockComponent\@UPowderSnowBlockFlag\@\@\@\@U?$InsideBlockWithPosAndBlockComponent\@USweetBerryBushBlockFlag\@\@\@\@U?$InsideBlockWithPosComponent\@UWaterlilyBlockFlag\@\@\@\@V?$FlagComponent\@UWebBlockTag\@\@\@\@\@\@U?$GlobalRead\@UExternalDataComponent\@\@ULocalConstBlockSourceFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
     */
    MCAPI static createContextObjects(class StrictExecutionContext<
                                      struct Filter<
                                          class FlagComponent<struct ActorMovementTickNeededFlag>,
                                          class FlagComponent<struct BoatFlag>,
                                          class FlagComponent<struct FreezeImmuneFlag>,
                                          class FlagComponent<struct IsDeadFlag>,
                                          class FlagComponent<struct PlayerComponentFlag>,
                                          class FlagComponent<struct SkipEntityInsideFlag>,
                                          class FlagComponent<struct InWaterFlag>>,
                                      struct Read<
                                          struct AABBShapeComponent,
                                          struct AbilitiesComponent,
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
};

}; // namespace EntityInsideSystemImpl
