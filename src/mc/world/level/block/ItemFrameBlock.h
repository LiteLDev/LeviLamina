#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/ActorBlockBase.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class Experiments;
class GetCollisionShapeInterface;
class HashedString;
class IConstBlockSource;
class ItemInstance;
class Player;
class Vec3;
struct ResourceDropsContext;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class ItemFrameBlock : public ::ActorBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const /*override*/;

    virtual ::AABB const& getVisualShape(::Block const& block, ::AABB& bufferAABB) const /*override*/;

    virtual ::AABB getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    virtual bool isInteractiveBlock() const /*override*/;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const* blockActor) const /*override*/;

    virtual ::Block const* playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;

    virtual bool attack(::Player* player, ::BlockPos const& pos) const /*override*/;

    virtual bool getIgnoresDestroyPermissions(::Actor& entity, ::BlockPos const& pos) const /*override*/;

    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual bool hasComparatorSignal() const /*override*/;

    virtual int getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const
        /*override*/;

    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool isLavaBlocking() const /*override*/;

    virtual ::HashedString getSpawnedItemName() const;

    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    virtual void
    spawnAfterBreak(::BlockSource& region, ::Block const&, ::BlockPos const& pos, ::ResourceDropsContext const&) const
        /*override*/;

    virtual ~ItemFrameBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _checkAchievements(::Player& player, ::BlockPos const& currentPos) const;

    MCFOLD void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCFOLD void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Block const& $getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos, uchar face) const;

    MCAPI ::AABB const& $getVisualShape(::Block const& block, ::AABB& bufferAABB) const;

    MCFOLD ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCFOLD bool $isInteractiveBlock() const;

    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const* blockActor) const;

    MCAPI ::Block const* $playerWillDestroy(::Player& player, ::BlockPos const& pos, ::Block const& block) const;

    MCAPI bool $attack(::Player* player, ::BlockPos const& pos) const;

    MCAPI bool $getIgnoresDestroyPermissions(::Actor& entity, ::BlockPos const& pos) const;

    MCFOLD void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCFOLD bool $hasComparatorSignal() const;

    MCAPI int $getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const;

    MCFOLD bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $isLavaBlocking() const;

    MCAPI ::HashedString $getSpawnedItemName() const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);

    MCAPI void
    $spawnAfterBreak(::BlockSource& region, ::Block const&, ::BlockPos const& pos, ::ResourceDropsContext const&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
