#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/SingleThreadedLock.h"

namespace Core {

template <class ObserverType, class LockType>
class Subject {
public:
    LockType                                  mLock;
    std::vector<gsl::not_null<ObserverType*>> mObservers;

    LockType& getLock() { return mLock; }
    void      removeObserver(ObserverType& observer) {
        std::lock_guard<LockType> l{getLock()};
        erase_if(mObservers, [&](auto& v) { return v.get() == std::addressof(observer); });
    }

public:
    Subject() = default;
    ~Subject();
    Subject(Subject const&)            = delete;
    Subject& operator=(Subject const&) = delete;
};

} // namespace Core
