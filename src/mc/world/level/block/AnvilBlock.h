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

class AnvilBlock : public ::FallingBlock {
public:
    // prevent constructor by default
    AnvilBlock& operator=(AnvilBlock const&);
    AnvilBlock(AnvilBlock const&);
    AnvilBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AnvilBlock() = default;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const& block, class IConstBlockSource const&, class BlockPos const& pos, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9
    virtual class AABB const& getOutline(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const& pos,
        class AABB&           bufferValue
    ) const;

    // vIndex: 13
    virtual bool getLiquidClipVolume(class Block const&, class BlockSource&, class BlockPos const&, class AABB&) const;

    // vIndex: 23
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType type) const;

    // vIndex: 32
    virtual bool isCraftingBlock() const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 90
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 119
    virtual std::string buildDescriptionId(class Block const& block) const;

    // vIndex: 120
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 135
    virtual void animateTick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player&, class BlockPos const&, uchar) const;

    // vIndex: 163
    virtual class mce::Color getDustColor(class Block const&) const;

    // vIndex: 164
    virtual std::string getDustParticleName(class Block const&) const;

    // vIndex: 166
    virtual void onLand(class BlockSource& region, class BlockPos const& pos) const;

    MCVAPI bool falling() const;

    MCAPI AnvilBlock(std::string const& nameId, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class AABB const&
    _getShape(class BlockPos const& pos, class Block const& block, class AABB& bufferValue);

    // NOLINTEND
};
