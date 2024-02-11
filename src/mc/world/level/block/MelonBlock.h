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

class MelonBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    MelonBlock& operator=(MelonBlock const&);
    MelonBlock(MelonBlock const&);
    MelonBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MelonBlock@@UEAA@XZ
    virtual ~MelonBlock() = default;

    // vIndex: 25, symbol: ?canConnect@MelonBlock@@UEBA_NAEBVBlock@@E0@Z
    virtual bool canConnect(class Block const&, uchar, class Block const&) const;

    // symbol: ??0MelonBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI MelonBlock(std::string const& nameId, int id);

    // NOLINTEND
};
