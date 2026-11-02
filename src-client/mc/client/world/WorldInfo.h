#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/WorldInfoType.h"

struct WorldInfo {
public:
    // WorldInfo inner types define
    enum class Status : int {
        Online      = 0,
        Offline     = 1,
        Unavailable = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::WorldInfoType>     mWorldType;
    ::ll::TypedStorage<4, 4, ::WorldInfo::Status> mStatus;
    // NOLINTEND
};
