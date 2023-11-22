#include "ll/api/base/ErrorInfo.h"
#include "ll/api/event/Cancellable.h"
#include "ll/api/event/EventBus.h"
#include "ll/api/event/filesystem/FileActionEvent.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/schedule/Scheduler.h"
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

class TestEvent2 : public ll::event::Cancellable<TestEventB> {
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

using namespace ll::schedule;
using namespace ll::chrono_literals;

SystemTimeScheduler remover;

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

    auto listener = ll::event::Listener<TestEventB>::create([](TestEventB& ev) {
        ll::logger.debug("I'm 1, receive: {}, str: {}, {}", typeid(ev).name(), ev.some, times++);
    });
    bus.addListener<TestEvent1>(listener);
    bus.addListener<TestEvent2>(listener);

    auto listener2 = ll::event::Listener<TestEvent2>::create(
        [](TestEvent2& ev) {
            ll::logger.debug("I'm 2, receive: {}, str: {}, {}", typeid(ev).name(), ev.some, times++);

            ll::logger.debug("I'm 2, this can cancel, now isCancelled: {}", ev.isCancelled());
            ll::logger.debug("try cancel");
            ev.cancel();
            ll::logger.debug("I'm 2, this can cancel, now isCancelled: {}", ev.isCancelled());

            if (times.load() == 5) {
                throw std::runtime_error("hello");
            }
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

    using namespace ll::event;
    auto listener3 = Listener<FileActionEvent<"./">>::create([](DynamicFileActionEvent& ev) {
        ll::logger.debug(
            "cst receive: {}, {} {}",
            typeid(ev).name(),
            std::filesystem::canonical(ev.path),
            magic_enum::enum_name(ev.type)
        );
    });
    bus.addListener(listener3);
    auto listener4 = Listener<DynamicFileActionEvent>::create("./", [](auto& ev) {
        ll::logger.debug("dyn receive: {}, {} {}", typeid(ev).name(), ev.path, magic_enum::enum_name(ev.type));
    });
    bus.addListener(listener4);

    remover.add<DelayTask>(1.5min, [=, &bus] { bus.removeListener(listener3); });
    remover.add<DelayTask>(2min, [=, &bus] { bus.removeListener(listener4); });
}
