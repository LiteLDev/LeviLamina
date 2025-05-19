#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/spawn/EntitySpawnReason.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class IRandom;
class Mob;
namespace br::spawn { struct EntityType; }
// clang-format on

namespace br::spawn::predicate {
// functions
// NOLINTBEGIN
MCNAPI bool checkAnimal(
    ::br::spawn::EntityType const&,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&
);

MCNAPI bool checkAnyLightMonster(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);

MCNAPI bool checkArmadillo(
    ::br::spawn::EntityType const&,
    ::BlockSource& region,
    ::br::spawn::EntitySpawnReason,
    ::BlockPos pos,
    ::IRandom&
);

MCNAPI bool checkAxolotl(
    ::br::spawn::EntityType const&,
    ::BlockSource& region,
    ::br::spawn::EntitySpawnReason,
    ::BlockPos pos,
    ::IRandom&
);

MCNAPI bool checkBat(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);

MCNAPI bool checkDrowned(
    ::br::spawn::EntityType const&,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);

MCNAPI bool checkEndermite(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);

MCNAPI bool checkFox(
    ::br::spawn::EntityType const&,
    ::BlockSource& region,
    ::br::spawn::EntitySpawnReason,
    ::BlockPos pos,
    ::IRandom&
);

MCNAPI bool checkFrog(
    ::br::spawn::EntityType const&,
    ::BlockSource& region,
    ::br::spawn::EntitySpawnReason,
    ::BlockPos pos,
    ::IRandom&
);

MCNAPI bool checkGhast(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);

MCNAPI bool checkGlowSquid(
    ::br::spawn::EntityType const&,
    ::BlockSource& region,
    ::br::spawn::EntitySpawnReason,
    ::BlockPos pos,
    ::IRandom&
);

MCNAPI bool checkGoat(
    ::br::spawn::EntityType const&,
    ::BlockSource& region,
    ::br::spawn::EntitySpawnReason,
    ::BlockPos pos,
    ::IRandom&
);

MCNAPI bool checkGuardian(
    ::br::spawn::EntityType const&,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);

MCNAPI bool checkHoglin(
    ::br::spawn::EntityType const&,
    ::BlockSource& region,
    ::br::spawn::EntitySpawnReason,
    ::BlockPos pos,
    ::IRandom&
);

MCNAPI bool checkHusk(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);

MCNAPI bool checkMagmaCube(
    ::br::spawn::EntityType const&,
    ::BlockSource& region,
    ::br::spawn::EntitySpawnReason,
    ::BlockPos,
    ::IRandom&
);

MCNAPI bool checkMob(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&
);

MCNAPI bool checkMonster(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);

MCNAPI bool checkMooshroom(
    ::br::spawn::EntityType const&,
    ::BlockSource& region,
    ::br::spawn::EntitySpawnReason,
    ::BlockPos pos,
    ::IRandom&
);

MCNAPI bool checkObstructionIgnoreWater(::BlockSource& region, ::Mob const& mob, ::br::spawn::EntityType const&);

MCNAPI bool checkObstructionIronGolem(::BlockSource& region, ::Mob const& mob, ::br::spawn::EntityType const& type);

MCNAPI bool checkObstructionMob(::BlockSource& region, ::Mob const& mob, ::br::spawn::EntityType const&);

MCNAPI bool checkObstructionRaveger(::BlockSource& region, ::Mob const& mob, ::br::spawn::EntityType const&);

MCNAPI bool checkObstructionWarden(::BlockSource& region, ::Mob const& mob, ::br::spawn::EntityType const& type);

MCNAPI bool checkOcelot(
    ::br::spawn::EntityType const&,
    ::BlockSource&,
    ::br::spawn::EntitySpawnReason,
    ::BlockPos,
    ::IRandom& rand
);

MCNAPI bool checkParrot(
    ::br::spawn::EntityType const&,
    ::BlockSource& region,
    ::br::spawn::EntitySpawnReason,
    ::BlockPos pos,
    ::IRandom&
);

MCNAPI bool checkPatrollingMonster(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);

MCNAPI bool checkPiglin(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);

MCNAPI bool checkPolarBear(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);

MCNAPI bool checkRabbit(
    ::br::spawn::EntityType const&,
    ::BlockSource& region,
    ::br::spawn::EntitySpawnReason,
    ::BlockPos pos,
    ::IRandom&
);

MCNAPI bool checkSilverfish(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);

MCNAPI bool checkSkeletonHorse(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);

MCNAPI bool checkSlime(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);

MCNAPI bool checkStray(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);

MCNAPI bool checkStrider(
    ::br::spawn::EntityType const&,
    ::BlockSource& region,
    ::br::spawn::EntitySpawnReason,
    ::BlockPos pos,
    ::IRandom&
);

MCNAPI bool checkSurfaceAgeableCreature(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     rand
);

MCNAPI bool checkSurfaceWaterAnimal(
    ::br::spawn::EntityType const&,
    ::BlockSource& region,
    ::br::spawn::EntitySpawnReason,
    ::BlockPos pos,
    ::IRandom&
);

MCNAPI bool checkTropicalFish(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     rand
);

MCNAPI bool checkTurtle(
    ::br::spawn::EntityType const&,
    ::BlockSource& region,
    ::br::spawn::EntitySpawnReason,
    ::BlockPos pos,
    ::IRandom&
);

MCNAPI bool checkWolf(
    ::br::spawn::EntityType const&,
    ::BlockSource& region,
    ::br::spawn::EntitySpawnReason,
    ::BlockPos pos,
    ::IRandom&
);

MCNAPI bool checkZombieHorse(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);

MCNAPI bool checkZombifiedPiglin(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);
// NOLINTEND

} // namespace br::spawn::predicate
