#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/RotatedPillarInfestedBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class InfestedDeepslateBlock : public ::RotatedPillarInfestedBlock {
public:
    // prevent constructor by default
    InfestedDeepslateBlock& operator=(InfestedDeepslateBlock const&);
    InfestedDeepslateBlock(InfestedDeepslateBlock const&);
    InfestedDeepslateBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1InfestedDeepslateBlock@@UEAA@XZ
    virtual ~InfestedDeepslateBlock() = default;

    // vIndex: 140, symbol: ?tryGetUninfested@InfestedDeepslateBlock@@UEBAPEBVBlock@@AEBV2@@Z
    virtual class Block const* tryGetUninfested(class Block const& block) const;

    // symbol:
    // ??0InfestedDeepslateBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI InfestedDeepslateBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND
};
