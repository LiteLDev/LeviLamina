#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOriginType.h"

class CommandRunStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkd02660;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandRunStats& operator=(CommandRunStats const&);
    CommandRunStats(CommandRunStats const&);
    CommandRunStats();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void clearRunCounts();

    MCAPI ::std::unordered_map<::CommandOriginType, uint64> const& getRunCountMap() const;

    MCAPI void incrementRunCount(::CommandOriginType originType);
    // NOLINTEND
};
