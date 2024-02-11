#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IdentityDefinition;

struct ScoreboardId {
public:
    int64               mRawId;       // this+0x0
    IdentityDefinition* mIdentityDef; // this+0x8

    ScoreboardId& operator++() {
        ++mRawId;
        return *this;
    }

    // NOLINTBEGIN
    // symbol: ??0ScoreboardId@@QEAA@XZ
    MCAPI ScoreboardId();

    // symbol: ??0ScoreboardId@@QEAA@_J@Z
    MCAPI explicit ScoreboardId(int64 bytes);

    // symbol: ??0ScoreboardId@@QEAA@AEBU0@@Z
    MCAPI ScoreboardId(struct ScoreboardId const& scoreboardId);

    // symbol: ?getHash@ScoreboardId@@QEBA_KXZ
    MCAPI uint64 getHash() const;

    // symbol: ?getIdentityDef@ScoreboardId@@QEBAAEBVIdentityDefinition@@XZ
    MCAPI class IdentityDefinition const& getIdentityDef() const;

    // symbol: ?isValid@ScoreboardId@@QEBA_NXZ
    MCAPI bool isValid() const;

    // symbol: ??9ScoreboardId@@QEBA_NAEBU0@@Z
    MCAPI bool operator!=(struct ScoreboardId const& rhs) const;

    // symbol: ??4ScoreboardId@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct ScoreboardId& operator=(struct ScoreboardId const& scoreboardId);

    // symbol: ??8ScoreboardId@@QEBA_NAEBU0@@Z
    MCAPI bool operator==(struct ScoreboardId const& rhs) const;

    // symbol: ?INVALID@ScoreboardId@@2U1@A
    MCAPI static struct ScoreboardId INVALID;

    // NOLINTEND
};
