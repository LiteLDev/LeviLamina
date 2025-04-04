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
    // vIndex: 121
    virtual uchar getMappedFace(uchar face, ::Block const& block) const /*override*/;

    // vIndex: 122
    virtual ::Flip getFaceFlip(uchar face, ::Block const& block) const /*override*/;

    // vIndex: 118
    virtual int getVariant(::Block const& block) const /*override*/;

    // vIndex: 67
    virtual void setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 0
    virtual ~CalibratedSculkSensorBlock() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool
    _wouldBePoweredByCircuit(::CircuitSystem& circuitSystem, ::BlockPos const& pos, uchar connectionDirection);

    MCAPI static int getInputStrength(::BlockSource const& region, ::BlockPos const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI uchar $getMappedFace(uchar face, ::Block const& block) const;

    MCAPI ::Flip $getFaceFlip(uchar face, ::Block const& block) const;

    MCAPI int $getVariant(::Block const& block) const;

    MCAPI void $setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
