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

class MangroveRootsBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    MangroveRootsBlock& operator=(MangroveRootsBlock const&);
    MangroveRootsBlock(MangroveRootsBlock const&);
    MangroveRootsBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MangroveRootsBlock@@UEAA@XZ
    virtual ~MangroveRootsBlock() = default;

    // vIndex: 25, symbol: ?canConnect@MangroveRootsBlock@@UEBA_NAEBVBlock@@E0@Z
    virtual bool canConnect(class Block const& otherBlock, uchar toOther, class Block const& thisBlock) const;

    // vIndex: 56, symbol: ?canContainLiquid@MangroveRootsBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // symbol:
    // ??0MangroveRootsBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI MangroveRootsBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND
};
