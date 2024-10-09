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
#include "mc/world/level/block/FaceDirectionalBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class BarrelBlock : public ::FaceDirectionalBlock {
public:
    // prevent constructor by default
    BarrelBlock& operator=(BarrelBlock const&);
    BarrelBlock(BarrelBlock const&);
    BarrelBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BarrelBlock() = default;

    // vIndex: 31
    virtual bool isContainerBlock() const;

    // vIndex: 47
    virtual bool isSignalSource() const;

    // vIndex: 111
    virtual bool hasComparatorSignal() const;

    // vIndex: 112
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar dir)
        const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 133
    virtual ::Flip getFaceFlip(uchar face, class Block const& block) const;

    // vIndex: 143
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    MCAPI BarrelBlock(std::string const& nameId, int id, class Material const& material);

    MCAPI static void setOpen(bool isOpen, class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND
};
