/**
 * @file  IdentityDictionary.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class IdentityDictionary.
 *
 */
class IdentityDictionary {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IDENTITYDICTIONARY
public:
    class IdentityDictionary& operator=(class IdentityDictionary const &) = delete;
    IdentityDictionary(class IdentityDictionary const &) = delete;
#endif

public:
    /**
     * @symbol ??0IdentityDictionary\@\@QEAA\@XZ
     */
    MCAPI IdentityDictionary();
    /**
     * @symbol ?clearIdentity\@IdentityDictionary\@\@QEAA_NAEBUScoreboardId\@\@\@Z
     */
    MCAPI bool clearIdentity(struct ScoreboardId const &);
    /**
     * @symbol ?convertFakeToReal\@IdentityDictionary\@\@QEAAAEBUScoreboardId\@\@AEBU2\@AEBUPlayerScoreboardId\@\@\@Z
     */
    MCAPI struct ScoreboardId const & convertFakeToReal(struct ScoreboardId const &, struct PlayerScoreboardId const &);
    /**
     * @symbol ??1IdentityDictionary\@\@QEAA\@XZ
     */
    MCAPI ~IdentityDictionary();

};
