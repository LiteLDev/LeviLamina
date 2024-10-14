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
    virtual void
    animateTickBedrockLegacy(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI void
    animateTickBedrockLegacy$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI bool falling$() const;

    MCAPI bool isFreeToFall$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void
    neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    MCAPI void onLand$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void
    startFalling$(class BlockSource& region, class BlockPos const& pos, class Block const& oldBlock, bool creative)
        const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
