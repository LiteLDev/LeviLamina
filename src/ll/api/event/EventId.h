#pragma once

#include "ll/api/reflection/Reflection.h"
#include "ll/api/utils/HashUtils.h"

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
        return EventIdView{ll::reflection::type_unprefix_name_v<self>};
    }
}();
} // namespace ll::event
