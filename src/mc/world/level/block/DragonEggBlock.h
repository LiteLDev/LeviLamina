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
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion) const;

    // vIndex: 101
    virtual bool attack(class Player* player, class BlockPos const& pos) const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar) const;

    // vIndex: 163
    virtual class mce::Color getDustColor(class Block const&) const;

    // vIndex: 164
    virtual std::string getDustParticleName(class Block const&) const;

    MCAPI DragonEggBlock(std::string const& nameId, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _attemptTeleport(class BlockSource& region, class Random& random, class BlockPos const& pos);

    // NOLINTEND
};
