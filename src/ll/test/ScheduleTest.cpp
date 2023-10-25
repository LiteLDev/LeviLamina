#include "ll/api/Logger.h"
#include "ll/api/memory/Hook.h"
#include "ll/api/schedule/Scheduler.h"
#include "mc/server/ServerInstance.h"
#include "mc/server/ServerLevel.h"
#include "mc/world/events/ServerInstanceEventCoordinator.h"

using namespace ll::schedule;
namespace {
ll::Logger logger("Schedule");
}

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
        logger.info("hi, 100_tick life {}", ll::gamechrono::GameTimeClock::now().time_since_epoch());
    });

    s2.add<DelayTask>(1_tick, [&] {
        logger.info("try GameTime {}", ll::gamechrono::GameTimeClock::now().time_since_epoch());
        s3.add<RepeatTask>(100_tick, [&] {
            logger.info("hi, 100_tick gt   {}", ll::gamechrono::GameTimeClock::now().time_since_epoch());
        });
    });

    s2.add<RepeatTask>(100_tick, [&] {
        logger.info("hi, 100_tick game {}", ll::gamechrono::GameTimeClock::now().time_since_epoch());
    });

    return origin(ins);
}