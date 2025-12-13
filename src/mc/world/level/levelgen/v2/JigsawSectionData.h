#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/v2/JigsawSectionDataKey.h"

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

public:
    // prevent constructor by default
    JigsawSectionData& operator=(JigsawSectionData const&);
    JigsawSectionData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JigsawSectionData(::br::worldgen::JigsawSectionData&&);

    MCNAPI JigsawSectionData(::br::worldgen::JigsawSectionData const&);

    MCNAPI ::br::worldgen::JigsawSectionDataKey push(::StructurePoolElement const* element, int depth);

    MCNAPI void reserve(uint64 size);

    MCNAPI ~JigsawSectionData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::br::worldgen::JigsawSectionData&&);

    MCNAPI void* $ctor(::br::worldgen::JigsawSectionData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace br::worldgen
