#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
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

class LogBlock : public ::RotatedPillarBlock {
public:
    // prevent constructor by default
    LogBlock& operator=(LogBlock const&);
    LogBlock(LogBlock const&);
    LogBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LogBlock();

    // vIndex: 143
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar) const;

    // vIndex: 160
    virtual class mce::Color
    getMapColor(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    MCAPI LogBlock(
        std::string const&                      nameId,
        int                                     id,
        class WeakPtr<class BlockLegacy const>  strippedBlockLegacy,
        std::optional<struct LogBlockMapColors> mapColors
    );

    // NOLINTEND
};
