#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/AddRemove.h"
#include "mc/deps/ecs/strict/EntityFactoryT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Filter.h"
#include "mc/deps/ecs/strict/GlobalRead.h"
#include "mc/deps/ecs/strict/GlobalWrite.h"
#include "mc/deps/ecs/strict/Read.h"
#include "mc/deps/ecs/strict/StrictExecutionContext.h"
#include "mc/deps/ecs/strict/Write.h"
#include "mc/entity/components/FlagComponent.h"
#include "mc/entity/components/ShouldUpdateBoundingBoxRequestComponent.h"

// auto generated forward declare list
// clang-format off
namespace UpdateBoundingBox { struct SystemParams; }
// clang-format on

namespace UpdateBoundingBox {
// NOLINTBEGIN
MCAPI void onAABBRelativeSizeChanged(
    struct AABBRelativeSizeUpdateComponent const& relative,
    struct AABBShapeComponent const&              aabb,
    struct OffsetsComponent&                      offsets
);

MCAPI void onAbsoluteSizeChanged(struct AbsoluteSizeUpdateComponent const& absolute, struct OffsetsComponent& offsets);

MCAPI void onCustomSizeChanged(
    struct CustomSizeUpdateComponent const& custom,
    struct AABBShapeComponent const&        aabb,
    struct OffsetsComponent&                offsets
);

MCAPI void onMinecartSizeChanged(
    struct StateVectorComponent const& stateVector,
    struct AABBShapeComponent&         aabb,
    struct OffsetsComponent&           offsets
);

MCAPI void onShulkerSizeChanged(
    struct SynchedActorDataComponent const& data,
    struct AABBShapeComponent const&        aabb,
    struct OffsetsComponent&                offsets
);

MCAPI void singleTickImpl(class StrictEntityContext const& entity, struct UpdateBoundingBox::SystemParams& args);

MCAPI void
singleTickOnSizeChanged(class StrictEntityContext const& entity, struct UpdateBoundingBox::SystemParams& args);

MCAPI void tickImpl(struct UpdateBoundingBox::SystemParams& args);

MCAPI void transformPlayerSizeRequest(
    struct ShouldUpdateBoundingBoxRequestComponent&            request,
    class CollisionBoxComponent const&                         collisionBox,
    class Optional<struct IsHorizontalPoseFlagComponent const> isHorizontal,
    struct ActorDataFlagComponent const&                       data,
    float                                                      sneakHeight
);

MCAPI void visitCommonSetSize(
    class StrictEntityContext const&                                     entity,
    struct ShouldUpdateBoundingBoxRequestComponent const&                request,
    struct StateVectorComponent const&                                   stateVector,
    struct ActorDataDirtyFlagsComponent&                                 actorDataDirtyFlags,
    struct ActorDataBoundingBoxComponent&                                actorData,
    struct AABBShapeComponent&                                           aabbShape,
    struct DepenetrationComponent&                                       depenetration,
    class optional_ref<class CollisionBoxComponent const>                collisionBox,
    class EntityModifier<struct ShouldUpdateBoundingBoxRequestComponent> modifier
);
// NOLINTEND

}; // namespace UpdateBoundingBox
