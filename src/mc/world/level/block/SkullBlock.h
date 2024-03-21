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

class SkullBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    SkullBlock& operator=(SkullBlock const&);
    SkullBlock(SkullBlock const&);
    SkullBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SkullBlock@@UEAA@XZ
    virtual ~SkullBlock() = default;

    // vIndex: 11, symbol: ?getVisualShape@SkullBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 23, symbol: ?canProvideSupport@SkullBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const& block, uchar face, ::BlockSupportType type) const;

    // vIndex: 55, symbol: ?waterSpreadCausesSpawn@SkullBlock@@UEBA_NXZ
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 56, symbol: ?canContainLiquid@SkullBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 71, symbol: ?setupRedstoneComponent@SkullBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 85, symbol: ?mayPlace@SkullBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 95, symbol: ?asItemInstance@SkullBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const* blockActor) const;

    // vIndex: 97, symbol: ?getPlacementBlock@SkullBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 118, symbol:
    // ?buildDescriptionId@SkullBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
    virtual std::string buildDescriptionId(class Block const&) const;

    // vIndex: 145, symbol: ?onPlace@SkullBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ??0SkullBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI SkullBlock(std::string const& nameId, int id);

    // symbol: ?checkMobSpawn@SkullBlock@@QEBA_NAEAVLevel@@AEAVBlockSource@@AEBVBlockPos@@AEAVSkullBlockActor@@@Z
    MCAPI bool checkMobSpawn(
        class Level&           level,
        class BlockSource&     region,
        class BlockPos const&  pos,
        class SkullBlockActor& placedSkull
    ) const;

    // symbol: ?getTypeDescriptionId@SkullBlock@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI static std::string getTypeDescriptionId(int);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_updatedDragonCircuit@SkullBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _updatedDragonCircuit(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
