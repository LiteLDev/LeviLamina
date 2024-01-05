#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/enums/SignTextSide.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class SignBlock : public ::ActorBlock {
public:
    // SignBlock inner types declare
    // clang-format off
    struct SignInteractionResult;
    // clang-format on

    // SignBlock inner types define
    enum class SignType {};

    struct SignInteractionResult {
    public:
        // prevent constructor by default
        SignInteractionResult& operator=(SignInteractionResult const&);
        SignInteractionResult(SignInteractionResult const&);
        SignInteractionResult();
    };

public:
    // prevent constructor by default
    SignBlock& operator=(SignBlock const&);
    SignBlock(SignBlock const&);
    SignBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SignBlock@@UEAA@XZ
    virtual ~SignBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@SignBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 11, symbol: ?getVisualShape@SignBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // vIndex: 27, symbol: __unk_vfn_27
    virtual void __unk_vfn_27();

    // vIndex: 28, symbol: __unk_vfn_28
    virtual void __unk_vfn_28();

    // vIndex: 29, symbol: __unk_vfn_29
    virtual void __unk_vfn_29();

    // vIndex: 30, symbol: __unk_vfn_30
    virtual void __unk_vfn_30();

    // vIndex: 31, symbol: __unk_vfn_31
    virtual void __unk_vfn_31();

    // vIndex: 33, symbol: __unk_vfn_33
    virtual void __unk_vfn_33();

    // vIndex: 34, symbol: __unk_vfn_34
    virtual void __unk_vfn_34();

    // vIndex: 35, symbol: __unk_vfn_35
    virtual void __unk_vfn_35();

    // vIndex: 36, symbol: __unk_vfn_36
    virtual void __unk_vfn_36();

    // vIndex: 37, symbol: __unk_vfn_37
    virtual void __unk_vfn_37();

    // vIndex: 38, symbol: __unk_vfn_38
    virtual void __unk_vfn_38();

    // vIndex: 40, symbol: __unk_vfn_40
    virtual void __unk_vfn_40();

    // vIndex: 41, symbol: __unk_vfn_41
    virtual void __unk_vfn_41();

    // vIndex: 42, symbol: __unk_vfn_42
    virtual void __unk_vfn_42();

    // vIndex: 43, symbol: __unk_vfn_43
    virtual void __unk_vfn_43();

    // vIndex: 44, symbol: __unk_vfn_44
    virtual void __unk_vfn_44();

    // vIndex: 45, symbol: __unk_vfn_45
    virtual void __unk_vfn_45();

    // vIndex: 48, symbol: __unk_vfn_48
    virtual void __unk_vfn_48();

    // vIndex: 54, symbol: __unk_vfn_54
    virtual void __unk_vfn_54();

    // vIndex: 55, symbol: __unk_vfn_55
    virtual void __unk_vfn_55();

    // vIndex: 61, symbol: ?checkIsPathable@SignBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 67, symbol: __unk_vfn_67
    virtual void __unk_vfn_67();

    // vIndex: 74, symbol: __unk_vfn_74
    virtual void __unk_vfn_74();

    // vIndex: 84, symbol: ?mayPlace@SignBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    // vIndex: 92, symbol: ?neighborChanged@SignBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 96, symbol: ?asItemInstance@SignBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 109, symbol: __unk_vfn_109
    virtual void __unk_vfn_109();

    // vIndex: 110, symbol: __unk_vfn_110
    virtual void __unk_vfn_110();

    // vIndex: 111, symbol: __unk_vfn_111
    virtual void __unk_vfn_111();

    // vIndex: 114, symbol: __unk_vfn_114
    virtual void __unk_vfn_114();

    // vIndex: 117, symbol: __unk_vfn_117
    virtual void __unk_vfn_117();

    // vIndex: 138, symbol: __unk_vfn_138
    virtual void __unk_vfn_138();

    // vIndex: 149, symbol: __unk_vfn_149
    virtual void __unk_vfn_149();

    // vIndex: 150, symbol: ?tick@SignBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 152, symbol: __unk_vfn_152
    virtual void __unk_vfn_152();

    // vIndex: 154, symbol: ?use@SignBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 155, symbol: __unk_vfn_155
    virtual void __unk_vfn_155();

    // vIndex: 156, symbol: ?canSurvive@SignBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 164, symbol: ?getResourceItem@SignBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
    virtual class ItemInstance getResourceItem(class Randomize&, class Block const&, int) const;

    // vIndex: 168, symbol: ?getEntityResourceItem@SignBlock@@UEBA?AVItemInstance@@AEAVRandomize@@AEBVBlockActor@@H@Z
    virtual class ItemInstance getEntityResourceItem(class Randomize&, class BlockActor const&, int) const;

    // vIndex: 169, symbol: ?getYRotationInDegrees@SignBlock@@UEBAMAEBVBlock@@@Z
    virtual float getYRotationInDegrees(class Block const& block) const;

    // vIndex: 170, symbol: ?_canSurvive@SignBlock@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
    virtual bool _canSurvive(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    // vIndex: 171, symbol: ?_getItemInstance@SignBlock@@MEBA?AVItemInstance@@XZ
    virtual class ItemInstance _getItemInstance() const;

    // symbol: ?isInteractiveBlock@SignBlock@@UEBA_NXZ
    MCVAPI bool isInteractiveBlock() const;

    // symbol: ??0SignBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_NW4SignType@0@@Z
    MCAPI SignBlock(std::string const& nameId, int, bool onGround, ::SignBlock::SignType signType);

    // symbol: ?getSignTextColorFromDyeItem@SignBlock@@SA?AVColor@mce@@AEBVItem@@@Z
    MCAPI static class mce::Color getSignTextColorFromDyeItem(class Item const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_canChangeSign@SignBlock@@CA_NAEAVSignBlockActor@@AEAVPlayer@@@Z
    MCAPI static bool _canChangeSign(class SignBlockActor& blockActor, class Player& player);

    // symbol:
    // ?_getInteractResult@SignBlock@@CA?AUSignInteractionResult@1@AEAVSignBlockActor@@W4SignTextSide@@AEAVItemStack@@AEAVPlayer@@AEBVBlockPos@@E@Z
    MCAPI static struct SignBlock::SignInteractionResult _getInteractResult(
        class SignBlockActor& blockActor,
        ::SignTextSide        side,
        class ItemStack&      itemStack,
        class Player&         player,
        class BlockPos const& pos,
        uchar                 face
    );

    // NOLINTEND
};
