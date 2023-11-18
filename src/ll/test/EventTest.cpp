#include "ll/api/base/ErrorInfo.h"
#include "ll/api/event/Cancellable.h"
#include "ll/api/event/EventBus.h"
#include "ll/api/memory/Hook.h"
#include "ll/core/LeviLamina.h"
#include "mc/server/ServerInstance.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"

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
class TestEvent2 : public TestEventB, public ll::event::Cancellable {
public:
    TestEvent2() { some = "TestEvent2 haha"; }
    explicit TestEvent2(std::string_view v) { some.assign(v); }

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

    std::lock_guard lock(ll::Logger::loggerMutex);

    auto& bus = ll::event::EventBus::getInstance();

    static std::atomic_uint times{};

    auto listener = std::make_shared<ll::event::Listener<TestEventB>>([](TestEventB& ev) {
        ll::logger.debug("I'm 1, receive: {}, str: {}, {}", typeid(ev).name(), ev.some, times++);
    });
    bus.addListener<TestEvent1>(listener);
    bus.addListener<TestEvent2>(listener);

    auto listener2 = bus.emplaceListener<TestEvent2>(
        [](TestEvent2& ev) {
            ll::logger.debug("I'm 2, receive: {}, str: {}, {}", typeid(ev).name(), ev.some, times++);

#if !_HAS_CXX23
            using namespace ll::event;


            ll::logger.debug("I'm 2, this can cancel, now isCancelled: {}", isCancelled(ev));

            ll::logger.debug("try cancel");

            cancel(ev);

            ll::logger.debug("I'm 2, this can cancel, now isCancelled: {}", isCancelled(ev));

#else

            ll::logger.debug("I'm 2, this can cancel, now isCancelled: {}", ev.isCancelled());

            ll::logger.debug("try cancel");

            ev.cancel();

            ll::logger.debug("I'm 2, this can cancel, now isCancelled: {}", ev.isCancelled());


#endif
            if (times.load() == 5) { throw std::runtime_error("hello"); }
        },
        ll::event::EventPriority::High
    );

    ll::logger.debug("I'm 1 myid: {}", listener->getId());
    ll::logger.debug("I'm 2 myid: {}", listener2->getId());

    ll::logger.debug("eventid: {}", ll::event::getEventId<TestEvent1>.name);
    ll::logger.debug("eventid: {}", ll::event::getEventId<TestEvent2>.name);

    bus.publish(TestEvent1{});
    TestEvent2 e2{"I'm reused TestEvent2......"};
    bus.publish(e2);

    bus.removeListener<TestEvent2>(listener);

    ll::logger.debug("remove 1, 2");

    ll::logger.debug("repeat add, res: {}", bus.addListener<TestEvent2>(listener2));

    bus.publish(TestEvent1{});
    bus.publish(TestEvent2{});
    bus.publish(e2);
}
