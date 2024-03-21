#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/SignBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class HangingSignBlock : public ::SignBlock {
public:
    // prevent constructor by default
    HangingSignBlock& operator=(HangingSignBlock const&);
    HangingSignBlock(HangingSignBlock const&);
    HangingSignBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HangingSignBlock@@UEAA@XZ
    virtual ~HangingSignBlock() = default;

    // vIndex: 5, symbol:
    // ?getCollisionShape@HangingSignBlock@@UEBA?AVAABB@@AEBVBlock@@AEBVIConstBlockSource@@AEBVBlockPos@@V?$optional_ref@$$CBVGetCollisionShapeInterface@@@@@Z
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 11, symbol: ?getVisualShape@HangingSignBlock@@UEBAAEBVAABB@@AEBVBlock@@AEAV2@@Z
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 23, symbol: ?canProvideSupport@HangingSignBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType type) const;

    // vIndex: 61, symbol: ?checkIsPathable@HangingSignBlock@@UEBA_NAEAVActor@@AEBVBlockPos@@1@Z
    virtual bool checkIsPathable(class Actor& entity, class BlockPos const&, class BlockPos const& pathPos) const;

    // vIndex: 84, symbol: ?mayPlace@HangingSignBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@E@Z
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    // vIndex: 153, symbol: ?canSurvive@HangingSignBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 163, symbol: ?getYRotationInDegrees@HangingSignBlock@@UEBAMAEBVBlock@@@Z
    virtual float getYRotationInDegrees(class Block const& block) const;

    // vIndex: 165, symbol: ?_getItemInstance@HangingSignBlock@@MEBA?AVItemInstance@@XZ
    virtual class ItemInstance _getItemInstance() const;

    // symbol:
    // ??0HangingSignBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H_NW4SignType@SignBlock@@@Z
    MCAPI HangingSignBlock(std::string const& nameId, int id, bool onGround, ::SignBlock::SignType signType);

    // symbol: ?isDoubleChainHangingSign@HangingSignBlock@@SA_NAEBVBlock@@@Z
    MCAPI static bool isDoubleChainHangingSign(class Block const& block);

    // symbol: ?isSideAttachedHangingSign@HangingSignBlock@@SA_NAEBVBlock@@@Z
    MCAPI static bool isSideAttachedHangingSign(class Block const& block);

    // symbol: ?isVShapedHangingSign@HangingSignBlock@@SA_NAEBVBlock@@@Z
    MCAPI static bool isVShapedHangingSign(class Block const& block);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_canAttachTo@HangingSignBlock@@IEBA_NAEAVBlockSource@@VBlockPos@@EE@Z
    MCAPI bool _canAttachTo(class BlockSource& region, class BlockPos attachPos, uchar, uchar ourFace) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isHangingSign@HangingSignBlock@@CA_NAEBVBlock@@@Z
    MCAPI static bool _isHangingSign(class Block const& block);

    // NOLINTEND
};
