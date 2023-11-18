#pragma once

#include "ll/api/base/Hash.h"
#include "ll/api/reflection/Reflection.h"

namespace ll::event {
class EventId {
public:
    std::string_view const name;
    size_t const           hash;
    [[nodiscard]] constexpr explicit EventId(std::string_view name) noexcept
    : name(name),
      hash(ll::hash::do_hash(name)) {}

    [[nodiscard]] constexpr bool operator==(EventId const& other) const noexcept {
        return hash == other.hash && name == other.name;
    }
    [[nodiscard]] constexpr bool operator!=(EventId const& other) const noexcept {
        return hash != other.hash || name != other.name;
    }

    [[nodiscard]] constexpr std::strong_ordering operator<=>(EventId const& other) const noexcept {
        if (hash != other.hash) { return hash <=> other.hash; }
        return name <=> other.name;
    }
};

static constexpr EventId EmptyEventId{""};

template <class T>
constexpr EventId getEventId = []() -> EventId {
    using Self = std::remove_cvref_t<T>;
    if constexpr (Self::CustomEventId != EmptyEventId) {
        return Self::CustomEventId;
    } else {
        return EventId{ll::reflection::type_raw_name_v<Self>};
    }
}();
} // namespace ll::event

namespace std {
template <>
struct hash<ll::event::EventId> {
    size_t operator()(ll::event::EventId const& id) const noexcept { return id.hash; }
};
} // namespace std
