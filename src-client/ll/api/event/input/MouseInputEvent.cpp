#include "ll/api/event/input/MouseInputEvent.h"
#include "ll/api/event/Emitter.h"
#include "ll/api/memory/Hook.h"

#include "mc/nbt/CompoundTag.h"

#include "mc/deps/input/MouseDevice.h"

namespace ll::event::inline input {

void MouseInputEvent::serialize(CompoundTag& nbt) const {
    Cancellable::serialize(nbt);
    nbt["actionButtonId"] = actionButtonId();
    nbt["buttonData"]     = buttonData();
    nbt["x"]              = x();
    nbt["y"]              = y();
    nbt["dx"]             = dx();
    nbt["dy"]             = dy();
}

void MouseInputEvent::deserialize(CompoundTag const& nbt) {
    Cancellable::deserialize(nbt);
    actionButtonId() = (schar)nbt["actionButtonId"];
    buttonData()     = nbt["buttonData"];
    x()              = nbt["x"];
    y()              = nbt["y"];
    dx()             = nbt["dx"];
    dy()             = nbt["dy"];
}


char&  MouseInputEvent::actionButtonId() const { return mActionButtonId; }
schar& MouseInputEvent::buttonData() const { return mButtonData; }

short& MouseInputEvent::x() const { return mX; }
short& MouseInputEvent::y() const { return mY; }
short& MouseInputEvent::dx() const { return mDx; }
short& MouseInputEvent::dy() const { return mDy; }

LL_TYPE_INSTANCE_HOOK(
    MouseInputEventHook,
    HookPriority::Normal,
    MouseDevice,
    &MouseDevice::feed,
    void,
    char  actionButtonId,
    schar buttonData,
    short x,
    short y,
    short dx,
    short dy,
    bool  forceMotionlessPointer
) {
    auto ev = MouseInputEvent(actionButtonId, buttonData, x, y, dx, dy);
    EventBus::getInstance().publish(ev);
    if (ev.isCancelled()) {
        return;
    }
    origin(actionButtonId, buttonData, x, y, dx, dy, forceMotionlessPointer);
}

static std::unique_ptr<EmitterBase> emitterFactory();
class MouseInputEventEmitter : public Emitter<emitterFactory, MouseInputEvent> {
    memory::HookRegistrar<MouseInputEventHook> hook;
};

static std::unique_ptr<EmitterBase> emitterFactory() { return std::make_unique<MouseInputEventEmitter>(); }
} // namespace ll::event::inline input
