#pragma once

#include <memory>

#include "ll/api/service/ServiceId.h"

namespace ll::service {

class Service {
public:
    virtual ~Service() = 0;

    [[nodiscard]] virtual ServiceId getServiceId() const noexcept = 0;

    // this is called when the service is removed from the service manager
    virtual void invalidate() = 0;

    static constexpr ServiceId ServiceId{EmptyServiceId};
};

template <class T>
concept IsService = std::is_base_of_v<Service, T> && requires {
    T::ServiceId;
    requires std::same_as<std::remove_cvref_t<decltype(T::ServiceId)>, ServiceId>;
};

class ServiceUnavailableError : public std::runtime_error {
public:
    explicit ServiceUnavailableError() : std::runtime_error("Service unavailable") {}
};

template <IsService T>
class ServiceWrapper final : public Service {
public:
    ~ServiceWrapper() override = default;

    [[nodiscard]] class ServiceId getServiceId() const noexcept override { return T::ServiceId; }

    void invalidate() override { mService.reset(); }

    explicit ServiceWrapper(std::shared_ptr<T> service) : mService(std::move(service)) {}

    [[nodiscard]] T& operator*() const noexcept {
        if (!mService) {
            throw ServiceUnavailableError();
        }
        return *mService;
    }

    [[nodiscard]] T* operator->() const noexcept {
        if (!mService) {
            throw ServiceUnavailableError();
        }
        return mService.get();
    }

    [[nodiscard]] T* get() const noexcept { return mService.get(); }

    [[nodiscard]] bool isAvailable() const noexcept { return mService != nullptr; }

    [[nodiscard]] explicit operator bool() const noexcept { return isAvailable(); }

private:
    std::shared_ptr<T> mService;
};

} // namespace ll::service
