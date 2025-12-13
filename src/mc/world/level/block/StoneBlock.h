#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class Experiments;
class ItemInstance;
namespace mce { class Color; }
// clang-format on

class StoneBlock : public ::BlockType {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _addHardCodedBlockComponents(::Experiments const& experiments) /*override*/;

    virtual bool canBeOriginalSurface(bool) const /*override*/;

    virtual ::ItemInstance asItemInstance(::Block const& block, ::BlockActor const*) const /*override*/;

    virtual ::mce::Color getMapColor(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;

    virtual ::Block const* tryGetInfested(::Block const& block) const /*override*/;

    virtual ~StoneBlock() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $_addHardCodedBlockComponents(::Experiments const& experiments);

    MCFOLD bool $canBeOriginalSurface(bool) const;

    MCFOLD ::ItemInstance $asItemInstance(::Block const& block, ::BlockActor const*) const;

    MCFOLD ::mce::Color $getMapColor(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;

    MCAPI ::Block const* $tryGetInfested(::Block const& block) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
