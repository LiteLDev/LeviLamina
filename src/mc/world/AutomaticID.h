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
template <>
class hash<AutomaticID<Dimension, int>> {
public:
    size_t operator()(const AutomaticID<Dimension, int>& dimId) const { return std::hash<int>()(dimId.id); }
};
} // namespace std
