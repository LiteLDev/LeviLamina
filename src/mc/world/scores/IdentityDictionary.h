#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IdentityDictionary {

public:
    // prevent constructor by default
    IdentityDictionary& operator=(IdentityDictionary const&) = delete;
    IdentityDictionary(IdentityDictionary const&)            = delete;

public:
    /**
     * @symbol ??0IdentityDictionary\@\@QEAA\@XZ
     */
    MCAPI IdentityDictionary(); // NOLINT
    /**
     * @symbol ?clearIdentity\@IdentityDictionary\@\@QEAA_NAEBUScoreboardId\@\@\@Z
     */
    MCAPI bool clearIdentity(struct ScoreboardId const&); // NOLINT
    /**
     * @symbol ?convertFakeToReal\@IdentityDictionary\@\@QEAAAEBUScoreboardId\@\@AEBU2\@AEBUPlayerScoreboardId\@\@\@Z
     */
    MCAPI struct ScoreboardId const&
    convertFakeToReal(struct ScoreboardId const&, struct PlayerScoreboardId const&); // NOLINT
    /**
     * @symbol ?getScoreboardId\@IdentityDictionary\@\@QEBAAEBUScoreboardId\@\@AEBUPlayerScoreboardId\@\@\@Z
     */
    MCAPI struct ScoreboardId const& getScoreboardId(struct PlayerScoreboardId const&) const; // NOLINT
    /**
     * @symbol
     * ?shouldConvertFakePlayer\@IdentityDictionary\@\@QEAA_NAEBUPlayerScoreboardId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool shouldConvertFakePlayer(struct PlayerScoreboardId const&, std::string const&); // NOLINT
    /**
     * @symbol ??1IdentityDictionary\@\@QEAA\@XZ
     */
    MCAPI ~IdentityDictionary(); // NOLINT
};
