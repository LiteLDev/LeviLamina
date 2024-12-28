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
    ::ll::UntypedStorage<4, 4> mUnk822044;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerScreenActionResultData& operator=(ContainerScreenActionResultData const&);
    ContainerScreenActionResultData(ContainerScreenActionResultData const&);
    ContainerScreenActionResultData();
};
