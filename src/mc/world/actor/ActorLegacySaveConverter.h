#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
// clang-format on

class ActorLegacySaveConverter {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void convertBoat(::Actor& entity, ::CompoundTag const& tag);

    MCNAPI static void convertChicken(::Actor& entity, ::CompoundTag const& tag);

    MCNAPI static void convertCow(::Actor& entity, ::CompoundTag const& tag);

    MCNAPI static void convertCreeper(::Actor& entity, ::CompoundTag const& tag);

    MCNAPI static void convertEnderman(::Actor& entity, ::CompoundTag const&);

    MCNAPI static void convertHorse(::Actor& entity, ::CompoundTag const& tag);

    MCNAPI static void convertIronGolem(::Actor& entity, ::CompoundTag const& tag);

    MCNAPI static void convertMinecart(::Actor& entity, ::CompoundTag const&);

    MCNAPI static void convertMinecartHopper(::Actor& entity, ::CompoundTag const&);

    MCNAPI static void convertMinecartTNT(::Actor& entity, ::CompoundTag const&);

    MCNAPI static void convertOcelot(::Actor& entity, ::CompoundTag const& tag);

    MCNAPI static void convertPig(::Actor& entity, ::CompoundTag const& tag);

    MCNAPI static void convertRabbit(::Actor& entity, ::CompoundTag const& tag);

    MCNAPI static void convertSave(::Actor& entity, ::CompoundTag const& tag);

    MCNAPI static void convertSheep(::Actor& entity, ::CompoundTag const& tag);

    MCNAPI static void convertSilverfish(::Actor& entity, ::CompoundTag const&);

    MCNAPI static void convertSkeleton(::Actor& entity, ::CompoundTag const& tag);

    MCNAPI static void convertSlime(::Actor& entity, ::CompoundTag const& tag);

    MCNAPI static void convertSnowgolem(::Actor& entity, ::CompoundTag const& tag);

    MCNAPI static void convertSpider(::Actor& entity, ::CompoundTag const& tag);

    MCNAPI static void convertSquid(::Actor& entity, ::CompoundTag const& tag);

    MCNAPI static void convertVillager(::Actor& entity, ::CompoundTag const& tag);

    MCNAPI static void convertWolf(::Actor& entity, ::CompoundTag const& tag);

    MCNAPI static void convertZombie(::Actor& entity, ::CompoundTag const& tag);

    MCNAPI static void convertZombieVillager(::Actor& entity, ::CompoundTag const& tag);

    MCNAPI static void genericConvert(::Actor& entity, ::CompoundTag const& tag);
    // NOLINTEND
};
