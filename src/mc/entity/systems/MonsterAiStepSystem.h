#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/Include.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/entity/components/FlagComponent.h"

struct MonsterAiStepSystem {
public:
    // prevent constructor by default
    MonsterAiStepSystem& operator=(MonsterAiStepSystem const&);
    MonsterAiStepSystem(MonsterAiStepSystem const&);
    MonsterAiStepSystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MonsterAiStepSystem() = default;

    // vIndex: 1
    virtual void __unk_vfn_1();

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
                          class FlagComponent<struct BlazeFlag>,
                          class FlagComponent<struct LavaSlimeFlag>,
                          class FlagComponent<struct MonsterFlag>>,
                      struct Read<
                          struct AABBShapeComponent,
                          struct DimensionTypeComponent,
                          struct OffsetsComponent,
                          struct StateVectorComponent>,
                      struct Write<struct NoActionTimeComponent>,
                      struct AddRemove<>,
                      struct GlobalRead<struct LocalConstBlockSourceFactoryComponent>,
                      struct GlobalWrite<>,
                      struct EntityFactoryT<>>& strictContext);

    MCAPI static struct TickingSystemWithInfo createSystem();

    MCAPI static void tickMonsterAiStep(
        class StrictEntityContext const&   entity,
        struct AABBShapeComponent const&   aabbShapeComponent,
        struct OffsetsComponent const&     offsetsComponent,
        struct StateVectorComponent const& stateVectorComponent,
        struct NoActionTimeComponent&      noActionTimeComponent,
        class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct BlazeFlag>>>     blazeView,
        class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct LavaSlimeFlag>>> lavaSlimeView,
        class IConstBlockSource const&                                                                    region
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void tick$(class StrictExecutionContext<
                     struct Filter<
                         class FlagComponent<struct ActorMovementTickNeededFlag>,
                         class FlagComponent<struct BlazeFlag>,
                         class FlagComponent<struct LavaSlimeFlag>,
                         class FlagComponent<struct MonsterFlag>>,
                     struct Read<
                         struct AABBShapeComponent,
                         struct DimensionTypeComponent,
                         struct OffsetsComponent,
                         struct StateVectorComponent>,
                     struct Write<struct NoActionTimeComponent>,
                     struct AddRemove<>,
                     struct GlobalRead<struct LocalConstBlockSourceFactoryComponent>,
                     struct GlobalWrite<>,
                     struct EntityFactoryT<>>& strictContext);

    // NOLINTEND
};
