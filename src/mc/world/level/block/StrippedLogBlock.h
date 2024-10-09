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
#include "mc/world/level/block/RotatedPillarBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class StrippedLogBlock : public ::RotatedPillarBlock {
public:
    // prevent constructor by default
    StrippedLogBlock& operator=(StrippedLogBlock const&);
    StrippedLogBlock(StrippedLogBlock const&);
    StrippedLogBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StrippedLogBlock() = default;

    // vIndex: 129
    virtual int getVariant(class Block const&) const;

    // vIndex: 160
    virtual class mce::Color
    getMapColor(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    MCAPI StrippedLogBlock(std::string const& nameId, int id, std::optional<struct LogBlockMapColors> mapColors);

    // NOLINTEND
};
