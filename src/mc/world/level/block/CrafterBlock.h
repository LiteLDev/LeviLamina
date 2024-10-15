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

class CrafterBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    CrafterBlock& operator=(CrafterBlock const&);
    CrafterBlock(CrafterBlock const&);
    CrafterBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CrafterBlock() = default;

    // vIndex: 31
    virtual bool isContainerBlock() const;

    // vIndex: 66
    virtual void onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool) const;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 98
    virtual class Block const&
    getPlacementBlock(class Actor const& by, class BlockPos const& pos, uchar, class Vec3 const&, int) const;

    // vIndex: 111
    virtual bool hasComparatorSignal() const;

    // vIndex: 112
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar dir)
        const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 131
    virtual class Block const& getRenderBlock() const;

    // vIndex: 132
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // vIndex: 133
    virtual ::Flip getFaceFlip(uchar face, class Block const& block) const;

    // vIndex: 143
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar) const;

    // vIndex: 153
    virtual bool allowStateMismatchOnPlacement(class Block const& clientTarget, class Block const& serverTarget) const;

    MCAPI CrafterBlock(std::string const& nameId, int id);

    MCAPI static int getAttachedFace(int facing);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void dispenseFrom(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI bool allowStateMismatchOnPlacement$(class Block const& clientTarget, class Block const& serverTarget) const;

    MCAPI int
    getComparatorSignal$(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar dir)
        const;

    MCAPI ::Flip getFaceFlip$(uchar face, class Block const& block) const;

    MCAPI uchar getMappedFace$(uchar face, class Block const& block) const;

    MCAPI class Block const&
    getPlacementBlock$(class Actor const& by, class BlockPos const& pos, uchar, class Vec3 const&, int) const;

    MCAPI class Block const& getRenderBlock$() const;

    MCAPI int getVariant$(class Block const& block) const;

    MCAPI bool hasComparatorSignal$() const;

    MCAPI bool isContainerBlock$() const;

    MCAPI bool isInteractiveBlock$() const;

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void onRedstoneUpdate$(class BlockSource& region, class BlockPos const& pos, int strength, bool) const;

    MCAPI void onRemove$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void setupRedstoneComponent$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    MCAPI bool use$(class Player& player, class BlockPos const& pos, uchar) const;

    // NOLINTEND
};
