#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/CopperType.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/CopperBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CopperGrateBlock : public ::CopperBlock {
public:
    // prevent constructor by default
    CopperGrateBlock& operator=(CopperGrateBlock const&);
    CopperGrateBlock(CopperGrateBlock const&);
    CopperGrateBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CopperGrateBlock@@UEAA@XZ
    virtual ~CopperGrateBlock() = default;

    // vIndex: 6, symbol:
    // ?getCollisionShapeForCamera@CopperGrateBlock@@UEBA_NAEAVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@@Z
    virtual bool
    getCollisionShapeForCamera(class AABB&, class Block const&, class IConstBlockSource const&, class BlockPos const&)
        const;

    // vIndex: 56, symbol: ?canContainLiquid@CopperGrateBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // symbol:
    // ??0CopperGrateBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4CopperType@@AEBVHashedString@@@Z
    MCAPI CopperGrateBlock(std::string const&, int, ::CopperType, class HashedString const&);

    // symbol:
    // ??0CopperGrateBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4CopperType@@AEBVHashedString@@22@Z
    MCAPI
    CopperGrateBlock(std::string const&, int, ::CopperType, class HashedString const&, class HashedString const&, class HashedString const&);

    // NOLINTEND
};
