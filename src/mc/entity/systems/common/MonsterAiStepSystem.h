#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/GlobalRead.h"
#include "mc/common/GlobalWrite.h"
#include "mc/common/StrictExecutionContext.h"
#include "mc/common/wrapper/AddRemove.h"
#include "mc/common/wrapper/Include.h"
#include "mc/common/wrapper/ViewT.h"
#include "mc/deps/core/data/Filter.h"
#include "mc/deps/core/data/Read.h"
#include "mc/deps/core/data/Write.h"
#include "mc/entity/EntityFactoryT.h"
#include "mc/world/components/FlagComponent.h"

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
                      struct EntityFactoryT<>>&);

    MCAPI static struct TickingSystemWithInfo createSystem();

    MCAPI static void tickMonsterAiStep(
        class StrictEntityContext const& entity,
        struct AABBShapeComponent const&,
        struct OffsetsComponent const&,
        struct StateVectorComponent const&,
        struct NoActionTimeComponent&,
        class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct BlazeFlag>>>,
        class ViewT<class StrictEntityContext, struct Include<class FlagComponent<struct LavaSlimeFlag>>>,
        class IConstBlockSource const& region
    );

    // NOLINTEND
};
