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
    // vIndex: 0, symbol: __gen_??1MyceliumBlock@@UEAA@XZ
    virtual ~MyceliumBlock() = default;

    // vIndex: 133, symbol: ?animateTickBedrockLegacy@MyceliumBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 148, symbol: ?randomTick@MyceliumBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // symbol: ??0MyceliumBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI MyceliumBlock(std::string const& nameId, int id);

    // symbol: ?MIN_BRIGHTNESS_TO_PERSIST@MyceliumBlock@@2UBrightness@@B
    MCAPI static struct Brightness const MIN_BRIGHTNESS_TO_PERSIST;

    // symbol: ?MIN_BRIGHTNESS_TO_SPREAD@MyceliumBlock@@2UBrightness@@B
    MCAPI static struct Brightness const MIN_BRIGHTNESS_TO_SPREAD;

    // NOLINTEND
};
