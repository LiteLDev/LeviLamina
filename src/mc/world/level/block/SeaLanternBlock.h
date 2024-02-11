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

class SeaLanternBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    SeaLanternBlock& operator=(SeaLanternBlock const&);
    SeaLanternBlock(SeaLanternBlock const&);
    SeaLanternBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SeaLanternBlock@@UEAA@XZ
    virtual ~SeaLanternBlock() = default;

    // vIndex: 163, symbol: ?getResourceItem@SeaLanternBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
    virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;

    // vIndex: 164, symbol: ?getResourceCount@SeaLanternBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
    virtual int getResourceCount(class Randomize& randomize, class Block const&, int) const;

    // symbol: ??0SeaLanternBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI SeaLanternBlock(std::string const& nameId, int id);

    // NOLINTEND
};
