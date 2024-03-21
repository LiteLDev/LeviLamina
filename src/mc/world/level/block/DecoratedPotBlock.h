#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/FaceDirectionalActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class DecoratedPotBlock : public ::FaceDirectionalActorBlock {
public:
    // prevent constructor by default
    DecoratedPotBlock& operator=(DecoratedPotBlock const&);
    DecoratedPotBlock(DecoratedPotBlock const&);
    DecoratedPotBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DecoratedPotBlock@@UEAA@XZ
    virtual ~DecoratedPotBlock() = default;

    // vIndex: 17, symbol: ?onProjectileHit@DecoratedPotBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVActor@@@Z
    virtual void onProjectileHit(class BlockSource&, class BlockPos const&, class Actor const&) const;

    // vIndex: 23, symbol: ?canProvideSupport@DecoratedPotBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType type) const;

    // vIndex: 56, symbol: ?canContainLiquid@DecoratedPotBlock@@UEBA_NXZ
    virtual bool canContainLiquid() const;

    // vIndex: 61, symbol: ?checkIsPathable@DecoratedPotBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 94, symbol: ?playerWillDestroy@DecoratedPotBlock@@UEBAPEBVBlock@@AEAVPlayer@@AEBVBlockPos@@AEBV2@@Z
    virtual class Block const*
    playerWillDestroy(class Player& player, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 95, symbol: ?asItemInstance@DecoratedPotBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const* blockActor) const;

    // vIndex: 110, symbol: ?hasComparatorSignal@DecoratedPotBlock@@UEBA_NXZ
    virtual bool hasComparatorSignal() const;

    // vIndex: 111, symbol: ?getComparatorSignal@DecoratedPotBlock@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@E@Z
    virtual int getComparatorSignal(class BlockSource&, class BlockPos const&, class Block const&, uchar) const;

    // vIndex: 142, symbol: ?onRemove@DecoratedPotBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onRemove(class BlockSource&, class BlockPos const&) const;

    // vIndex: 149, symbol: ?isInteractiveBlock@DecoratedPotBlock@@UEBA_NXZ
    virtual bool isInteractiveBlock() const;

    // vIndex: 151, symbol: ?use@DecoratedPotBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player&, class BlockPos const&, uchar) const;

    // symbol: ??0DecoratedPotBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
    MCAPI DecoratedPotBlock(std::string const& name, int id);

    // symbol:
    // ?getItemInstanceUserData@DecoratedPotBlock@@SA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@V?$not_null@PEBVDecoratedPotBlockActor@@@gsl@@@Z
    MCAPI static std::unique_ptr<class CompoundTag>
        getItemInstanceUserData(gsl::not_null<class DecoratedPotBlockActor const*>);

    // symbol:
    // ?getSherdItems@DecoratedPotBlock@@SA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEBVDecoratedPotBlockActor@@@Z
    MCAPI static std::vector<class ItemStack> getSherdItems(class DecoratedPotBlockActor const&);

    // symbol: ?isShatteringItem@DecoratedPotBlock@@SA_NAEBVItemStack@@@Z
    MCAPI static bool isShatteringItem(class ItemStack const&);

    // NOLINTEND
};
