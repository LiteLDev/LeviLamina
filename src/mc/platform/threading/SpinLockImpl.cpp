#include "mc/platform/threading/SpinLockImpl.h"

#include <functional>
#include <thread>

void SpinLockImpl::lock() {
    uint64 const threadId = std::hash<std::thread::id>{}(std::this_thread::get_id());
    uint64       expected = mNoThreadId;
    if (mOwnerThread->compare_exchange_strong(expected, threadId)) {
        mOwnerRefCount = 1;
        return;
    }

    int spinCount = 3000;
    while (expected != threadId || mOwnerRefCount == 0xFFFFFFFEu) {
        if (spinCount != 0) {
            --spinCount;
        } else {
            std::this_thread::yield();
        }
        expected = mNoThreadId;
        if (mOwnerThread->compare_exchange_strong(expected, threadId)) {
            mOwnerRefCount = 1;
            return;
        }
    }
    ++mOwnerRefCount;
}
