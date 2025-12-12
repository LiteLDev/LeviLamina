#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename A, typename T>
class AutomaticID {
public:
    T id;

    using Type = A;

    [[nodiscard]] constexpr AutomaticID() : id(0) {}

    [[nodiscard]] constexpr AutomaticID(T x) : id(x) {}

    [[nodiscard]] constexpr operator T() const { return id; }

    [[nodiscard]] inline bool operator==(AutomaticID const& other) const { return id == other.id; }

    [[nodiscard]] inline bool operator==(T const& other) const { return id == other; }

    [[nodiscard]] inline std::strong_ordering operator<=>(AutomaticID const& other) const { return id <=> other.id; }

    [[nodiscard]] inline std::strong_ordering operator<=>(T const& other) const { return id <=> other; }
};

namespace std {
template <typename A, typename T>
class hash<AutomaticID<A, T>> {
public:
    size_t operator()(AutomaticID<A, T> const& dimId) const { return static_cast<size_t>(dimId.id); }
};
} // namespace std
