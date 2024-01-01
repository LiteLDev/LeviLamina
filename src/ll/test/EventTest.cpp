#include "ll/api/base/ErrorInfo.h"
#include "ll/api/event/Cancellable.h"
#include "ll/api/event/EventBus.h"
#include "ll/api/event/filesystem/FileActionEvent.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/schedule/Scheduler.h"
#include "ll/core/LeviLamina.h"
#include "mc/server/ServerInstance.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"

#include "ll/api/event/DynamicListener.h"
#include "ll/api/event/MultiListener.h"
#include "ll/api/event/command/ExecuteCommandEvent.h"
#include "ll/api/event/entity/ActorHurtEvent.h"
#include "ll/api/event/player/PlayerAddExperienceEvent.h"
#include "ll/api/event/player/PlayerAttackEvent.h"
#include "ll/api/event/player/PlayerConnectEvent.h"
#include "ll/api/event/player/PlayerDestroyBlockEvent.h"
#include "ll/api/event/player/PlayerDieEvent.h"
#include "ll/api/event/player/PlayerJoinEvent.h"
#include "ll/api/event/player/PlayerJumpEvent.h"
#include "ll/api/event/player/PlayerLeaveEvent.h"
#include "ll/api/event/player/PlayerPickUpItemEvent.h"
#include "ll/api/event/player/PlayerPlaceBlockEvent.h"
#include "ll/api/event/player/PlayerRespawnEvent.h"
#include "ll/api/event/player/PlayerSneakEvent.h"
#include "ll/api/event/player/PlayerSprintEvent.h"
#include "ll/api/event/player/PlayerSwingEvent.h"
#include "ll/api/event/player/PlayerUseItemEvent.h"
#include "ll/api/event/player/PlayerUseItemOnEvent.h"
#include "ll/api/event/world/SpawnMobEvent.h"
#include "mc/codebuilder/MCRESULT.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/world/actor/ActorDamageSource.h"
#include "mc/world/item/registry/ItemStack.h"

#include "ll/api/base/FixedString.h"

#include "ll/api/base/Hash.h"

class myTypeList2;

using namespace ll::hash;
using namespace ll::hash_literals;

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
};

class TestEvent2 : public ll::event::Cancellable<TestEventB> {
public:
    TestEvent2() { some = "TestEvent2 haha"; }
    explicit TestEvent2(std::string_view v) { some.assign(v); }
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

    // auto str = ll::toFixedString<ll::reflection::type_raw_name_v<FileActionEvent>>();

    // ll::logger.debug("{}", str.buf);

    auto listener4 = Listener<FileActionEvent>::create("./", [](FileActionEvent& ev) {
        ll::logger.debug("dyn receive: {}, {} {}", typeid(ev).name(), ev.path(), magic_enum::enum_name(ev.type()));
    });
    bus.addListener(listener4);

    remover.add<DelayTask>(2min, [=, &bus] { bus.removeListener(listener4); });

    bus.emplaceListener<ExecutingCommandEvent>([](ExecutingCommandEvent& ev) {
        ll::logger.debug("ExecutingCommandEvent: {}", ev.commandContext().mCommand);
        ll::logger.debug("origin: {}", ev.commandContext().mOrigin->serialize().toSnbt());
    });
    bus.emplaceListener<ExecutedCommandEvent>([](ExecutedCommandEvent& ev) {
        ll::logger.debug("ExecutedCommandEvent: {}", ev.commandContext().mCommand);
        ll::logger.debug("result: {}", ev.result().getFullCode());
    });
    bus.emplaceListener<PlayerConnectEvent>([](PlayerConnectEvent& ev) {
        ll::logger.debug("Player connect: {} {}", ev.self().getRealName(), ev.self().getIPAndPort());
    });
    bus.emplaceListener<PlayerJoinEvent>([](PlayerJoinEvent& ev) {
        ll::logger.debug("Player join: {} {}", ev.self().getRealName(), ev.self().getLocaleName());
    });
    bus.emplaceListener<PlayerLeaveEvent>([](PlayerLeaveEvent& ev) {
        ll::logger.debug("Player leave: {}", ev.self().getRealName());
    });
    bus.emplaceListener<PlayerAttackEvent>([](PlayerAttackEvent& ev) {
        ll::logger.debug(
            "Player {} attack {} cause {}",
            ev.self().getRealName(),
            ev.target().getTypeName(),
            magic_enum::enum_name(ev.cause())
        );
    });
    bus.emplaceListener<PlayerDieEvent>([](PlayerDieEvent& ev) {
        ll::logger
            .debug("Player {} died source {}", ev.self().getRealName(), magic_enum::enum_name(ev.source().getCause()));
    });
    bus.emplaceListener<PlayerRespawnEvent>([](PlayerRespawnEvent& ev) {
        ll::logger.debug("Player {} respawned", ev.self().getRealName());
    });
    bus.emplaceListener<PlayerJumpEvent>([](PlayerJumpEvent& ev) {
        ll::logger.debug("Player {} jumped", ev.self().getRealName());
    });
    bus.emplaceListener<PlayerAddExperienceEvent>([](PlayerAddExperienceEvent& ev) {
        ll::logger.debug("Player {} add experience {}", ev.self().getRealName(), ev.experience());
        if (ev.experience() == 114514) {
            ev.cancel();
        }
    });
    bus.emplaceListener<PlayerPickUpItemEvent>([](PlayerPickUpItemEvent& ev) {
        ll::logger.debug("Player {} take {}", ev.self().getRealName(), ev.itemActor().item().getTypeName());
    });
    bus.emplaceListener<PlayerSwingEvent>([](PlayerSwingEvent& ev) {
        ll::logger.debug("Player {} left click", ev.self().getRealName());
    });
    auto listenersp = Listener<PlayerSprintEvent>::create([](PlayerSprintEvent& ev) {
        switch (do_hash(typeid(ev).name())) {
        case do_hash(ll::reflection::type_raw_name_v<PlayerSprintingEvent>): {
            ll::logger.debug("Player {} start sprint", ev.self().getRealName());
        } break;
        case do_hash(ll::reflection::type_raw_name_v<PlayerSprintedEvent>): {
            ll::logger.debug("Player {} stop sprint", ev.self().getRealName());
        } break;
        default:
            break;
        }
    });
    bus.addListener<PlayerSprintingEvent>(listenersp);
    bus.addListener<PlayerSprintedEvent>(listenersp);
    bus.emplaceListener<PlayerSneakingEvent>([](PlayerSneakingEvent& ev) {
        ll::logger.debug("Player {} start sneak", ev.self().getRealName());
    });
    auto mul = MultiListener<PlayerSprintingEvent, PlayerSneakingEvent>::create([](auto&& ev) {
        ll::logger
            .debug("Player {} MultiListener of {}", ev.self().getRealName(), ll::reflection::type_raw_name_v<decltype(ev)>);
    });
    bus.addListener(mul);

    ll::meta::DynamicTypeList::push_back<myTypeList2, float>();
    ll::logger.debug("{}", typeid(ll::meta::DynamicTypeList::value<myTypeList2>()).name());

    auto dl = DynamicListener::create([](CompoundTag& nbt) {
        // nbt["cancelled"] = true;
        ll::logger.debug("{}", nbt.toSnbt(SnbtFormat::PrettyConsolePrint));
    });


    bus.addListener(dl, getEventId<PlayerUseItemEvent>);
    bus.addListener(dl, getEventId<PlayerUseItemOnEvent>);
    bus.addListener(dl, getEventId<ActorHurtEvent>);
    bus.addListener(dl, getEventId<PlayerDestroyBlockEvent>);
    bus.addListener(dl, getEventId<PlayerPlacingBlockEvent>);
    // bus.addListener(dl, getEventId<SpawnedMobEvent>);
}
