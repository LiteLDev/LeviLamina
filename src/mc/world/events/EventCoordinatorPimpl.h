#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/world/events/EventResult.h"

template <class T0>
class EventCoordinatorPimpl : Bedrock::EnableNonOwnerReferences {
public:
    using EventFuncPtr = std::function<EventResult(T0&)>;

    std::vector<T0*>          mListeners;
    std::vector<EventFuncPtr> mEventsToProcess;
    std::vector<T0*>          mPendingRegistrations;
    bool                      mHasPendingRegistrations;
    std::thread::id           mThreadId;
    bool                      mThreadIdInitialized;
    uint                      mThreadCheckIndex;

    // // ServerInstanceEventListener
    // virtual ~EventCoordinatorPimpl();

    // // ServerInstanceEventListener
    // MCAPI bool registerListener(gsl::not_null<T0*>);

    // // ScriptingEventListener
    // MCAPI void processEvent(EventFuncPtr);

    // // ActorEventListener
    // MCAPI void unregisterListener(gsl::not_null<T0*>);
};
