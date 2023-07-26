#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Raid {

public:
    // prevent constructor by default
    Raid& operator=(Raid const&) = delete;
    Raid(Raid const&)            = delete;
    Raid()                       = delete;

public:
    /**
     * @symbol
     * ??0Raid\@\@QEAA\@HHHHW4Difficulty\@\@E$$QEAV?$function\@$$A6A_N_KAEAVVec3\@\@\@Z\@std\@\@$$QEAV?$function\@$$A6A_N_KVVec3\@\@EAEAV?$unordered_set\@UActorUniqueID\@\@U?$hash\@UActorUniqueID\@\@\@std\@\@U?$equal_to\@UActorUniqueID\@\@\@3\@V?$allocator\@UActorUniqueID\@\@\@3\@\@std\@\@\@Z\@3\@$$QEAV?$function\@$$A6A_NAEBUActorUniqueID\@\@\@Z\@3\@$$QEAV?$function\@$$A6A_NXZ\@3\@\@Z
     */
    MCAPI
    Raid(int, int, int, int, enum class Difficulty, unsigned char, class std::function<bool(unsigned __int64, class Vec3&)>&&, class std::function<bool(unsigned __int64, class Vec3, unsigned char, class std::unordered_set<struct ActorUniqueID, struct std::hash<struct ActorUniqueID>, struct std::equal_to<struct ActorUniqueID>, class std::allocator<struct ActorUniqueID>>&)>&&, class std::function<bool(struct ActorUniqueID const&)>&&, class std::function<bool(void)>&&); // NOLINT
    /**
     * @symbol ?addAdditionalSaveData\@Raid\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?addPlayerToHeroList\@Raid\@\@QEAAXAEBVActor\@\@\@Z
     */
    MCAPI void addPlayerToHeroList(class Actor const&); // NOLINT
    /**
     * @symbol
     * ?appendDebugInfo\@Raid\@\@QEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ?getBossBarFilledFraction\@Raid\@\@QEBAMXZ
     */
    MCAPI float getBossBarFilledFraction() const; // NOLINT
    /**
     * @symbol ?getRemainingRaiders\@Raid\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getRemainingRaiders() const; // NOLINT
    /**
     * @symbol ?isRaider\@Raid\@\@QEBA_NUActorUniqueID\@\@\@Z
     */
    MCAPI bool isRaider(struct ActorUniqueID) const; // NOLINT
    /**
     * @symbol ?readAdditionalSaveData\@Raid\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class CompoundTag const&); // NOLINT
    /**
     * @symbol ?tick\@Raid\@\@QEAAXUTick\@\@\@Z
     */
    MCAPI void tick(struct Tick); // NOLINT
    /**
     * @symbol ??1Raid\@\@QEAA\@XZ
     */
    MCAPI ~Raid(); // NOLINT
    /**
     * @symbol ?INVALID_SPAWN_POINT\@Raid\@\@2VVec3\@\@B
     */
    MCAPI static class Vec3 const INVALID_SPAWN_POINT; // NOLINT

    // private:
    /**
     * @symbol ?_getTotalRaiderHealth\@Raid\@\@AEBAMXZ
     */
    MCAPI float _getTotalRaiderHealth() const; // NOLINT
    /**
     * @symbol ?_tickGroupInPlay\@Raid\@\@AEAAXXZ
     */
    MCAPI void _tickGroupInPlay(); // NOLINT

private:
    /**
     * @symbol ?NUM_GROUPS_ON_EASY\@Raid\@\@0EB
     */
    MCAPI static unsigned char const NUM_GROUPS_ON_EASY; // NOLINT
    /**
     * @symbol ?NUM_GROUPS_ON_HARD\@Raid\@\@0EB
     */
    MCAPI static unsigned char const NUM_GROUPS_ON_HARD; // NOLINT
    /**
     * @symbol ?NUM_GROUPS_ON_NORMAL\@Raid\@\@0EB
     */
    MCAPI static unsigned char const NUM_GROUPS_ON_NORMAL; // NOLINT
};
