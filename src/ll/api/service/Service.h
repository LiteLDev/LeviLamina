#pragma once

#include "ll/api/service/ServiceId.h"

namespace ll::service {

class Service {
public:
    virtual ~Service() = 0;

    static constexpr ServiceId ServiceId{EmptyServiceId};
};

template <class T>
concept IsService = std::is_base_of_v<Service, T> && requires {
    T::ServiceId;
    requires std::same_as<std::remove_cvref_t<decltype(T::ServiceId)>, ServiceId>;
};

} // namespace ll::service
