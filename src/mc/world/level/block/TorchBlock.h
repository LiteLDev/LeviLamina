#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/level/block/BlockType.h"
#include "mc/world/level/block/TorchFacing.h"

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
struct BlockAnimateTickData;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class TorchBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ParticleType> mFlameParticle;
    // NOLINTEND

public:
    // prevent constructor by default
    TorchBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual ::Block const&
    getPlacementBlock(::Actor const& by, ::BlockPos const& pos, uchar face, ::Vec3 const& clickPos, int itemValue) const
        /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual ::AABB const& getVisualShape(::Block const& block, ::AABB& bufferAABB) const /*override*/;

    virtual ::AABB getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;

    virtual bool canSurvive(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void _addHardCodedBlockComponents(::Experiments const& experiments) /*override*/;

    virtual ~TorchBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TorchBlock(::std::string const& nameId, int id, ::ParticleType flameParticle);

    MCAPI bool canBePlacedOn(::BlockSource& region, ::BlockPos const& pos, uchar facing) const;

    MCAPI void onPlaceTorchBlock(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<::TorchFacing const[]> DATA_FROM_FACING();

    MCAPI static ::std::add_lvalue_reference_t<ushort const[]> FACING_FROM_DATA();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::ParticleType flameParticle);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI ::Block const& $getPlacementBlock(
        ::Actor const&    by,
        ::BlockPos const& pos,
        uchar             face,
        ::Vec3 const&     clickPos,
        int               itemValue
    ) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI ::AABB const& $getVisualShape(::Block const& block, ::AABB& bufferAABB) const;

    MCFOLD ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCAPI bool $canSurvive(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const& experiments);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
