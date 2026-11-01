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
class ChunkViewSource;
struct SubChunk;
namespace ClientBlockPipeline { struct BlockVolumeArea; }
namespace ClientBlockPipeline::WorldView { struct LocalInfo; }
// clang-format on

namespace ClientBlockPipeline::WorldView {

class FullChunk : public ::ClientBlockPipeline::WorldView::Interface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 376, ::BlockSource>   mSource;
    ::ll::TypedStorage<4, 12, ::BlockPos const> mMinPos;
    ::ll::TypedStorage<8, 8, ::SubChunk const*> mMainSubChunk;
    // NOLINTEND

public:
    // prevent constructor by default
    FullChunk();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ClientBlockPipeline::WorldView::LocalInfo getLocalInfo(::BlockPos const& relativePos) const /*override*/;

    virtual ::Block const& getBlock(::BlockPos const& relativePos) const /*override*/;

    virtual ::Block const& getExtraBlock(::BlockPos const& relativePos) const /*override*/;

    virtual ::BlockActor const* getBlockActor(::BlockPos const& relativePos) const /*override*/;

    virtual void offsetBlockVolumeArea(::ClientBlockPipeline::BlockVolumeArea&) const /*override*/;

    virtual ::BlockPos getRelativeMin(::BlockPos const& worldMin) const /*override*/;

    virtual ::BlockPos getRelativeMax(::BlockPos const& worldMax) const /*override*/;

    virtual bool isInBounds(::BlockPos const& relativePos, ::BlockPos const& dimensions) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FullChunk(::ChunkViewSource& viewSource, ::BlockPos minPos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ChunkViewSource& viewSource, ::BlockPos minPos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ClientBlockPipeline::WorldView::LocalInfo $getLocalInfo(::BlockPos const& relativePos) const;

    MCNAPI ::Block const& $getBlock(::BlockPos const& relativePos) const;

    MCNAPI ::Block const& $getExtraBlock(::BlockPos const& relativePos) const;

    MCNAPI ::BlockActor const* $getBlockActor(::BlockPos const& relativePos) const;

    MCNAPI void $offsetBlockVolumeArea(::ClientBlockPipeline::BlockVolumeArea&) const;

    MCNAPI ::BlockPos $getRelativeMin(::BlockPos const& worldMin) const;

    MCNAPI ::BlockPos $getRelativeMax(::BlockPos const& worldMax) const;

    MCNAPI bool $isInBounds(::BlockPos const& relativePos, ::BlockPos const& dimensions) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ClientBlockPipeline::WorldView
