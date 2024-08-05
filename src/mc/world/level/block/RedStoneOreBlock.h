#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
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

class RedStoneOreBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    RedStoneOreBlock& operator=(RedStoneOreBlock const&);
    RedStoneOreBlock(RedStoneOreBlock const&);
    RedStoneOreBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RedStoneOreBlock() = default;

    // vIndex: 48
    virtual bool canBeOriginalSurface() const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 101
    virtual bool attack(class Player* player, class BlockPos const& pos) const;

    // vIndex: 134
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 145
    virtual void onStandOn(class EntityContext& entity, class BlockPos const& pos) const;

    // vIndex: 149
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 163
    virtual void _lightUpBlock(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI RedStoneOreBlock(std::string const& nameId, int id, bool lit);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _poofParticles(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
