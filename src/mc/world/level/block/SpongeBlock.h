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
    virtual std::string buildDescriptionId(class Block const& block) const;

    // vIndex: 120
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 134
    virtual void
    animateTickBedrockLegacy(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, class Material const& material);

    MCAPI void
    animateTickBedrockLegacy$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI class ItemInstance asItemInstance$(class Block const& block, class BlockActor const*) const;

    MCAPI std::string buildDescriptionId$(class Block const& block) const;

    MCAPI bool isAuxValueRelevantForPicking$() const;

    MCAPI bool isValidAuxValue$(int value) const;

    MCAPI void
    neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
