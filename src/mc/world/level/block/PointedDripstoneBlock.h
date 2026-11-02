#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/shared_types/v1_26_20/block/MaterialType.h"
#include "mc/world/level/block/SpeleothemBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
struct BlockAnimateTickData;
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class PointedDripstoneBlock : public ::SpeleothemBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;

    virtual void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const /*override*/;

    virtual bool canGrow(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& stalactiteTipPos) const
        /*override*/;

    virtual bool _canGrow(::Block const& rootBlock, ::Block const& aboveRootLiquidBlock) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void fillCauldron(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI ::std::optional<::SharedTypes::v1_26_20::MaterialType>
    getCauldronFillLiquidType(::BlockSource& region, ::BlockPos const& pos) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _canDrip(::BlockSource& region, ::BlockPos const& pos);

    MCNAPI static bool _canFillCauldron(::Block const& block);

    MCNAPI static ::std::optional<::BlockPos> _findFillableCauldronBelowStalactiteTip(
        ::BlockSource&                        region,
        ::BlockPos const&                     stalactiteTipPos,
        ::SharedTypes::v1_26_20::MaterialType liquidType
    );

    MCNAPI static void addDripParticle(::BlockSource& region, ::BlockPos const& pos, ::ParticleType particleType);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCNAPI void $randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;

    MCNAPI bool $canGrow(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& stalactiteTipPos) const;

    MCNAPI bool $_canGrow(::Block const& rootBlock, ::Block const& aboveRootLiquidBlock) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
