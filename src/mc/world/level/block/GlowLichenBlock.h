#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/MultifaceBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class GlowLichenBlock : public ::MultifaceBlock {
public:
    // prevent constructor by default
    GlowLichenBlock& operator=(GlowLichenBlock const&);
    GlowLichenBlock(GlowLichenBlock const&);
    GlowLichenBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GlowLichenBlock() = default;

    // vIndex: 80
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor* entity, ::FertilizerType fType)
        const;

    // vIndex: 82
    virtual bool
    canBeFertilized(class BlockSource& region, class BlockPos const& pos, class Block const& aboveBlock) const;

    // vIndex: 136
    virtual class BlockLegacy& init();

    // vIndex: 163
    virtual class Block const& getMultifaceBlock() const;

    // vIndex: 164
    virtual class MultifaceSpreader const& getMultifaceSpreader() const;

    MCAPI GlowLichenBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND
};
