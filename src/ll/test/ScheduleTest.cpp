#include "ll/api/Logger.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/schedule/Scheduler.h"
#include "mc/server/ServerInstance.h"
#include "mc/server/ServerLevel.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"

using namespace ll::schedule;

#include "ll/api/Literals.h"

SystemTimeScheduler s;
GameTickScheduler   s2;
GameTimeScheduler   s3;

LL_AUTO_TYPED_INSTANCE_HOOK(
    SchedulerTestHook,
    HookPriority::Normal,
    ServerInstanceEventCoordinator,
    &ServerInstanceEventCoordinator::sendServerThreadStarted,
    void,
    ::ServerInstance& ins
) {

    s.add<RepeatTask>(100_tick, [&] {
        std::cout << fmt::format("hi, 100_tick life {}", ll::gamechrono::GameTimeClock::now().time_since_epoch())
                  << std::endl;
    });

    s2.add<DelayTask>(1_tick, [&] {
        std::cout << fmt::format("try GameTime {}", ll::gamechrono::GameTimeClock::now().time_since_epoch())
                  << std::endl;
        s3.add<RepeatTask>(5s, [&] {
            std::cout << fmt::format("hi, 5s       gt   {}", ll::gamechrono::GameTimeClock::now().time_since_epoch())
                      << std::endl;
        });
    });

    s2.add<RepeatTask>(0.1min, [&] {
        std::cout << fmt::format("hi, 0.1min   game {}", ll::gamechrono::GameTimeClock::now().time_since_epoch())
                  << std::endl;
    });

    return origin(ins);
}