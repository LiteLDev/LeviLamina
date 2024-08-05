#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/CopperType.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

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
    virtual void onLightningHit(class BlockSource&, class BlockPos const&) const;

    // vIndex: 27
    virtual class CopperBehavior const* tryGetCopperBehavior() const;

    // vIndex: 59
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    // vIndex: 66
    virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;

    // vIndex: 111
    virtual bool hasComparatorSignal() const;

    // vIndex: 112
    virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, uchar) const;

    // vIndex: 137
    virtual struct Brightness getLightEmission(class Block const&) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 148
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 149
    virtual void randomTick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 152
    virtual bool use(class Player&, class BlockPos const&, uchar) const;

    MCAPI CopperBulbBlock(std::string const&, int, struct Brightness, ::CopperType, class HashedString const&);

    MCAPI
    CopperBulbBlock(std::string const&, int, struct Brightness, ::CopperType, class HashedString const&, class HashedString const&, class HashedString const&);

    // NOLINTEND
};
