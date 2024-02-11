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

class UnknownBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    UnknownBlock& operator=(UnknownBlock const&);
    UnknownBlock(UnknownBlock const&);
    UnknownBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1UnknownBlock@@UEAA@XZ
    virtual ~UnknownBlock() = default;

    // symbol: ??0UnknownBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI UnknownBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND
};
