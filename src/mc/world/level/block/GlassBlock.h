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

class GlassBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    GlassBlock& operator=(GlassBlock const&);
    GlassBlock(GlassBlock const&);
    GlassBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GlassBlock@@UEAA@XZ
    virtual ~GlassBlock() = default;

    // vIndex: 6, symbol:
    // ?getCollisionShapeForCamera@GlassBlock@@UEBA_NAEAVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@@Z
    virtual bool
    getCollisionShapeForCamera(class AABB&, class Block const&, class IConstBlockSource const&, class BlockPos const&)
        const;

    // vIndex: 25, symbol: ?canConnect@GlassBlock@@UEBA_NAEBVBlock@@E0@Z
    virtual bool canConnect(class Block const& otherBlock, uchar toOther, class Block const& thisBlock) const;

    // vIndex: 60, symbol: ?canBeUsedInCommands@GlassBlock@@UEBA_NAEBVBaseGameVersion@@@Z
    virtual bool canBeUsedInCommands(class BaseGameVersion const& requiredBaseGameVersion) const;

    // vIndex: 89, symbol: ?breaksFallingBlocks@GlassBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const& block, class BaseGameVersion version) const;

    // symbol:
    // ??0GlassBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@_N22@Z
    MCAPI GlassBlock(std::string const&, int, class Material const&, bool, bool, bool);

    // NOLINTEND
};
