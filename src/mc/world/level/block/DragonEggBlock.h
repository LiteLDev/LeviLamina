#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/actor/item/FallingBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class DragonEggBlock : public ::FallingBlock {
public:
    // prevent constructor by default
    DragonEggBlock& operator=(DragonEggBlock const&);
    DragonEggBlock(DragonEggBlock const&);
    DragonEggBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DragonEggBlock() = default;

    // vIndex: 90
    virtual bool breaksFallingBlocks(class Block const& block, class BaseGameVersion version) const;

    // vIndex: 101
    virtual bool attack(class Player* player, class BlockPos const& pos) const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 163
    virtual class mce::Color getDustColor(class Block const& block) const;

    // vIndex: 164
    virtual std::string getDustParticleName(class Block const&) const;

    MCAPI DragonEggBlock(std::string const& nameId, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _attemptTeleport(class BlockSource&, class Random&, class BlockPos const&);

    // NOLINTEND
};
