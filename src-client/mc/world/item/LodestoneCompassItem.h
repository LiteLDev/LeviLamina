#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/item/AbstractCompassItem.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class Dimension;
class InteractionResult;
class ItemStack;
class ItemStackBase;
class Level;
class LodestoneCompassComponent;
class Mob;
class Vec3;
struct ActorUniqueID;
struct PositionTrackingId;
namespace PositionTrackingDB { class TrackingRecord; }
// clang-format on

class LodestoneCompassItem : public ::AbstractCompassItem {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 113
    virtual int getAnimationFrameFor(::Mob* holder, bool, ::ItemStack const* item, bool) const /*override*/;

    // vIndex: 123
    virtual ::InteractionResult
    _useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const
        /*override*/;

    // vIndex: 0
    virtual ~LodestoneCompassItem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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

    MCAPI static ::PositionTrackingId getPositionTrackingId(::ItemStackBase const& item);

    MCAPI static bool linkCompassToLodestone(::ItemStack& item, ::BlockSource& region, ::BlockPos pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getAnimationFrameFor(::Mob* holder, bool, ::ItemStack const* item, bool) const;

    MCAPI ::InteractionResult
    $_useOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face, ::Vec3 const& clickPos) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
