#pragma once

#include <chrono>
#include <mutex>

namespace ll::thread {
class InterruptableSleep {
private:
    bool                    interrupted{false};
    std::mutex              mutex;
    std::condition_variable cv;

public:
    InterruptableSleep(InterruptableSleep&&)                 = delete;
    InterruptableSleep(InterruptableSleep const&)            = delete;
    InterruptableSleep& operator=(InterruptableSleep&&)      = delete;
    InterruptableSleep& operator=(InterruptableSleep const&) = delete;

    InterruptableSleep() = default;

    ~InterruptableSleep() = default;

    template <class R, class P>
    void sleepFor(std::chrono::duration<R, P> duration) {
        std::unique_lock lock{mutex};
        cv.wait_for(lock, duration, [this] { return interrupted; });
        interrupted = false;
    }

    template <class C, class D>
    void sleepUntil(std::chrono::time_point<C, D> time) {
        std::unique_lock lock{mutex};
        cv.wait_until(lock, time, [this] { return interrupted; });
        interrupted = false;
    }

    void sleep() {
        std::unique_lock lock{mutex};
        cv.wait(lock, [this] { return interrupted; });
        interrupted = false;
    }

    void interrupt() {
        std::lock_guard lg(mutex);
        interrupted = true;
        cv.notify_one();
    }
};
} // namespace ll::thread
