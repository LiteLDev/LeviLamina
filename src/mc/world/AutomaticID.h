#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename A, typename T>
class AutomaticID {
public:
    T id;

    using Type = A;

    [[nodiscard]] constexpr AutomaticID() : id(0) {}

    [[nodiscard]] constexpr AutomaticID(T x) : id(x) {} // NOLINT

    [[nodiscard]] constexpr operator T() const { return id; } // NOLINT
};

namespace std {
template <typename A, typename T>
class hash<AutomaticID<A, T>> {
public:
    size_t operator()(const AutomaticID<A, T>& dimId) const { return std::hash<T>()(dimId.id); }
};
} // namespace std
