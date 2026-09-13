#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/EventResult.h"


namespace EventCoordinatorDetail {
template <template <class> class TEvent, class TReturn>
TReturn gameplayEventReturn(TEvent<TReturn> const&) {
    if constexpr (std::is_void_v<TReturn>) {
        return;
    } else {
        return TReturn{};
    }
}
} // namespace EventCoordinatorDetail


template <class T0>
class EventCoordinatorPimpl : Bedrock::EnableNonOwnerReferences {
public:
    using EventFuncPtr = std::function<EventResult(T0&)>;

    std::vector<T0*>          mListeners;
    std::vector<EventFuncPtr> mEventsToProcess;
    std::vector<T0*>          mPendingRegistrations;
    bool                      mHasPendingRegistrations{};
    std::thread::id           mThreadId;
    bool                      mThreadIdInitialized{};
    uint                      mThreadCheckIndex{};

    virtual ~EventCoordinatorPimpl() = default;

    MCAPI bool registerListener(gsl::not_null<T0*> listener);

    MCAPI void processEvent(EventFuncPtr processor);

    template <class T1, class T2>
    MCAPI auto _processEvent(T1*, T2& event) {
        return EventCoordinatorDetail::gameplayEventReturn(event);
    }
};
