#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorLegacySaveConverter {

public:
    // prevent constructor by default
    ActorLegacySaveConverter& operator=(ActorLegacySaveConverter const&) = delete;
    ActorLegacySaveConverter(ActorLegacySaveConverter const&)            = delete;
    ActorLegacySaveConverter()                                           = delete;

public:
    /**
     * @symbol ?convertSave\@ActorLegacySaveConverter\@\@SAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static void convertSave(class Actor&, class CompoundTag const&); // NOLINT

    // private:
    /**
     * @symbol ?convertBoat\@ActorLegacySaveConverter\@\@CAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static void convertBoat(class Actor&, class CompoundTag const&); // NOLINT
    /**
     * @symbol ?convertChicken\@ActorLegacySaveConverter\@\@CAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static void convertChicken(class Actor&, class CompoundTag const&); // NOLINT
    /**
     * @symbol ?convertCow\@ActorLegacySaveConverter\@\@CAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static void convertCow(class Actor&, class CompoundTag const&); // NOLINT
    /**
     * @symbol ?convertCreeper\@ActorLegacySaveConverter\@\@CAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static void convertCreeper(class Actor&, class CompoundTag const&); // NOLINT
    /**
     * @symbol ?convertEnderman\@ActorLegacySaveConverter\@\@CAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static void convertEnderman(class Actor&, class CompoundTag const&); // NOLINT
    /**
     * @symbol ?convertHorse\@ActorLegacySaveConverter\@\@CAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static void convertHorse(class Actor&, class CompoundTag const&); // NOLINT
    /**
     * @symbol ?convertIronGolem\@ActorLegacySaveConverter\@\@CAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static void convertIronGolem(class Actor&, class CompoundTag const&); // NOLINT
    /**
     * @symbol ?convertMinecart\@ActorLegacySaveConverter\@\@CAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static void convertMinecart(class Actor&, class CompoundTag const&); // NOLINT
    /**
     * @symbol ?convertMinecartHopper\@ActorLegacySaveConverter\@\@CAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static void convertMinecartHopper(class Actor&, class CompoundTag const&); // NOLINT
    /**
     * @symbol ?convertMinecartTNT\@ActorLegacySaveConverter\@\@CAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static void convertMinecartTNT(class Actor&, class CompoundTag const&); // NOLINT
    /**
     * @symbol ?convertOcelot\@ActorLegacySaveConverter\@\@CAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static void convertOcelot(class Actor&, class CompoundTag const&); // NOLINT
    /**
     * @symbol ?convertPig\@ActorLegacySaveConverter\@\@CAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static void convertPig(class Actor&, class CompoundTag const&); // NOLINT
    /**
     * @symbol ?convertRabbit\@ActorLegacySaveConverter\@\@CAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static void convertRabbit(class Actor&, class CompoundTag const&); // NOLINT
    /**
     * @symbol ?convertSheep\@ActorLegacySaveConverter\@\@CAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static void convertSheep(class Actor&, class CompoundTag const&); // NOLINT
    /**
     * @symbol ?convertSilverfish\@ActorLegacySaveConverter\@\@CAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static void convertSilverfish(class Actor&, class CompoundTag const&); // NOLINT
    /**
     * @symbol ?convertSkeleton\@ActorLegacySaveConverter\@\@CAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static void convertSkeleton(class Actor&, class CompoundTag const&); // NOLINT
    /**
     * @symbol ?convertSlime\@ActorLegacySaveConverter\@\@CAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static void convertSlime(class Actor&, class CompoundTag const&); // NOLINT
    /**
     * @symbol ?convertSnowgolem\@ActorLegacySaveConverter\@\@CAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static void convertSnowgolem(class Actor&, class CompoundTag const&); // NOLINT
    /**
     * @symbol ?convertSpider\@ActorLegacySaveConverter\@\@CAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static void convertSpider(class Actor&, class CompoundTag const&); // NOLINT
    /**
     * @symbol ?convertSquid\@ActorLegacySaveConverter\@\@CAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static void convertSquid(class Actor&, class CompoundTag const&); // NOLINT
    /**
     * @symbol ?convertVillager\@ActorLegacySaveConverter\@\@CAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static void convertVillager(class Actor&, class CompoundTag const&); // NOLINT
    /**
     * @symbol ?convertWolf\@ActorLegacySaveConverter\@\@CAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static void convertWolf(class Actor&, class CompoundTag const&); // NOLINT
    /**
     * @symbol ?convertZombie\@ActorLegacySaveConverter\@\@CAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static void convertZombie(class Actor&, class CompoundTag const&); // NOLINT
    /**
     * @symbol ?convertZombieVillager\@ActorLegacySaveConverter\@\@CAXAEAVActor\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static void convertZombieVillager(class Actor&, class CompoundTag const&); // NOLINT

private:
};
