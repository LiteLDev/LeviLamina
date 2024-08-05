#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
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

class FallingBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    FallingBlock& operator=(FallingBlock const&);
    FallingBlock(FallingBlock const&);
    FallingBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FallingBlock();

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 134
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 166
    virtual void onLand(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 167
    virtual bool isFreeToFall(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 168
    virtual void
    startFalling(class BlockSource& region, class BlockPos const& pos, class Block const& oldBlock, bool creative)
        const;

    MCVAPI bool falling() const;

    MCAPI FallingBlock(std::string const& nameId, int id, class Material const& material);

    MCAPI void triggerFallCheck(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void
    _tickBlocksAround2D(class BlockSource& region, class BlockPos const& pos, class Block const& oldBlock) const;

    MCAPI void checkSlide(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
