#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/FallingBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ScaffoldingBlock : public ::FallingBlock {
public:
    // prevent constructor by default
    ScaffoldingBlock& operator=(ScaffoldingBlock const&);
    ScaffoldingBlock(ScaffoldingBlock const&);
    ScaffoldingBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScaffoldingBlock() = default;

    // vIndex: 4
    virtual class HitResult
    clip(class Block const&, class BlockSource const& region, class BlockPos const& pos, class Vec3 const& A, class Vec3 const& B, ::ShapeType, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 5
    virtual class AABB getCollisionShape(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const&                                      pos,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    // vIndex: 33
    virtual bool isWaterBlocking() const;

    // vIndex: 56
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 62
    virtual bool checkIsPathable(class Actor&, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 90
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion) const;

    // vIndex: 93
    virtual void neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    // vIndex: 98
    virtual class Block const&
    getPlacementBlock(class Actor const& by, class BlockPos const& pos, uchar, class Vec3 const&, int itemValue) const;

    // vIndex: 113
    virtual bool canSlide(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 134
    virtual void
    animateTickBedrockLegacy(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 163
    virtual class mce::Color getDustColor(class Block const&) const;

    // vIndex: 164
    virtual std::string getDustParticleName(class Block const&) const;

    MCAPI ScaffoldingBlock(std::string const& nameId, int id);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI int calculateStability(class BlockSource const& region, class BlockPos const& pos) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _updateBlockStability(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI void
    animateTickBedrockLegacy$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI bool breaksFallingBlocks$(class Block const&, class BaseGameVersion) const;

    MCAPI bool canContainLiquid$() const;

    MCAPI bool canSlide$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool checkIsPathable$(class Actor&, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    MCAPI class HitResult
    clip$(class Block const&, class BlockSource const& region, class BlockPos const& pos, class Vec3 const& A, class Vec3 const& B, ::ShapeType, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI class AABB getCollisionShape$(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const&                                      pos,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    MCAPI class mce::Color getDustColor$(class Block const&) const;

    MCAPI std::string getDustParticleName$(class Block const&) const;

    MCAPI class Block const&
    getPlacementBlock$(class Actor const& by, class BlockPos const& pos, uchar, class Vec3 const&, int itemValue) const;

    MCAPI bool isWaterBlocking$() const;

    MCAPI bool mayPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    MCAPI bool waterSpreadCausesSpawn$() const;

    MCAPI static int const& MAX_STABILITY();

    // NOLINTEND
};
