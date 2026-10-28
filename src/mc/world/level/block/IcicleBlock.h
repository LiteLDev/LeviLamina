#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/SpeleothemBlock.h"
#include "mc/world/level/block/SpeleothemThickness.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
class IConstBlockSource;
class Vec3;
namespace BlockEvents { class BlockRandomTickEvent; }
namespace mce { class Color; }
// clang-format on

class IcicleBlock : public ::SpeleothemBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::AABB const& getOutline(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferValue
    ) const /*override*/;

    virtual ::Block const& getPlacementBlock(
        ::Actor const&    placingActor,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const /*override*/;

    virtual void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const /*override*/;

    virtual ::mce::Color getDustColor(::Block const&) const /*override*/;

    virtual ::std::string getDustParticleName(::Block const&) const /*override*/;

    virtual bool _isValidTipGrowPos(::BlockSource& region, ::BlockPos const& growPos, uchar growDirection) const
        /*override*/;

    virtual void _createSpeleothem(
        ::BlockSource&        region,
        ::BlockPos const&     pos,
        uchar                 direction,
        ::SpeleothemThickness thickness
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void tryMelting(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::AABB const& $getOutline(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferValue
    ) const;

    MCAPI ::Block const& $getPlacementBlock(
        ::Actor const&    placingActor,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    MCAPI void $randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;

    MCFOLD ::mce::Color $getDustColor(::Block const&) const;

    MCAPI ::std::string $getDustParticleName(::Block const&) const;

    MCAPI bool $_isValidTipGrowPos(::BlockSource& region, ::BlockPos const& growPos, uchar growDirection) const;

    MCAPI void $_createSpeleothem(
        ::BlockSource&        region,
        ::BlockPos const&     pos,
        uchar                 direction,
        ::SpeleothemThickness thickness
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
