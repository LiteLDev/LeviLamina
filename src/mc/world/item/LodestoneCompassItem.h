#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/AbstractCompassItem.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class InteractionResult;
class ItemStack;
class ItemStackBase;
class Level;
class LodestoneBlockActor;
class LodestoneCompassComponent;
class Mob;
class PositionTrackingId;
class Vec3;
struct ActorUniqueID;
struct DimensionType;
namespace PositionTrackingDB { class PositionTrackingDBServer; }
namespace PositionTrackingDB { class TrackingRecord; }
// clang-format on

class LodestoneCompassItem : public ::AbstractCompassItem {
public:
    // prevent constructor by default
    LodestoneCompassItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getAnimationFrameFor(::Mob* holder, bool item, ::ItemStack const*, bool) const /*override*/;

    virtual ::InteractionResult
    _useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LodestoneCompassItem(::std::string const& name, int id);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::PositionTrackingId _getOrCreateTrackingId(
        ::PositionTrackingDB::PositionTrackingDBServer& trackingServer,
        ::LodestoneBlockActor&                          lodestoneBlock,
        ::BlockPos                                      pos,
        ::DimensionType                                 dimensionId
    );

    MCAPI static ::LodestoneCompassComponent* _tryGetOrAddComponent(
        ::PositionTrackingDB::TrackingRecord*                                            record,
        ::std::variant<::ActorUniqueID, ::std::pair<::BlockPos, ::DimensionType>> const& calcId
    );

    MCAPI static int getCompassFrame(
        ::std::variant<::ActorUniqueID, ::std::pair<::BlockPos, ::DimensionType>>& calcId,
        ::ItemStack const&                                                         item,
        ::Level const&                                                             level,
        ::BlockPos const&                                                          itemPosition,
        ::DimensionType const&                                                     itemDimension
    );

#ifdef LL_PLAT_C
    MCAPI static ::PositionTrackingId getPositionTrackingId(::ItemStackBase const& item);
#endif

    MCAPI static bool linkCompassToLodestone(::ItemStack& item, ::BlockSource& region, ::BlockPos pos);

    MCAPI static void putPositionTrackingId(::ItemStackBase& item, ::PositionTrackingId const& id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getAnimationFrameFor(::Mob* holder, bool item, ::ItemStack const*, bool) const;

    MCAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
