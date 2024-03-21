#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/SculkSensorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CalibratedSculkSensorBlock : public ::SculkSensorBlock {
public:
    // prevent constructor by default
    CalibratedSculkSensorBlock& operator=(CalibratedSculkSensorBlock const&);
    CalibratedSculkSensorBlock(CalibratedSculkSensorBlock const&);
    CalibratedSculkSensorBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CalibratedSculkSensorBlock@@UEAA@XZ
    virtual ~CalibratedSculkSensorBlock() = default;

    // vIndex: 71, symbol: ?setupRedstoneComponent@CalibratedSculkSensorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 128, symbol: ?getVariant@CalibratedSculkSensorBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 131, symbol: ?getMappedFace@CalibratedSculkSensorBlock@@UEBAEEAEBVBlock@@@Z
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // vIndex: 132, symbol: ?getFaceFlip@CalibratedSculkSensorBlock@@UEBA?AW4Flip@@EAEBVBlock@@@Z
    virtual ::Flip getFaceFlip(uchar face, class Block const& block) const;

    // symbol: ??0CalibratedSculkSensorBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI CalibratedSculkSensorBlock(std::string const& nameId, int id);

    // symbol: ?getInputStrength@CalibratedSculkSensorBlock@@SAHAEBVBlockSource@@AEBVBlockPos@@@Z
    MCAPI static int getInputStrength(class BlockSource const& region, class BlockPos const& pos);

    // NOLINTEND
};
