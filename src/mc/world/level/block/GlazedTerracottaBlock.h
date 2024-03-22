#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/FaceDirectionalBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class GlazedTerracottaBlock : public ::FaceDirectionalBlock {
public:
    // prevent constructor by default
    GlazedTerracottaBlock& operator=(GlazedTerracottaBlock const&);
    GlazedTerracottaBlock(GlazedTerracottaBlock const&);
    GlazedTerracottaBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GlazedTerracottaBlock@@UEAA@XZ
    virtual ~GlazedTerracottaBlock() = default;

    // vIndex: 49, symbol: ?isValidAuxValue@GlazedTerracottaBlock@@UEBA_NH@Z
    virtual bool isValidAuxValue(int value) const;

    // vIndex: 97, symbol:
    // ?getPlacementBlock@GlazedTerracottaBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // symbol: ??0GlazedTerracottaBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI GlazedTerracottaBlock(std::string const& nameId, int id);

    // NOLINTEND
};
