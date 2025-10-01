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

class GroundedConstraint : public ::IStructureConstraint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk4168b7;
    // NOLINTEND

public:
    // prevent constructor by default
    GroundedConstraint& operator=(GroundedConstraint const&);
    GroundedConstraint(GroundedConstraint const&);
    GroundedConstraint();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GroundedConstraint() /*override*/ = default;

    // vIndex: 1
    virtual bool
    isSatisfied(::IBlockWorldGenAPI const& target, ::BlockPos const& structurePos, ::Rotation const& structureRot) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit GroundedConstraint(::StructureTemplate& structure);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::StructureTemplate& structure);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isSatisfied(
        ::IBlockWorldGenAPI const& target,
        ::BlockPos const&          structurePos,
        ::Rotation const&          structureRot
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
