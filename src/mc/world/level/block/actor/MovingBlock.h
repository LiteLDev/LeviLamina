#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/ActorBlockBase.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Block;
class BlockActor;
class BlockPos;
class GetCollisionShapeInterface;
class IConstBlockSource;
class ItemInstance;
namespace BlockEvents { class BlockEntityFallOnEvent; }
// clang-format on

class MovingBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    MovingBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    virtual ::AABB const& getVisualShapeInWorld(
        ::Block const&             region,
        ::IConstBlockSource const& pos,
        ::BlockPos const&          bufferAABB,
        ::AABB&
    ) const /*override*/;

    virtual bool pushesUpFallingBlocks() const /*override*/;

    virtual ::AABB getCollisionShape(
        ::Block const&             region,
        ::IConstBlockSource const& pos,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    virtual float getBounciness(::IConstBlockSource const& region, ::BlockPos const& pos) const /*override*/;

    virtual bool isMovingBlock() const /*override*/;
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
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCAPI ::AABB const& $getVisualShapeInWorld(
        ::Block const&             region,
        ::IConstBlockSource const& pos,
        ::BlockPos const&          bufferAABB,
        ::AABB&
    ) const;

    MCFOLD bool $pushesUpFallingBlocks() const;

    MCAPI ::AABB $getCollisionShape(
        ::Block const&             region,
        ::IConstBlockSource const& pos,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCAPI float $getBounciness(::IConstBlockSource const& region, ::BlockPos const& pos) const;

    MCFOLD bool $isMovingBlock() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
