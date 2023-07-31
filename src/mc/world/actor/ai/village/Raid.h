#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Raid {

public:
    // prevent constructor by default
    Raid& operator=(Raid const&) = delete;
    Raid(Raid const&)            = delete;
    Raid()                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ??0Raid\@\@QEAA\@HHHHW4Difficulty\@\@E$$QEAV?$function\@$$A6A_N_KAEAVVec3\@\@\@Z\@std\@\@$$QEAV?$function\@$$A6A_N_KVVec3\@\@EAEAV?$unordered_set\@UActorUniqueID\@\@U?$hash\@UActorUniqueID\@\@\@std\@\@U?$equal_to\@UActorUniqueID\@\@\@3\@V?$allocator\@UActorUniqueID\@\@\@3\@\@std\@\@\@Z\@3\@$$QEAV?$function\@$$A6A_NAEBUActorUniqueID\@\@\@Z\@3\@$$QEAV?$function\@$$A6A_NXZ\@3\@\@Z
     */
    MCAPI
    Raid(int, int, int, int, enum class Difficulty, unsigned char, std::function<bool(uint64_t, class Vec3&)>&&, std::function<bool(uint64_t, class Vec3, unsigned char, std::unordered_set<struct ActorUniqueID>&)>&&, std::function<bool(struct ActorUniqueID const&)>&&, std::function<bool(void)>&&);
    /**
     * @symbol ?addAdditionalSaveData\@Raid\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;
    /**
     * @symbol ?addPlayerToHeroList\@Raid\@\@QEAAXAEBVActor\@\@\@Z
     */
    MCAPI void addPlayerToHeroList(class Actor const&);
    /**
     * @symbol
     * ?appendDebugInfo\@Raid\@\@QEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void appendDebugInfo(std::string&) const;
    /**
     * @symbol ?getBossBarFilledFraction\@Raid\@\@QEBAMXZ
     */
    MCAPI float getBossBarFilledFraction() const;
    /**
     * @symbol ?getRemainingRaiders\@Raid\@\@QEBA_KXZ
     */
    MCAPI uint64_t getRemainingRaiders() const;
    /**
     * @symbol ?isRaider\@Raid\@\@QEBA_NUActorUniqueID\@\@\@Z
     */
    MCAPI bool isRaider(struct ActorUniqueID) const;
    /**
     * @symbol ?readAdditionalSaveData\@Raid\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class CompoundTag const&);
    /**
     * @symbol ?tick\@Raid\@\@QEAAXUTick\@\@\@Z
     */
    MCAPI void tick(struct Tick);
    /**
     * @symbol ??1Raid\@\@QEAA\@XZ
     */
    MCAPI ~Raid();
    /**
     * @symbol ?INVALID_SPAWN_POINT\@Raid\@\@2VVec3\@\@B
     */
    MCAPI static class Vec3 const INVALID_SPAWN_POINT;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_getTotalRaiderHealth\@Raid\@\@AEBAMXZ
     */
    MCAPI float _getTotalRaiderHealth() const;
    /**
     * @symbol ?_tickGroupInPlay\@Raid\@\@AEAAXXZ
     */
    MCAPI void _tickGroupInPlay();
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol ?NUM_GROUPS_ON_EASY\@Raid\@\@0EB
     */
    MCAPI static unsigned char const NUM_GROUPS_ON_EASY;
    /**
     * @symbol ?NUM_GROUPS_ON_HARD\@Raid\@\@0EB
     */
    MCAPI static unsigned char const NUM_GROUPS_ON_HARD;
    /**
     * @symbol ?NUM_GROUPS_ON_NORMAL\@Raid\@\@0EB
     */
    MCAPI static unsigned char const NUM_GROUPS_ON_NORMAL;
    // NOLINTEND
};
