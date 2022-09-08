/**
 * @file  Raid.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @symbol ??0Raid@@QEAA@HHHHW4Difficulty@@E$$QEAV?$function@$$A6A_N_KAEAVVec3@@@Z@std@@$$QEAV?$function@$$A6A_N_KVVec3@@EAEAV?$unordered_set@UActorUniqueID@@U?$hash@UActorUniqueID@@@std@@U?$equal_to@UActorUniqueID@@@3@V?$allocator@UActorUniqueID@@@3@@std@@@Z@3@$$QEAV?$function@$$A6A_NAEBUActorUniqueID@@@Z@3@$$QEAV?$function@$$A6A_NXZ@3@@Z
     * @hash   1658563224
     */
    MCAPI Raid(int, int, int, int, enum Difficulty, unsigned char, class std::function<bool (unsigned __int64, class Vec3 &)> &&, class std::function<bool (unsigned __int64, class Vec3, unsigned char, class std::unordered_set<struct ActorUniqueID, struct std::hash<struct ActorUniqueID>, struct std::equal_to<struct ActorUniqueID>, class std::allocator<struct ActorUniqueID>> &)> &&, class std::function<bool (struct ActorUniqueID const &)> &&, class std::function<bool (void)> &&);
    /**
     * @symbol ?addAdditionalSaveData@Raid@@QEBAXAEAVCompoundTag@@@Z
     * @hash   -980270056
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @symbol ?addPlayerToHeroList@Raid@@QEAAXAEBVActor@@@Z
     * @hash   1315664488
     */
    MCAPI void addPlayerToHeroList(class Actor const &);
    /**
     * @symbol ?appendDebugInfo@Raid@@QEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   661446482
     */
    MCAPI void appendDebugInfo(std::string &) const;
    /**
     * @symbol ?getBossBarFilledFraction@Raid@@QEBAMXZ
     * @hash   -57611050
     */
    MCAPI float getBossBarFilledFraction() const;
    /**
     * @symbol ?getRemainingRaiders@Raid@@QEBA_KXZ
     * @hash   1531341567
     */
    MCAPI unsigned __int64 getRemainingRaiders() const;
    /**
     * @symbol ?readAdditionalSaveData@Raid@@QEAAXAEBVCompoundTag@@@Z
     * @hash   483610466
     */
    MCAPI void readAdditionalSaveData(class CompoundTag const &);
    /**
     * @symbol ?tick@Raid@@QEAAXXZ
     * @hash   701153973
     */
    MCAPI void tick();
    /**
     * @symbol ??1Raid@@QEAA@XZ
     * @hash   -107080876
     */
    MCAPI ~Raid();
    /**
     * @symbol ?INVALID_SPAWN_POINT@Raid@@2VVec3@@B
     * @hash   -463856703
     */
    MCAPI static class Vec3 const INVALID_SPAWN_POINT;

//private:
    /**
     * @symbol ?_getTotalRaiderHealth@Raid@@AEBAMXZ
     * @hash   -1263570343
     */
    MCAPI float _getTotalRaiderHealth() const;
    /**
     * @symbol ?_tickGroupInPlay@Raid@@AEAAXXZ
     * @hash   1999546734
     */
    MCAPI void _tickGroupInPlay();

private:
    /**
     * @symbol ?NUM_GROUPS_ON_EASY@Raid@@0EB
     * @hash   -371875372
     */
    MCAPI static unsigned char const NUM_GROUPS_ON_EASY;
    /**
     * @symbol ?NUM_GROUPS_ON_HARD@Raid@@0EB
     * @hash   54402783
     */
    MCAPI static unsigned char const NUM_GROUPS_ON_HARD;
    /**
     * @symbol ?NUM_GROUPS_ON_NORMAL@Raid@@0EB
     * @hash   -139744998
     */
    MCAPI static unsigned char const NUM_GROUPS_ON_NORMAL;

};