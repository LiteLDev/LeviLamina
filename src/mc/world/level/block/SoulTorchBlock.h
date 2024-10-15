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
#include "mc/world/level/block/TorchBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class SoulTorchBlock : public ::TorchBlock {
public:
    // prevent constructor by default
    SoulTorchBlock& operator=(SoulTorchBlock const&);
    SoulTorchBlock(SoulTorchBlock const&);
    SoulTorchBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SoulTorchBlock() = default;

    // vIndex: 134
    virtual void animateTickBedrockLegacy(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 142
    virtual void _addHardCodedBlockComponents(class Experiments const& experiments);

    MCAPI SoulTorchBlock(std::string const& nameId, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI void _addHardCodedBlockComponents$(class Experiments const& experiments);

    MCAPI void animateTickBedrockLegacy$(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // NOLINTEND
};
