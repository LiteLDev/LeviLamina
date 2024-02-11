#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class NetherReactorBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    NetherReactorBlock& operator=(NetherReactorBlock const&);
    NetherReactorBlock(NetherReactorBlock const&);
    NetherReactorBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1NetherReactorBlock@@UEAA@XZ
    virtual ~NetherReactorBlock() = default;

    // symbol:
    // ??0NetherReactorBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI NetherReactorBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND
};
