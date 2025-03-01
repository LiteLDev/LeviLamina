#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BoundingBox;
class StructurePoolElement;
namespace br::worldgen { struct JigsawJunction; }
// clang-format on

namespace br::worldgen {

struct JigsawSectionEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::StructurePoolElement const*>                        mElement;
    ::ll::TypedStorage<8, 8, int const&>                                           mGroundOffset;
    ::ll::TypedStorage<8, 8, ::Rotation const&>                                    mRot;
    ::ll::TypedStorage<8, 8, ::BlockPos const&>                                    mPos;
    ::ll::TypedStorage<8, 8, ::std::vector<::br::worldgen::JigsawJunction> const&> mJunctions;
    ::ll::TypedStorage<8, 8, ::BoundingBox const&>                                 mBox;
    // NOLINTEND
};

} // namespace br::worldgen
