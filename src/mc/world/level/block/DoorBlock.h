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

class DoorBlock : public ::BlockLegacy {
public:
    // DoorBlock inner types define
    enum class DoorType {};

public:
    // prevent constructor by default
    DoorBlock& operator=(DoorBlock const&);
    DoorBlock(DoorBlock const&);
    DoorBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1DoorBlock@@UEAA@XZ
    virtual ~DoorBlock();

    // vIndex: 2, symbol: ?getNextBlockPermutation@DoorBlock@@UEBAPEBVBlock@@AEBV2@@Z
    virtual class Block const* getNextBlockPermutation(class Block const&) const;

    // vIndex: 5, symbol:
    // ?getCollisionShape@DoorBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9, symbol: ?getOutline@DoorBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 10, symbol:
    // ?getVisualShapeInWorld@DoorBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getVisualShapeInWorld(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 13, symbol: ?getLiquidClipVolume@DoorBlock@@UEBA_NAEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@AEAVAABB@@@Z
    virtual bool getLiquidClipVolume(class Block const&, class BlockSource&, class BlockPos const&, class AABB&) const;

    // vIndex: 40, symbol: ?isDoorBlock@DoorBlock@@UEBA_NXZ
    virtual bool isDoorBlock() const;

    // vIndex: 50, symbol: ?canFillAtPos@DoorBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual bool canFillAtPos(class BlockSource& region, class BlockPos const& pos, class Block const&) const;

    // vIndex: 52, symbol: ?onFillBlock@DoorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
    virtual void onFillBlock(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 61, symbol: ?checkIsPathable@DoorBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 65, symbol: ?onRedstoneUpdate@DoorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z
    virtual void
    onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 71, symbol: ?setupRedstoneComponent@DoorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 85, symbol: ?mayPlace@DoorBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 92, symbol: ?neighborChanged@DoorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 93, symbol: ?getSecondPart@DoorBlock@@UEBA_NAEBVIConstBlockSource@@AEBVBlockPos@@AEAV3@@Z
    virtual bool
    getSecondPart(class IConstBlockSource const& region, class BlockPos const& pos, class BlockPos& out) const;

    // vIndex: 95, symbol: ?asItemInstance@DoorBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 128, symbol: ?getVariant@DoorBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 145, symbol: ?onPlace@DoorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?tick@DoorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 149, symbol: ?isInteractiveBlock@DoorBlock@@UEBA_NXZ
    virtual bool isInteractiveBlock() const;

    // vIndex: 151, symbol: ?use@DoorBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 153, symbol: ?canSurvive@DoorBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 160, symbol: ?_onHitByActivatingAttack@DoorBlock@@EEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
    virtual void _onHitByActivatingAttack(class BlockSource&, class BlockPos const&, class Actor*) const;

    // vIndex: 162, symbol: ?entityInside@DoorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
    virtual void entityInside(class BlockSource& region, class BlockPos const& pos, class Actor& entity) const;

    // symbol:
    // ??0DoorBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@W4DoorType@0@@Z
    MCAPI DoorBlock(std::string const& nameId, int id, class Material const& material, ::DoorBlock::DoorType type);

    // symbol: ?getBlockedDirection@DoorBlock@@QEBA?AW4Type@Direction@@AEBVIConstBlockSource@@AEBVBlockPos@@@Z
    MCAPI ::Direction::Type getBlockedDirection(class IConstBlockSource const& region, class BlockPos const& pos) const;

    // symbol: ?getDoorThickness@DoorBlock@@QEBAMXZ
    MCAPI float getDoorThickness() const;

    // symbol: ?isToggled@DoorBlock@@QEBA_NAEBVIConstBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool isToggled(class IConstBlockSource const& region, class BlockPos const& pos) const;

    // symbol: ?setToggled@DoorBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@_N@Z
    MCAPI void
    setToggled(class BlockSource& region, class BlockPos const& pos, class Actor* sourceActor, bool toggled) const;

    // symbol: ?getDoorBlocks@DoorBlock@@SAXAEBVIConstBlockSource@@AEBVBlockLegacy@@AEBVBlockPos@@AEAPEBVBlock@@3@Z
    MCAPI static void
    getDoorBlocks(class IConstBlockSource const&, class BlockLegacy const&, class BlockPos const&, class Block const*&, class Block const*&);

    // symbol: ?getDoorFacing@DoorBlock@@SAEH@Z
    MCAPI static uchar getDoorFacing(int facing);

    // NOLINTEND
};
