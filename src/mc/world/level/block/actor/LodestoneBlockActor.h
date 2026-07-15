#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/PositionTrackingId.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class SaveContext;
// clang-format on

class LodestoneBlockActor : public ::VanillaBlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PositionTrackingId> mTrackingDBHandle;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void tick(::BlockSource& region) /*override*/;

    virtual void onRemoved(::BlockSource& region) /*override*/;

    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region) /*override*/;

    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $tick(::BlockSource& region);

    MCAPI void $onRemoved(::BlockSource& region);

    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);

    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();

    MCNAPI static void** $vftableForBlockActor();

    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();
    // NOLINTEND
};
