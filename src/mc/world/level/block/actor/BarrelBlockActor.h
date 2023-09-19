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
    // symbol: ?getName@BarrelBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string getName() const;

    // symbol: ?onPlace@BarrelBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void onPlace(class BlockSource&);

    // symbol: ?playCloseSound@BarrelBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void playCloseSound(class BlockSource&);

    // symbol: ?playOpenSound@BarrelBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void playOpenSound(class BlockSource&);

    // symbol: ?startOpen@BarrelBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void startOpen(class Player&);

    // symbol: ?stopOpen@BarrelBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void stopOpen(class Player&);

    // NOLINTEND
};
