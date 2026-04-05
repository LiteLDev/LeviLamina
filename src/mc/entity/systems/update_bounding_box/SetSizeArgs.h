#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class CollisionBoxComponent;
class StrictEntityContext;
struct AABBShapeComponent;
struct ActorDataBoundingBoxComponent;
struct ActorDataDirtyFlagsComponent;
struct DepenetrationComponent;
struct ShouldUpdateBoundingBoxRequestComponent;
struct StateVectorComponent;
// clang-format on

namespace UpdateBoundingBox {

struct SetSizeArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::StrictEntityContext const&>                   mContext;
    ::ll::TypedStorage<8, 8, ::StateVectorComponent const&>                  mStateVectorComponent;
    ::ll::TypedStorage<8, 8, ::ActorDataDirtyFlagsComponent&>                mActorDataDirtyFlags;
    ::ll::TypedStorage<8, 8, ::ActorDataBoundingBoxComponent&>               mActorDataBoundingBoxComponent;
    ::ll::TypedStorage<8, 8, ::AABBShapeComponent&>                          mAabbComponent;
    ::ll::TypedStorage<8, 8, ::DepenetrationComponent&>                      mDepenetration;
    ::ll::TypedStorage<8, 8, ::optional_ref<::CollisionBoxComponent const>&> mCollisionBox;
    ::ll::TypedStorage<8, 8, ::EntityModifier<::ShouldUpdateBoundingBoxRequestComponent>&> mModifier;
    // NOLINTEND

public:
    // prevent constructor by default
    SetSizeArgs& operator=(SetSizeArgs const&);
    SetSizeArgs(SetSizeArgs const&);
    SetSizeArgs();
};

} // namespace UpdateBoundingBox
