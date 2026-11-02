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
class Material;
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
    // prevent constructor by default
    ButtonBlock();

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

    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar facing) const /*override*/;

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

    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const
        /*override*/;

    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    virtual void _onHitByActivatingAttack(::BlockSource& region, ::BlockPos const& pos, ::Actor*) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ButtonBlock(::std::string const& nameId, int id, ::Material const& material, bool sensitive);

    MCNAPI void
    _buttonUnpressed(::BlockSource& region, ::Block const& buttonBlock, ::Vec3 const& pos, ::Actor* sourceActor) const;

    MCNAPI void _checkPressed(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void
    buttonPressed(::BlockSource& region, ::Block const& buttonBlock, ::Vec3 const& pos, ::Actor* sourceActor) const;

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool canAttachTo(::BlockSource& region, ::BlockPos const& pos, uchar facing);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& nameId, int id, ::Material const& material, bool sensitive);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::AABB $getCollisionShape(
        ::Block const& block,
        ::IConstBlockSource const&,
        ::BlockPos const&                                  pos,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCNAPI ::AABB const&
    $getOutline(::Block const& block, ::IConstBlockSource const&, ::BlockPos const& pos, ::AABB& bufferValue) const;

    MCNAPI ::AABB const& $getVisualShape(::Block const& block, ::AABB& bufferAABB) const;

    MCNAPI ::AABB const& $getUIShape(::Block const& block, ::AABB& bufferAABB) const;

    MCNAPI void $addAABBs(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB const*              intersectTestBox,
        ::std::vector<::AABB>&     inoutBoxes
    ) const;

    MCNAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar facing) const;

    MCNAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCNAPI ::Block const& $getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    MCNAPI void $entityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor&) const;

    MCNAPI bool $isAttachedTo(::BlockSource& region, ::BlockPos const& pos, ::BlockPos& outAttachedTo) const;

    MCNAPI bool $isInteractiveBlock() const;

    MCNAPI int $getVariant(::Block const& block) const;

    MCNAPI bool $canSpawnOn(::Actor*) const;

    MCNAPI bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    MCNAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);

    MCNAPI void $_onHitByActivatingAttack(::BlockSource& region, ::BlockPos const& pos, ::Actor*) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
