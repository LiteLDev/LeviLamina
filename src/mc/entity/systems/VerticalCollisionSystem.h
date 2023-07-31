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

class VerticalCollisionSystem {

public:
    // prevent constructor by default
    VerticalCollisionSystem& operator=(VerticalCollisionSystem const&) = delete;
    VerticalCollisionSystem(VerticalCollisionSystem const&)            = delete;
    VerticalCollisionSystem()                                          = delete;

public:
    // NOLINTBEGIN
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
     * ?tick\@VerticalCollisionSystem\@\@EEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UMinecartFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UVerticalCollisionFlag\@\@\@\@\@\@U?$Read\@USynchedActorDataComponent\@\@UMoveRequestComponent\@\@UAABBShapeComponent\@\@UDimensionTypeComponent\@\@UStateVectorComponent\@\@\@\@U?$Write\@UStateVectorComponent\@\@UWalkDistComponent\@\@\@\@U?$AddRemove\@UBounceComponent\@\@\@\@U?$GlobalRead\@ULocalConstBlockSourceFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@\@Z
     */
    virtual void tick(class StrictExecutionContext<
                      struct Filter<
                          class FlagComponent<struct MinecartFlag>,
                          class FlagComponent<struct PlayerComponentFlag>,
                          class FlagComponent<struct VerticalCollisionFlag>>,
                      struct Read<
                          struct SynchedActorDataComponent,
                          struct MoveRequestComponent,
                          struct AABBShapeComponent,
                          struct DimensionTypeComponent,
                          struct StateVectorComponent>,
                      struct Write<struct StateVectorComponent, struct WalkDistComponent>,
                      struct AddRemove<struct BounceComponent>,
                      struct GlobalRead<struct LocalConstBlockSourceFactoryComponent>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>&);
    /**
     * @vftbl 5
     * @symbol
     * ?singleTick\@VerticalCollisionSystem\@\@EEAAXAEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UMinecartFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UVerticalCollisionFlag\@\@\@\@\@\@U?$Read\@USynchedActorDataComponent\@\@UMoveRequestComponent\@\@UAABBShapeComponent\@\@UDimensionTypeComponent\@\@UStateVectorComponent\@\@\@\@U?$Write\@UStateVectorComponent\@\@UWalkDistComponent\@\@\@\@U?$AddRemove\@UBounceComponent\@\@\@\@U?$GlobalRead\@ULocalConstBlockSourceFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@AEAVStrictEntityContext\@\@\@Z
     */
    virtual void singleTick(class StrictExecutionContext<struct Filter<class FlagComponent<struct MinecartFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct VerticalCollisionFlag>>, struct Read<struct SynchedActorDataComponent, struct MoveRequestComponent, struct AABBShapeComponent, struct DimensionTypeComponent, struct StateVectorComponent>, struct Write<struct StateVectorComponent, struct WalkDistComponent>, struct AddRemove<struct BounceComponent>, struct GlobalRead<struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>>&, class StrictEntityContext&);
    /**
     * @symbol ?create\@VerticalCollisionSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
    /**
     * @symbol
     * ?tickVerticalCollisionSystem\@VerticalCollisionSystem\@\@SAXAEBVStrictEntityContext\@\@AEBUMoveRequestComponent\@\@AEBUAABBShapeComponent\@\@AEBUStateVectorComponent\@\@AEAUWalkDistComponent\@\@AEAV?$StrictExecutionContext\@U?$Filter\@V?$FlagComponent\@UMinecartFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@V?$FlagComponent\@UVerticalCollisionFlag\@\@\@\@\@\@U?$Read\@USynchedActorDataComponent\@\@UMoveRequestComponent\@\@UAABBShapeComponent\@\@UDimensionTypeComponent\@\@UStateVectorComponent\@\@\@\@U?$Write\@UStateVectorComponent\@\@UWalkDistComponent\@\@\@\@U?$AddRemove\@UBounceComponent\@\@\@\@U?$GlobalRead\@ULocalConstBlockSourceFactoryComponent\@\@\@\@U?$GlobalWrite\@$$V\@\@U?$EntityFactoryT\@$$V\@\@\@\@AEBVIConstBlockSource\@\@\@Z
     */
    MCAPI static void
    tickVerticalCollisionSystem(class StrictEntityContext const&, struct MoveRequestComponent const&, struct AABBShapeComponent const&, struct StateVectorComponent const&, struct WalkDistComponent&, class StrictExecutionContext<struct Filter<class FlagComponent<struct MinecartFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct VerticalCollisionFlag>>, struct Read<struct SynchedActorDataComponent, struct MoveRequestComponent, struct AABBShapeComponent, struct DimensionTypeComponent, struct StateVectorComponent>, struct Write<struct StateVectorComponent, struct WalkDistComponent>, struct AddRemove<struct BounceComponent>, struct GlobalRead<struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>>&, class IConstBlockSource const&);
    // NOLINTEND
};
