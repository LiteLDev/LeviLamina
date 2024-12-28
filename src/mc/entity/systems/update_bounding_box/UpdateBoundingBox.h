#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/ecs/Optional.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class CollisionBoxComponent;
class StrictEntityContext;
struct AABBRelativeSizeUpdateComponent;
struct AABBShapeComponent;
struct AbsoluteSizeUpdateComponent;
struct ActorDataBoundingBoxComponent;
struct ActorDataDirtyFlagsComponent;
struct ActorDataFlagComponent;
struct CustomSizeUpdateComponent;
struct DepenetrationComponent;
struct IsHorizontalPoseFlagComponent;
struct OffsetsComponent;
struct ShouldUpdateBoundingBoxRequestComponent;
struct StateVectorComponent;
struct SynchedActorDataComponent;
namespace UpdateBoundingBox { struct SystemParams; }
// clang-format on

namespace UpdateBoundingBox {
// functions
// NOLINTBEGIN
MCAPI void onAABBRelativeSizeChanged(
    ::AABBRelativeSizeUpdateComponent const& relative,
    ::AABBShapeComponent const&              aabb,
    ::OffsetsComponent&                      offsets
);

MCAPI void onAbsoluteSizeChanged(::AbsoluteSizeUpdateComponent const& absolute, ::OffsetsComponent& offsets);

MCAPI void onCustomSizeChanged(
    ::CustomSizeUpdateComponent const& custom,
    ::AABBShapeComponent const&        aabb,
    ::OffsetsComponent&                offsets
);

MCAPI void onMinecartSizeChanged(
    ::StateVectorComponent const& stateVector,
    ::AABBShapeComponent&         aabb,
    ::OffsetsComponent&           offsets
);

MCAPI void onShulkerSizeChanged(
    ::SynchedActorDataComponent const& data,
    ::AABBShapeComponent const&        aabb,
    ::OffsetsComponent&                offsets
);

MCAPI void singleTickImpl(::StrictEntityContext const& entity, ::UpdateBoundingBox::SystemParams& args);

MCAPI void singleTickOnSizeChanged(::StrictEntityContext const& entity, ::UpdateBoundingBox::SystemParams& args);

MCAPI void tickImpl(::UpdateBoundingBox::SystemParams& args);

MCAPI void transformPlayerSizeRequest(
    ::ShouldUpdateBoundingBoxRequestComponent&        request,
    ::CollisionBoxComponent const&                    collisionBox,
    ::Optional<::IsHorizontalPoseFlagComponent const> isHorizontal,
    ::ActorDataFlagComponent const&                   data,
    float                                             sneakHeight
);

MCAPI void visitCommonSetSize(
    ::StrictEntityContext const&                                entity,
    ::ShouldUpdateBoundingBoxRequestComponent const&            request,
    ::StateVectorComponent const&                               stateVector,
    ::ActorDataDirtyFlagsComponent&                             actorDataDirtyFlags,
    ::ActorDataBoundingBoxComponent&                            actorData,
    ::AABBShapeComponent&                                       aabbShape,
    ::DepenetrationComponent&                                   depenetration,
    ::optional_ref<::CollisionBoxComponent const>               collisionBox,
    ::EntityModifier<::ShouldUpdateBoundingBoxRequestComponent> modifier
);
// NOLINTEND

} // namespace UpdateBoundingBox
