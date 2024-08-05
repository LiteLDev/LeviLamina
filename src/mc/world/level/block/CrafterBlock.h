#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

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
    virtual void onRedstoneUpdate(class BlockSource&, class BlockPos const&, int, bool) const;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;

    // vIndex: 98
    virtual class Block const&
    getPlacementBlock(class Actor const&, class BlockPos const&, uchar, class Vec3 const&, int) const;

    // vIndex: 111
    virtual bool hasComparatorSignal() const;

    // vIndex: 112
    virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, uchar) const;

    // vIndex: 129
    virtual int getVariant(class Block const&) const;

    // vIndex: 131
    virtual class Block const& getRenderBlock() const;

    // vIndex: 132
    virtual uchar getMappedFace(uchar, class Block const&) const;

    // vIndex: 133
    virtual ::Flip getFaceFlip(uchar, class Block const&) const;

    // vIndex: 143
    virtual void onRemove(class BlockSource&, class BlockPos const&) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource&, class BlockPos const&) const;

    // vIndex: 148
    virtual void tick(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player&, class BlockPos const&, uchar) const;

    // vIndex: 153
    virtual bool allowStateMismatchOnPlacement(class Block const&, class Block const&) const;

    MCAPI CrafterBlock(std::string const&, int);

    MCAPI static int getAttachedFace(int);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void dispenseFrom(class BlockSource&, class BlockPos const&) const;

    // NOLINTEND
};
