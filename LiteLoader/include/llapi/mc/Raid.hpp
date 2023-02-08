/**
 * @file  Raid.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Raid.
 *
 */
class Raid {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAID
public:
    class Raid& operator=(class Raid const &) = delete;
    Raid(class Raid const &) = delete;
    Raid() = delete;
#endif

public:
    /**
     * @hash   1092972440
     * @symbol  ??0Raid\@\@QEAA\@HHHHW4Difficulty\@\@E$$QEAV?$function\@$$A6A_N_KAEAVVec3\@\@\@Z\@std\@\@$$QEAV?$function\@$$A6A_N_KVVec3\@\@EAEAV?$unordered_set\@UActorUniqueID\@\@U?$hash\@UActorUniqueID\@\@\@std\@\@U?$equal_to\@UActorUniqueID\@\@\@3\@V?$allocator\@UActorUniqueID\@\@\@3\@\@std\@\@\@Z\@3\@$$QEAV?$function\@$$A6A_NAEBUActorUniqueID\@\@\@Z\@3\@$$QEAV?$function\@$$A6A_NXZ\@3\@\@Z
     */
    MCAPI Raid(int, int, int, int, enum class Difficulty, unsigned char, class std::function<bool (unsigned __int64, class Vec3 &)> &&, class std::function<bool (unsigned __int64, class Vec3, unsigned char, class std::unordered_set<struct ActorUniqueID, struct std::hash<struct ActorUniqueID>, struct std::equal_to<struct ActorUniqueID>, class std::allocator<struct ActorUniqueID>> &)> &&, class std::function<bool (struct ActorUniqueID const &)> &&, class std::function<bool (void)> &&);
    /**
     * @hash   -1545753208
     * @symbol  ?addAdditionalSaveData\@Raid\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   750196712
     * @symbol  ?addPlayerToHeroList\@Raid\@\@QEAAXAEBVActor\@\@\@Z
     */
    MCAPI void addPlayerToHeroList(class Actor const &);
    /**
     * @hash   95978706
     * @symbol  ?appendDebugInfo\@Raid\@\@QEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void appendDebugInfo(std::string &) const;
    /**
     * @hash   -623078826
     * @symbol  ?getBossBarFilledFraction\@Raid\@\@QEBAMXZ
     */
    MCAPI float getBossBarFilledFraction() const;
    /**
     * @hash   678327215
     * @symbol  ?getRemainingRaiders\@Raid\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getRemainingRaiders() const;
    /**
     * @hash   -81857310
     * @symbol  ?readAdditionalSaveData\@Raid\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void readAdditionalSaveData(class CompoundTag const &);
    /**
     * @hash   -848029280
     * @symbol  ?tick\@Raid\@\@QEAAXUTick\@\@\@Z
     */
    MCAPI void tick(struct Tick);
    /**
     * @hash   -747383644
     * @symbol  ??1Raid\@\@QEAA\@XZ
     */
    MCAPI ~Raid();
    /**
     * @hash   612417169
     * @symbol  ?INVALID_SPAWN_POINT\@Raid\@\@2VVec3\@\@B
     */
    MCAPI static class Vec3 const INVALID_SPAWN_POINT;

//private:
    /**
     * @hash   -1829114999
     * @symbol  ?_getTotalRaiderHealth\@Raid\@\@AEBAMXZ
     */
    MCAPI float _getTotalRaiderHealth() const;
    /**
     * @hash   1434017454
     * @symbol  ?_tickGroupInPlay\@Raid\@\@AEAAXXZ
     */
    MCAPI void _tickGroupInPlay();

private:
    /**
     * @hash   607929476
     * @symbol  ?NUM_GROUPS_ON_EASY\@Raid\@\@0EB
     */
    MCAPI static unsigned char const NUM_GROUPS_ON_EASY;
    /**
     * @hash   1034207631
     * @symbol  ?NUM_GROUPS_ON_HARD\@Raid\@\@0EB
     */
    MCAPI static unsigned char const NUM_GROUPS_ON_HARD;
    /**
     * @hash   840059850
     * @symbol  ?NUM_GROUPS_ON_NORMAL\@Raid\@\@0EB
     */
    MCAPI static unsigned char const NUM_GROUPS_ON_NORMAL;

};