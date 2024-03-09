
#include "ll/api/Logger.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/schedule/Scheduler.h"
#include "ll/api/utils/RandomUtils.h"
#include "mc/server/ServerInstance.h"
#include "mc/server/ServerLevel.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"

// #include "ll/api/thread/GlobalThreadPauser.h"

using namespace ll::schedule;

using namespace ll::chrono_literals;

ll::Logger schedulelogger("Schedule");

SystemTimeScheduler      s;
ServerTimeAsyncScheduler s2;
GameTickScheduler        s3;

#include "mc/network/packet/TextPacket.h"

#include "ll/api/data/DependencyGraph.h"

#include "ll/api/base/Meta.h"

#pragma warning(push)
#pragma warning(disable : 4723)

LL_AUTO_TYPE_INSTANCE_HOOK(
    SchedulerTestHook,
    HookPriority::Normal,
    ServerInstanceEventCoordinator,
    &ServerInstanceEventCoordinator::sendServerThreadStarted,
    void,
    ::ServerInstance& ins
) {

    // ll::Logger::setDefaultPlayerOutputFunc([](std::string_view sv) {
    // TextPacket::createRawMessage(sv).sendToClients(); }
    // );
    /*
         s.add<RepeatTask>(100_tick, [&] {
             schedulelogger.info(
                 "hi, 100_tick life {} ramdom {}",
                 ll::chrono::GameTickClock::now().time_since_epoch(),
                 ll::random_utils::rand<uint>()
             );
         });

         s2.add<DelayTask>(1_tick, [&] {
             schedulelogger.info("try GameTime {}", ll::chrono::GameTickClock::now().time_since_epoch());
             s3.add<RepeatTask>(5s, [&] {
                 schedulelogger.warn(
                     "hi, 5s       gt   {} ramdom {}",
                     ll::chrono::GameTickClock::now().time_since_epoch(),
                     ll::random_utils::rand<double>()
                 );
             });
         });

         s2.add<RepeatTask>(0.1min, [&] {
             auto lock = ll::Logger::lock();
             schedulelogger.info(
                 "hi, 0.1min   game {} random {}",
                 ll::chrono::GameTickClock::now().time_since_epoch(),
                 ll::random_utils::rand<int64>()
             );
             auto random  = ll::random_utils::rand<int64>();
             random      /= 0;
             schedulelogger.info("{}", random);
             throw std::system_error(std::error_code(0, ll::error_utils::hresult_category()));
         });

         // s2.add<RepeatTask>(0.3min, [&] {
         //     auto            pause = ll::thread::GlobalThreadPauser{};

         //     schedulelogger.info("hello I paused all threads 1s");

         //     std::this_thread::sleep_for(1s);
         //     schedulelogger.info("hello I paused all threads 2s");

         //     std::this_thread::sleep_for(1s);

         //     schedulelogger.info("hello I resumed all threads");
         // });
     */
    auto l = ll::Logger::lock();

    ll::data::DependencyGraph<std::string> dep;
    dep.emplaceDependencies("a", {"b", "c", "e"});
    dep.emplaceDependencies("b", {"c"});
    dep.emplaceDependencies("c", {"d"});
    dep.emplaceDependencies("e", {"a"});
    const auto& result = dep.sort();
    schedulelogger.info("sorted: {}", result.sorted);
    schedulelogger.info("unsorted: {}", result.unsorted);

    for (auto k : {1, 4, 6}) {
        ll::meta::visitIndex<10>(
            []<size_t N> {
                static ll::Logger lo;
                lo.warn("template N = {}", N);
                return N;
            },
            k
        );
    }

    return origin(ins);
}

#pragma warning(pop)
