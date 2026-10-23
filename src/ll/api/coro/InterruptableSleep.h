#pragma once

#include <atomic>
#include <chrono>
#include <coroutine>
#include <functional>
#include <memory>
#include <mutex>
#include <utility>
#include <vector>

#include "ll/api/base/Containers.h"
#include "ll/api/coro/Executor.h"

namespace ll::coro {

class InterruptableSleep {
    struct SleepEntry;
    using EntryPtr = std::shared_ptr<SleepEntry>;
    using EntrySet = ConcurrentDenseSet<
        EntryPtr,
        std::hash<EntryPtr>,
        std::equal_to<EntryPtr>,
        std::allocator<EntryPtr>,
        0,
        std::mutex>;

    struct SleepEntry {
        ExecutorRef                                exec;
        std::shared_ptr<data::CancellableCallback> callback;
        std::atomic_bool                           resumed{false};
    };

    std::shared_ptr<EntrySet> sleeped{std::make_shared<EntrySet>()};

    static std::function<void()> makeResumer(std::weak_ptr<SleepEntry> entry, std::coroutine_handle<> handle) {
        return [entry = std::move(entry), handle] {
            auto locked = entry.lock();
            if (locked && !locked->resumed.exchange(true)) {
                handle.resume();
            }
        };
    }

    static void addEntry(std::weak_ptr<EntrySet> const& owner, EntryPtr const& entry) {
        if (auto set = owner.lock()) {
            set->insert(entry);
        }
    }

    static void removeEntry(std::weak_ptr<EntrySet> const& owner, EntryPtr const& entry) {
        if (auto set = owner.lock()) {
            set->erase(entry);
        }
    }

    static void takeEntries(EntrySet& set, std::vector<EntryPtr>& entries) {
        for (size_t i = 0; i < EntrySet::subcnt(); ++i) {
            set.with_submap_m(i, [&](auto& submap) {
                for (auto& entry : submap) {
                    entries.push_back(std::move(entry));
                }
                submap.clear();
            });
        }
    }

    static void cancelEntry(std::weak_ptr<EntrySet> const& owner, EntryPtr const& entry) {
        if (!entry) {
            return;
        }
        if (entry->callback) {
            entry->callback->cancel();
        }
        removeEntry(owner, entry);
    }

    class DurAwaiter {
        std::weak_ptr<EntrySet> owner;
        Duration                dur;
        ExecutorRef             exec;
        EntryPtr                entry;

    public:
        template <class R, class P>
        DurAwaiter(std::chrono::duration<R, P> duration, InterruptableSleep& s)
        : owner(s.sleeped),
          dur(std::chrono::duration_cast<Duration>(duration)) {}
        template <class C, class D>
        DurAwaiter(std::chrono::time_point<C, D> time, InterruptableSleep& s)
        : DurAwaiter(std::chrono::duration_cast<Duration>(time - C::now()), s) {}

        DurAwaiter(DurAwaiter const&)            = delete;
        DurAwaiter& operator=(DurAwaiter const&) = delete;

        ~DurAwaiter() { cancelEntry(owner, entry); }

        constexpr void setExecutor(ExecutorRef ex) { exec = ex; }

        constexpr bool await_ready() const noexcept { return dur <= Duration{0}; }

        void await_suspend(std::coroutine_handle<> handle) {
            auto current  = std::make_shared<SleepEntry>();
            current->exec = exec;

            entry = current;

            auto callback = exec->executeAfter(makeResumer(current, handle), dur);
            if (!current->resumed.load()) {
                current->callback = std::move(callback);
                addEntry(owner, current);
            }
        }

        constexpr void await_resume() const noexcept {}
    };

    class EtnAwaiter {
        std::weak_ptr<EntrySet> owner;
        ExecutorRef             exec;
        EntryPtr                entry;

    public:
        EtnAwaiter(InterruptableSleep& s) : owner(s.sleeped) {}

        EtnAwaiter(EtnAwaiter const&)            = delete;
        EtnAwaiter& operator=(EtnAwaiter const&) = delete;

        ~EtnAwaiter() { cancelEntry(owner, entry); }

        constexpr void setExecutor(ExecutorRef ex) { exec = ex; }

        constexpr bool await_ready() const noexcept { return false; }

        void await_suspend(std::coroutine_handle<> handle) {
            auto current      = std::make_shared<SleepEntry>();
            current->exec     = exec;
            current->callback = std::make_shared<data::CancellableCallback>(makeResumer(current, handle));

            entry = std::move(current);
            addEntry(owner, entry);
        }

        constexpr void await_resume() const noexcept {}
    };

public:
    InterruptableSleep(InterruptableSleep const&)            = delete;
    InterruptableSleep& operator=(InterruptableSleep const&) = delete;

    InterruptableSleep()  = default;
    ~InterruptableSleep() = default;

    template <class R, class P>
    DurAwaiter sleepFor(std::chrono::duration<R, P> duration) {
        return {duration, *this};
    }

    template <class C, class D>
    DurAwaiter sleepUntil(std::chrono::time_point<C, D> time) {
        return {time, *this};
    }

    EtnAwaiter sleep() { return {*this}; }

    size_t interrupt(bool inplace = false) {
        auto                  set = sleeped;
        std::vector<EntryPtr> pending;
        takeEntries(*set, pending);

        size_t interrupted = 0;
        for (auto const& entry : pending) {
            if (!entry->callback) continue;

            if (inplace) {
                interrupted += entry->callback->call();
            } else {
                interrupted += entry->callback->moveTo([exec = entry->exec](std::function<void()>&& resume) {
                    exec->execute(std::move(resume));
                    return true;
                });
            }
        }
        return interrupted;
    }
};
} // namespace ll::coro
