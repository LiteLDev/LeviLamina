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

class IceBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    IceBlock& operator=(IceBlock const&);
    IceBlock(IceBlock const&);
    IceBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IceBlock() = default;

    // vIndex: 90
    virtual bool breaksFallingBlocks(class Block const& block, class BaseGameVersion version) const;

    // vIndex: 95
    virtual class Block const*
    playerWillDestroy(class Player& player, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 142
    virtual void _addHardCodedBlockComponents(class Experiments const& experiments);

    // vIndex: 149
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI IceBlock(std::string const& nameId, int id, bool packed);

    MCAPI static void melt(class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class Block const& _getMeltedBlockAndSendEvents(class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void _addHardCodedBlockComponents$(class Experiments const& experiments);

    MCAPI bool breaksFallingBlocks$(class Block const& block, class BaseGameVersion version) const;

    MCAPI class Block const*
    playerWillDestroy$(class Player& player, class BlockPos const& pos, class Block const& block) const;

    MCAPI void randomTick$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
