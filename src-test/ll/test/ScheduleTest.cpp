
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
        ll::meta::visitIndex<10>(k, []<size_t N> {
            static ll::Logger lo;
            lo.warn("template N = {}", N);
            return N;
        });
    }

    return origin(ins);
}

#pragma warning(pop)
