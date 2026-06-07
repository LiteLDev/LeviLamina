#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/ActorBlockBase.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class EntityContext;
class Material;
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class SculkShriekerBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    SculkShriekerBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BlockType& init() /*override*/;

    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void onStandOn(::EntityContext& entity, ::BlockPos const& pos) const /*override*/;

    virtual bool canProvideSupport(::Block const& face, uchar, ::BlockSupportType) const /*override*/;

    virtual int getVariant(::Block const& block) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SculkShriekerBlock(::std::string const& nameId, int id, ::Material const& material);

    MCAPI void _onStandOn(::BlockSource& region, ::Actor& actor, ::BlockPos const& pos) const;

    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::Material const& material);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::BlockType& $init();

    MCAPI void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $onStandOn(::EntityContext& entity, ::BlockPos const& pos) const;

    MCFOLD bool $canProvideSupport(::Block const& face, uchar, ::BlockSupportType) const;

    MCAPI int $getVariant(::Block const& block) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
