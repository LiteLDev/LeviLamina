#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/platform/brstd/bitset.h"

namespace Bedrock {

template <typename TEnum, auto SizeEnum>
class EnumSet {
public:
    using size_type                    = size_t;
    static constexpr size_type MaxSize = static_cast<size_type>(SizeEnum);
    using mContainertype               = brstd::bitset<MaxSize, std::underlying_type_t<TEnum>>;
    using value_type                   = TEnum;

    mContainertype mContainer;

    class iterator {
        using reference = TEnum;

    public:
        friend class EnumSet;
        iterator(EnumSet const& set, size_type index) : set_(&set), index_(index) {}
        EnumSet const* set_;
        size_type      index_;
    };
    static_assert(sizeof(iterator) == 16);

    using const_iterator = iterator;

    constexpr std::pair<iterator, bool> insert(value_type value) {
        using U  = std::underlying_type_t<TEnum>;
        auto idx = static_cast<U>(value);
        if (mContainer.test(idx)) {
            return {iterator(*this, idx), false};
        }
        mContainer.set(idx);
        return {iterator(*this, idx), true};
    }

    constexpr bool contains(value_type const value) const {
        using U = std::underlying_type_t<TEnum>;
        return mContainer.test(static_cast<U>(value));
    }
};

} // namespace Bedrock
