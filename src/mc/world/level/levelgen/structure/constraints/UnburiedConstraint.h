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

class UnburiedConstraint : public ::IStructureConstraint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk2ab619;
    // NOLINTEND

public:
    // prevent constructor by default
    UnburiedConstraint& operator=(UnburiedConstraint const&);
    UnburiedConstraint(UnburiedConstraint const&);
    UnburiedConstraint();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UnburiedConstraint() /*override*/ = default;

    // vIndex: 1
    virtual bool
    isSatisfied(::IBlockWorldGenAPI const& target, ::BlockPos const& structurePos, ::Rotation const& structureRot) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit UnburiedConstraint(::StructureTemplate& structure);
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
