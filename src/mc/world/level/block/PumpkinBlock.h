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
class Container;
class Experiments;
class ItemInstance;
class Vec3;
namespace BlockEvents { class BlockPlaceEvent; }
// clang-format on

class PumpkinBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mLit;
    ::ll::TypedStorage<1, 1, bool> mCarved;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 79
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 118
    virtual int getVariant(::Block const& block) const /*override*/;

    // vIndex: 121
    virtual uchar getMappedFace(uchar face, ::Block const& block) const /*override*/;

    // vIndex: 90
    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    // vIndex: 59
    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const
        /*override*/;

    // vIndex: 24
    virtual bool canConnect(::Block const&, uchar, ::Block const&) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~PumpkinBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI int $getVariant(::Block const& block) const;

    MCNAPI uchar $getMappedFace(uchar face, ::Block const& block) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;

    MCNAPI bool $canConnect(::Block const&, uchar, ::Block const&) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
