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
    virtual bool canBeUsedInCommands(class BaseGameVersion const&) const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 134
    virtual void animateTickBedrockLegacy(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    MCAPI UnderwaterTorchBlock(std::string const& nameId, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI void animateTickBedrockLegacy$(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    MCAPI bool canBeUsedInCommands$(class BaseGameVersion const&) const;

    MCAPI bool canContainLiquid$() const;

    MCAPI bool isWaterBlocking$() const;

    MCAPI bool mayPlace$(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
