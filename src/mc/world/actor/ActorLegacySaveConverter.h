#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
// clang-format on

class ActorLegacySaveConverter {
public:
    // prevent constructor by default
    ActorLegacySaveConverter& operator=(ActorLegacySaveConverter const&);
    ActorLegacySaveConverter(ActorLegacySaveConverter const&);
    ActorLegacySaveConverter();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void convertBoat(::Actor& entity, ::CompoundTag const& tag);

    MCAPI static void convertChicken(::Actor& entity, ::CompoundTag const& tag);

    MCAPI static void convertCow(::Actor& entity, ::CompoundTag const& tag);

    MCAPI static void convertCreeper(::Actor& entity, ::CompoundTag const& tag);

    MCAPI static void convertEnderman(::Actor& entity, ::CompoundTag const&);

    MCAPI static void convertHorse(::Actor& entity, ::CompoundTag const& tag);

    MCAPI static void convertIronGolem(::Actor& entity, ::CompoundTag const& tag);

    MCAPI static void convertMinecart(::Actor& entity, ::CompoundTag const&);

    MCAPI static void convertMinecartHopper(::Actor& entity, ::CompoundTag const&);

    MCAPI static void convertMinecartTNT(::Actor& entity, ::CompoundTag const&);

    MCAPI static void convertOcelot(::Actor& entity, ::CompoundTag const& tag);

    MCAPI static void convertPig(::Actor& entity, ::CompoundTag const& tag);

    MCAPI static void convertRabbit(::Actor& entity, ::CompoundTag const& tag);

    MCAPI static void convertSave(::Actor& entity, ::CompoundTag const& tag);

    MCAPI static void convertSheep(::Actor& entity, ::CompoundTag const& tag);

    MCAPI static void convertSilverfish(::Actor& entity, ::CompoundTag const&);

    MCAPI static void convertSkeleton(::Actor& entity, ::CompoundTag const& tag);

    MCAPI static void convertSlime(::Actor& entity, ::CompoundTag const& tag);

    MCAPI static void convertSnowgolem(::Actor& entity, ::CompoundTag const& tag);

    MCAPI static void convertSpider(::Actor& entity, ::CompoundTag const& tag);

    MCAPI static void convertSquid(::Actor& entity, ::CompoundTag const& tag);

    MCAPI static void convertVillager(::Actor& entity, ::CompoundTag const& tag);

    MCAPI static void convertWolf(::Actor& entity, ::CompoundTag const& tag);

    MCAPI static void convertZombie(::Actor& entity, ::CompoundTag const& tag);

    MCAPI static void convertZombieVillager(::Actor& entity, ::CompoundTag const& tag);

    MCAPI static void genericConvert(::Actor& entity, ::CompoundTag const& tag);
    // NOLINTEND
};
