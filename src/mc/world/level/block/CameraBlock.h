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

class CameraBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    CameraBlock& operator=(CameraBlock const&);
    CameraBlock(CameraBlock const&);
    CameraBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CameraBlock@@UEAA@XZ
    virtual ~CameraBlock() = default;

    // vIndex: 60, symbol: ?canBeUsedInCommands@CameraBlock@@UEBA_NAEBVBaseGameVersion@@@Z
    virtual bool canBeUsedInCommands(class BaseGameVersion const& requiredBaseGameVersion) const;

    // symbol: ??0CameraBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI CameraBlock(std::string const& nameId, int id);

    // NOLINTEND
};
