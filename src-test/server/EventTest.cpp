#include "ll/api/event/Cancellable.h"
#include "ll/api/event/EventBus.h"
#include "ll/api/io/PatternFormatter.h"
#include "ll/api/io/Sink.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/thread/ServerThreadExecutor.h"
#include "ll/api/utils/ErrorUtils.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/core/LeviLamina.h"
#include "mc/network/packet/TextPacket.h"
#include "mc/server/ServerInstance.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"

#include "ll/api/event/DynamicListener.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/event/MultiListener.h"
#include "ll/api/io/FileUtils.h"
#include "mc/deps/core/utility/MCRESULT.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/world/actor/ActorDamageSource.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/dimension/Dimension.h"

#include "ll/api/base/FixedString.h"

#include "ll/api/utils/HashUtils.h"

using namespace ll::hash_utils;

class TestEventB : public ll::event::Event {
protected:
    TestEventB() = default;

public:
    std::string some       = "hello world";
    ~TestEventB() override = default;
};

class TestEvent1 final : public TestEventB {
public:
    static constexpr ll::event::EventIdView CustomEventId{"My custom Id"};

    ll::event::EventId getId() const override { return CustomEventId; }

    TestEvent1() { some = "TestEvent1 haha"; }
};

class TestEvent2 final : public ll::event::Cancellable<TestEventB> {
public:
    TestEvent2() { some = "TestEvent2 haha"; }
    explicit TestEvent2(std::string_view v) { some.assign(v); }
};

class TestEvent3 final : public ll::event::Event {
public:
};

class TestEventEmitter
: public ll::event::Emitter<[](auto&&...) { return nullptr; }, TestEvent1, TestEvent2, TestEvent3> {};

LL_AUTO_TYPE_INSTANCE_HOOK(
    EventTestH,
    ll::memory::HookPriority::Normal,
    ServerInstanceEventCoordinator,
    &ServerInstanceEventCoordinator::sendServerInitializeEnd,
    void,
    ::ServerInstance& ins
) {
    origin(ins);

    auto& bus = ll::event::EventBus::getInstance();

    static std::atomic_uint times{};

    auto listener = ll::event::Listener<TestEventB>::create([](TestEventB& ev) {
        ll::getLogger().debug("I'm 1, receive: {}, str: {}, {}", ev.getId().name, ev.some, times++);
    });
    bus.addListener<TestEvent1>(listener);
    bus.addListener<TestEvent2>(listener);

    auto listener2 = ll::event::Listener<TestEvent2>::create(
        [](TestEvent2& ev) {
            ll::getLogger().debug("I'm 2, receive: {}, str: {}, {}", ev.getId().name, ev.some, times++);

            ll::getLogger().debug("I'm 2, this can cancel, now isCancelled: {}", ev.isCancelled());
            ll::getLogger().debug("try cancel");
            ev.cancel();
            ll::getLogger().debug("I'm 2, this can cancel, now isCancelled: {}", ev.isCancelled());

            if (times.load() == 5) {
                throw std::runtime_error("hello");
            }
        },
        ll::event::EventPriority::High
    );

    ll::getLogger().debug("I'm 1 myid: {}", listener->getId());
    ll::getLogger().debug("I'm 2 myid: {}", listener2->getId());

    ll::getLogger().debug("eventid: {}", ll::event::getEventId<TestEvent1>.name);
    ll::getLogger().debug("eventid: {}", ll::event::getEventId<TestEvent2>.name);

    bus.publish(TestEvent1{});
    TestEvent2 e2{"I'm reused TestEvent2......"};
    bus.publish(e2);

    bus.removeListener<TestEvent2>(listener);

    ll::getLogger().debug("remove 1, 2");

    ll::getLogger().debug("repeat add, res: {}", bus.addListener<TestEvent2>(listener2));

    bus.publish(TestEvent1{});
    bus.publish(TestEvent2{});
    bus.publish(e2);

    using namespace ll::event;

    std::vector<std::pair<std::string, EventId>> ids;
    for (auto [modName, id] : bus.events()) {
        ids.emplace_back(std::string{modName}, id);
    }
    for (auto [modName, id] : ids) {
        if (!id.name.ends_with("::LevelTickEvent"))
            bus.addListener(
                DynamicListener::create([modName](CompoundTag& nbt) {
                    ll::getLogger().debug("event from {}, {}", modName, nbt.toSnbt(SnbtFormat::PrettyChatPrint));
                }),
                id
            );
    }

    class BroadcastSink : public ll::io::Sink {
    public:
        BroadcastSink() : Sink(ll::makePolymorphic<ll::io::PatternFormatter>("<{tit}|{lvl}> [{tm:%T}] {msg}")) {}

        void append(ll::io::LogMessageView const& view) override {
            std::string buffer;
            formatter->format(view, buffer);
            ll::thread::ServerThreadExecutor::getDefault().execute(
                [pkt = TextPacket::createRawMessage(ll::string_utils::replaceAnsiToMcCode(buffer))] {
                    pkt.sendToClients();
                }
            );
        }
    };
    ll::getLogger().addSink(std::make_shared<BroadcastSink>());
}
