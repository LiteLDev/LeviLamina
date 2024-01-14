#pragma once

#include "nonstd/expected.hpp"

#include "ll/api/plugin/NativePlugin.h"
#include "ll/api/service/Service.h"
#include "ll/api/service/ServiceId.h"

namespace ll::service {

class ServiceManager {
public:
    struct GetServiceError {
        enum class ErrorType : char {
            NotExist        = 0,
            VersionMismatch = 1,
        };
        using enum ErrorType;

        ErrorType code;
        size_t    version;

        constexpr GetServiceError(ErrorType code, size_t version = 0) // NOLINT(google-explicit-constructor)
        : code(code),
          version(version) {}
    };

    static ServiceManager& getInstance();

    template <IsService T>
    nonstd::expected<std::shared_ptr<T>, GetServiceError> getService() {
        auto res = getService(getServiceId<T>);
        if (!res) {
            return nonstd::make_unexpected(res.error());
        }
        return std::static_pointer_cast<T>(res.value());
    }

    template <IsService T>
    bool registerService(std::shared_ptr<T> const& service) {
        return registerService(getServiceId<T>, service);
    }

    LLNDAPI nonstd::expected<std::shared_ptr<Service>, GetServiceError> getService(ServiceId const& id);

    LLNDAPI std::optional<std::pair<ServiceId, std::shared_ptr<Service>>> queryService(std::string_view name);

    LLAPI bool registerService(
        ServiceId const&                       id,
        std::shared_ptr<Service> const&        service,
        std::shared_ptr<plugin::Plugin> const& plugin = plugin::NativePlugin::current()
    );

    LLAPI bool unregisterService(ServiceId const& id);

    LLAPI void unregisterService(plugin::Plugin const& plugin);

    ServiceManager(ServiceManager const&)            = delete;
    ServiceManager(ServiceManager&&)                 = delete;
    ServiceManager& operator=(ServiceManager const&) = delete;
    ServiceManager& operator=(ServiceManager&&)      = delete;

private:
    class Impl;
    std::unique_ptr<Impl> impl;

    ServiceManager();
    ~ServiceManager();
};

} // namespace ll::service
