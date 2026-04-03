#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FurnaceIngredientSearchResultsUtil {

struct ContainerInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkadaaf4;
    ::ll::UntypedStorage<4, 4> mUnkec0b58;
    // NOLINTEND

public:
    // prevent constructor by default
    ContainerInfo& operator=(ContainerInfo const&);
    ContainerInfo(ContainerInfo const&);
    ContainerInfo();
};

} // namespace FurnaceIngredientSearchResultsUtil
