#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_20 {

struct UniformIntProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk98327a;
    ::ll::UntypedStorage<4, 4> mUnkd17a40;
    // NOLINTEND

public:
    // prevent constructor by default
    UniformIntProvider& operator=(UniformIntProvider const&);
    UniformIntProvider(UniformIntProvider const&);
    UniformIntProvider();
};

} // namespace SharedTypes::v1_21_20
