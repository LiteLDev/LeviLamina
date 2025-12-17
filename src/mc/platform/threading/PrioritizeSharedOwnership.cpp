#include "mc/platform/threading/PrioritizeSharedOwnership.h"

namespace Bedrock::Threading {

void PrioritizeSharedOwnership::lock_shared() {
    std::shared_lock lk(mMutex);
    for (;;) {
        uint64_t count = mReaderCount.load(std::memory_order_acquire);
        if ((count & mWaitForZeroBit) == 0) {
            if (mReaderCount.compare_exchange_weak(count, count + 1)) break;
        } else {
            std::this_thread::yield();
        }
    }
    lk.unlock();
}

bool PrioritizeSharedOwnership::try_lock_shared() {
    std::unique_lock lk(mMutex, std::defer_lock);
    if (!lk.try_lock()) return false;
    uint64_t count = mReaderCount.load(std::memory_order_acquire);
    if (count & mWaitForZeroBit) return false;
    mReaderCount.fetch_add(1, std::memory_order_release);
    return true;
}

void PrioritizeSharedOwnership::unlock_shared() {
    uint64_t prev = mReaderCount.fetch_sub(1, std::memory_order_acq_rel);
    if (prev == (mWaitForZeroBit | 1)) {
        {
            std::unique_lock lock(mMutex);
            mReaderCount.fetch_and(~mWaitForZeroBit, std::memory_order_release);
        }
        mZeroReaders.notify_all();
    }
}

void PrioritizeSharedOwnership::lock() {
    std::unique_lock lock(mMutex);
    for (;;) {
        uint64_t value = mReaderCount.load(std::memory_order_acquire);
        if (value != 0) {
            if (mReaderCount.compare_exchange_weak(value, value | mWaitForZeroBit)) {
                mZeroReaders.wait(lock, [this] {
                    return (mReaderCount.load(std::memory_order_acquire) & ~mWaitForZeroBit) == 0;
                });
            }
        } else {
            break;
        }
    }
}

bool PrioritizeSharedOwnership::try_lock() {
    std::unique_lock lock(mMutex, std::defer_lock);
    if (!lock.try_lock()) return false;
    if ((mReaderCount.load(std::memory_order_acquire) & ~mWaitForZeroBit) == 0) return true;
    return false;
}

void PrioritizeSharedOwnership::unlock() { mMutex.unlock(); }

} // namespace Bedrock::Threading