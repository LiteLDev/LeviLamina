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
        logger.info("SimpleService at address {} is being invalidated", reinterpret_cast<void*>(this));
    }
};

void test() {
    auto lock = ll::Logger::lock();
    logger.warn("Testing service manager");
    auto  service = std::make_shared<SimpleService>();
    auto& sm      = ServiceManager::getInstance();

    std::shared_ptr<SimpleService> simpleService;
    auto l = sm.subscribeService<SimpleService>([&](std::shared_ptr<SimpleService> const& service) {
        logger.warn("Received service at address {}", reinterpret_cast<void*>(service.get()));
        simpleService = service;
    });

    logger.warn("Registering service");
    sm.registerService(service);
    logger.warn("Using service at address {}", reinterpret_cast<void*>(simpleService.get()));

    logger.warn("Unregistering service");
    sm.unregisterService(service->getServiceId());
    logger.warn("Using service at address {}", reinterpret_cast<void*>(simpleService.get()));

    event::EventBus::getInstance().removeListener(l);
}

static bool reg = []() {
    event::EventBus::getInstance().emplaceListener<event::ServerStartedEvent>([&](auto) { test(); });
    return true;
}();
