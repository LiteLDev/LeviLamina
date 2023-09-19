#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

class VanillaServerGameplayEventListener {
public:
    // prevent constructor by default
    VanillaServerGameplayEventListener& operator=(VanillaServerGameplayEventListener const&);
    VanillaServerGameplayEventListener(VanillaServerGameplayEventListener const&);
    VanillaServerGameplayEventListener();

public:
    // NOLINTBEGIN
    // symbol:
    // ?onActorCreationAttemptFailed@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEAVActor@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCVAPI ::EventResult onActorCreationAttemptFailed(class Actor&, std::string_view);

    // symbol:
    // ?onBlockInteractedWith@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlockPos@@@Z
    MCVAPI ::EventResult onBlockInteractedWith(class Player&, class BlockPos const&);

    // symbol:
    // ?onBlockPlacedByPlayer@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlock@@AEBVBlockPos@@_N@Z
    MCVAPI ::EventResult onBlockPlacedByPlayer(class Player&, class Block const&, class BlockPos const&, bool);

    // symbol: ?onEvent@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEBUPlayerDamageEvent@@@Z
    MCVAPI ::EventResult onEvent(struct PlayerDamageEvent const&);

    // symbol: ?onEvent@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEBUActorHurtEvent@@@Z
    MCVAPI ::EventResult onEvent(struct ActorHurtEvent const&);

    // symbol: ?onEvent@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEBUPlayerOpenContainerEvent@@@Z
    MCVAPI ::EventResult onEvent(struct PlayerOpenContainerEvent const&);

    // symbol:
    // ?onPlayerMovementAnomaly@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVVec3@@MM@Z
    MCVAPI ::EventResult onPlayerMovementAnomaly(class Player&, class Vec3 const&, float, float);

    // symbol:
    // ?onPlayerMovementCorrected@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVVec3@@MM@Z
    MCVAPI ::EventResult onPlayerMovementCorrected(class Player&, class Vec3 const&, float, float);

    // NOLINTEND
};
