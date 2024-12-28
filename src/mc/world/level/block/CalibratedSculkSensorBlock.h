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
// clang-format on

class CalibratedSculkSensorBlock : public ::SculkSensorBlock {
public:
    // prevent constructor by default
    CalibratedSculkSensorBlock& operator=(CalibratedSculkSensorBlock const&);
    CalibratedSculkSensorBlock(CalibratedSculkSensorBlock const&);
    CalibratedSculkSensorBlock();

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
    virtual ~CalibratedSculkSensorBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CalibratedSculkSensorBlock(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static int getInputStrength(::BlockSource const& region, ::BlockPos const& pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
