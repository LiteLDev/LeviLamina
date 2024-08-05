#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/CaveVinesVariant.h"
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

class CaveVinesBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    CaveVinesBlock& operator=(CaveVinesBlock const&);
    CaveVinesBlock(CaveVinesBlock const&);
    CaveVinesBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CaveVinesBlock() = default;

    // vIndex: 3
    virtual bool
    hasTag(class BlockSource& region, class BlockPos const& pos, class Block const& block, std::string const& tagName)
        const;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 80
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor* entity, ::FertilizerType fType)
        const;

    // vIndex: 82
    virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 106
    virtual void executeEvent(
        class BlockSource&    region,
        class BlockPos const& pos,
        class Block const&    block,
        std::string const&    eventName,
        class Actor&          sourceEntity
    ) const;

    // vIndex: 129
    virtual int getVariant(class Block const&) const;

    // vIndex: 143
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 149
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI CaveVinesBlock(std::string const& nameId, int id, ::CaveVinesVariant variant);

    MCAPI static void tryGrow(class BlockSource& region, class BlockPos const& pos, float, float);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _isCaveVinesBlock(class Block const& block) const;

    MCAPI bool _pickBerries(class BlockSource&, class BlockPos const&, class Actor&) const;

    MCAPI void _updateBlockBasedOnNeighborBelow(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
