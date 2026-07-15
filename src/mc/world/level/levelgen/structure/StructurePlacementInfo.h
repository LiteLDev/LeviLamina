#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/chunk/NeighborAwareBlockUpdateType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
class StructureBlockPlacementInfo;
// clang-format on

class StructurePlacementInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos const>                             mSize;
    ::ll::TypedStorage<4, 12, ::BlockPos const>                             mOrigin;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>                          mBlockVolume;
    ::ll::TypedStorage<8, 24, ::std::vector<::StructureBlockPlacementInfo>> mBlockPlacementInfos;
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePlacementInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructurePlacementInfo(::BlockPos const& size, ::BlockPos const& origin);

    MCAPI uint _findOrInsertPlacementIndex(::StructureBlockPlacementInfo const& info);

    MCAPI void handlePostPlacedStructureForArea(
        ::BlockSource&                                                     region,
        ::BlockPos const&                                                  startPos,
        ::BlockPos const&                                                  endPos,
        ::Rotation                                                         rotation,
        ::std::function<::BlockPos(::BlockPos const&)> const&              getWorldPosition,
        ::std::function<void(::BlockPos const&, ::BlockPos const&)> const& preHandleBlock
    );

    MCAPI void
    setBlockPlacementInfo(::BlockPos const& pos, ::Block const& block, ::NeighborAwareBlockUpdateType updateType);

    MCAPI ~StructurePlacementInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& size, ::BlockPos const& origin);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
