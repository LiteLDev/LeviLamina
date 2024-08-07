#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/events/LevelEvent.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class SnifferEggBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    SnifferEggBlock& operator=(SnifferEggBlock const&);
    SnifferEggBlock(SnifferEggBlock const&);
    SnifferEggBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SnifferEggBlock() = default;

    // vIndex: 56
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 62
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 119
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    MCAPI SnifferEggBlock(std::string const& nameId, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _addToRandomTickingQueue(class BlockSource& region, class BlockPos const& pos);

    MCAPI static bool _shouldHatchFaster(class BlockSource& region, class BlockPos const& pos);

    MCAPI static void _spawnParticles(::LevelEvent, class BlockSource&, class BlockPos const&);

    // NOLINTEND
};
