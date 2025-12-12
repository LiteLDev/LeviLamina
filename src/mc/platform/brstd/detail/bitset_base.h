#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace brstd::detail {

template <typename Derived, typename UnderlyingContainer>
class bitset_base {
public:
    using underlying_container = UnderlyingContainer;
    using underlying_type      = UnderlyingContainer::value_type;
    using size_type            = UnderlyingContainer::size_type;

protected:
    static const size_t bits_per_value = sizeof(underlying_type) * 8;

public:
    constexpr bool test(size_type pos) const {
        auto idx    = pos / bits_per_value;
        auto offset = pos % bits_per_value;
        return ((container_[idx] >> offset) & underlying_type(1)) != 0;
    }

    constexpr Derived& set(size_type pos) { return set(pos, true); }

    constexpr Derived& set(size_type pos, bool value) {
        auto idx    = pos / bits_per_value;
        auto offset = pos % bits_per_value;
        if (value) {
            container_[idx] |= (underlying_type(1) << offset);
        } else {
            container_[idx] &= ~(underlying_type(1) << offset);
        }
        return static_cast<Derived&>(*this);
    }

protected:
    underlying_container container_;
};

} // namespace brstd::detail
