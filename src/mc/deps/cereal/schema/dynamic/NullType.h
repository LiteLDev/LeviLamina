#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

struct NullType {
    [[nodiscard]] constexpr bool operator==(NullType const&) const noexcept = default;
};

} // namespace cereal
