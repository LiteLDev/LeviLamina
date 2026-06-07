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
class GetCollisionShapeInterface;
class IConstBlockSource;
class Material;
class Random;
class Vec3;
struct BlockAnimateTickData;
namespace BlockEvents { class BlockPlaceEvent; }
struct BlockGraphicsModeChangeContext;
// clang-format on

class LiquidBlockBase : public ::BlockType {
public:
    // prevent constructor by default
    LiquidBlockBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool mayPick(::BlockSource const& block, ::Block const& liquid, bool) const /*override*/;

    virtual ::AABB getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual bool checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const /*override*/;

    virtual void onGraphicsModeChanged(::BlockGraphicsModeChangeContext const& context) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LiquidBlockBase(::std::string const& nameId, int id, ::Material const& material);

    MCAPI void _solidify(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& changedNeighbor) const;

    MCAPI void emitFizzParticle(::BlockSource& region, ::BlockPos const& p) const;

    MCAPI int getTickDelay(::BlockSource& region) const;

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

#ifdef LL_PLAT_C
    MCAPI static float getSlopeAngle(::BlockSource& region, ::BlockPos const& pos, ::Material const& m);
#endif

    MCAPI static void handleEntityInside(
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::Vec3&                    current,
        ::Material const&          material
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::Material const& material);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $mayPick(::BlockSource const& block, ::Block const& liquid, bool) const;

    MCFOLD ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI bool $checkIsPathable(::Actor&, ::BlockPos const&, ::BlockPos const&) const;

    MCAPI void $onGraphicsModeChanged(::BlockGraphicsModeChangeContext const& context);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
