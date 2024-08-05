#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandOriginType.h"

struct CommandOriginData {
public:
    CommandOriginType mType;
    mce::UUID         mUuid;
    std::string       mRequestId;
    int64             mPlayerId;

    // NOLINTBEGIN
    MCAPI CommandOriginData();

    MCAPI CommandOriginData(struct CommandOriginData const& other);

    MCAPI struct CommandOriginData& operator=(struct CommandOriginData const& rhs);

    MCAPI ~CommandOriginData();

    // NOLINTEND
};
