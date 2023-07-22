/**
 * @file  PlayerScore.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure PlayerScore.
 *
 */
struct PlayerScore {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERSCORE
public:
    struct PlayerScore& operator=(struct PlayerScore const &) = delete;
    PlayerScore(struct PlayerScore const &) = delete;
    PlayerScore() = delete;
#endif

public:
    /**
     * @symbol  ??0PlayerScore\@\@QEAA\@AEBUScoreboardId\@\@H\@Z
     */
    MCAPI PlayerScore(struct ScoreboardId const &, int);
    /**
     * @symbol  ?getId\@PlayerScore\@\@QEBAAEBUScoreboardId\@\@XZ
     */
    MCAPI struct ScoreboardId const & getId() const;

};