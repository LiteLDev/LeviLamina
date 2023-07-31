#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IdentityDictionary {

public:
    // prevent constructor by default
    IdentityDictionary& operator=(IdentityDictionary const&) = delete;
    IdentityDictionary(IdentityDictionary const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0IdentityDictionary\@\@QEAA\@XZ
     */
    MCAPI IdentityDictionary();
    /**
     * @symbol ?clearIdentity\@IdentityDictionary\@\@QEAA_NAEBUScoreboardId\@\@\@Z
     */
    MCAPI bool clearIdentity(struct ScoreboardId const&);
    /**
     * @symbol ?convertFakeToReal\@IdentityDictionary\@\@QEAAAEBUScoreboardId\@\@AEBU2\@AEBUPlayerScoreboardId\@\@\@Z
     */
    MCAPI struct ScoreboardId const& convertFakeToReal(struct ScoreboardId const&, struct PlayerScoreboardId const&);
    /**
     * @symbol ?getScoreboardId\@IdentityDictionary\@\@QEBAAEBUScoreboardId\@\@AEBUPlayerScoreboardId\@\@\@Z
     */
    MCAPI struct ScoreboardId const& getScoreboardId(struct PlayerScoreboardId const&) const;
    /**
     * @symbol
     * ?shouldConvertFakePlayer\@IdentityDictionary\@\@QEAA_NAEBUPlayerScoreboardId\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool shouldConvertFakePlayer(struct PlayerScoreboardId const&, std::string const&);
    /**
     * @symbol ??1IdentityDictionary\@\@QEAA\@XZ
     */
    MCAPI ~IdentityDictionary();
    // NOLINTEND
};
