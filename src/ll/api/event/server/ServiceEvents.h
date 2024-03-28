#pragma once

#include "ll/api/event/Event.h"
#include "ll/api/service/Service.h"

#include "mc/server/ServerInstance.h"

namespace ll::event::inline server {
class ServiceEvent : public Event {
public:
    LLNDAPI std::shared_ptr<service::Service> const& service() const;

protected:
    explicit ServiceEvent(std::shared_ptr<service::Service> service) : mService(std::move(service)) {}

    std::shared_ptr<service::Service> mService;
};

class ServiceRegisterEvent final : public ServiceEvent {
public:
    explicit ServiceRegisterEvent(std::shared_ptr<service::Service> service);
};

class ServiceUnregisterEvent final : public ServiceEvent {
public:
    explicit ServiceUnregisterEvent(std::shared_ptr<service::Service> service);
};
} // namespace ll::event::inline server
