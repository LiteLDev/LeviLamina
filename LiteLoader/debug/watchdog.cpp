#include <debug/WatchDog.h>
#include <lbpch.h>
#include <stl\Logger.h>
#include <ctime>
#include <mutex>
#include <random>
#include <thread>
#ifdef TRACING_ENABLED
void DOG_INIT();
LIAPI unsigned int DOG_BITE(string &&e);
LIAPI void DOG_FEED(unsigned int);
static int MYID;
static std::list<std::tuple<unsigned int, string, clock_t, int>> DOGS;
static std::mutex mutex;
// std::lock_guard<std::mutex> guard(mutex
Logger LOGA(stacked{stdio_commit("[WATCHDOG] "), file_commit("WDG.log")});
void NoticeFatalWDG(string &name, int DOGID) {
    if (DOGID == MYID) {
        LOGA("watchdog", name, "blocked main thread for 60+ seconds!!!");
    } else {
        LOGA("watchdog", name, "blocked thread", DOGID, "for 60+ seconds!!!");
    }
    exit(1);
}
void NoticeWDG(string &name, int DOGID) {
    if (DOGID == MYID) {
        LOGA("watchdog", name, "blocked main thread for 5+ seconds!!!");
    } else {
        LOGA("watchdog", name, "blocked thread", DOGID, "for 5+ seconds!!!");
    }
}
void DOG_INIT() {
    auto tid = std::this_thread::get_id();
    MYID     = *((int *)&tid);
    auto thd = std::thread([]() {
        while (1) {
            {
                clock_t NOW = clock();
                std::lock_guard<std::mutex> guard(mutex);
                for (auto &i : DOGS) {
                    auto &[DOGID, DOGNAME, DOGCLK, DOGTHREAD] = i;
                    if (NOW - DOGCLK >= 5 * CLOCKS_PER_SEC) {
                        if (NOW - DOGCLK >= 60 * CLOCKS_PER_SEC) {
                            NoticeFatalWDG(DOGNAME, DOGTHREAD);
                        } else {
                            NoticeWDG(DOGNAME, DOGTHREAD);
                        }
                    }
                }
            }
            std::this_thread::sleep_for(std::chrono::seconds(3));
        }
    });
    thd.detach();
}
LIAPI unsigned int DOG_BITE(string &&e) {
    auto tid = std::this_thread::get_id();
    std::random_device rdv;
    auto id = rdv();
    std::lock_guard<std::mutex> guard(mutex);
    DOGS.emplace_back(id, std::forward<string>(e), clock(), *(int *)&tid);
    return id;
}
LIAPI void DOG_FEED(unsigned int x) {
    std::lock_guard<std::mutex> guard(mutex);
    DOGS.remove_if(
        [x](std::tuple<unsigned int, string, clock_t, int> &y) { return std::get<0>(y) == x; });
}
#endif
