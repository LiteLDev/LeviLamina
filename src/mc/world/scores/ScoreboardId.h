#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScoreboardId {

public:
    /**
     * @symbol ??0ScoreboardId\@\@QEAA\@_J\@Z
     */
    MCAPI ScoreboardId(__int64); // NOLINT
    /**
     * @symbol ??0ScoreboardId\@\@QEAA\@XZ
     */
    MCAPI ScoreboardId(); // NOLINT
    /**
     * @symbol ??0ScoreboardId\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ScoreboardId(struct ScoreboardId const&); // NOLINT
    /**
     * @symbol ?getHash\@ScoreboardId\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getHash() const; // NOLINT
    /**
     * @symbol ?getIdentityDef\@ScoreboardId\@\@QEBAAEBVIdentityDefinition\@\@XZ
     */
    MCAPI class IdentityDefinition const& getIdentityDef() const; // NOLINT
    /**
     * @symbol ?isValid\@ScoreboardId\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const; // NOLINT
    /**
     * @symbol ??BScoreboardId\@\@QEBA_NXZ
     */
    MCAPI operator bool() const; // NOLINT
    /**
     * @symbol ??9ScoreboardId\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator!=(struct ScoreboardId const&) const; // NOLINT
    /**
     * @symbol ??4ScoreboardId\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct ScoreboardId& operator=(struct ScoreboardId const&); // NOLINT
    /**
     * @symbol ??8ScoreboardId\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator==(struct ScoreboardId const&) const; // NOLINT
    /**
     * @symbol ?INVALID\@ScoreboardId\@\@2U1\@A
     */
    MCAPI static struct ScoreboardId INVALID; // NOLINT
};
