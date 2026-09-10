#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CloneBlocksUtils {

struct FilterBlockInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk4d8c7d;
    ::ll::UntypedStorage<8, 64> mUnkb87546;
    // NOLINTEND

public:
    // prevent constructor by default
    FilterBlockInfo& operator=(FilterBlockInfo const&);
    FilterBlockInfo(FilterBlockInfo const&);
    FilterBlockInfo();
};

} // namespace CloneBlocksUtils
