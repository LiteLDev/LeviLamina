#pragma once

#include "ll/api/event/EmitterBase.h"
#include "ll/api/event/EventBus.h"

namespace ll::event {
template <std::derived_from<Event> T, auto F>
class Emitter : public EmitterBase {
    static inline bool reg = [] {
        EventBus::getInstance().setEventEmitter<T>(F);
        return true;
    }();

protected:
    Emitter()           = default;
    ~Emitter() override = default;
};
} // namespace ll::event
