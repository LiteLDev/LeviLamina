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

class GravelBlock : public ::FallingBlock {
public:
    // prevent constructor by default
    GravelBlock& operator=(GravelBlock const&);
    GravelBlock(GravelBlock const&);
    GravelBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GravelBlock() = default;

    // vIndex: 48
    virtual bool canBeOriginalSurface() const;

    // vIndex: 80
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor* entity, ::FertilizerType fType)
        const;

    // vIndex: 81
    virtual bool mayConsumeFertilizer(class BlockSource& region) const;

    // vIndex: 82
    virtual bool
    canBeFertilized(class BlockSource& region, class BlockPos const& pos, class Block const& aboveBlock) const;

    // vIndex: 163
    virtual class mce::Color getDustColor(class Block const& block) const;

    // vIndex: 164
    virtual std::string getDustParticleName(class Block const& block) const;

    MCAPI GravelBlock(std::string const& nameId, int type);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int type);

    MCAPI bool
    canBeFertilized$(class BlockSource& region, class BlockPos const& pos, class Block const& aboveBlock) const;

    MCAPI bool canBeOriginalSurface$() const;

    MCAPI class mce::Color getDustColor$(class Block const& block) const;

    MCAPI std::string getDustParticleName$(class Block const& block) const;

    MCAPI bool mayConsumeFertilizer$(class BlockSource& region) const;

    MCAPI bool
    onFertilized$(class BlockSource& region, class BlockPos const& pos, class Actor* entity, ::FertilizerType fType)
        const;

    // NOLINTEND
};
