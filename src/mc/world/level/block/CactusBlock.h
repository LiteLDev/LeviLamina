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

class CactusBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    CactusBlock& operator=(CactusBlock const&);
    CactusBlock(CactusBlock const&);
    CactusBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CactusBlock() = default;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const& pos, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const& pos, class AABB& bufferValue)
        const;

    // vIndex: 50
    virtual bool isValidAuxValue(int value) const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 93
    virtual void neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    // vIndex: 126
    virtual void onGraphicsModeChanged(struct BlockGraphicsModeChangeContext const& context);

    // vIndex: 139
    virtual bool dealsContactDamage(class Actor const&, class Block const&, bool) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 149
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI CactusBlock(std::string const& nameId, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI bool canSurvive$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool dealsContactDamage$(class Actor const&, class Block const&, bool) const;

    MCAPI class AABB
    getCollisionShape$(class Block const&, class IConstBlockSource const&, class BlockPos const& pos, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI class AABB const&
    getOutline$(class Block const&, class IConstBlockSource const&, class BlockPos const& pos, class AABB& bufferValue)
        const;

    MCAPI bool isValidAuxValue$(int value) const;

    MCAPI bool mayPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    MCAPI void onGraphicsModeChanged$(struct BlockGraphicsModeChangeContext const& context);

    MCAPI void randomTick$(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // NOLINTEND
};
