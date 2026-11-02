#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/ActorBlockBase.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class EntityContext;
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class SculkShriekerBlock : public ::ActorBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void onStandOn(::EntityContext& entity, ::BlockPos const& pos) const /*override*/;

    virtual bool canProvideSupport(::Block const&, uchar face, ::BlockSupportType) const /*override*/;

    virtual int getVariant(::Block const& block) const /*override*/;

    virtual ::Block const& getInitialDefaultState() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void $onStandOn(::EntityContext& entity, ::BlockPos const& pos) const;

    MCNAPI bool $canProvideSupport(::Block const&, uchar face, ::BlockSupportType) const;

    MCNAPI int $getVariant(::Block const& block) const;

    MCNAPI ::Block const& $getInitialDefaultState();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
