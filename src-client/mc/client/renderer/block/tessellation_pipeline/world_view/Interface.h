#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class BlockPos;
namespace ClientBlockPipeline { struct BlockVolumeArea; }
namespace ClientBlockPipeline::WorldView { struct LocalInfo; }
// clang-format on

namespace ClientBlockPipeline::WorldView {

class Interface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Interface();

    virtual ::ClientBlockPipeline::WorldView::LocalInfo getLocalInfo(::BlockPos const&) const = 0;

    virtual ::Block const& getBlock(::BlockPos const&) const = 0;

    virtual ::BlockActor const* getBlockActor(::BlockPos const&) const = 0;

    virtual void offsetBlockVolumeArea(::ClientBlockPipeline::BlockVolumeArea&) const = 0;

    virtual ::BlockPos getRelativeMin(::BlockPos const&) const = 0;

    virtual ::BlockPos getRelativeMax(::BlockPos const&) const = 0;

    virtual bool isInBounds(::BlockPos const&, ::BlockPos const&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ClientBlockPipeline::WorldView
