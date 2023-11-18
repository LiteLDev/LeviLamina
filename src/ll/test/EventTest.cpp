#include "ll/api/memory/Hook.h"
#include "mc/server/ServerInstance.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"

#include "ll/api/event/EventRegistry.h"
#include "ll/core/LeviLamina.h"

#include "ll/api/base/ErrorInfo.h"

class TestEventB : public ll::event::Event {
protected:
    TestEventB() = default;

public:
    std::string some       = "hello world";
    ~TestEventB() override = default;
};
class TestEvent1 : public TestEventB {
public:
    static constexpr ll::event::EventId CustomEventId{"My custom Id"};

    TestEvent1() { some = "TestEvent1 haha"; }

    static void tryRegisterHook() {
        static int hook = [] {
            ll::logger.debug("TestEvent1 tryRegisterHook");
            return 0;
        }();
    }
};
class TestEvent2 : public TestEventB {
public:
    TestEvent2() { some = "TestEvent2 haha"; }

    static void tryRegisterHook() {
        static int hook = [] {
            ll::logger.debug("TestEvent2 tryRegisterHook");
            return 0;
        }();
    }
};
class TestEvent3 : public ll::event::Event {
public:
};

LL_AUTO_TYPED_INSTANCE_HOOK(
    EventTestH,
    ll::memory::HookPriority::Normal,
    ServerInstanceEventCoordinator,
    &ServerInstanceEventCoordinator::sendServerThreadStarted,
    void,
    ::ServerInstance& ins
) {
    origin(ins);

    auto& registry = ll::event::EventRegistry::getInstance();

    static std::atomic_uint times{};

    auto listener = std::make_shared<ll::event::Listener<TestEventB>>([](TestEventB& ev) {
        ll::logger.debug("I'm 1, receive: {}, str: {}, {}", typeid(ev).name(), ev.some, times++);
    });
    registry.addListener<TestEvent1>(listener);
    registry.addListener<TestEvent2>(listener);

    auto listener2 = registry.emplaceListener<TestEvent2>(
        [](TestEventB& ev) {
            ll::logger.debug("I'm 2, receive: {}, str: {}, {}", typeid(ev).name(), ev.some, times++);
            if (times.load() == 5) { throw std::runtime_error("hello"); }
        },
        ll::event::EventPriority::High
    );

    ll::logger.debug("I'm 1 myid: {}", listener->getId());
    ll::logger.debug("I'm 2 myid: {}", listener2->getId());

    ll::logger.debug("eventid: {}", ll::event::getEventId<TestEvent1>.name);
    ll::logger.debug("eventid: {}", ll::event::getEventId<TestEvent2>.name);

    registry.publish(TestEvent1{});
    TestEvent2 e2{};
    registry.publish(e2);

    registry.removeListener<TestEvent2>(listener);

    ll::logger.debug("remove 1, 2");

    registry.addListener(listener2);

    registry.publish(TestEvent1{});
    registry.publish(TestEvent2{});
}
