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

class MyceliumBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    MyceliumBlock& operator=(MyceliumBlock const&);
    MyceliumBlock(MyceliumBlock const&);
    MyceliumBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MyceliumBlock() = default;

    // vIndex: 134
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 149
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI MyceliumBlock(std::string const& nameId, int id);

    MCAPI static struct Brightness const MIN_BRIGHTNESS_TO_PERSIST;

    MCAPI static struct Brightness const MIN_BRIGHTNESS_TO_SPREAD;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _canSpreadToBlock(class BlockSource const& region, class BlockPos const& blockPos) const;

    // NOLINTEND
};
