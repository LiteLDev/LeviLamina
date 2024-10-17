#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/ChestBlockActor.h"

class BarrelBlockActor : public ::ChestBlockActor {
public:
    // prevent constructor by default
    BarrelBlockActor& operator=(BarrelBlockActor const&);
    BarrelBlockActor(BarrelBlockActor const&);
    BarrelBlockActor();

public:
    // NOLINTBEGIN
    MCVAPI std::string getName() const;

    MCVAPI void onPlace(class BlockSource& region);

    MCVAPI void playCloseSound(class BlockSource& region);

    MCVAPI void playOpenSound(class BlockSource& region);

    MCVAPI void startOpen(class Player& player);

    MCVAPI void stopOpen(class Player& player);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftableForFillingContainer();

    MCAPI static void** vftableForRandomizableBlockActorContainerBase();

    MCAPI std::string getName$() const;

    MCAPI void onPlace$(class BlockSource& region);

    MCAPI void playCloseSound$(class BlockSource& region);

    MCAPI void playOpenSound$(class BlockSource& region);

    MCAPI void startOpen$(class Player& player);

    MCAPI void stopOpen$(class Player& player);

    // NOLINTEND
};
