#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct DescriptionConfig {
public:
    // DescriptionConfig inner types define
    enum class Mode : int {
        Brief    = 0,
        Detailed = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6299ff;
    ::ll::UntypedStorage<1, 1> mUnk12fe3b;
    ::ll::UntypedStorage<1, 1> mUnkc8d3a7;
    // NOLINTEND

public:
    // prevent constructor by default
    DescriptionConfig& operator=(DescriptionConfig const&);
    DescriptionConfig(DescriptionConfig const&);
    DescriptionConfig();
};

} // namespace cereal::internal
