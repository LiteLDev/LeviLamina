#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/constraints/IStructureConstraint.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
class StructureTemplate;
// clang-format on

class LeveledConstraint : public ::IStructureConstraint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                        mMaxSteepness;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>> mFoundationOffsets;
    // NOLINTEND

public:
    // prevent constructor by default
    LeveledConstraint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LeveledConstraint() /*override*/ = default;

    virtual bool isSatisfied(::IBlockWorldGenAPI const&, ::BlockPos const&, ::Rotation const&, ::BlockPos const&) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LeveledConstraint(::StructureTemplate& structure, int groundLevel);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::StructureTemplate& structure, int groundLevel);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
