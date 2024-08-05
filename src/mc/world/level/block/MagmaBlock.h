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

class MagmaBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    MagmaBlock& operator=(MagmaBlock const&);
    MagmaBlock(MagmaBlock const&);
    MagmaBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MagmaBlock() = default;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 134
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 147
    virtual bool shouldTickOnSetBlock() const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 149
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 159
    virtual struct Brightness getEmissiveBrightness(class Block const&) const;

    MCAPI MagmaBlock(std::string const& nameId, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void addToTickQueue(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
