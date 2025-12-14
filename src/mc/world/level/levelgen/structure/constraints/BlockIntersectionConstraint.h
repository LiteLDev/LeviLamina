#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/constraints/IStructureConstraint.h"

// auto generated forward declare list
// clang-format off
class BlockDescriptor;
class BlockPos;
class IBlockWorldGenAPI;
class StructureTemplate;
// clang-format on

class BlockIntersectionConstraint : public ::IStructureConstraint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>        mVolumeOffsets;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mBlockDescriptorAllowlist;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockIntersectionConstraint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockIntersectionConstraint() /*override*/ = default;

    virtual bool
    isSatisfied(::IBlockWorldGenAPI const& target, ::BlockPos const& structurePos, ::Rotation const& structureRot) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BlockIntersectionConstraint(::StructureTemplate& structure);
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
