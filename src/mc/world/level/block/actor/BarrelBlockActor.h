#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/level/block/actor/ChestBlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
// clang-format on

class BarrelBlockActor : public ::ChestBlockActor {
public:
    // prevent constructor by default
    BarrelBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string getName() const /*override*/;

    virtual void onPlace(::BlockSource& region) /*override*/;

    virtual void startOpen(::Actor& actor) /*override*/;

    virtual void stopOpen(::Actor& actor) /*override*/;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getOpenSound() const /*override*/;

    virtual ::SharedTypes::Legacy::LevelSoundEvent getCloseSound() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BarrelBlockActor(::BlockPos const& pos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string $getName() const;

    MCFOLD void $onPlace(::BlockSource& region);

    MCAPI void $startOpen(::Actor& actor);

    MCAPI void $stopOpen(::Actor& actor);

    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $getOpenSound() const;

    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $getCloseSound() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForRandomizableBlockActorContainerBase();

    MCAPI static void** $vftableForFillingContainer();
    // NOLINTEND
};
