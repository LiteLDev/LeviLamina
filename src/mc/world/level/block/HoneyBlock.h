#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class Block;
class BlockPos;
class EntityContext;
class Experiments;
class GetCollisionShapeInterface;
class IConstBlockSource;
class Material;
namespace BlockEvents { class BlockEntityFallOnEvent; }
// clang-format on

class HoneyBlock : public ::BlockLegacy {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 5
    virtual ::AABB
    getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const& pos, ::optional_ref<::GetCollisionShapeInterface const>)
        const /*override*/;

    // vIndex: 134
    virtual void onStandOn(::EntityContext& entity, ::BlockPos const& pos) const /*override*/;

    // vIndex: 145
    virtual int getExtraRenderLayers() const /*override*/;

    // vIndex: 11
    virtual ::AABB const& getVisualShape(::Block const&, ::AABB& bufferAABB) const /*override*/;

    // vIndex: 0
    virtual ~HoneyBlock() /*override*/ = default;
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
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);

    MCAPI ::AABB
    $getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const& pos, ::optional_ref<::GetCollisionShapeInterface const>)
        const;

    MCAPI void $onStandOn(::EntityContext& entity, ::BlockPos const& pos) const;

    MCAPI int $getExtraRenderLayers() const;

    MCAPI ::AABB const& $getVisualShape(::Block const&, ::AABB& bufferAABB) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
