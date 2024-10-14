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

class DirtPathBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    DirtPathBlock& operator=(DirtPathBlock const&);
    DirtPathBlock(DirtPathBlock const&);
    DirtPathBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DirtPathBlock() = default;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const& pos, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const& pos, class AABB& bufferValue)
        const;

    // vIndex: 23
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType) const;

    // vIndex: 48
    virtual bool canBeOriginalSurface() const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 89
    virtual bool
    tryToTill(class BlockSource& region, class BlockPos const& pos, class Actor& entity, class ItemStack& item) const;

    // vIndex: 93
    virtual void neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI DirtPathBlock(std::string const& nameId, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool canBeOriginalSurface$() const;

    MCAPI bool canContainLiquid$() const;

    MCAPI bool canProvideSupport$(class Block const&, uchar face, ::BlockSupportType) const;

    MCAPI bool canSurvive$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI class AABB
    getCollisionShape$(class Block const&, class IConstBlockSource const&, class BlockPos const& pos, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI class AABB const&
    getOutline$(class Block const&, class IConstBlockSource const&, class BlockPos const& pos, class AABB& bufferValue)
        const;

    MCAPI void neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    MCAPI bool
    tryToTill$(class BlockSource& region, class BlockPos const& pos, class Actor& entity, class ItemStack& item) const;

    MCAPI bool use$(class Player& player, class BlockPos const& pos, uchar face) const;

    MCAPI static class AABB& BLOCK_AABB();

    // NOLINTEND
};
