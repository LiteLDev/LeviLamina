#pragma once

#include "ll/api/reflection/TypeName.h"
#include "ll/api/utils/HashUtils.h"
#include <fmt/format.h>
#include <format>

namespace ll::event {
class EventIdView;
class EventId : public hash_utils::HashedIdBase {
public:
    std::string name;

    [[nodiscard]] constexpr explicit EventId(std::string_view id) noexcept
    : HashedIdBase(hash_utils::doHash(id)),
      name(id) {}
    [[nodiscard]] constexpr EventId(EventIdView const& id) noexcept;
};
class EventIdView : public hash_utils::HashedIdBase {
public:
    std::string_view name;

    [[nodiscard]] constexpr explicit EventIdView(std::string_view id) noexcept
    : HashedIdBase(hash_utils::doHash(id)),
      name(id) {}
    [[nodiscard]] constexpr EventIdView(EventId const& id) noexcept : HashedIdBase(id.hash), name(id.name) {}
};
[[nodiscard]] constexpr EventId::EventId(EventIdView const& id) noexcept : HashedIdBase(id.hash), name(id.name) {}

static constexpr inline EventIdView EmptyEventId{{}};

template <class T>
constexpr EventIdView getEventId = []() -> EventIdView {
    using self = std::remove_cvref_t<T>;
    if constexpr (self::CustomEventId != EmptyEventId) {
        return self::CustomEventId;
    } else {
        static_assert(std::is_final_v<self>, "Only final classes can use getEventId");
        return EventIdView{reflection::type_unprefix_name_v<self>};
    }
}();
} // namespace ll::event

template <>
struct fmt::formatter<ll::event::EventId> : fmt::formatter<std::string> {
    template <typename FormatContext>
    auto format(ll::event::EventId const& id, FormatContext& ctx) const {
        return formatter<std::string>::format(id.name, ctx);
    }
};

template <>
struct fmt::formatter<ll::event::EventIdView> : fmt::formatter<std::string_view> {
    template <typename FormatContext>
    auto format(ll::event::EventIdView const& id, FormatContext& ctx) const {
        return formatter<std::string_view>::format(id.name, ctx);
    }
};

template <>
struct std::formatter<ll::event::EventId> : std::formatter<std::string> {
    template <typename FormatContext>
    auto format(ll::event::EventId const& id, FormatContext& ctx) const{
        return std::formatter<std::string>::format(id.name, ctx);
    }
};

template <>
struct std::formatter<ll::event::EventIdView> : std::formatter<std::string_view> {
    template <typename FormatContext>
    auto format(ll::event::EventIdView const& id, FormatContext& ctx) const{
        return std::formatter<std::string_view>::format(id.name, ctx);
    }
};