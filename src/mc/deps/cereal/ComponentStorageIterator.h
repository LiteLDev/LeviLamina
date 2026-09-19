#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ComponentStorageSentinelType; }
// clang-format on

namespace cereal::internal {

// Compile-only placeholder for a generated header; does not describe the game's ABI.
// entt v4 constrains `entt::iterable_adaptor` with `std::input_or_output_iterator` and
// `std::sentinel_for`, so the type has to model an iterator to remain usable as a
// template argument. The members are declared but deliberately left undefined, as
// nothing is supposed to actually iterate with this placeholder.
template <typename T0, typename T1>
class ComponentStorageIterator {
public:
    using difference_type = ::std::ptrdiff_t;

    [[nodiscard]] constexpr T1& operator*() const;

    constexpr ComponentStorageIterator& operator++();
    constexpr ComponentStorageIterator  operator++(int);
};

template <typename T0, typename T1>
[[nodiscard]] constexpr bool
operator==(ComponentStorageIterator<T0, T1> const&, ::cereal::ComponentStorageSentinelType const&);

} // namespace cereal::internal
