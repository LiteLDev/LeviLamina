#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/VibrationListener.h"
#include "mc/world/level/block/actor/BlockActor.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class SaveContext;
class SculkSensorVibrationConfig;
// clang-format on

class SculkSensorBlockActor : public ::BlockActor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::VibrationListener>                                          mVibrationListener;
    ::ll::TypedStorage<8, 80, ::std::optional<::gsl::final_action<::std::function<void()>>>> mListenerRegistration;
    // NOLINTEND

public:
    // prevent constructor by default
    SculkSensorBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual void tick(::BlockSource& region) /*override*/;

    virtual void onRemoved(::BlockSource& region) /*override*/;

    virtual ~SculkSensorBlockActor() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SculkSensorBlockActor(::BlockPos const& pos);

    MCNAPI SculkSensorBlockActor(
        ::BlockActorType                                  type,
        ::BlockPos const&                                 pos,
        uint                                              listenerRange,
        ::std::unique_ptr<::SculkSensorVibrationConfig>&& vibrationConfig
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const& pos);

    MCNAPI void* $ctor(
        ::BlockActorType                                  type,
        ::BlockPos const&                                 pos,
        uint                                              listenerRange,
        ::std::unique_ptr<::SculkSensorVibrationConfig>&& vibrationConfig
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCNAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI void $tick(::BlockSource& region);

    MCNAPI void $onRemoved(::BlockSource& region);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
