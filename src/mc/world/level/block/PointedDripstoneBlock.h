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
namespace BlockEvents { class BlockEntityFallOnEvent; }
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
    MCAPI void fillCauldron(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI ::std::optional<::SharedTypes::v1_26_20::MaterialType>
    getCauldronFillLiquidType(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void onFallOn(::BlockEvents::BlockEntityFallOnEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _canFillCauldron(::Block const& block);

    MCAPI static ::std::optional<::BlockPos> _findFillableCauldronBelowStalactiteTip(
        ::BlockSource&                        region,
        ::BlockPos const&                     stalactiteTipPos,
        ::SharedTypes::v1_26_20::MaterialType liquidType
    );

    MCAPI static void addDripParticle(::BlockSource& region, ::BlockPos const& pos, ::ParticleType particleType);

    MCAPI static ::std::optional<::BlockPos>
    findStalactiteTipAboveCauldron(::BlockSource& region, ::BlockPos const& cauldronPos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCAPI void $randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;

    MCAPI bool $canGrow(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& stalactiteTipPos) const;

    MCAPI bool $_canGrow(::Block const& rootBlock, ::Block const& aboveRootLiquidBlock) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
