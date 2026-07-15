#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/StructureStart.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class BoundingBox;
class Random;
// clang-format on

class WoodlandMansionStart : public ::StructureStart {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Rotation>  mRotationGenerated;
    ::ll::TypedStorage<4, 12, ::BlockPos> mPositionGenerated;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool postProcess(::BlockSource& region, ::Random& random, ::BoundingBox const& chunkBB) /*override*/;

    virtual ::std::string_view getStructureName() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
