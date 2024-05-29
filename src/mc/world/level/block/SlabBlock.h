#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakPtr.h"
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

class SlabBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    SlabBlock& operator=(SlabBlock const&);
    SlabBlock(SlabBlock const&);
    SlabBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1SlabBlock@@UEAA@XZ
    virtual ~SlabBlock();

    // vIndex: 11, symbol: ?getVisualShape@SlabBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 14, symbol: ?isObstructingChests@SlabBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool
    isObstructingChests(class BlockSource& region, class BlockPos const& pos, class Block const& thisBlock) const;

    // vIndex: 19, symbol:
    // ?liquidCanFlowIntoFromDirection@SlabBlock@@UEBA_NEAEBV?$function@$$A6AAEBVBlock@@AEBVBlockPos@@@Z@std@@AEBVBlockPos@@@Z
    virtual bool liquidCanFlowIntoFromDirection(
        uchar                                                           flowIntoFacing,
        std::function<class Block const&(class BlockPos const&)> const& getBlock,
        class BlockPos const&                                           pos
    ) const;

    // vIndex: 38, symbol: ?isSlabBlock@SlabBlock@@UEBA_NXZ
    virtual bool isSlabBlock() const;

    // vIndex: 39, symbol: ?isDoubleSlabBlock@SlabBlock@@UEBA_NXZ
    virtual bool isDoubleSlabBlock() const;

    // vIndex: 61, symbol: ?checkIsPathable@SlabBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 72, symbol: ?getRedstoneProperty@SlabBlock@@UEBA?AW4BlockProperty@@AEAVBlockSource@@AEBVBlockPos@@@Z
    virtual ::BlockProperty getRedstoneProperty(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 89, symbol: ?breaksFallingBlocks@SlabBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const& block, class BaseGameVersion version) const;

    // vIndex: 95, symbol: ?asItemInstance@SlabBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 106, symbol: ?getMobToSpawn@SlabBlock@@UEBAPEBVMobSpawnerData@@AEBVSpawnConditions@@AEAVBlockSource@@@Z
    virtual class MobSpawnerData const*
    getMobToSpawn(class SpawnConditions const& conditions, class BlockSource& region) const;

    // symbol:
    // ??0SlabBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_NAEBVMaterial@@V?$WeakPtr@$$CBVBlockLegacy@@@@@Z
    MCAPI SlabBlock(
        std::string const&                     nameId,
        int                                    id,
        bool                                   _fullsize,
        class Material const&                  mat,
        class WeakPtr<class BlockLegacy const> baseSlab
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?TOP_SLAB_DOESNT_BREAK_FALLING_BLOCK_VERSION@SlabBlock@@0VBaseGameVersion@@B
    MCAPI static class BaseGameVersion const TOP_SLAB_DOESNT_BREAK_FALLING_BLOCK_VERSION;

    // NOLINTEND
};
