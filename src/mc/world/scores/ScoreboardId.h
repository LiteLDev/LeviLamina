#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScoreboardId {

public:
    /**
     * @symbol ??0ScoreboardId\@\@QEAA\@_J\@Z
     */
    MCAPI ScoreboardId(__int64);
    /**
     * @symbol ??0ScoreboardId\@\@QEAA\@XZ
     */
    MCAPI ScoreboardId();
    /**
     * @symbol ??0ScoreboardId\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ScoreboardId(struct ScoreboardId const&);
    /**
     * @symbol ?getHash\@ScoreboardId\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getHash() const;
    /**
     * @symbol ?getIdentityDef\@ScoreboardId\@\@QEBAAEBVIdentityDefinition\@\@XZ
     */
    MCAPI class IdentityDefinition const& getIdentityDef() const;
    /**
     * @symbol ?isValid\@ScoreboardId\@\@QEBA_NXZ
     */
    MCAPI bool isValid() const;
    /**
     * @symbol ??BScoreboardId\@\@QEBA_NXZ
     */
    MCAPI operator bool() const;
    /**
     * @symbol ??9ScoreboardId\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator!=(struct ScoreboardId const&) const;
    /**
     * @symbol ??4ScoreboardId\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct ScoreboardId& operator=(struct ScoreboardId const&);
    /**
     * @symbol ??8ScoreboardId\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator==(struct ScoreboardId const&) const;
    /**
     * @symbol ?INVALID\@ScoreboardId\@\@2U1\@A
     */
    MCAPI static struct ScoreboardId INVALID;
};
