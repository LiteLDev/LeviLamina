#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/actor/SignTextSide.h"

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
    virtual class AABB const& getVisualShape(class Block const& block, class AABB& bufferAABB) const;

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

    MCAPI static class mce::Color getSignTextColorFromDyeItem(class Item const& dyeItem);

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool _canSurvive$(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    MCAPI class ItemInstance _getItemInstance$() const;

    MCAPI class ItemInstance asItemInstance$(class Block const&, class BlockActor const*) const;

    MCAPI bool canSurvive$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool checkIsPathable$(class Actor&, class BlockPos const&, class BlockPos const&) const;

    MCAPI class AABB
    getCollisionShape$(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI class AABB const& getVisualShape$(class Block const& block, class AABB& bufferAABB) const;

    MCAPI float getYRotationInDegrees$(class Block const& block) const;

    MCAPI bool isInteractiveBlock$() const;

    MCAPI bool mayPlace$(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    MCAPI void
    neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    MCAPI bool use$(class Player& player, class BlockPos const& pos, uchar face) const;

    // NOLINTEND
};
