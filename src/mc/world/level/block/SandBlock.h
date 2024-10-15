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

class SandBlock : public ::FallingBlock {
public:
    // prevent constructor by default
    SandBlock& operator=(SandBlock const&);
    SandBlock(SandBlock const&);
    SandBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SandBlock() = default;

    // vIndex: 48
    virtual bool canBeOriginalSurface() const;

    // vIndex: 80
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor*, ::FertilizerType) const;

    // vIndex: 81
    virtual bool mayConsumeFertilizer(class BlockSource&) const;

    // vIndex: 82
    virtual bool canBeFertilized(class BlockSource&, class BlockPos const&, class Block const& aboveBlock) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 119
    virtual std::string buildDescriptionId(class Block const& block) const;

    // vIndex: 120
    virtual bool isAuxValueRelevantForPicking() const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 160
    virtual class mce::Color getMapColor(class BlockSource&, class BlockPos const&, class Block const& block) const;

    // vIndex: 163
    virtual class mce::Color getDustColor(class Block const& block) const;

    // vIndex: 164
    virtual std::string getDustParticleName(class Block const& block) const;

    MCAPI SandBlock(std::string const& nameId, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI class ItemInstance asItemInstance$(class Block const& block, class BlockActor const*) const;

    MCAPI std::string buildDescriptionId$(class Block const& block) const;

    MCAPI bool canBeFertilized$(class BlockSource&, class BlockPos const&, class Block const& aboveBlock) const;

    MCAPI bool canBeOriginalSurface$() const;

    MCAPI class mce::Color getDustColor$(class Block const& block) const;

    MCAPI std::string getDustParticleName$(class Block const& block) const;

    MCAPI class mce::Color getMapColor$(class BlockSource&, class BlockPos const&, class Block const& block) const;

    MCAPI int getVariant$(class Block const& block) const;

    MCAPI bool isAuxValueRelevantForPicking$() const;

    MCAPI bool mayConsumeFertilizer$(class BlockSource&) const;

    MCAPI bool
    onFertilized$(class BlockSource& region, class BlockPos const& pos, class Actor*, ::FertilizerType) const;

    // NOLINTEND
};
