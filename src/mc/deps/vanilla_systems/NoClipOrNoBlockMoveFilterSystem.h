#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

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
namespace VanillaSystems { struct VanillaSystemsEventingComponent; }
// clang-format on

namespace VanillaSystems {

struct NoClipOrNoBlockMoveFilterSystem {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void tick(
        ::StrictEntityContext const&                                        context,
        ::MoveRequestComponent const&                                       moveRequest,
        ::OffsetsComponent const&                                           offsets,
        ::ActorDataFlagComponent const&                                     actorData,
        ::AABBShapeComponent&                                               aabb,
        ::StateVectorComponent&                                             state,
        ::SubBBsComponent&                                                  subBBs,
        ::EntityModifier<::MoveRequestComponent>                            mod,
        ::OptionalGlobal<::VanillaSystems::VanillaSystemsEventingComponent> eventingComponent,
        ::IConstBlockSource const&                                          region
    );
    // NOLINTEND
};

} // namespace VanillaSystems
