#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/TorchBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class UnderwaterTorchBlock : public ::TorchBlock {
public:
    // prevent constructor by default
    UnderwaterTorchBlock& operator=(UnderwaterTorchBlock const&);
    UnderwaterTorchBlock(UnderwaterTorchBlock const&);
    UnderwaterTorchBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UnderwaterTorchBlock() = default;

    // vIndex: 33
    virtual bool isWaterBlocking() const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 61
    virtual bool canBeUsedInCommands(class BaseGameVersion const& requiredBaseGameVersion) const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 134
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    MCAPI UnderwaterTorchBlock(std::string const& nameId, int id);

    // NOLINTEND
};
