#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Difficulty.h"

class Raid {
public:
    // prevent constructor by default
    Raid& operator=(Raid const&);
    Raid(Raid const&);
    Raid();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0Raid@@QEAA@HHHHW4Difficulty@@E$$QEAV?$function@$$A6A_N_KAEAVVec3@@@Z@std@@$$QEAV?$function@$$A6A_N_KVVec3@@EAEAV?$unordered_set@UActorUniqueID@@U?$hash@UActorUniqueID@@@std@@U?$equal_to@UActorUniqueID@@@3@V?$allocator@UActorUniqueID@@@3@@std@@@Z@3@$$QEAV?$function@$$A6A_NAEBUActorUniqueID@@@Z@3@$$QEAV?$function@$$A6A_NXZ@3@@Z
    MCAPI
    Raid(int, int, int, int, ::Difficulty, uchar, std::function<bool(uint64, class Vec3&)>&&, std::function<bool(uint64, class Vec3, uchar, std::unordered_set<struct ActorUniqueID>&)>&&, std::function<bool(struct ActorUniqueID const&)>&&, std::function<bool(void)>&&);

    // symbol: ?addAdditionalSaveData@Raid@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;

    // symbol: ?addPlayerToHeroList@Raid@@QEAAXAEBVActor@@@Z
    MCAPI void addPlayerToHeroList(class Actor const&);

    // symbol: ?appendDebugInfo@Raid@@QEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void appendDebugInfo(std::string&) const;

    // symbol: ?getBossBarFilledFraction@Raid@@QEBAMXZ
    MCAPI float getBossBarFilledFraction() const;

    // symbol: ?getRemainingRaiders@Raid@@QEBA_KXZ
    MCAPI uint64 getRemainingRaiders() const;

    // symbol: ?readAdditionalSaveData@Raid@@QEAAXAEBVCompoundTag@@@Z
    MCAPI void readAdditionalSaveData(class CompoundTag const&);

    // symbol: ?tick@Raid@@QEAAXUTick@@@Z
    MCAPI void tick(struct Tick);

    // symbol: ??1Raid@@QEAA@XZ
    MCAPI ~Raid();

    // symbol: ?INVALID_SPAWN_POINT@Raid@@2VVec3@@B
    MCAPI static class Vec3 const INVALID_SPAWN_POINT;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_calcBossBarUsingHealth@Raid@@AEBAMXZ
    MCAPI float _calcBossBarUsingHealth() const;

    // symbol: ?_calcBossBarUsingMobs@Raid@@AEBAMXZ
    MCAPI float _calcBossBarUsingMobs() const;

    // symbol: ?_getTotalRaiderHealth@Raid@@AEBAMXZ
    MCAPI float _getTotalRaiderHealth() const;

    // symbol: ?_tickGroupInPlay@Raid@@AEAAXXZ
    MCAPI void _tickGroupInPlay();

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?NUM_GROUPS_ON_EASY@Raid@@0EB
    MCAPI static uchar const NUM_GROUPS_ON_EASY;

    // symbol: ?NUM_GROUPS_ON_HARD@Raid@@0EB
    MCAPI static uchar const NUM_GROUPS_ON_HARD;

    // symbol: ?NUM_GROUPS_ON_NORMAL@Raid@@0EB
    MCAPI static uchar const NUM_GROUPS_ON_NORMAL;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $NUM_GROUPS_ON_EASY() { return NUM_GROUPS_ON_EASY; }

    static auto& $NUM_GROUPS_ON_HARD() { return NUM_GROUPS_ON_HARD; }

    static auto& $NUM_GROUPS_ON_NORMAL() { return NUM_GROUPS_ON_NORMAL; }

    // NOLINTEND
};
