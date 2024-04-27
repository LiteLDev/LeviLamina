#pragma once

#include "ll/api/service/ServiceId.h"

namespace ll::service {

class Service {
public:
    virtual ~Service() = default;

    [[nodiscard]] virtual ServiceId getServiceId() const noexcept = 0;

    // this is called when the service is removed from the service manager
    virtual void invalidate() = 0;

    static constexpr ServiceId ServiceId{EmptyServiceId};

    Service()                          = default;
    Service(Service const&)            = delete;
    Service(Service&&)                 = delete;
    Service& operator=(Service const&) = delete;
    Service& operator=(Service&&)      = delete;
};

template <class T>
concept IsService = std::is_base_of_v<Service, T> && requires {
    T::ServiceId;
    requires std::same_as<std::remove_cvref_t<decltype((T::ServiceId))>, ServiceId>;
};

template <class T, size_t version>
class ServiceImpl : public Service {
public:
    [[nodiscard]] class ServiceId getServiceId() const noexcept override { return T::ServiceId; }

    static constexpr class ServiceId ServiceId {
        auto_name_t<T>{}, version
    };
};

} // namespace ll::service
