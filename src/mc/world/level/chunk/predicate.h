#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/EntitySpawnReason.h"

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
MCAPI bool checkAnimal(
    ::br::spawn::EntityType const&,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&
);

MCAPI bool checkAnyLightMonster(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);

MCAPI bool checkArmadillo(
    ::br::spawn::EntityType const&,
    ::BlockSource& region,
    ::br::spawn::EntitySpawnReason,
    ::BlockPos pos,
    ::IRandom&
);

MCAPI bool checkAxolotl(
    ::br::spawn::EntityType const&,
    ::BlockSource& region,
    ::br::spawn::EntitySpawnReason,
    ::BlockPos pos,
    ::IRandom&
);

MCAPI bool checkBat(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);

MCAPI bool checkDrowned(
    ::br::spawn::EntityType const&,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);

MCAPI bool checkEndermite(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);

MCAPI bool checkFox(
    ::br::spawn::EntityType const&,
    ::BlockSource& region,
    ::br::spawn::EntitySpawnReason,
    ::BlockPos pos,
    ::IRandom&
);

MCAPI bool checkFrog(
    ::br::spawn::EntityType const&,
    ::BlockSource& region,
    ::br::spawn::EntitySpawnReason,
    ::BlockPos pos,
    ::IRandom&
);

MCAPI bool checkGhast(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);

MCAPI bool checkGlowSquid(
    ::br::spawn::EntityType const&,
    ::BlockSource& region,
    ::br::spawn::EntitySpawnReason,
    ::BlockPos pos,
    ::IRandom&
);

MCAPI bool checkGoat(
    ::br::spawn::EntityType const&,
    ::BlockSource& region,
    ::br::spawn::EntitySpawnReason,
    ::BlockPos pos,
    ::IRandom&
);

MCAPI bool checkGuardian(
    ::br::spawn::EntityType const&,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);

MCAPI bool checkHoglin(
    ::br::spawn::EntityType const&,
    ::BlockSource& region,
    ::br::spawn::EntitySpawnReason,
    ::BlockPos pos,
    ::IRandom&
);

MCAPI bool checkHusk(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);

MCAPI bool checkMagmaCube(
    ::br::spawn::EntityType const&,
    ::BlockSource& region,
    ::br::spawn::EntitySpawnReason,
    ::BlockPos,
    ::IRandom&
);

MCAPI bool checkMob(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&
);

MCAPI bool checkMonster(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);

MCAPI bool checkMooshroom(
    ::br::spawn::EntityType const&,
    ::BlockSource& region,
    ::br::spawn::EntitySpawnReason,
    ::BlockPos pos,
    ::IRandom&
);

MCAPI bool checkObstructionIgnoreWater(::BlockSource& region, ::Mob const& mob, ::br::spawn::EntityType const&);

MCAPI bool checkObstructionIronGolem(::BlockSource& region, ::Mob const& mob, ::br::spawn::EntityType const& type);

MCAPI bool checkObstructionMob(::BlockSource& region, ::Mob const& mob, ::br::spawn::EntityType const&);

MCAPI bool checkObstructionRaveger(::BlockSource& region, ::Mob const& mob, ::br::spawn::EntityType const&);

MCAPI bool checkObstructionWarden(::BlockSource& region, ::Mob const& mob, ::br::spawn::EntityType const& type);

MCAPI bool checkOcelot(
    ::br::spawn::EntityType const&,
    ::BlockSource&,
    ::br::spawn::EntitySpawnReason,
    ::BlockPos,
    ::IRandom& rand
);

MCAPI bool checkParrot(
    ::br::spawn::EntityType const&,
    ::BlockSource& region,
    ::br::spawn::EntitySpawnReason,
    ::BlockPos pos,
    ::IRandom&
);

MCAPI bool checkPatrollingMonster(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);

MCAPI bool checkPiglin(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);

MCAPI bool checkPolarBear(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);

MCAPI bool checkRabbit(
    ::br::spawn::EntityType const&,
    ::BlockSource& region,
    ::br::spawn::EntitySpawnReason,
    ::BlockPos pos,
    ::IRandom&
);

MCAPI bool checkSilverfish(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);

MCFOLD bool checkSkeletonHorse(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);

MCAPI bool checkSlime(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);

MCAPI bool checkStray(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);

MCAPI bool checkStrider(
    ::br::spawn::EntityType const&,
    ::BlockSource& region,
    ::br::spawn::EntitySpawnReason,
    ::BlockPos pos,
    ::IRandom&
);

MCAPI bool checkSurfaceAgeableCreature(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     rand
);

MCAPI bool checkSurfaceWaterAnimal(
    ::br::spawn::EntityType const&,
    ::BlockSource& region,
    ::br::spawn::EntitySpawnReason,
    ::BlockPos pos,
    ::IRandom&
);

MCAPI bool checkTropicalFish(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     rand
);

MCAPI bool checkTurtle(
    ::br::spawn::EntityType const&,
    ::BlockSource& region,
    ::br::spawn::EntitySpawnReason,
    ::BlockPos pos,
    ::IRandom&
);

MCAPI bool checkWolf(
    ::br::spawn::EntityType const&,
    ::BlockSource& region,
    ::br::spawn::EntitySpawnReason,
    ::BlockPos pos,
    ::IRandom&
);

MCFOLD bool checkZombieHorse(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);

MCAPI bool checkZombifiedPiglin(
    ::br::spawn::EntityType const& type,
    ::BlockSource&                 region,
    ::br::spawn::EntitySpawnReason reason,
    ::BlockPos                     pos,
    ::IRandom&                     random
);
// NOLINTEND

} // namespace br::spawn::predicate
