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
#include "mc/world/level/block/LeverDirection.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class LeverBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    LeverBlock& operator=(LeverBlock const&);
    LeverBlock(LeverBlock const&);
    LeverBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LeverBlock() = default;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 11
    virtual class AABB const& getVisualShape(class Block const& block, class AABB& bufferAABB) const;

    // vIndex: 44
    virtual bool isLeverBlock() const;

    // vIndex: 47
    virtual bool isSignalSource() const;

    // vIndex: 53
    virtual void onFillBlock(class BlockSource& region, class BlockPos const& pos, class Block const&) const;

    // vIndex: 59
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 85
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 98
    virtual class Block const&
    getPlacementBlock(class Actor const& by, class BlockPos const&, uchar face, class Vec3 const&, int itemValue) const;

    // vIndex: 100
    virtual bool
    isAttachedTo(class BlockSource& region, class BlockPos const& pos, class BlockPos& outAttachedTo) const;

    // vIndex: 130
    virtual bool canSpawnOn(class Actor*) const;

    // vIndex: 143
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

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

    MCAPI LeverBlock(std::string const& nameId, int id);

    MCAPI void toggle(class BlockSource& region, class BlockPos const& pos, class Player* player) const;

    MCAPI static ::LeverDirection getLeverFacing(int facing);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void _onHitByActivatingAttack$(class BlockSource& region, class BlockPos const& pos, class Actor*) const;

    MCAPI bool canSpawnOn$(class Actor*) const;

    MCAPI bool canSurvive$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI class AABB
    getCollisionShape$(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    MCAPI class Block const&
    getPlacementBlock$(class Actor const& by, class BlockPos const&, uchar face, class Vec3 const&, int itemValue)
        const;

    MCAPI class AABB const& getVisualShape$(class Block const& block, class AABB& bufferAABB) const;

    MCAPI bool isAttachedTo$(class BlockSource& region, class BlockPos const& pos, class BlockPos& outAttachedTo) const;

    MCAPI bool isInteractiveBlock$() const;

    MCAPI bool isLeverBlock$() const;

    MCAPI bool isSignalSource$() const;

    MCAPI bool mayPlace$(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    MCAPI bool mayPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void
    neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    MCAPI void onFillBlock$(class BlockSource& region, class BlockPos const& pos, class Block const&) const;

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void onRemove$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void setupRedstoneComponent$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool shouldConnectToRedstone$(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    MCAPI bool use$(class Player& player, class BlockPos const& pos, uchar) const;

    // NOLINTEND
};
