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
class IRandom;
struct BlockAnimateTickData;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class FireBlock : public ::BlockType {
public:
    // prevent constructor by default
    FireBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::AABB getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const /*override*/;

    virtual ::AABB const&
    getOutline(::Block const& bufferValue, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const /*override*/;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;

    virtual bool mayPick() const /*override*/;

    virtual void entityInside(::BlockSource& entity, ::BlockPos const&, ::Actor&) const /*override*/;

    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const&, ::BlockPos const&) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FireBlock(::std::string const& nameId, int id);

    MCAPI bool _trySpawnSoulFire(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void checkBurn(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        int               chance,
        ::IRandom&        random,
        int               age,
        ::BlockPos const& firePos
    ) const;

    MCAPI float getFireOdds(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool isValidFireLocation(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static bool canBurn(::BlockSource& region, ::BlockPos const& pos);

    MCAPI static bool isSolidToppedBlock(::IConstBlockSource const& region, ::BlockPos const& pos);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::AABB $getCollisionShape(
        ::Block const&,
        ::IConstBlockSource const&,
        ::BlockPos const&,
        ::optional_ref<::GetCollisionShapeInterface const>
    ) const;

    MCFOLD ::AABB const&
    $getOutline(::Block const& bufferValue, ::IConstBlockSource const&, ::BlockPos const&, ::AABB&) const;

    MCAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCFOLD bool $mayPick() const;

    MCAPI void $entityInside(::BlockSource& entity, ::BlockPos const&, ::Actor&) const;

    MCAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI bool $checkIsPathable(::Actor& entity, ::BlockPos const&, ::BlockPos const&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
