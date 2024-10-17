#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class SculkShriekerBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    SculkShriekerBlock& operator=(SculkShriekerBlock const&);
    SculkShriekerBlock(SculkShriekerBlock const&);
    SculkShriekerBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SculkShriekerBlock() = default;

    // vIndex: 23
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType) const;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 136
    virtual class BlockLegacy& init();

    // vIndex: 143
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 145
    virtual void onStandOn(class EntityContext& entity, class BlockPos const& pos) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    MCAPI SculkShriekerBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, class Material const& material);

    MCAPI bool canProvideSupport$(class Block const&, uchar face, ::BlockSupportType) const;

    MCAPI int getVariant$(class Block const& block) const;

    MCAPI class BlockLegacy& init$();

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void onRemove$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void onStandOn$(class EntityContext& entity, class BlockPos const& pos) const;

    MCAPI void setupRedstoneComponent$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // NOLINTEND
};
