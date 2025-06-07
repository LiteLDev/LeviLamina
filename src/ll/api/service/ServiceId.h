#pragma once

#include "ll/api/reflection/Reflection.h"
#include "ll/api/utils/HashUtils.h"

namespace ll::service {

template <class T>
struct auto_name_t {};

class ServiceIdView;
class ServiceId : public hash_utils::HashedIdBase {
public:
    size_t      version;
    std::string name;

    [[nodiscard]] constexpr explicit ServiceId(std::string_view id, size_t ver) noexcept
    : HashedIdBase(hash_utils::HashCombiner{hash_utils::doHash(id)}.add(ver)),
      name(id),
      version(ver) {}

    [[nodiscard]] constexpr ServiceId(ServiceIdView const& id) noexcept;
};
class ServiceIdView : public hash_utils::HashedIdBase {
public:
    size_t           version;
    std::string_view name;

    [[nodiscard]] constexpr explicit ServiceIdView(std::string_view id, size_t ver) noexcept
    : HashedIdBase(hash_utils::HashCombiner{hash_utils::doHash(id)}.add(ver)),
      name(id),
      version(ver) {}
    [[nodiscard]] constexpr ServiceIdView(ServiceId const& id) noexcept
    : HashedIdBase(id.hash),
      name(id.name),
      version(id.version) {}

    template <class T>
    [[nodiscard]] constexpr ServiceIdView(auto_name_t<T>, size_t version) noexcept
    : ServiceIdView{ll::reflection::type_unprefix_name_v<T>, version} {}
};
[[nodiscard]] constexpr ServiceId::ServiceId(ServiceIdView const& id) noexcept
: HashedIdBase(id.hash),
  name(id.name),
  version(id.version) {}

constexpr ServiceIdView EmptyServiceId{{}, 0};

template <class T>
constexpr ServiceIdView getServiceId = []() -> ServiceIdView {
    using self = std::remove_cvref_t<T>;
    if constexpr (requires { self::ServiceId; } && self::ServiceId != EmptyServiceId) {
        return self::ServiceId;
    } else {
        static_assert(traits::always_false<T>, "ServiceId not defined for type");
    }
}();
} // namespace ll::service
