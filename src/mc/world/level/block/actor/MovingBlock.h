#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/ActorBlockBase.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockActor;
class BlockLegacy;
class BlockPos;
class Experiments;
class GetCollisionShapeInterface;
class IConstBlockSource;
class ItemInstance;
struct UpdateEntityAfterFallOnInterface;
namespace BlockEvents { class BlockEntityFallOnEvent; }
// clang-format on

class MovingBlock : public ::ActorBlockBase<::BlockLegacy> {
public:
    // prevent constructor by default
    MovingBlock& operator=(MovingBlock const&);
    MovingBlock(MovingBlock const&);
    MovingBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 90
    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    // vIndex: 10
    virtual ::AABB const&
    getVisualShapeInWorld(::Block const&, ::IConstBlockSource const& region, ::BlockPos const& pos, ::AABB& bufferAABB)
        const /*override*/;

    // vIndex: 103
    virtual bool pushesUpFallingBlocks() const /*override*/;

    // vIndex: 5
    virtual ::AABB
    getCollisionShape(::Block const&, ::IConstBlockSource const& region, ::BlockPos const& pos, ::optional_ref<::GetCollisionShapeInterface const>)
        const /*override*/;

    // vIndex: 68
    virtual void updateEntityAfterFallOn(::BlockPos const& pos, ::UpdateEntityAfterFallOnInterface& entity) const
        /*override*/;

    // vIndex: 26
    virtual bool isMovingBlock() const /*override*/;

    // vIndex: 0
    virtual ~MovingBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MovingBlock(::std::string const& nameId, int id);

    MCAPI void onFallOn(::BlockEvents::BlockEntityFallOnEvent& eventData) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);

    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCAPI ::AABB const&
    $getVisualShapeInWorld(::Block const&, ::IConstBlockSource const& region, ::BlockPos const& pos, ::AABB& bufferAABB)
        const;

    MCAPI bool $pushesUpFallingBlocks() const;

    MCAPI ::AABB
    $getCollisionShape(::Block const&, ::IConstBlockSource const& region, ::BlockPos const& pos, ::optional_ref<::GetCollisionShapeInterface const>)
        const;

    MCAPI void $updateEntityAfterFallOn(::BlockPos const& pos, ::UpdateEntityAfterFallOnInterface& entity) const;

    MCAPI bool $isMovingBlock() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
