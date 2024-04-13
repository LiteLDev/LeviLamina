#pragma once

#include "ll/api/reflection/Reflection.h"
#include "ll/api/utils/HashUtils.h"

namespace ll::event {
class EventId {
public:
    std::string_view const name;
    size_t const           hash;

    [[nodiscard]] constexpr explicit EventId(std::string_view name) noexcept
    : name(name),
      hash(ll::hash_utils::doHash(name)) {}

    [[nodiscard]] constexpr bool operator==(EventId other) const noexcept {
        return hash == other.hash && name == other.name;
    }

    [[nodiscard]] constexpr std::strong_ordering operator<=>(EventId other) const noexcept {
        if (hash != other.hash) {
            return hash <=> other.hash;
        }
        return name <=> other.name;
    }
};

static inline constexpr EventId EmptyEventId{{}};

template <class T>
constexpr EventId getEventId = []() -> EventId {
    using self = std::remove_cvref_t<T>;
    if constexpr (self::CustomEventId != EmptyEventId) {
        return self::CustomEventId;
    } else {
        static_assert(std::is_final_v<self>, "Only final classes can use getEventId");
        return EventId{ll::reflection::type_unprefix_name_v<self>};
    }
}();
} // namespace ll::event

namespace std {
template <>
struct hash<ll::event::EventId> {
    size_t operator()(ll::event::EventId const& id) const noexcept { return id.hash; }
};
} // namespace std
