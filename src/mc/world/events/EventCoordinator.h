#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/events/EventCoordinatorPimpl.h"

namespace EventTracking {

class IEventTrackingEventListener {
public:
    const std::string mListenerName;
};

template <class T0>
class EventTrackerListener : public T0, public IEventTrackingEventListener {
};

}; // namespace EventTracking

template <class T0>
class EventCoordinator : public ::EventCoordinatorPimpl<T0> {
public:
    std::unique_ptr<EventTracking::EventTrackerListener<T0>> mEventTrackerListener;
};
