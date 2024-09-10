#pragma once

#include <semaphore>

namespace ll::thread {
class InterruptableSleep {
private:
    std::binary_semaphore semaphore{0};

public:
    InterruptableSleep(InterruptableSleep const&)            = delete;
    InterruptableSleep& operator=(InterruptableSleep const&) = delete;

    constexpr InterruptableSleep() = default;

    constexpr ~InterruptableSleep() = default;

    template <class R, class P>
    void sleepFor(std::chrono::duration<R, P> duration) {
        (void)semaphore.try_acquire_for(duration);
    }

    template <class C, class D>
    void sleepUntil(std::chrono::time_point<C, D> time) {
        (void)semaphore.try_acquire_until(time);
    }

    void sleep() { semaphore.acquire(); }

    void interrupt() { semaphore.release(); }
};
} // namespace ll::thread
