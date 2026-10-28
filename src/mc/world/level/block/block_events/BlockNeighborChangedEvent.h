#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector_base.h"
#include "mc/world/level/block/block_events/BlockEventBase.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockSource;
struct NeighborChange;
// clang-format on

namespace BlockEvents {

class BlockNeighborChangedEvent : public ::BlockEvents::BlockEventBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Bedrock::small_vector_base<::NeighborChange> const&> mChanges;
    ::ll::TypedStorage<8, 8, ::BlockSource&>                                        mRegion;
    ::ll::TypedStorage<8, 8, ::Block const&>                                        mListenerPermutation;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockNeighborChangedEvent& operator=(BlockNeighborChangedEvent const&);
    BlockNeighborChangedEvent(BlockNeighborChangedEvent const&);
    BlockNeighborChangedEvent();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Block const& getBlock() const /*override*/;

    virtual ::BlockSource const& getBlockSource() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Block const& $getBlock() const;

    MCFOLD ::BlockSource const& $getBlockSource() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace BlockEvents
