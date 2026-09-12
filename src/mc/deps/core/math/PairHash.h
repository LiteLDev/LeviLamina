#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include <utility>

#include "ll/api/utils/HashUtils.h"

namespace mce::Math {

struct PairHash {
    template <typename T1, typename T2>
    size_t operator()(std::pair<T1, T2> const& p) const noexcept {
        return ll::hash_utils::HashCombiner{}.add(p.first).add(p.second);
    }
};

} // namespace mce::Math
