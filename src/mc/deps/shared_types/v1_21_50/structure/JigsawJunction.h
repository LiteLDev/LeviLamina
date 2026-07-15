#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_20/structure/template_pool/Projection.h"

namespace SharedTypes::v1_21_50 {

struct JigsawJunction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                              mSourceX;
    ::ll::TypedStorage<4, 4, int>                                                              mSourceGroundY;
    ::ll::TypedStorage<4, 4, int>                                                              mSourceZ;
    ::ll::TypedStorage<4, 4, int>                                                              mDeltaY;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Projection> mDestProjection;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50
