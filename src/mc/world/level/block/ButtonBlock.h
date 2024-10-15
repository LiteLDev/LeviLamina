#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

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
    // vIndex: 0
    virtual ~ButtonBlock() = default;

    // vIndex: 5
    virtual class AABB getCollisionShape(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const&                                      pos,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    // vIndex: 8
    virtual void addAABBs(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const&    pos,
        class AABB const*        intersectTestBox,
        std::vector<class AABB>& inoutBoxes
    ) const;

    // vIndex: 9
    virtual class AABB const& getOutline(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const& pos,
        class AABB&           bufferValue
    ) const;

    // vIndex: 11
    virtual class AABB const& getVisualShape(class Block const& block, class AABB& bufferAABB) const;

    // vIndex: 12
    virtual class AABB const& getUIShape(class Block const& block, class AABB& bufferAABB) const;

    // vIndex: 43
    virtual bool isButtonBlock() const;

    // vIndex: 47
    virtual bool isSignalSource() const;

    // vIndex: 59
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    // vIndex: 62
    virtual bool checkIsPathable(class Actor&, class BlockPos const&, class BlockPos const&) const;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 85
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar facing) const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 98
    virtual class Block const&
    getPlacementBlock(class Actor const&, class BlockPos const&, uchar face, class Vec3 const&, int) const;

    // vIndex: 100
    virtual bool
    isAttachedTo(class BlockSource& region, class BlockPos const& pos, class BlockPos& outAttachedTo) const;

    // vIndex: 129
    virtual int getVariant(class Block const&) const;

    // vIndex: 130
    virtual bool canSpawnOn(class Actor*) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 161
    virtual void _onHitByActivatingAttack(class BlockSource& region, class BlockPos const& pos, class Actor*) const;

    // vIndex: 162
    virtual void entityInside(class BlockSource& region, class BlockPos const& pos, class Actor&) const;

    MCAPI void buttonPressed(
        class BlockSource& region,
        class Block const& buttonBlock,
        class Vec3 const&  pos,
        class Actor*       sourceActor
    ) const;

    MCAPI static bool canAttachTo(class BlockSource& region, class BlockPos const& pos, uchar facing);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI ButtonBlock(std::string const& nameId, int id, class Material const& material, bool sensitive);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _buttonUnpressed(
        class BlockSource& region,
        class Block const& buttonBlock,
        class Vec3 const&  pos,
        class Actor*       sourceActor
    ) const;

    MCAPI void _checkPressed(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI class AABB _getShape(bool pressed, uchar facingDirection, bool ignorePressedState) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, class Material const& material, bool sensitive);

    MCAPI void _onHitByActivatingAttack$(class BlockSource& region, class BlockPos const& pos, class Actor*) const;

    MCAPI void addAABBs$(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const&    pos,
        class AABB const*        intersectTestBox,
        std::vector<class AABB>& inoutBoxes
    ) const;

    MCAPI bool canSpawnOn$(class Actor*) const;

    MCAPI bool canSurvive$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool checkIsPathable$(class Actor&, class BlockPos const&, class BlockPos const&) const;

    MCAPI void entityInside$(class BlockSource& region, class BlockPos const& pos, class Actor&) const;

    MCAPI class AABB getCollisionShape$(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const&                                      pos,
        class optional_ref<class GetCollisionShapeInterface const> entity
    ) const;

    MCAPI class AABB const& getOutline$(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const& pos,
        class AABB&           bufferValue
    ) const;

    MCAPI class Block const&
    getPlacementBlock$(class Actor const&, class BlockPos const&, uchar face, class Vec3 const&, int) const;

    MCAPI class AABB const& getUIShape$(class Block const& block, class AABB& bufferAABB) const;

    MCAPI int getVariant$(class Block const&) const;

    MCAPI class AABB const& getVisualShape$(class Block const& block, class AABB& bufferAABB) const;

    MCAPI bool isAttachedTo$(class BlockSource& region, class BlockPos const& pos, class BlockPos& outAttachedTo) const;

    MCAPI bool isButtonBlock$() const;

    MCAPI bool isInteractiveBlock$() const;

    MCAPI bool isSignalSource$() const;

    MCAPI bool mayPlace$(class BlockSource& region, class BlockPos const& pos, uchar facing) const;

    MCAPI bool mayPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void
    neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void setupRedstoneComponent$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool shouldConnectToRedstone$(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    MCAPI bool use$(class Player& player, class BlockPos const& pos, uchar) const;

    // NOLINTEND
};
