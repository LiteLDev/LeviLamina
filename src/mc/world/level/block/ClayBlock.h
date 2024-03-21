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

class ClayBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    ClayBlock& operator=(ClayBlock const&);
    ClayBlock(ClayBlock const&);
    ClayBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ClayBlock@@UEAA@XZ
    virtual ~ClayBlock() = default;

    // vIndex: 47, symbol: ?canBeOriginalSurface@ClayBlock@@UEBA_NXZ
    virtual bool canBeOriginalSurface() const;

    // vIndex: 79, symbol: ?onFertilized@ClayBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
    virtual bool
    onFertilized(class BlockSource& region, class BlockPos const& pos, class Actor* entity, ::FertilizerType fType)
        const;

    // vIndex: 80, symbol: ?mayConsumeFertilizer@ClayBlock@@UEBA_NAEAVBlockSource@@@Z
    virtual bool mayConsumeFertilizer(class BlockSource& region) const;

    // vIndex: 81, symbol: ?canBeFertilized@ClayBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool
    canBeFertilized(class BlockSource& region, class BlockPos const& pos, class Block const& aboveBlock) const;

    // symbol: ??0ClayBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI ClayBlock(std::string const& nameId, int id);

    // NOLINTEND
};
