#include "ll/api/event/server/ServiceEvents.h"

#include "ll/api/event/Emitter.h"
#include "ll/api/event/EmitterBase.h"
#include "ll/api/event/ListenerBase.h"

namespace ll::event::inline server {

std::shared_ptr<service::Service> const& ServiceEvent::service() const { return mService; }

ServiceRegisterEvent::ServiceRegisterEvent(std::shared_ptr<service::Service> service)
: ServiceEvent(std::move(service)) {}

ServiceUnregisterEvent::ServiceUnregisterEvent(std::shared_ptr<service::Service> service)
: ServiceEvent(std::move(service)) {}

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&);
class ServiceEventEmitter : public Emitter<ServiceRegisterEvent, emitterFactory>,
                            public Emitter<ServiceUnregisterEvent, emitterFactory> {
public:
    ServiceEventEmitter() noexcept = default;
};

static std::unique_ptr<EmitterBase> emitterFactory(ListenerBase&) { return std::make_unique<ServiceEventEmitter>(); }

} // namespace ll::event::inline server
