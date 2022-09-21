/**
 * @file  MC/PlayerScoreboardId.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure PlayerScoreboardId.
 *
 */
struct PlayerScoreboardId {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERSCOREBOARDID
public:
    struct PlayerScoreboardId& operator=(struct PlayerScoreboardId const &) = delete;
    PlayerScoreboardId(struct PlayerScoreboardId const &) = delete;
#endif

public:
    /**
     * @hash   482735564
     * @symbol ??0PlayerScoreboardId@@QEAA@XZ
     */
    MCAPI PlayerScoreboardId();
    /**
     * @hash   -1512526026
     * @symbol ??0PlayerScoreboardId@@QEAA@_J@Z
     */
    MCAPI PlayerScoreboardId(__int64);
    /**
     * @hash   1184267075
     * @symbol ?getHash@PlayerScoreboardId@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getHash() const;
    /**
     * @hash   1773827781
     * @symbol ??8PlayerScoreboardId@@QEBA_NAEBU0@@Z
     */
    MCAPI bool operator==(struct PlayerScoreboardId const &) const;
    /**
     * @hash   -2101780108
     * @symbol ?INVALID@PlayerScoreboardId@@2U1@B
     */
    MCAPI static struct PlayerScoreboardId const INVALID;

};