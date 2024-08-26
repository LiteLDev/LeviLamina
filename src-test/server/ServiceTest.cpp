#include "ll/api/service/Service.h"
#include "ll/api/event/server/ServerStartedEvent.h"
#include "ll/api/service/ServiceManager.h"
#include "ll/core/LeviLamina.h"

using namespace ll;
using namespace ll::service;

class SimpleService : public ServiceImpl<SimpleService, 0> {
public:
    SimpleService()           = default;
    ~SimpleService() override = default;

    void invalidate() override {
        ll::getLogger().info("SimpleService at address {} is being invalidated", reinterpret_cast<void*>(this));
    }
};

void test() {
    ll::getLogger().warn("Testing service manager");
    auto  service = std::make_shared<SimpleService>();
    auto& sm      = ServiceManager::getInstance();

    std::shared_ptr<SimpleService> simpleService;
    auto l = sm.subscribeService<SimpleService>([&](std::shared_ptr<SimpleService> const& service) {
        ll::getLogger().warn("Received service at address {}", reinterpret_cast<void*>(service.get()));
        simpleService = service;
    });

    ll::getLogger().warn("Registering service");
    sm.registerService(service);
    ll::getLogger().warn("Using service at address {}", reinterpret_cast<void*>(simpleService.get()));

    ll::getLogger().warn("Unregistering service");
    sm.unregisterService(service->getServiceId());
    ll::getLogger().warn("Using service at address {}", reinterpret_cast<void*>(simpleService.get()));

    event::EventBus::getInstance().removeListener(l);
}

static bool reg = []() {
    event::EventBus::getInstance().emplaceListener<event::ServerStartedEvent>([&](auto) { test(); });
    return true;
}();
