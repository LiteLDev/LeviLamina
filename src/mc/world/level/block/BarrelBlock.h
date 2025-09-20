#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Flip.h"
#include "mc/world/level/block/FaceDirectionalBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Experiments;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class BarrelBlock : public ::FaceDirectionalBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 122
    virtual ::Flip getFaceFlip(uchar face, ::Block const& block) const /*override*/;

    // vIndex: 118
    virtual int getVariant(::Block const& block) const /*override*/;

    // vIndex: 132
    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 136
    virtual bool isInteractiveBlock() const /*override*/;

    // vIndex: 28
    virtual bool isContainerBlock() const /*override*/;

    // vIndex: 44
    virtual bool isSignalSource() const /*override*/;

    // vIndex: 105
    virtual bool hasComparatorSignal() const /*override*/;

    // vIndex: 106
    virtual int getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const
        /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~BarrelBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void setOpen(bool isOpen, ::BlockSource& region, ::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Flip $getFaceFlip(uchar face, ::Block const& block) const;

    MCNAPI int $getVariant(::Block const& block) const;

    MCNAPI void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool $isInteractiveBlock() const;

    MCNAPI bool $isContainerBlock() const;

    MCNAPI bool $isSignalSource() const;

    MCNAPI bool $hasComparatorSignal() const;

    MCNAPI int
    $getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
