#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/utils/BlockActorType.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class FurnaceBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    FurnaceBlock& operator=(FurnaceBlock const&);
    FurnaceBlock(FurnaceBlock const&);
    FurnaceBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FurnaceBlock();

    // vIndex: 31
    virtual bool isContainerBlock() const;

    // vIndex: 32
    virtual bool isCraftingBlock() const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 111
    virtual bool hasComparatorSignal() const;

    // vIndex: 112
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar dir)
        const;

    // vIndex: 132
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // vIndex: 134
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 143
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    MCAPI FurnaceBlock(std::string const& nameId, int id, bool lit);

    MCAPI static void setLit(
        bool                  lit,
        class BlockSource&    region,
        class BlockPos const& pos,
        ::BlockActorType      blockActorType,
        class Block const&    unlitFurnace,
        class Block const&    litFurnace
    );

    // NOLINTEND
};
