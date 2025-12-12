#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/ActorBlockBase.h"
#include "mc/world/level/block/BlockType.h"
#include "mc/world/level/block/actor/ChalkboardSize.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class ChalkboardBlockActor;
class Experiments;
class GetCollisionShapeInterface;
class IConstBlockSource;
class ItemInstance;
class Player;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class ChalkboardBlock : public ::ActorBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::AABB const& getVisualShapeInWorld(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferAABB
    ) const /*override*/;

    virtual ::AABB const& getOutline(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferValue
    ) const /*override*/;

    virtual ::AABB getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const
        /*override*/;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const* blockActor) const /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual bool isInteractiveBlock() const /*override*/;

    virtual int getVariant(::Block const& block) const /*override*/;

    virtual bool getIgnoresDestroyPermissions(::Actor& entity, ::BlockPos const& pos) const /*override*/;

    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    virtual ~ChalkboardBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ChalkboardBlockActor* _getBaseChalkboard(::BlockSource& region, ::BlockPos const& pos);

    MCAPI static void _getShape(::ChalkboardSize size, bool isOnGround, int dir, ::AABB& bufferValue);

    MCAPI_C static bool mayPlayerEdit(::Player& player, ::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::AABB const& $getVisualShapeInWorld(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferAABB
    ) const;

    MCAPI ::AABB const& $getOutline(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferValue
    ) const;

    MCFOLD ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCFOLD bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const* blockActor) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCFOLD bool $isInteractiveBlock() const;

    MCFOLD int $getVariant(::Block const& block) const;

    MCAPI bool $getIgnoresDestroyPermissions(::Actor& entity, ::BlockPos const& pos) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
