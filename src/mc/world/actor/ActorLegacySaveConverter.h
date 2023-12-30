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
    // symbol: ?convertSave@ActorLegacySaveConverter@@SAXAEAVActor@@AEBVCompoundTag@@@Z
    MCAPI static void convertSave(class Actor& entity, class CompoundTag const& tag);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?convertBoat@ActorLegacySaveConverter@@CAXAEAVActor@@AEBVCompoundTag@@@Z
    MCAPI static void convertBoat(class Actor& entity, class CompoundTag const& tag);

    // symbol: ?convertChicken@ActorLegacySaveConverter@@CAXAEAVActor@@AEBVCompoundTag@@@Z
    MCAPI static void convertChicken(class Actor& entity, class CompoundTag const& tag);

    // symbol: ?convertCow@ActorLegacySaveConverter@@CAXAEAVActor@@AEBVCompoundTag@@@Z
    MCAPI static void convertCow(class Actor& entity, class CompoundTag const& tag);

    // symbol: ?convertCreeper@ActorLegacySaveConverter@@CAXAEAVActor@@AEBVCompoundTag@@@Z
    MCAPI static void convertCreeper(class Actor& entity, class CompoundTag const& tag);

    // symbol: ?convertEnderman@ActorLegacySaveConverter@@CAXAEAVActor@@AEBVCompoundTag@@@Z
    MCAPI static void convertEnderman(class Actor& entity, class CompoundTag const& tag);

    // symbol: ?convertHorse@ActorLegacySaveConverter@@CAXAEAVActor@@AEBVCompoundTag@@@Z
    MCAPI static void convertHorse(class Actor& entity, class CompoundTag const& tag);

    // symbol: ?convertIronGolem@ActorLegacySaveConverter@@CAXAEAVActor@@AEBVCompoundTag@@@Z
    MCAPI static void convertIronGolem(class Actor& entity, class CompoundTag const& tag);

    // symbol: ?convertMinecart@ActorLegacySaveConverter@@CAXAEAVActor@@AEBVCompoundTag@@@Z
    MCAPI static void convertMinecart(class Actor& entity, class CompoundTag const& tag);

    // symbol: ?convertMinecartHopper@ActorLegacySaveConverter@@CAXAEAVActor@@AEBVCompoundTag@@@Z
    MCAPI static void convertMinecartHopper(class Actor& entity, class CompoundTag const& tag);

    // symbol: ?convertMinecartTNT@ActorLegacySaveConverter@@CAXAEAVActor@@AEBVCompoundTag@@@Z
    MCAPI static void convertMinecartTNT(class Actor& entity, class CompoundTag const& tag);

    // symbol: ?convertOcelot@ActorLegacySaveConverter@@CAXAEAVActor@@AEBVCompoundTag@@@Z
    MCAPI static void convertOcelot(class Actor& entity, class CompoundTag const& tag);

    // symbol: ?convertPig@ActorLegacySaveConverter@@CAXAEAVActor@@AEBVCompoundTag@@@Z
    MCAPI static void convertPig(class Actor& entity, class CompoundTag const& tag);

    // symbol: ?convertRabbit@ActorLegacySaveConverter@@CAXAEAVActor@@AEBVCompoundTag@@@Z
    MCAPI static void convertRabbit(class Actor& entity, class CompoundTag const& tag);

    // symbol: ?convertSheep@ActorLegacySaveConverter@@CAXAEAVActor@@AEBVCompoundTag@@@Z
    MCAPI static void convertSheep(class Actor& entity, class CompoundTag const& tag);

    // symbol: ?convertSilverfish@ActorLegacySaveConverter@@CAXAEAVActor@@AEBVCompoundTag@@@Z
    MCAPI static void convertSilverfish(class Actor& entity, class CompoundTag const& tag);

    // symbol: ?convertSkeleton@ActorLegacySaveConverter@@CAXAEAVActor@@AEBVCompoundTag@@@Z
    MCAPI static void convertSkeleton(class Actor& entity, class CompoundTag const& tag);

    // symbol: ?convertSlime@ActorLegacySaveConverter@@CAXAEAVActor@@AEBVCompoundTag@@@Z
    MCAPI static void convertSlime(class Actor& entity, class CompoundTag const& tag);

    // symbol: ?convertSnowgolem@ActorLegacySaveConverter@@CAXAEAVActor@@AEBVCompoundTag@@@Z
    MCAPI static void convertSnowgolem(class Actor& entity, class CompoundTag const& tag);

    // symbol: ?convertSpider@ActorLegacySaveConverter@@CAXAEAVActor@@AEBVCompoundTag@@@Z
    MCAPI static void convertSpider(class Actor& entity, class CompoundTag const& tag);

    // symbol: ?convertSquid@ActorLegacySaveConverter@@CAXAEAVActor@@AEBVCompoundTag@@@Z
    MCAPI static void convertSquid(class Actor& entity, class CompoundTag const& tag);

    // symbol: ?convertVillager@ActorLegacySaveConverter@@CAXAEAVActor@@AEBVCompoundTag@@@Z
    MCAPI static void convertVillager(class Actor& entity, class CompoundTag const& tag);

    // symbol: ?convertWolf@ActorLegacySaveConverter@@CAXAEAVActor@@AEBVCompoundTag@@@Z
    MCAPI static void convertWolf(class Actor& entity, class CompoundTag const& tag);

    // symbol: ?convertZombie@ActorLegacySaveConverter@@CAXAEAVActor@@AEBVCompoundTag@@@Z
    MCAPI static void convertZombie(class Actor& entity, class CompoundTag const& tag);

    // symbol: ?convertZombieVillager@ActorLegacySaveConverter@@CAXAEAVActor@@AEBVCompoundTag@@@Z
    MCAPI static void convertZombieVillager(class Actor& entity, class CompoundTag const& tag);

    // NOLINTEND
};
