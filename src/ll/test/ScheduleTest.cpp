#include "ll/api/Logger.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/schedule/Scheduler.h"
#include "mc/server/ServerInstance.h"
#include "mc/server/ServerLevel.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"

using namespace ll::schedule;

#include "ll/api/Literals.h"

ll::Logger schedulelogger("Schedule");

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
        schedulelogger.info("hi, 100_tick life {}", ll::gamechrono::GameTimeClock::now().time_since_epoch());
    });

    s2.add<DelayTask>(1_tick, [&] {
        schedulelogger.info("try GameTime {}", ll::gamechrono::GameTimeClock::now().time_since_epoch());
        s3.add<RepeatTask>(5s, [&] {
            schedulelogger.info("hi, 5s       gt   {}", ll::gamechrono::GameTimeClock::now().time_since_epoch());
        });
    });

    s2.add<RepeatTask>(0.1min, [&] {
        schedulelogger.info("hi, 0.1min   game {}", ll::gamechrono::GameTimeClock::now().time_since_epoch());
    });

    return origin(ins);
}