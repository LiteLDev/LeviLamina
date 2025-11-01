#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOriginType.h"

class CommandRunStats {
public:
    // CommandRunStats inner types define
    using OriginToRunCountMap = ::std::unordered_map<::CommandOriginType, uint64>;
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::CommandOriginType, uint64>> mRunCountMap;
    // NOLINTEND

};
