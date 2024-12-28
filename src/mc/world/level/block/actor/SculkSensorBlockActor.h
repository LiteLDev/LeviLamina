#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class Level;
class SaveContext;
class SculkSensorVibrationConfig;
// clang-format on

class SculkSensorBlockActor : public ::BlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 200> mUnke4e960;
    ::ll::UntypedStorage<8, 80>  mUnk9420c4;
    // NOLINTEND

public:
    // prevent constructor by default
    SculkSensorBlockActor& operator=(SculkSensorBlockActor const&);
    SculkSensorBlockActor(SculkSensorBlockActor const&);
    SculkSensorBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 1
    virtual void load(::Level& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 7
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 13
    virtual void onRemoved(::BlockSource& region) /*override*/;

    // vIndex: 0
    virtual ~SculkSensorBlockActor() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SculkSensorBlockActor(::BlockPos const& pos);

    MCAPI SculkSensorBlockActor(
        ::BlockActorType                                  type,
        ::BlockPos const&                                 pos,
        ::std::string const&                              id,
        uint                                              listenerRange,
        ::std::unique_ptr<::SculkSensorVibrationConfig>&& vibrationConfig
    );

    MCAPI int getLatestReceivedVibrationFrequency() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);

    MCAPI void* $ctor(
        ::BlockActorType                                  type,
        ::BlockPos const&                                 pos,
        ::std::string const&                              id,
        uint                                              listenerRange,
        ::std::unique_ptr<::SculkSensorVibrationConfig>&& vibrationConfig
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
    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void $load(::Level& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void $tick(::BlockSource& region);

    MCAPI void $onRemoved(::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
