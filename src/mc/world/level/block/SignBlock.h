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
    // vIndex: 0
    virtual ~SignBlock() = default;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 11
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 62
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 85
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 163
    virtual float getYRotationInDegrees(class Block const& block) const;

    // vIndex: 164
    virtual bool _canSurvive(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    // vIndex: 165
    virtual class ItemInstance _getItemInstance() const;

    MCAPI SignBlock(std::string const& nameId, int id, bool onGround, ::SignBlock::SignType signType);

    MCAPI static class mce::Color getSignTextColorFromDyeItem(class Item const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static bool _canChangeSign(class SignBlockActor& blockActor, class Player& player);

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
