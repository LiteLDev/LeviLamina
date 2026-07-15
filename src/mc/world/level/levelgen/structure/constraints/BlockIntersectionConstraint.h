#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/levelgen/structure/constraints/IStructureConstraint.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
class StructureTemplate;
// clang-format on

class BlockIntersectionConstraint : public ::IStructureConstraint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mBlockDescriptorAllowList;
    ::ll::TypedStorage<1, 1, bool>                              mOnlyCheckIntersectionForMotionBlockingBlocks;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>        mMotionBlockingVolumeOffsets;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>        mNonMotionBlockingVolumeOffsets;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockIntersectionConstraint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockIntersectionConstraint() /*override*/;

    virtual bool isSatisfied(::IBlockWorldGenAPI const&, ::BlockPos const&, ::Rotation const&, ::BlockPos const&) const
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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
