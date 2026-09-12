#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include <tuple>

#include "ll/api/utils/HashUtils.h"

namespace mce::Math {

struct TupleHash {
    template <typename... Args>
    size_t operator()(std::tuple<Args...> const& t) const noexcept {
        ll::hash_utils::HashCombiner combiner;

        std::apply([&](auto const&... args) { (combiner.add(args), ...); }, t);
        return combiner.hash();
    }
};

} // namespace mce::Math
