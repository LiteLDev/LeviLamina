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
    // vIndex: 0
    virtual ~HangingSignBlock() = default;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 11
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 23
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType type) const;

    // vIndex: 62
    virtual bool checkIsPathable(class Actor& entity, class BlockPos const&, class BlockPos const& pathPos) const;

    // vIndex: 85
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 163
    virtual float getYRotationInDegrees(class Block const& block) const;

    // vIndex: 165
    virtual class ItemInstance _getItemInstance() const;

    MCAPI HangingSignBlock(std::string const& nameId, int id, bool onGround, ::SignBlock::SignType signType);

    MCAPI static bool isDoubleChainHangingSign(class Block const& block);

    MCAPI static bool isSideAttachedHangingSign(class Block const& block);

    MCAPI static bool isVShapedHangingSign(class Block const& block);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool _canAttachTo(class BlockSource& region, class BlockPos attachPos, uchar, uchar ourFace) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static bool _isHangingSign(class Block const& block);

    // NOLINTEND
};
