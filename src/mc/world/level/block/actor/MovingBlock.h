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
    // virtual functions
    // NOLINTBEGIN
    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    virtual ::AABB const& getVisualShapeInWorld(
        ::Block const&,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferAABB
    ) const /*override*/;

    virtual bool pushesUpFallingBlocks() const /*override*/;

    virtual ::AABB getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    virtual float getBounciness(::IConstBlockSource const& region, ::BlockPos const& pos) const /*override*/;

    virtual bool isMovingBlock() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void onFallOn(::BlockEvents::BlockEntityFallOnEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI ::AABB const& $getVisualShapeInWorld(
        ::Block const&,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB&                    bufferAABB
    ) const;

    MCNAPI bool $pushesUpFallingBlocks() const;

    MCNAPI ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCNAPI float $getBounciness(::IConstBlockSource const& region, ::BlockPos const& pos) const;

    MCNAPI bool $isMovingBlock() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
