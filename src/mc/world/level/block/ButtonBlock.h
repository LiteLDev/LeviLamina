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

class ButtonBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    ButtonBlock& operator=(ButtonBlock const&);
    ButtonBlock(ButtonBlock const&);
    ButtonBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ButtonBlock@@UEAA@XZ
    virtual ~ButtonBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@ButtonBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 8, symbol:
    // ?addAABBs@ButtonBlock@@UEBAXAEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@PEBVAABB@@AEAV?$vector@VAABB@@V?$allocator@VAABB@@@std@@@std@@@Z
    virtual void
    addAABBs(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB const*, std::vector<class AABB>&)
        const;

    // vIndex: 9, symbol:
    // ?getOutline@ButtonBlock@@UEBAAEBVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@AEAV2@@Z
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 11, symbol: ?getVisualShape@ButtonBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 12, symbol: ?getUIShape@ButtonBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getUIShape(class Block const& block, class AABB& bufferAABB) const;

    // vIndex: 42, symbol: ?isButtonBlock@ButtonBlock@@UEBA_NXZ
    virtual bool isButtonBlock() const;

    // vIndex: 46, symbol: ?isSignalSource@ButtonBlock@@UEBA_NXZ
    virtual bool isSignalSource() const;

    // vIndex: 58, symbol:
    // ?shouldConnectToRedstone@ButtonBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@W4Type@Direction@@@Z
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    // vIndex: 61, symbol: ?checkIsPathable@ButtonBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 71, symbol: ?setupRedstoneComponent@ButtonBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 84, symbol: ?mayPlace@ButtonBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar facing) const;

    // vIndex: 85, symbol: ?mayPlace@ButtonBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 92, symbol: ?neighborChanged@ButtonBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 97, symbol: ?getPlacementBlock@ButtonBlock@@UEBAAEBVBlock@@AEBVActor@@AEBVBlockPos@@EAEBVVec3@@H@Z
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 99, symbol: ?isAttachedTo@ButtonBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAV3@@Z
    virtual bool
    isAttachedTo(class BlockSource& region, class BlockPos const& pos, class BlockPos& outAttachedTo) const;

    // vIndex: 128, symbol: ?getVariant@ButtonBlock@@UEBAHAEBVBlock@@@Z
    virtual int getVariant(class Block const& block) const;

    // vIndex: 129, symbol: ?canSpawnOn@ButtonBlock@@UEBA_NPEAVActor@@@Z
    virtual bool canSpawnOn(class Actor*) const;

    // vIndex: 145, symbol: ?onPlace@ButtonBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 147, symbol: ?tick@ButtonBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 149, symbol: ?isInteractiveBlock@ButtonBlock@@UEBA_NXZ
    virtual bool isInteractiveBlock() const;

    // vIndex: 151, symbol: ?use@ButtonBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 153, symbol: ?canSurvive@ButtonBlock@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 160, symbol: ?_onHitByActivatingAttack@ButtonBlock@@EEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z
    virtual void _onHitByActivatingAttack(class BlockSource&, class BlockPos const&, class Actor*) const;

    // vIndex: 162, symbol: ?entityInside@ButtonBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z
    virtual void entityInside(class BlockSource& region, class BlockPos const& pos, class Actor&) const;

    // symbol: ?buttonPressed@ButtonBlock@@QEBAXAEAVBlockSource@@AEBVBlock@@AEBVVec3@@PEAVActor@@@Z
    MCAPI void buttonPressed(
        class BlockSource& region,
        class Block const& buttonBlock,
        class Vec3 const&  pos,
        class Actor*       sourceActor
    ) const;

    // symbol: ?canAttachTo@ButtonBlock@@SA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
    MCAPI static bool canAttachTo(class BlockSource& region, class BlockPos const& pos, uchar facing);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0ButtonBlock@@IEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@_N@Z
    MCAPI ButtonBlock(std::string const& nameId, int id, class Material const& material, bool sensitive);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_buttonUnpressed@ButtonBlock@@AEBAXAEAVBlockSource@@AEBVBlock@@AEBVVec3@@PEAVActor@@@Z
    MCAPI void _buttonUnpressed(
        class BlockSource& region,
        class Block const& buttonBlock,
        class Vec3 const&  pos,
        class Actor*       sourceActor
    ) const;

    // symbol: ?_checkPressed@ButtonBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI void _checkPressed(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?_getShape@ButtonBlock@@AEBA?AVAABB@@_NE0@Z
    MCAPI class AABB _getShape(bool, uchar, bool) const;

    // NOLINTEND
};
