#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/gameevents/VibrationListener.h"
#include "mc/world/level/block/actor/VanillaBlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class SaveContext;
// clang-format on

class SculkSensorBlockActor : public ::VanillaBlockActor {
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SculkSensorBlockActor(::BlockPos const& pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCFOLD void $tick(::BlockSource& region);

    MCFOLD void $onRemoved(::BlockSource& region);


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
