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

class SculkVeinBlock : public ::MultifaceBlock {
public:
    // prevent constructor by default
    SculkVeinBlock& operator=(SculkVeinBlock const&);
    SculkVeinBlock(SculkVeinBlock const&);
    SculkVeinBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SculkVeinBlock() = default;

    // vIndex: 62
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 163
    virtual class Block const& getMultifaceBlock() const;

    // vIndex: 164
    virtual class MultifaceSpreader const& getMultifaceSpreader() const;

    MCAPI SculkVeinBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND
};
