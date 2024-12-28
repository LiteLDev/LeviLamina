#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataFlagComponent;
struct MoveRequestComponent;
struct OffsetsComponent;
struct StateVectorComponent;
struct SubBBsComponent;
struct TickingSystemWithInfo;
// clang-format on

struct NoClipOrNoBlockMoveFilterSystem {
public:
    // prevent constructor by default
    NoClipOrNoBlockMoveFilterSystem& operator=(NoClipOrNoBlockMoveFilterSystem const&);
    NoClipOrNoBlockMoveFilterSystem(NoClipOrNoBlockMoveFilterSystem const&);
    NoClipOrNoBlockMoveFilterSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo create();

    MCAPI static void tick(
        ::StrictEntityContext const&             context,
        ::MoveRequestComponent const&            moveRequest,
        ::OffsetsComponent const&                offsets,
        ::ActorDataFlagComponent const&          actorData,
        ::AABBShapeComponent&                    aabb,
        ::StateVectorComponent&                  state,
        ::SubBBsComponent&                       subBBs,
        ::EntityModifier<::MoveRequestComponent> mod,
        ::IConstBlockSource const&               region
    );
    // NOLINTEND
};
