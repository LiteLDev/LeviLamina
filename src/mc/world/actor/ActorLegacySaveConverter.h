#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorLegacySaveConverter {
public:
    // prevent constructor by default
    ActorLegacySaveConverter& operator=(ActorLegacySaveConverter const&);
    ActorLegacySaveConverter(ActorLegacySaveConverter const&);
    ActorLegacySaveConverter();

public:
    // NOLINTBEGIN
    MCAPI static void convertSave(class Actor& entity, class CompoundTag const& tag);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void convertBoat(class Actor& entity, class CompoundTag const& tag);

    MCAPI static void convertChicken(class Actor& entity, class CompoundTag const& tag);

    MCAPI static void convertCow(class Actor& entity, class CompoundTag const& tag);

    MCAPI static void convertCreeper(class Actor& entity, class CompoundTag const& tag);

    MCAPI static void convertEnderman(class Actor& entity, class CompoundTag const& tag);

    MCAPI static void convertHorse(class Actor& entity, class CompoundTag const& tag);

    MCAPI static void convertIronGolem(class Actor& entity, class CompoundTag const& tag);

    MCAPI static void convertMinecart(class Actor& entity, class CompoundTag const& tag);

    MCAPI static void convertMinecartHopper(class Actor& entity, class CompoundTag const& tag);

    MCAPI static void convertMinecartTNT(class Actor& entity, class CompoundTag const& tag);

    MCAPI static void convertOcelot(class Actor& entity, class CompoundTag const& tag);

    MCAPI static void convertPig(class Actor& entity, class CompoundTag const& tag);

    MCAPI static void convertRabbit(class Actor& entity, class CompoundTag const& tag);

    MCAPI static void convertSheep(class Actor& entity, class CompoundTag const& tag);

    MCAPI static void convertSilverfish(class Actor& entity, class CompoundTag const& tag);

    MCAPI static void convertSkeleton(class Actor& entity, class CompoundTag const& tag);

    MCAPI static void convertSlime(class Actor& entity, class CompoundTag const& tag);

    MCAPI static void convertSnowgolem(class Actor& entity, class CompoundTag const& tag);

    MCAPI static void convertSpider(class Actor& entity, class CompoundTag const& tag);

    MCAPI static void convertSquid(class Actor& entity, class CompoundTag const& tag);

    MCAPI static void convertVillager(class Actor& entity, class CompoundTag const& tag);

    MCAPI static void convertWolf(class Actor& entity, class CompoundTag const& tag);

    MCAPI static void convertZombie(class Actor& entity, class CompoundTag const& tag);

    MCAPI static void convertZombieVillager(class Actor& entity, class CompoundTag const& tag);

    // NOLINTEND
};
