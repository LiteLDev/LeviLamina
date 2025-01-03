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
class BlockSource;
class Experiments;
class GetCollisionShapeInterface;
class IConstBlockSource;
class Material;
class Random;
class Vec3;
struct BlockGraphicsModeChangeContext;
namespace BlockEvents { class BlockPlaceEvent; }
namespace mce { class Color; }
// clang-format on

class LiquidBlock : public ::BlockLegacy {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 77
    virtual bool mayPick(::BlockSource const& region, ::Block const& block, bool liquid) const /*override*/;

    // vIndex: 5
    virtual ::AABB
    getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<::GetCollisionShapeInterface const>)
        const /*override*/;

    // vIndex: 148
    virtual ::mce::Color getMapColor(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const
        /*override*/;

    // vIndex: 123
    virtual void animateTickBedrockLegacy(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const
        /*override*/;

    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 57
    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const
        /*override*/;

    // vIndex: 115
    virtual void onGraphicsModeChanged(::BlockGraphicsModeChangeContext const& context) /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~LiquidBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _solidify(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& changedNeighbor) const;

    MCAPI void emitFizzParticle(::BlockSource& region, ::BlockPos const& p) const;

    MCAPI void onPlaceBase(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCAPI void solidify(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& changedNeighbor) const;

    MCAPI void trySpreadFire(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Vec3 _getFlow(::IConstBlockSource const& region, ::BlockPos const& pos, ::Material const& material);

    MCAPI static int getDepth(::IConstBlockSource const& region, ::BlockPos const& pos, ::Material const& material);

    MCAPI static float getHeightFromDepth(int depth);

    MCAPI static void handleEntityInside(
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::Vec3&                    current,
        ::Material const&          material
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $mayPick(::BlockSource const& region, ::Block const& block, bool liquid) const;

    MCAPI ::AABB
    $getCollisionShape(::Block const&, ::IConstBlockSource const&, ::BlockPos const&, ::optional_ref<::GetCollisionShapeInterface const>)
        const;

    MCAPI ::mce::Color $getMapColor(::BlockSource& region, ::BlockPos const& pos, ::Block const& block) const;

    MCAPI void $animateTickBedrockLegacy(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    MCAPI void $onGraphicsModeChanged(::BlockGraphicsModeChangeContext const& context);

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
