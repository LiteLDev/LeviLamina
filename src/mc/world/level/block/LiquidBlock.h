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

class LiquidBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    LiquidBlock& operator=(LiquidBlock const&);
    LiquidBlock(LiquidBlock const&);
    LiquidBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LiquidBlock();

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 62
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 84
    virtual bool mayPick(class BlockSource const&, class Block const& block, bool liquid) const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 121
    virtual int getColor(class Block const&) const;

    // vIndex: 123
    virtual int getColorAtPos(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 126
    virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const& context);

    // vIndex: 134
    virtual void
    animateTickBedrockLegacy(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 160
    virtual class mce::Color
    getMapColor(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    MCAPI LiquidBlock(std::string const& nameId, int id, class Material const& material);

    MCAPI int getTickDelay(class BlockSource& region) const;

    MCAPI static float getHeightFromDepth(int depth);

    MCAPI static void handleEntityInside(
        class IConstBlockSource const& region,
        class BlockPos const&          pos,
        class Vec3&                    current,
        class Material const&          material
    );

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void emitFizzParticle(class BlockSource& region, class BlockPos const& p) const;

    MCAPI void
    solidify(class BlockSource& region, class BlockPos const& pos, class BlockPos const& changedNeighbor) const;

    MCAPI void trySpreadFire(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI static int
    getDepth(class IConstBlockSource const& region, class BlockPos const& pos, class Material const& material);

    MCAPI static int
    getRenderedDepth(class IConstBlockSource const& region, class BlockPos const& pos, class Material const& material);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void
    _solidify(class BlockSource& region, class BlockPos const& pos, class BlockPos const& changedNeighbor) const;

    MCAPI static class Vec3
    _getFlow(class IConstBlockSource const& region, class BlockPos const& pos, class Material const& material);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, class Material const& material);

    MCAPI void dtor$();

    MCAPI void
    animateTickBedrockLegacy$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI bool canContainLiquid$() const;

    MCAPI bool checkIsPathable$(class Actor&, class BlockPos const&, class BlockPos const&) const;

    MCAPI class AABB
    getCollisionShape$(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI int getColor$(class Block const&) const;

    MCAPI int getColorAtPos$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI class mce::Color
    getMapColor$(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    MCAPI bool mayPick$(class BlockSource const&, class Block const& block, bool liquid) const;

    MCAPI void
    neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    MCAPI void onGraphicsModeChanged$(struct BlockGraphicsModeChangeContext const& context);

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
