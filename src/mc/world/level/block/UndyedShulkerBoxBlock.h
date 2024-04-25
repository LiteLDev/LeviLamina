#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ChestBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class UndyedShulkerBoxBlock : public ::ChestBlock {
public:
    // prevent constructor by default
    UndyedShulkerBoxBlock& operator=(UndyedShulkerBoxBlock const&);
    UndyedShulkerBoxBlock(UndyedShulkerBoxBlock const&);
    UndyedShulkerBoxBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1UndyedShulkerBoxBlock@@UEAA@XZ
    virtual ~UndyedShulkerBoxBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@UndyedShulkerBoxBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9, symbol:
    // ?getOutline@UndyedShulkerBoxBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 23, symbol: ?canProvideSupport@UndyedShulkerBoxBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const&, uchar, ::BlockSupportType) const;

    // vIndex: 63, symbol: ?dispense@UndyedShulkerBoxBlock@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    virtual bool
    dispense(class BlockSource& region, class Container& container, int slot, class Vec3 const& pos, uchar face) const;

    // vIndex: 71, symbol: ?setupRedstoneComponent@UndyedShulkerBoxBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource&, class BlockPos const&) const;

    // vIndex: 89, symbol: ?breaksFallingBlocks@UndyedShulkerBoxBlock@@UEBA_NAEBVBlock@@VBaseGameVersion@@@Z
    virtual bool breaksFallingBlocks(class Block const&, class BaseGameVersion version) const;

    // vIndex: 94, symbol: ?playerWillDestroy@UndyedShulkerBoxBlock@@UEBAPEBVBlock@@AEAVPlayer@@AEBVBlockPos@@AEBV2@@Z
    virtual class Block const*
    playerWillDestroy(class Player& player, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 95, symbol: ?asItemInstance@UndyedShulkerBoxBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 97, symbol:
    // ?getPlacementBlock@UndyedShulkerBoxBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const&
    getPlacementBlock(class Actor const&, class BlockPos const&, uchar, class Vec3 const&, int itemValue) const;

    // vIndex: 120, symbol: ?getColor@UndyedShulkerBoxBlock@@UEBAHAEBVBlock@@@Z
    virtual int getColor(class Block const&) const;

    // symbol: ??0UndyedShulkerBoxBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI UndyedShulkerBoxBlock(std::string const& nameId, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isValidAttach@UndyedShulkerBoxBlock@@AEBA_NAEAVBlockSource@@VBlockPos@@E@Z
    MCAPI bool _isValidAttach(class BlockSource& region, class BlockPos pos, uchar direction) const;

    // symbol: ?_tryGetShape@UndyedShulkerBoxBlock@@CA_NAEBVIConstBlockSource@@AEBVBlockPos@@AEAVAABB@@@Z
    MCAPI static bool _tryGetShape(class IConstBlockSource const&, class BlockPos const&, class AABB&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?SHULKER_BOX_DOESNT_BREAK_FALLING_BLOCK_VERSION@UndyedShulkerBoxBlock@@1VBaseGameVersion@@B
    MCAPI static class BaseGameVersion const SHULKER_BOX_DOESNT_BREAK_FALLING_BLOCK_VERSION;

    // NOLINTEND
};
