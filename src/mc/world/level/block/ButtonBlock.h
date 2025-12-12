#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class GetCollisionShapeInterface;
class IConstBlockSource;
class Vec3;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class ButtonBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const> mSensitive;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::AABB getCollisionShape(
        ::Block const& block,
        ::IConstBlockSource const&,
        ::BlockPos const&                                  pos,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const /*override*/;

    virtual ::AABB const&
    getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const
        /*override*/;

    virtual ::AABB const& getVisualShape(::Block const& block, ::AABB& bufferAABB) const /*override*/;

    virtual ::AABB const& getUIShape(::Block const& block, ::AABB& bufferAABB) const /*override*/;

    virtual void addAABBs(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB const*              intersectTestBox,
        ::std::vector<::AABB>&     inoutBoxes
    ) const /*override*/;

    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const /*override*/;

    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    virtual void entityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor&) const /*override*/;

    virtual bool isAttachedTo(::BlockSource& region, ::BlockPos const& pos, ::BlockPos& outAttachedTo) const
        /*override*/;

    virtual bool isInteractiveBlock() const /*override*/;

    virtual int getVariant(::Block const& block) const /*override*/;

    virtual bool canSpawnOn(::Actor*) const /*override*/;

    virtual bool isButtonBlock() const /*override*/;

    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const
        /*override*/;

    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    virtual void _onHitByActivatingAttack(::BlockSource& region, ::BlockPos const& pos, ::Actor*) const /*override*/;

    virtual ~ButtonBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void
    _buttonUnpressed(::BlockSource& region, ::Block const& buttonBlock, ::Vec3 const& pos, ::Actor* sourceActor) const;

    MCAPI void _checkPressed(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI ::AABB _getShape(bool pressed, uchar facingDirection, bool ignorePressedState) const;

    MCAPI void
    buttonPressed(::BlockSource& region, ::Block const& buttonBlock, ::Vec3 const& pos, ::Actor* sourceActor) const;

    MCFOLD void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool canAttachTo(::BlockSource& region, ::BlockPos const& pos, uchar facing);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::AABB $getCollisionShape(
        ::Block const& block,
        ::IConstBlockSource const&,
        ::BlockPos const&                                  pos,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCAPI ::AABB const&
    $getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const;

    MCAPI ::AABB const& $getVisualShape(::Block const& block, ::AABB& bufferAABB) const;

    MCAPI ::AABB const& $getUIShape(::Block const& block, ::AABB& bufferAABB) const;

    MCAPI void $addAABBs(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB const*              intersectTestBox,
        ::std::vector<::AABB>&     inoutBoxes
    ) const;

    MCFOLD bool $mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const;

    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCFOLD ::Block const& $getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    MCAPI void $entityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor&) const;

    MCAPI bool $isAttachedTo(::BlockSource& region, ::BlockPos const& pos, ::BlockPos& outAttachedTo) const;

    MCFOLD bool $isInteractiveBlock() const;

    MCFOLD int $getVariant(::Block const& block) const;

    MCFOLD bool $canSpawnOn(::Actor*) const;

    MCFOLD bool $isButtonBlock() const;

    MCFOLD bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    MCFOLD bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);

    MCAPI void $_onHitByActivatingAttack(::BlockSource& region, ::BlockPos const& pos, ::Actor*) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
