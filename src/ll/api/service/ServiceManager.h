#pragma once

#include <type_traits>

#include "ll/api/event/EventBus.h"
#include "ll/api/event/MultiListener.h"
#include "ll/api/event/server/ServiceEvents.h"
#include "ll/api/plugin/NativePlugin.h"
#include "ll/api/service/Service.h"
#include "ll/api/service/ServiceId.h"

#include "mc/external/expected_lite/expected.h"

namespace ll::service {

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

struct QueryServiceResult {
    std::string              name;
    size_t                   version;
    std::string              pluginName;
    std::shared_ptr<Service> service;
};

class ServiceManager {
public:
    LLNDAPI static ServiceManager& getInstance();

    template <IsService T>
    event::ListenerPtr subscribeService(std::function<void(std::shared_ptr<T> const&)> const& fn) {
        if (auto service = getService<T>(); service) {
            fn(*service);
        }
        auto listener =
            event::MultiListener<event::server::ServiceRegisterEvent, event::server::ServiceUnregisterEvent>::create(
                [fn](auto&& event) {
                    if (event.service()->getServiceId() == T::ServiceId) {
                        if constexpr (std::is_same_v<
                                          std::remove_cvref_t<decltype(event)>,
                                          event::server::ServiceUnregisterEvent>) {
                            fn(nullptr);
                        } else {
                            fn(std::static_pointer_cast<T>(event.service()));
                        }
                    }
                }
            );
        event::EventBus::getInstance().addListener(listener);
        return listener;
    }

    template <IsService T>
    nonstd::expected<std::shared_ptr<T>, GetServiceError> getService() {
        auto res = getService(getServiceId<T>);
        if (!res) {
            return nonstd::make_unexpected(res.error());
        }
        return std::static_pointer_cast<T>(*res);
    }

    LLNDAPI nonstd::expected<std::shared_ptr<Service>, GetServiceError> getService(ServiceId const& id);

    LLNDAPI std::optional<QueryServiceResult> queryService(std::string_view name);

    LLAPI bool registerService(
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
