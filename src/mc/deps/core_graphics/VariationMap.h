#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cg {

struct VariationMap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkdc7e39;
    ::ll::UntypedStorage<8, 16> mUnkabcbac;
    // NOLINTEND

public:
    // prevent constructor by default
    VariationMap& operator=(VariationMap const&);
    VariationMap(VariationMap const&);
    VariationMap();
};

} // namespace cg
