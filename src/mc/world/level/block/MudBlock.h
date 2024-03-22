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

class MudBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    MudBlock& operator=(MudBlock const&);
    MudBlock(MudBlock const&);
    MudBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MudBlock@@UEAA@XZ
    virtual ~MudBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@MudBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 6, symbol:
    // ?getCollisionShapeForCamera@MudBlock@@UEBA_NAEAVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@@Z
    virtual bool
    getCollisionShapeForCamera(class AABB&, class Block const&, class IConstBlockSource const&, class BlockPos const&)
        const;

    // vIndex: 47, symbol: ?canBeOriginalSurface@MudBlock@@UEBA_NXZ
    virtual bool canBeOriginalSurface() const;

    // vIndex: 89, symbol: ?breaksFallingBlocks@MudBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion) const;

    // vIndex: 142, symbol: ?onRemove@MudBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148, symbol: ?randomTick@MudBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // symbol: ??0MudBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI MudBlock(std::string const& nameId, int id);

    // symbol: ?BLOCK_AABB@MudBlock@@2VAABB@@A
    MCAPI static class AABB BLOCK_AABB;

    // NOLINTEND
};
