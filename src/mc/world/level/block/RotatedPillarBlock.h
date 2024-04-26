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

class RotatedPillarBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    RotatedPillarBlock& operator=(RotatedPillarBlock const&);
    RotatedPillarBlock(RotatedPillarBlock const&);
    RotatedPillarBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1RotatedPillarBlock@@UEAA@XZ
    virtual ~RotatedPillarBlock();

    // vIndex: 95, symbol: ?asItemInstance@RotatedPillarBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 97, symbol: ?getPlacementBlock@RotatedPillarBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 131, symbol: ?getMappedFace@RotatedPillarBlock@@UEBAEEAEBVBlock@@@Z
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // symbol:
    // ??0RotatedPillarBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
    MCAPI RotatedPillarBlock(std::string const& nameId, int id, class Material const& material);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?mRotatedX@RotatedPillarBlock@@0QBHB
    MCAPI static int const mRotatedX[];

    // symbol: ?mRotatedZ@RotatedPillarBlock@@0QBHB
    MCAPI static int const mRotatedZ[];

    // NOLINTEND
};
