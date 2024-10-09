#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/CopperType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CopperBulbBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    CopperBulbBlock& operator=(CopperBulbBlock const&);
    CopperBulbBlock(CopperBulbBlock const&);
    CopperBulbBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CopperBulbBlock() = default;

    // vIndex: 18
    virtual void onLightningHit(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 27
    virtual class CopperBehavior const* tryGetCopperBehavior() const;

    // vIndex: 59
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    // vIndex: 66
    virtual void onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool) const;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 111
    virtual bool hasComparatorSignal() const;

    // vIndex: 112
    virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const& block, uchar) const;

    // vIndex: 137
    virtual struct Brightness getLightEmission(class Block const& block) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 149
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    MCAPI CopperBulbBlock(
        std::string const&        nameId,
        int                       id,
        struct Brightness         litBrightness,
        ::CopperType              copperType,
        class HashedString const& previousVariant
    );

    MCAPI CopperBulbBlock(
        std::string const&        nameId,
        int                       id,
        struct Brightness         litBrightness,
        ::CopperType              copperType,
        class HashedString const& previousVariant,
        class HashedString const& nextAgeVariant,
        class HashedString const& waxedVariant
    );

    // NOLINTEND
};
