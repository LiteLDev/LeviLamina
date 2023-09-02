#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandOriginType.h"

struct CommandOriginData {
public:
    CommandOriginType mType;
    mce::UUID         mUUID;
    std::string       mRequestId;
    int64_t           mPlayerId;

    // NOLINTBEGIN
    // symbol: ??0CommandOriginData@@QEAA@AEBU0@@Z
    MCAPI CommandOriginData(struct CommandOriginData const&);

    // symbol: ??0CommandOriginData@@QEAA@XZ
    MCAPI CommandOriginData();

    // symbol: ??4CommandOriginData@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct CommandOriginData& operator=(struct CommandOriginData const&);

    // symbol: ??1CommandOriginData@@QEAA@XZ
    MCAPI ~CommandOriginData();

    // NOLINTEND
};
