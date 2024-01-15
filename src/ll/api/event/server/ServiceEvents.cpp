#include "ll/api/event/server/ServiceEvents.h"

#include "ll/api/event/Emitter.h"
#include "ll/api/event/ListenerBase.h"

namespace ll::event::inline server {

std::shared_ptr<service::Service> const& ServiceEvent::service() const { return mService; }

ServiceRegisterEvent::ServiceRegisterEvent(std::shared_ptr<service::Service> service)
: ServiceEvent(std::move(service)) {}

ServiceUnregisterEvent::ServiceUnregisterEvent(std::shared_ptr<service::Service> service)
: ServiceEvent(std::move(service)) {}

class ServiceEventEmitter
: public Emitter<[](auto&&) { return nullptr; }, ServiceRegisterEvent, ServiceUnregisterEvent> {};

} // namespace ll::event::inline server
