#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br {

struct StaticSpawnArea {
public:
    static constexpr std::size_t page_size = 32;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> offset;
    // NOLINTEND
};

} // namespace br
