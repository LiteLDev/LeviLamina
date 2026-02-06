#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/tessellation_pipeline/world_view/Interface.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/BlockSource.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
namespace ClientBlockPipeline { struct BlockVolumeArea; }
namespace ClientBlockPipeline::WorldView { struct LocalInfo; }
// clang-format on

namespace ClientBlockPipeline::WorldView {

class AABB : public ::ClientBlockPipeline::WorldView::Interface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 264, ::BlockSource>   mSource;
    ::ll::TypedStorage<4, 12, ::BlockPos const> mChunkMinWorldPos;
    ::ll::TypedStorage<4, 12, ::BlockPos const> mAABBoffset;
    ::ll::TypedStorage<4, 12, ::BlockPos const> mRelativeAABBmin;
    ::ll::TypedStorage<4, 12, ::BlockPos const> mRelativeAABBmax;
    ::ll::TypedStorage<8, 8, ::Block const&>    mExternalBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    AABB& operator=(AABB const&);
    AABB(AABB const&);
    AABB();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ClientBlockPipeline::WorldView::LocalInfo getLocalInfo(::BlockPos const& relativePos) const /*override*/;

    virtual ::Block const& getBlock(::BlockPos const& relativePos) const /*override*/;

    virtual ::BlockActor const* getBlockActor(::BlockPos const& relativePos) const /*override*/;

    virtual void offsetBlockVolumeArea(::ClientBlockPipeline::BlockVolumeArea& localArea) const /*override*/;

    virtual ::BlockPos getRelativeMin(::BlockPos const& worldMin) const /*override*/;

    virtual ::BlockPos getRelativeMax(::BlockPos const& worldMin) const /*override*/;

    virtual bool isInBounds(::BlockPos const& relativePos, ::BlockPos const&) const /*override*/;

    virtual ~AABB() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ClientBlockPipeline::WorldView::LocalInfo $getLocalInfo(::BlockPos const& relativePos) const;

    MCAPI ::Block const& $getBlock(::BlockPos const& relativePos) const;

    MCAPI ::BlockActor const* $getBlockActor(::BlockPos const& relativePos) const;

    MCAPI void $offsetBlockVolumeArea(::ClientBlockPipeline::BlockVolumeArea& localArea) const;

    MCAPI ::BlockPos $getRelativeMin(::BlockPos const& worldMin) const;

    MCAPI ::BlockPos $getRelativeMax(::BlockPos const& worldMin) const;

    MCAPI bool $isInBounds(::BlockPos const& relativePos, ::BlockPos const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ClientBlockPipeline::WorldView
