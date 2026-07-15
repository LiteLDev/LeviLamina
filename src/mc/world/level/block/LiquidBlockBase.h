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
class Vec3;
struct BlockAnimateTickData;
namespace BlockEvents { class BlockPlaceEvent; }
struct BlockGraphicsModeChangeContext;
// clang-format on

class LiquidBlockBase : public ::BlockType {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool mayPick(::BlockSource const& region, ::Block const& block, bool liquid) const /*override*/;

    virtual ::AABB getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const
        /*override*/;

    virtual void onGraphicsModeChanged(::BlockGraphicsModeChangeContext const& context) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void onPlaceBase(::BlockEvents::BlockPlaceEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Vec3 _getFlow(::IConstBlockSource const& region, ::BlockPos const& pos, ::Material const& material);

#ifdef LL_PLAT_C
    MCAPI static float getSlopeAngle(::BlockSource& region, ::BlockPos const& pos, ::Material const& m);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $mayPick(::BlockSource const& region, ::Block const& block, bool liquid) const;

    MCFOLD ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    MCAPI void $onGraphicsModeChanged(::BlockGraphicsModeChangeContext const& context);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
