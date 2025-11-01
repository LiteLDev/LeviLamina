#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ContainerScreenActionResultData {
public:
    // ContainerScreenActionResultData inner types define
    enum class Type : int {
        Autoplace = 0,
        Drop      = 1,
        Craft     = 2,
        ItemName  = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ContainerScreenActionResultData::Type> mType;
    // NOLINTEND
};
