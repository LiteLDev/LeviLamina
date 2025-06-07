#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Flip.h"
#include "mc/world/level/block/SculkSensorBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class CircuitSystem;
// clang-format on

class CalibratedSculkSensorBlock : public ::SculkSensorBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 120
    virtual uchar getMappedFace(uchar face, ::Block const& block) const /*override*/;

    // vIndex: 121
    virtual ::Flip getFaceFlip(uchar face, ::Block const& block) const /*override*/;

    // vIndex: 117
    virtual int getVariant(::Block const& block) const /*override*/;

    // vIndex: 66
    virtual void setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 0
    virtual ~CalibratedSculkSensorBlock() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool
    _wouldBePoweredByCircuit(::CircuitSystem& circuitSystem, ::BlockPos const& pos, uchar connectionDirection);

    MCNAPI static int getInputStrength(::BlockSource const& region, ::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI uchar $getMappedFace(uchar face, ::Block const& block) const;

    MCNAPI ::Flip $getFaceFlip(uchar face, ::Block const& block) const;

    MCNAPI int $getVariant(::Block const& block) const;

    MCNAPI void $setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
