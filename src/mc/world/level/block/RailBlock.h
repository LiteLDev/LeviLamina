#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BaseRailBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class RailBlock : public ::BaseRailBlock {
public:
    // prevent constructor by default
    RailBlock& operator=(RailBlock const&);
    RailBlock(RailBlock const&);
    RailBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RailBlock@@UEAA@XZ
    virtual ~RailBlock() = default;

    // vIndex: 128, symbol: ?getVariant@RailBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // symbol: ??0RailBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI RailBlock(std::string const& nameId, int id);

    // NOLINTEND
};
