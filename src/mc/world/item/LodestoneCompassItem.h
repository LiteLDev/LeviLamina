#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/AbstractCompassItem.h"
#include "mc/world/item/HandSlot.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class InteractionResult;
class ItemStack;
class ItemStackBase;
class Level;
class LodestoneCompassComponent;
class Mob;
class PositionTrackingId;
class Vec3;
struct ActorUniqueID;
struct DimensionType;
namespace PositionTrackingDB { class TrackingRecord; }
// clang-format on

class LodestoneCompassItem : public ::AbstractCompassItem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getAnimationFrameFor(::Mob* holder, bool, ::ItemStack const* item, bool) const /*override*/;

    virtual ::InteractionResult _useOn(
        ::ItemStack&  item,
        ::Actor&      entity,
        ::BlockPos    pos,
        uchar         face,
        ::HandSlot    handSlot,
        ::Vec3 const& clickPos
    ) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::LodestoneCompassComponent* _tryGetOrAddComponent(
        ::PositionTrackingDB::TrackingRecord*                                            record,
        ::std::variant<::ActorUniqueID, ::std::pair<::BlockPos, ::DimensionType>> const& calcId
    );

    MCNAPI static int getCompassFrame(
        ::std::variant<::ActorUniqueID, ::std::pair<::BlockPos, ::DimensionType>>& calcId,
        ::ItemStack const&                                                         item,
        ::Level const&                                                             level,
        ::BlockPos const&                                                          itemPosition,
        ::DimensionType const&                                                     itemDimension
    );

    MCNAPI static ::PositionTrackingId getPositionTrackingId(::ItemStackBase const& item);
#endif

    MCNAPI static bool linkCompassToLodestone(::ItemStack& item, ::BlockSource& region, ::BlockPos pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getAnimationFrameFor(::Mob* holder, bool, ::ItemStack const* item, bool) const;

    MCNAPI ::InteractionResult $_useOn(
        ::ItemStack&  item,
        ::Actor&      entity,
        ::BlockPos    pos,
        uchar         face,
        ::HandSlot    handSlot,
        ::Vec3 const& clickPos
    ) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
