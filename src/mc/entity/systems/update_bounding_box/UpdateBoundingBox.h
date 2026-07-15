#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct AABBRelativeSizeUpdateComponent;
struct AABBShapeComponent;
struct OffsetsComponent;
struct SynchedActorDataComponent;
// clang-format on

namespace UpdateBoundingBox {
// functions
// NOLINTBEGIN
MCAPI void onAABBRelativeSizeChanged(
    ::AABBRelativeSizeUpdateComponent const& relative,
    ::AABBShapeComponent const&              aabb,
    ::OffsetsComponent&                      offsets
);

MCAPI void onShulkerSizeChanged(
    ::SynchedActorDataComponent const& data,
    ::AABBShapeComponent const&        aabb,
    ::OffsetsComponent&                offsets
);
// NOLINTEND

} // namespace UpdateBoundingBox
