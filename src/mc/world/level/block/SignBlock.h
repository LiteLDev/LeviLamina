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

    // vIndex: 61, symbol: ?checkIsPathable@SignBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 84, symbol: ?mayPlace@SignBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    // vIndex: 92, symbol: ?neighborChanged@SignBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 95, symbol: ?asItemInstance@SignBlock@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 147, symbol: ?tick@SignBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 149, symbol: ?isInteractiveBlock@SignBlock@@UEBA_NXZ
    virtual bool isInteractiveBlock() const;

    // vIndex: 151, symbol: ?use@SignBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 153, symbol: ?canSurvive@SignBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 163, symbol: ?getYRotationInDegrees@SignBlock@@UEBAMAEBVBlock@@@Z
    virtual float getYRotationInDegrees(class Block const& block) const;

    // vIndex: 164, symbol: ?_canSurvive@SignBlock@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
    virtual bool _canSurvive(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    // vIndex: 165, symbol: ?_getItemInstance@SignBlock@@MEBA?AVItemInstance@@XZ
    virtual class ItemInstance _getItemInstance() const;

    // symbol: ??0SignBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_NW4SignType@0@@Z
    MCAPI SignBlock(std::string const& nameId, int id, bool onGround, ::SignBlock::SignType signType);

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
        class ItemStack&      item,
        class Player&         player,
        class BlockPos const& pos,
        uchar                 face
    );

    // NOLINTEND
};
