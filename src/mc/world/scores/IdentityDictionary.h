#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IdentityDictionary {
public:
    // prevent constructor by default
    IdentityDictionary& operator=(IdentityDictionary const&);
    IdentityDictionary(IdentityDictionary const&);

public:
    // NOLINTBEGIN
    // symbol: ??0IdentityDictionary@@QEAA@XZ
    MCAPI IdentityDictionary();

    // symbol: ?clearIdentity@IdentityDictionary@@QEAA_NAEBUScoreboardId@@@Z
    MCAPI bool clearIdentity(struct ScoreboardId const&);

    // symbol: ?convertFakeToReal@IdentityDictionary@@QEAAAEBUScoreboardId@@AEBU2@AEBUPlayerScoreboardId@@@Z
    MCAPI struct ScoreboardId const& convertFakeToReal(struct ScoreboardId const&, struct PlayerScoreboardId const&);

    // symbol: ??1IdentityDictionary@@QEAA@XZ
    MCAPI ~IdentityDictionary();

    // NOLINTEND
};
