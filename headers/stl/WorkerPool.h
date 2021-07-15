#pragma once
#include <deque>
#include <mutex>
#include <thread>
#include <vector>
template <typename TWorker, typename TArg>
struct WorkerPool {
    std::deque<TArg> tasks;
    std::mutex mutex;
    std::condition_variable not_empty;
    void registerWorker(TWorker &&w) {
        std::thread thd([this, wk = std::forward<TWorker>(w)] {
            while (1) {
                std::unique_lock<std::mutex> locker(this->mutex);
                while (this->tasks.empty())
                    this->not_empty.wait(locker);
                TArg arg(std::move(this->tasks.front()));
                this->tasks.pop_front();
                locker.unlock();
                wk(arg);
            }
        });
        thd.detach();
    }
    void pushWork(TArg &&a) {
        std::unique_lock<std::mutex> locker(mutex);
        tasks.emplace_back(std::forward<TArg>(a));
        locker.unlock();
        not_empty.notify_one();
    }
};
