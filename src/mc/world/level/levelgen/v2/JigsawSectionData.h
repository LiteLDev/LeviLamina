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

class JigsawSectionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::StructurePoolElement const*>>                 mElements;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>                                           mDepth;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>                                           mGroundOffsets;
    ::ll::TypedStorage<8, 24, ::std::vector<::Rotation>>                                    mRotations;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                                    mPositions;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::vector<::br::worldgen::JigsawJunction>>> mJunctions;
    ::ll::TypedStorage<8, 24, ::std::vector<::BoundingBox>>                                 mBoundingBoxes;
    // NOLINTEND
};

} // namespace br::worldgen
