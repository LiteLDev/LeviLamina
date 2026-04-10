#include "gtest/gtest.h"

#include "ll/api/service/Service.h"
#include "ll/api/service/ServiceManager.h"

using namespace ll;
using namespace ll::service;

class SimpleService : public ServiceImpl<SimpleService, 0> {
public:
    SimpleService()           = default;
    ~SimpleService() override = default;

    void invalidate() override { invalidated = true; }

    bool invalidated = false;
};

namespace {

TEST(ServiceTest, ServiceManagerPublishesRegisterAndUnregisterLifecycle) {
    auto  service = std::make_shared<SimpleService>();
    auto& sm      = ServiceManager::getInstance();

    std::shared_ptr<SimpleService> observedService;
    auto listener = sm.subscribeService<SimpleService>([&](std::shared_ptr<SimpleService> const& currentService) {
        observedService = currentService;
    });

    EXPECT_TRUE(sm.registerService(service));
    ASSERT_NE(observedService, nullptr);
    EXPECT_EQ(observedService.get(), service.get());

    auto queriedService = sm.getService<SimpleService>();
    ASSERT_TRUE(queriedService.has_value());
    EXPECT_EQ(queriedService.value().get(), service.get());

    EXPECT_TRUE(sm.unregisterService(service->getServiceId()));
    EXPECT_TRUE(service->invalidated);
    EXPECT_EQ(observedService, nullptr);
    EXPECT_FALSE(sm.getService<SimpleService>().has_value());

    event::EventBus::getInstance().removeListener(listener);
}

} // namespace
