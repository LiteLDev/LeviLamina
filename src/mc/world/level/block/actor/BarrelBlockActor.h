#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/level/block/actor/ChestBlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
// clang-format on

class BarrelBlockActor : public ::ChestBlockActor {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 25
    virtual ::std::string getName() const /*override*/;

    // vIndex: 11
    virtual void onPlace(::BlockSource& region) /*override*/;

    // vIndex: 22
    virtual void startOpen(::Actor& actor) /*override*/;

    // vIndex: 23
    virtual void stopOpen(::Actor& actor) /*override*/;

    // vIndex: 50
    virtual ::SharedTypes::Legacy::LevelSoundEvent getOpenSound() const /*override*/;

    // vIndex: 51
    virtual ::SharedTypes::Legacy::LevelSoundEvent getCloseSound() const /*override*/;

    // vIndex: 0
    virtual ~BarrelBlockActor() /*override*/ = default;
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
    MCNAPI static void** $vftableForRandomizableBlockActorContainerBase();

    MCNAPI static void** $vftableForFillingContainer();
    // NOLINTEND
};
