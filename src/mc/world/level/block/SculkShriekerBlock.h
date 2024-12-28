#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/ActorBlockBase.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockLegacy;
class BlockPos;
class BlockSource;
class EntityContext;
class Experiments;
class Material;
class Random;
namespace BlockEvents { class BlockPlaceEvent; }
// clang-format on

class SculkShriekerBlock : public ::ActorBlockBase<::BlockLegacy> {
public:
    // prevent constructor by default
    SculkShriekerBlock& operator=(SculkShriekerBlock const&);
    SculkShriekerBlock(SculkShriekerBlock const&);
    SculkShriekerBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 125
    virtual ::BlockLegacy& init() /*override*/;

    // vIndex: 132
    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 134
    virtual void onStandOn(::EntityContext& entity, ::BlockPos const& pos) const /*override*/;

    // vIndex: 136
    virtual void tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 67
    virtual void setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 23
    virtual bool canProvideSupport(::Block const&, uchar face, ::BlockSupportType) const /*override*/;

    // vIndex: 118
    virtual int getVariant(::Block const& block) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~SculkShriekerBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SculkShriekerBlock(::std::string const& nameId, int id, ::Material const& material);

    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::Material const& material);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::BlockLegacy& $init();

    MCAPI void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $onStandOn(::EntityContext& entity, ::BlockPos const& pos) const;

    MCAPI void $tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI void $setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool $canProvideSupport(::Block const&, uchar face, ::BlockSupportType) const;

    MCAPI int $getVariant(::Block const& block) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
