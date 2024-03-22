#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/UndyedShulkerBoxBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class ShulkerBoxBlock : public ::UndyedShulkerBoxBlock {
public:
    // prevent constructor by default
    ShulkerBoxBlock& operator=(ShulkerBoxBlock const&);
    ShulkerBoxBlock(ShulkerBoxBlock const&);
    ShulkerBoxBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ShulkerBoxBlock@@UEAA@XZ
    virtual ~ShulkerBoxBlock() = default;

    // vIndex: 118, symbol:
    // ?buildDescriptionId@ShulkerBoxBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 120, symbol: ?getColor@ShulkerBoxBlock@@UEBAHAEBVBlock@@@Z
    virtual int getColor(class Block const& block) const;

    // symbol: ??0ShulkerBoxBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI ShulkerBoxBlock(std::string const& nameId, int id);

    // NOLINTEND
};
