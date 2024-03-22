#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ItemFrameBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class GlowItemFrameBlock : public ::ItemFrameBlock {
public:
    // prevent constructor by default
    GlowItemFrameBlock& operator=(GlowItemFrameBlock const&);
    GlowItemFrameBlock(GlowItemFrameBlock const&);
    GlowItemFrameBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GlowItemFrameBlock@@UEAA@XZ
    virtual ~GlowItemFrameBlock() = default;

    // vIndex: 163, symbol: ?getSpawnedItemName@GlowItemFrameBlock@@UEBA?AVHashedString@@XZ
    virtual class HashedString getSpawnedItemName() const;

    // symbol: ??0GlowItemFrameBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI GlowItemFrameBlock(std::string const& nameId, int id);

    // NOLINTEND
};
