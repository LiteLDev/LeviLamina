#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/RotatedPillarBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

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
