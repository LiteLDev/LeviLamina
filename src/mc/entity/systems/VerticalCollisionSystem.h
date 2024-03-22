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
    VerticalCollisionSystem& operator=(VerticalCollisionSystem const&);
    VerticalCollisionSystem(VerticalCollisionSystem const&);
    VerticalCollisionSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1VerticalCollisionSystem@@UEAA@XZ
    virtual ~VerticalCollisionSystem() = default;

    // vIndex: 1, symbol: ?registerEvents@ISystem@@UEAAXAEAV?$basic_dispatcher@V?$allocator@X@std@@@entt@@@Z
    virtual void registerEvents(entt::dispatcher&);

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol:
    // ?tick@VerticalCollisionSystem@@EEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UMinecartFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UVerticalCollisionFlag@@@@@@U?$Read@UDimensionTypeComponent@@UStateVectorComponent@@UActorDataFlagComponent@@UMoveRequestComponent@@UAABBShapeComponent@@@@U?$Write@UStateVectorComponent@@@@U?$AddRemove@UBounceComponent@@@@U?$GlobalRead@ULocalConstBlockSourceFactoryComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@Z
    virtual void tick(class StrictExecutionContext<
                      struct Filter<
                          class FlagComponent<struct MinecartFlag>,
                          class FlagComponent<struct PlayerComponentFlag>,
                          class FlagComponent<struct VerticalCollisionFlag>>,
                      struct Read<
                          struct DimensionTypeComponent,
                          struct StateVectorComponent,
                          struct ActorDataFlagComponent,
                          struct MoveRequestComponent,
                          struct AABBShapeComponent>,
                      struct Write<struct StateVectorComponent>,
                      struct AddRemove<struct BounceComponent>,
                      struct GlobalRead<struct LocalConstBlockSourceFactoryComponent>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>&);

    // vIndex: 6, symbol:
    // ?singleTick@VerticalCollisionSystem@@EEAAXAEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UMinecartFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UVerticalCollisionFlag@@@@@@U?$Read@UDimensionTypeComponent@@UStateVectorComponent@@UActorDataFlagComponent@@UMoveRequestComponent@@UAABBShapeComponent@@@@U?$Write@UStateVectorComponent@@@@U?$AddRemove@UBounceComponent@@@@U?$GlobalRead@ULocalConstBlockSourceFactoryComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@AEAVStrictEntityContext@@@Z
    virtual void
    singleTick(class StrictExecutionContext<struct Filter<class FlagComponent<struct MinecartFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct VerticalCollisionFlag>>, struct Read<struct DimensionTypeComponent, struct StateVectorComponent, struct ActorDataFlagComponent, struct MoveRequestComponent, struct AABBShapeComponent>, struct Write<struct StateVectorComponent>, struct AddRemove<struct BounceComponent>, struct GlobalRead<struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>>&, class StrictEntityContext&);

    // symbol: ?create@VerticalCollisionSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo create();

    // symbol: ?getMaxCollisionVolume@VerticalCollisionSystem@@SA?AVAABB@@AEBVVec3@@AEBV2@@Z
    MCAPI static class AABB getMaxCollisionVolume(class Vec3 const&, class AABB const&);

    // symbol:
    // ?tickVerticalCollisionSystem@VerticalCollisionSystem@@SAXAEBVStrictEntityContext@@AEBUAABBShapeComponent@@AEBUMoveRequestComponent@@AEAV?$StrictExecutionContext@U?$Filter@V?$FlagComponent@UMinecartFlag@@@@V?$FlagComponent@UPlayerComponentFlag@@@@V?$FlagComponent@UVerticalCollisionFlag@@@@@@U?$Read@UDimensionTypeComponent@@UStateVectorComponent@@UActorDataFlagComponent@@UMoveRequestComponent@@UAABBShapeComponent@@@@U?$Write@UStateVectorComponent@@@@U?$AddRemove@UBounceComponent@@@@U?$GlobalRead@ULocalConstBlockSourceFactoryComponent@@@@U?$GlobalWrite@$$V@@U?$EntityFactoryT@$$V@@@@@Z
    MCAPI static void
    tickVerticalCollisionSystem(class StrictEntityContext const&, struct AABBShapeComponent const&, struct MoveRequestComponent const&, class StrictExecutionContext<struct Filter<class FlagComponent<struct MinecartFlag>, class FlagComponent<struct PlayerComponentFlag>, class FlagComponent<struct VerticalCollisionFlag>>, struct Read<struct DimensionTypeComponent, struct StateVectorComponent, struct ActorDataFlagComponent, struct MoveRequestComponent, struct AABBShapeComponent>, struct Write<struct StateVectorComponent>, struct AddRemove<struct BounceComponent>, struct GlobalRead<struct LocalConstBlockSourceFactoryComponent>, struct GlobalWrite<>, struct EntityFactoryT<>>&);

    // NOLINTEND
};
