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

class SpongeBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    SpongeBlock& operator=(SpongeBlock const&);
    SpongeBlock(SpongeBlock const&);
    SpongeBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SpongeBlock() = default;

    // vIndex: 50
    virtual bool isValidAuxValue(int value) const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 119
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 120
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 134
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI SpongeBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _attemptAbsorbWater(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void _evaporateWater(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool _performAbsorbWater(class BlockSource& region, class BlockPos const& startPos) const;

    MCAPI void _setShouldDry(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void _spawnAbsorbParticles(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
