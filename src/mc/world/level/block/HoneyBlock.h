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
class EntityContext;
class GetCollisionShapeInterface;
class IConstBlockSource;
class Material;
namespace BlockEvents { class BlockEntityFallOnEvent; }
// clang-format on

class HoneyBlock : public ::BlockType {
public:
    // prevent constructor by default
    HoneyBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::AABB getCollisionShape(
        ::Block const& pos,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    virtual void onStandOn(::EntityContext& entity, ::BlockPos const&) const /*override*/;

    virtual float getBounciness(::IConstBlockSource const&, ::BlockPos const&) const /*override*/;

    virtual int getExtraRenderLayers() const /*override*/;

    virtual ::AABB const& getVisualShape(::Block const& bufferAABB, ::AABB&) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HoneyBlock(::std::string const& nameId, int id, ::Material const& material);

    MCAPI void onFallOn(::BlockEvents::BlockEntityFallOnEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void triggerSlidingDownEffects(::Actor& entity, ::BlockPos const& pos, ::Block const& honeyBlock);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::Material const& material);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::AABB $getCollisionShape(
        ::Block const& pos,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCFOLD void $onStandOn(::EntityContext& entity, ::BlockPos const&) const;

    MCFOLD float $getBounciness(::IConstBlockSource const&, ::BlockPos const&) const;

    MCFOLD int $getExtraRenderLayers() const;

    MCAPI ::AABB const& $getVisualShape(::Block const& bufferAABB, ::AABB&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
