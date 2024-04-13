#pragma once

#include "ll/api/reflection/Reflection.h"
#include "ll/api/utils/HashUtils.h"

namespace ll::service {

template <class T>
struct auto_name_t {};

class ServiceId {
public:
    std::string name;
    size_t      version{};
    size_t      hash{};

    [[nodiscard]] constexpr ServiceId(std::string_view name, size_t version) noexcept
    : name(name),
      version(version),
      hash(ll::hash_utils::doHash(name)) {
        ll::hash_utils::hashCombine(version, hash);
    }

    template <class T>
    [[nodiscard]] constexpr ServiceId(auto_name_t<T>, size_t version) noexcept
    : ServiceId{ll::reflection::type_raw_name_v<T>, version} {}

    [[nodiscard]] constexpr bool operator==(ServiceId const& other) const noexcept {
        return hash == other.hash && version == other.version && name == other.name;
    }

    [[nodiscard]] constexpr std::strong_ordering operator<=>(ServiceId const& other) const noexcept {
        if (hash != other.hash) {
            return hash <=> other.hash;
        }
        if (version != other.version) {
            return version <=> other.version;
        }
        return name <=> other.name;
    }
};

constexpr ServiceId EmptyServiceId{{}, 0};

template <class T>
constexpr ServiceId getServiceId = []() -> ServiceId {
    using self = std::remove_cvref_t<T>;
    if constexpr (requires { self::ServiceId; } && self::ServiceId != EmptyServiceId) {
        return self::ServiceId;
    } else {
        static_assert(ll::concepts::always_false<T>, "ServiceId not defined for type");
    }
}();
} // namespace ll::service

namespace std {
template <>
struct hash<ll::service::ServiceId> {
    size_t operator()(ll::service::ServiceId const& id) const noexcept { return id.hash; }
};
} // namespace std
